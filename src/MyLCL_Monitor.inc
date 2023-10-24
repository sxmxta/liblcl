
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function Monitor_Create: TMonitor; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TMonitor.Create;
  handleExceptionEnd
end;

procedure Monitor_Free(AObj: TMonitor); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Monitor_ClassType(AObj: TMonitor): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Monitor_ClassName(AObj: TMonitor): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Monitor_InstanceSize(AObj: TMonitor): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Monitor_InheritsFrom(AObj: TMonitor; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Monitor_Equals(AObj: TMonitor; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Monitor_GetHashCode(AObj: TMonitor): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Monitor_ToString(AObj: TMonitor): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function Monitor_GetHandle(AObj: TMonitor): HMONITOR; extdecl;
begin
{$ifdef UsehandleException}Result := HMONITOR(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

function Monitor_GetMonitorNum(AObj: TMonitor): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.MonitorNum;
  handleExceptionEnd
end;

function Monitor_GetLeft(AObj: TMonitor): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Left;
  handleExceptionEnd
end;

function Monitor_GetHeight(AObj: TMonitor): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

function Monitor_GetTop(AObj: TMonitor): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Top;
  handleExceptionEnd
end;

function Monitor_GetWidth(AObj: TMonitor): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure Monitor_GetBoundsRect(AObj: TMonitor; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BoundsRect;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure Monitor_GetWorkareaRect(AObj: TMonitor; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.WorkareaRect;
  handleExceptionEnd
end;

function Monitor_GetPrimary(AObj: TMonitor): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Primary;
  handleExceptionEnd
end;

function Monitor_GetPixelsPerInch(AObj: TMonitor): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.PixelsPerInch;
  handleExceptionEnd
end;

function Monitor_StaticClassType: TClass; extdecl;
begin
  Result := TMonitor;
end;

exports
  Monitor_Create,
  Monitor_Free,
  Monitor_ClassType,
  Monitor_ClassName,
  Monitor_InstanceSize,
  Monitor_InheritsFrom,
  Monitor_Equals,
  Monitor_GetHashCode,
  Monitor_ToString,
  Monitor_GetHandle,
  Monitor_GetMonitorNum,
  Monitor_GetLeft,
  Monitor_GetHeight,
  Monitor_GetTop,
  Monitor_GetWidth,
  Monitor_GetBoundsRect,
  Monitor_GetWorkareaRect,
  Monitor_GetPrimary,
  Monitor_GetPixelsPerInch,
  Monitor_StaticClassType;
