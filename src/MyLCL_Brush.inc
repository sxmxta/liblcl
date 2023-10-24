
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function Brush_Create: TBrush; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TBrush.Create;
  handleExceptionEnd
end;

procedure Brush_Free(AObj: TBrush); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Brush_Assign(AObj: TBrush; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Brush_GetNamePath(AObj: TBrush): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Brush_ClassType(AObj: TBrush): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Brush_ClassName(AObj: TBrush): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Brush_InstanceSize(AObj: TBrush): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Brush_InheritsFrom(AObj: TBrush; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Brush_Equals(AObj: TBrush; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Brush_GetHashCode(AObj: TBrush): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Brush_ToString(AObj: TBrush): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function Brush_GetBitmap(AObj: TBrush): TBitmap; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Bitmap as TBitmap;
  handleExceptionEnd
end;

procedure Brush_SetBitmap(AObj: TBrush; AValue: TBitmap); extdecl;
begin
  handleExceptionBegin
  AObj.Bitmap := AValue;
  handleExceptionEnd
end;

function Brush_GetHandle(AObj: TBrush): HBRUSH; extdecl;
begin
{$ifdef UsehandleException}Result := HBRUSH(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

procedure Brush_SetHandle(AObj: TBrush; AValue: HBRUSH); extdecl;
begin
  handleExceptionBegin
  AObj.Handle := AValue;
  handleExceptionEnd
end;

function Brush_GetColor(AObj: TBrush): TColor; extdecl;
begin
{$ifdef UsehandleException}Result := TColor(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Color;
  handleExceptionEnd
end;

procedure Brush_SetColor(AObj: TBrush; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.Color := AValue;
  handleExceptionEnd
end;

function Brush_GetStyle(AObj: TBrush): TBrushStyle; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TBrushStyle);{$endif}
  handleExceptionBegin
  Result :=  AObj.Style;
  handleExceptionEnd
end;

procedure Brush_SetStyle(AObj: TBrush; AValue: TBrushStyle); extdecl;
begin
  handleExceptionBegin
  AObj.Style := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure Brush_SetOnChange(AObj: TBrush; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

function Brush_StaticClassType: TClass; extdecl;
begin
  Result := TBrush;
end;

exports
  Brush_Create,
  Brush_Free,
  Brush_Assign,
  Brush_GetNamePath,
  Brush_ClassType,
  Brush_ClassName,
  Brush_InstanceSize,
  Brush_InheritsFrom,
  Brush_Equals,
  Brush_GetHashCode,
  Brush_ToString,
  Brush_GetBitmap,
  Brush_SetBitmap,
  Brush_GetHandle,
  Brush_SetHandle,
  Brush_GetColor,
  Brush_SetColor,
  Brush_GetStyle,
  Brush_SetStyle,
  Brush_SetOnChange,
  Brush_StaticClassType;
