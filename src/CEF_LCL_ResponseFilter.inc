//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

procedure CefResponseFilterRef_Create(var Result: ICefResponseFilter); extdecl;
begin
  handleExceptionBegin
  Result := TResponseFilterRef.Create;
  handleExceptionEnd
end;

procedure CefResponseFilter_InitFilter(const AObj: ICefResponseFilter; AEventData: Pointer); extdecl;
begin
  (AObj as TResponseFilterRef).InitFilterPtr := AEventData;
end;

procedure CefResponseFilter_Filter(const AObj: ICefResponseFilter; AEventData: Pointer); extdecl;
begin
  (AObj as TResponseFilterRef).FilterPtr := AEventData;
end;

procedure CefResponseFilter_UnWrap(const data: ICefResponseFilter; var Result: ICefResponseFilter); extdecl;
begin
  handleExceptionBegin
  Result := TCefResponseFilterRef.UnWrap(data.Wrap);
  handleExceptionEnd
end;

exports
  CefResponseFilterRef_Create,
  CefResponseFilter_InitFilter,
  CefResponseFilter_Filter,
  CefResponseFilter_UnWrap;
