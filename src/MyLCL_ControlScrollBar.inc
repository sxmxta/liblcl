
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

//CLASSMETHOD:
procedure ControlScrollBar_Assign(AObj: TControlScrollBar; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ControlScrollBar_IsScrollBarVisible(AObj: TControlScrollBar): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.IsScrollBarVisible;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ControlScrollBar_GetNamePath(AObj: TControlScrollBar): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ControlScrollBar_ClassType(AObj: TControlScrollBar): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ControlScrollBar_ClassName(AObj: TControlScrollBar): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ControlScrollBar_InstanceSize(AObj: TControlScrollBar): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ControlScrollBar_InheritsFrom(AObj: TControlScrollBar; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ControlScrollBar_Equals(AObj: TControlScrollBar; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ControlScrollBar_GetHashCode(AObj: TControlScrollBar): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ControlScrollBar_ToString(AObj: TControlScrollBar): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function ControlScrollBar_GetKind(AObj: TControlScrollBar): TScrollBarKind; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TScrollBarKind);{$endif}
  handleExceptionBegin
  Result :=  AObj.Kind;
  handleExceptionEnd
end;

function ControlScrollBar_GetScrollPos(AObj: TControlScrollBar): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScrollPos;
  handleExceptionEnd
end;

function ControlScrollBar_GetIncrement(AObj: TControlScrollBar): TScrollBarInc; extdecl;
begin
{$ifdef UsehandleException}Result := 1;{$endif}
  handleExceptionBegin
  Result :=  AObj.Increment;
  handleExceptionEnd
end;

procedure ControlScrollBar_SetIncrement(AObj: TControlScrollBar; AValue: TScrollBarInc); extdecl;
begin
  handleExceptionBegin
  AObj.Increment := AValue;
  handleExceptionEnd
end;

function ControlScrollBar_GetPosition(AObj: TControlScrollBar): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Position;
  handleExceptionEnd
end;

procedure ControlScrollBar_SetPosition(AObj: TControlScrollBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Position := AValue;
  handleExceptionEnd
end;

function ControlScrollBar_GetRange(AObj: TControlScrollBar): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Range;
  handleExceptionEnd
end;

procedure ControlScrollBar_SetRange(AObj: TControlScrollBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Range := AValue;
  handleExceptionEnd
end;

function ControlScrollBar_GetSmooth(AObj: TControlScrollBar): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Smooth;
  handleExceptionEnd
end;

procedure ControlScrollBar_SetSmooth(AObj: TControlScrollBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Smooth := AValue;
  handleExceptionEnd
end;

function ControlScrollBar_GetTracking(AObj: TControlScrollBar): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Tracking;
  handleExceptionEnd
end;

procedure ControlScrollBar_SetTracking(AObj: TControlScrollBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Tracking := AValue;
  handleExceptionEnd
end;

function ControlScrollBar_GetVisible(AObj: TControlScrollBar): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Visible;
  handleExceptionEnd
end;

procedure ControlScrollBar_SetVisible(AObj: TControlScrollBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function ControlScrollBar_StaticClassType: TClass; extdecl;
begin
  Result := TControlScrollBar;
end;

exports
  ControlScrollBar_Assign,
  ControlScrollBar_IsScrollBarVisible,
  ControlScrollBar_GetNamePath,
  ControlScrollBar_ClassType,
  ControlScrollBar_ClassName,
  ControlScrollBar_InstanceSize,
  ControlScrollBar_InheritsFrom,
  ControlScrollBar_Equals,
  ControlScrollBar_GetHashCode,
  ControlScrollBar_ToString,
  ControlScrollBar_GetKind,
  ControlScrollBar_GetScrollPos,
  ControlScrollBar_GetIncrement,
  ControlScrollBar_SetIncrement,
  ControlScrollBar_GetPosition,
  ControlScrollBar_SetPosition,
  ControlScrollBar_GetRange,
  ControlScrollBar_SetRange,
  ControlScrollBar_GetSmooth,
  ControlScrollBar_SetSmooth,
  ControlScrollBar_GetTracking,
  ControlScrollBar_SetTracking,
  ControlScrollBar_GetVisible,
  ControlScrollBar_SetVisible,
  ControlScrollBar_StaticClassType;
