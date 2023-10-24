
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function Picture_Create: TPicture; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TPicture.Create;
  handleExceptionEnd
end;

procedure Picture_Free(AObj: TPicture); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Picture_LoadFromFile(AObj: TPicture; Filename: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromFile(Filename);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Picture_SaveToFile(AObj: TPicture; Filename: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToFile(Filename);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Picture_LoadFromStream(AObj: TPicture; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Picture_SaveToStream(AObj: TPicture; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Picture_Assign(AObj: TPicture; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Picture_GetNamePath(AObj: TPicture): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Picture_ClassType(AObj: TPicture): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Picture_ClassName(AObj: TPicture): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Picture_InstanceSize(AObj: TPicture): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Picture_InheritsFrom(AObj: TPicture; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Picture_Equals(AObj: TPicture; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Picture_GetHashCode(AObj: TPicture): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Picture_ToString(AObj: TPicture): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function Picture_GetBitmap(AObj: TPicture): TBitmap; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Bitmap;
  handleExceptionEnd
end;

procedure Picture_SetBitmap(AObj: TPicture; AValue: TBitmap); extdecl;
begin
  handleExceptionBegin
  AObj.Bitmap := AValue;
  handleExceptionEnd
end;

function Picture_GetGraphic(AObj: TPicture): TGraphic; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Graphic;
  handleExceptionEnd
end;

procedure Picture_SetGraphic(AObj: TPicture; AValue: TGraphic); extdecl;
begin
  handleExceptionBegin
  AObj.Graphic := AValue;
  handleExceptionEnd
end;

function Picture_GetHeight(AObj: TPicture): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

function Picture_GetIcon(AObj: TPicture): TIcon; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Icon;
  handleExceptionEnd
end;

procedure Picture_SetIcon(AObj: TPicture; AValue: TIcon); extdecl;
begin
  handleExceptionBegin
  AObj.Icon := AValue;
  handleExceptionEnd
end;

function Picture_GetWidth(AObj: TPicture): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure Picture_SetOnChange(AObj: TPicture; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

function Picture_StaticClassType: TClass; extdecl;
begin
  Result := TPicture;
end;

exports
  Picture_Create,
  Picture_Free,
  Picture_LoadFromFile,
  Picture_SaveToFile,
  Picture_LoadFromStream,
  Picture_SaveToStream,
  Picture_Assign,
  Picture_GetNamePath,
  Picture_ClassType,
  Picture_ClassName,
  Picture_InstanceSize,
  Picture_InheritsFrom,
  Picture_Equals,
  Picture_GetHashCode,
  Picture_ToString,
  Picture_GetBitmap,
  Picture_SetBitmap,
  Picture_GetGraphic,
  Picture_SetGraphic,
  Picture_GetHeight,
  Picture_GetIcon,
  Picture_SetIcon,
  Picture_GetWidth,
  Picture_SetOnChange,
  Picture_StaticClassType;
