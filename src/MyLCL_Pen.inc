
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function Pen_Create: TPen; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TPen.Create;
  handleExceptionEnd
end;

procedure Pen_Free(AObj: TPen); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Pen_Assign(AObj: TPen; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Pen_GetNamePath(AObj: TPen): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Pen_ClassType(AObj: TPen): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Pen_ClassName(AObj: TPen): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Pen_InstanceSize(AObj: TPen): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Pen_InheritsFrom(AObj: TPen; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Pen_Equals(AObj: TPen; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Pen_GetHashCode(AObj: TPen): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Pen_ToString(AObj: TPen): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function Pen_GetHandle(AObj: TPen): HPEN; extdecl;
begin
{$ifdef UsehandleException}Result := HPEN(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

procedure Pen_SetHandle(AObj: TPen; AValue: HPEN); extdecl;
begin
  handleExceptionBegin
  AObj.Handle := AValue;
  handleExceptionEnd
end;

function Pen_GetColor(AObj: TPen): TColor; extdecl;
begin
{$ifdef UsehandleException}Result := TColor(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Color;
  handleExceptionEnd
end;

procedure Pen_SetColor(AObj: TPen; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.Color := AValue;
  handleExceptionEnd
end;

function Pen_GetMode(AObj: TPen): TPenMode; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TPenMode);{$endif}
  handleExceptionBegin
  Result :=  AObj.Mode;
  handleExceptionEnd
end;

procedure Pen_SetMode(AObj: TPen; AValue: TPenMode); extdecl;
begin
  handleExceptionBegin
  AObj.Mode := AValue;
  handleExceptionEnd
end;

function Pen_GetStyle(AObj: TPen): TPenStyle; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TPenStyle);{$endif}
  handleExceptionBegin
  Result :=  AObj.Style;
  handleExceptionEnd
end;

procedure Pen_SetStyle(AObj: TPen; AValue: TPenStyle); extdecl;
begin
  handleExceptionBegin
  AObj.Style := AValue;
  handleExceptionEnd
end;

function Pen_GetWidth(AObj: TPen): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure Pen_SetWidth(AObj: TPen; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure Pen_SetOnChange(AObj: TPen; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

function Pen_StaticClassType: TClass; extdecl;
begin
  Result := TPen;
end;

exports
  Pen_Create,
  Pen_Free,
  Pen_Assign,
  Pen_GetNamePath,
  Pen_ClassType,
  Pen_ClassName,
  Pen_InstanceSize,
  Pen_InheritsFrom,
  Pen_Equals,
  Pen_GetHashCode,
  Pen_ToString,
  Pen_GetHandle,
  Pen_SetHandle,
  Pen_GetColor,
  Pen_SetColor,
  Pen_GetMode,
  Pen_SetMode,
  Pen_GetStyle,
  Pen_SetStyle,
  Pen_GetWidth,
  Pen_SetWidth,
  Pen_SetOnChange,
  Pen_StaticClassType;
