
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function Timer_Create(AOwner: TComponent): TTimer; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TTimer.Create(AOwner);
  handleExceptionEnd
end;

procedure Timer_Free(AObj: TTimer); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Timer_FindComponent(AObj: TTimer; AName: PChar): TComponent; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Timer_GetNamePath(AObj: TTimer): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Timer_HasParent(AObj: TTimer): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Timer_Assign(AObj: TTimer; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Timer_ClassType(AObj: TTimer): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Timer_ClassName(AObj: TTimer): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Timer_InstanceSize(AObj: TTimer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Timer_InheritsFrom(AObj: TTimer; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Timer_Equals(AObj: TTimer; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Timer_GetHashCode(AObj: TTimer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Timer_ToString(AObj: TTimer): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function Timer_GetEnabled(AObj: TTimer): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Enabled;
  handleExceptionEnd
end;

procedure Timer_SetEnabled(AObj: TTimer; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function Timer_GetInterval(AObj: TTimer): Cardinal; extdecl;
begin
{$ifdef UsehandleException}Result := Cardinal(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Interval;
  handleExceptionEnd
end;

procedure Timer_SetInterval(AObj: TTimer; AValue: Cardinal); extdecl;
begin
  handleExceptionBegin
  AObj.Interval := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure Timer_SetOnTimer(AObj: TTimer; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnTimer}
  EventMethodCode
end;

function Timer_GetComponentCount(AObj: TTimer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function Timer_GetComponentIndex(AObj: TTimer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure Timer_SetComponentIndex(AObj: TTimer; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function Timer_GetOwner(AObj: TTimer): TComponent; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function Timer_GetName(AObj: TTimer): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure Timer_SetName(AObj: TTimer; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function Timer_GetTag(AObj: TTimer): NativeInt; extdecl;
begin
{$ifdef UsehandleException}Result := NativeInt(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure Timer_SetTag(AObj: TTimer; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function Timer_GetComponents(AObj: TTimer; AIndex: Integer): TComponent; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function Timer_StaticClassType: TClass; extdecl;
begin
  Result := TTimer;
end;

exports
  Timer_Create,
  Timer_Free,
  Timer_FindComponent,
  Timer_GetNamePath,
  Timer_HasParent,
  Timer_Assign,
  Timer_ClassType,
  Timer_ClassName,
  Timer_InstanceSize,
  Timer_InheritsFrom,
  Timer_Equals,
  Timer_GetHashCode,
  Timer_ToString,
  Timer_GetEnabled,
  Timer_SetEnabled,
  Timer_GetInterval,
  Timer_SetInterval,
  Timer_SetOnTimer,
  Timer_GetComponentCount,
  Timer_GetComponentIndex,
  Timer_SetComponentIndex,
  Timer_GetOwner,
  Timer_GetName,
  Timer_SetName,
  Timer_GetTag,
  Timer_SetTag,
  Timer_GetComponents,
  Timer_StaticClassType;
