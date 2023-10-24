
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function PageSetupDialog_Create(AOwner: TComponent): TPageSetupDialog; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TPageSetupDialog.Create(AOwner);
  handleExceptionEnd
end;

procedure PageSetupDialog_Free(AObj: TPageSetupDialog); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
function PageSetupDialog_Execute(AObj: TPageSetupDialog): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Execute;
  handleExceptionEnd
end;

//CLASSMETHOD:
function PageSetupDialog_FindComponent(AObj: TPageSetupDialog; AName: PChar): TComponent; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PageSetupDialog_GetNamePath(AObj: TPageSetupDialog): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PageSetupDialog_HasParent(AObj: TPageSetupDialog): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure PageSetupDialog_Assign(AObj: TPageSetupDialog; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PageSetupDialog_ClassType(AObj: TPageSetupDialog): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function PageSetupDialog_ClassName(AObj: TPageSetupDialog): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PageSetupDialog_InstanceSize(AObj: TPageSetupDialog): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function PageSetupDialog_InheritsFrom(AObj: TPageSetupDialog; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PageSetupDialog_Equals(AObj: TPageSetupDialog; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function PageSetupDialog_GetHashCode(AObj: TPageSetupDialog): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function PageSetupDialog_ToString(AObj: TPageSetupDialog): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function PageSetupDialog_GetMarginLeft(AObj: TPageSetupDialog): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.MarginLeft;
  handleExceptionEnd
end;

procedure PageSetupDialog_SetMarginLeft(AObj: TPageSetupDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MarginLeft := AValue;
  handleExceptionEnd
end;

function PageSetupDialog_GetMarginTop(AObj: TPageSetupDialog): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.MarginTop;
  handleExceptionEnd
end;

procedure PageSetupDialog_SetMarginTop(AObj: TPageSetupDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MarginTop := AValue;
  handleExceptionEnd
end;

function PageSetupDialog_GetMarginRight(AObj: TPageSetupDialog): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.MarginRight;
  handleExceptionEnd
end;

procedure PageSetupDialog_SetMarginRight(AObj: TPageSetupDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MarginRight := AValue;
  handleExceptionEnd
end;

function PageSetupDialog_GetMarginBottom(AObj: TPageSetupDialog): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.MarginBottom;
  handleExceptionEnd
end;

procedure PageSetupDialog_SetMarginBottom(AObj: TPageSetupDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.MarginBottom := AValue;
  handleExceptionEnd
end;

function PageSetupDialog_GetOptions(AObj: TPageSetupDialog): TPageSetupDialogOptions; extdecl;
begin
{$ifdef UsehandleException}Result := [];{$endif}
  handleExceptionBegin
  Result :=  AObj.Options;
  handleExceptionEnd
end;

procedure PageSetupDialog_SetOptions(AObj: TPageSetupDialog; AValue: TPageSetupDialogOptions); extdecl;
begin
  handleExceptionBegin
  AObj.Options := AValue;
  handleExceptionEnd
end;

function PageSetupDialog_GetPageWidth(AObj: TPageSetupDialog): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.PageWidth;
  handleExceptionEnd
end;

procedure PageSetupDialog_SetPageWidth(AObj: TPageSetupDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.PageWidth := AValue;
  handleExceptionEnd
end;

function PageSetupDialog_GetPageHeight(AObj: TPageSetupDialog): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.PageHeight;
  handleExceptionEnd
end;

procedure PageSetupDialog_SetPageHeight(AObj: TPageSetupDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.PageHeight := AValue;
  handleExceptionEnd
end;

function PageSetupDialog_GetUnits(AObj: TPageSetupDialog): TPageMeasureUnits; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TPageMeasureUnits);{$endif}
  handleExceptionBegin
  Result :=  AObj.Units;
  handleExceptionEnd
end;

function PageSetupDialog_GetHandle(AObj: TPageSetupDialog): HWND; extdecl;
begin
{$ifdef UsehandleException}Result := HWND(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure PageSetupDialog_SetOnClose(AObj: TPageSetupDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClose}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure PageSetupDialog_SetOnShow(AObj: TPageSetupDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnShow}
  EventMethodCode
end;

function PageSetupDialog_GetComponentCount(AObj: TPageSetupDialog): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function PageSetupDialog_GetComponentIndex(AObj: TPageSetupDialog): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure PageSetupDialog_SetComponentIndex(AObj: TPageSetupDialog; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function PageSetupDialog_GetOwner(AObj: TPageSetupDialog): TComponent; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function PageSetupDialog_GetName(AObj: TPageSetupDialog): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure PageSetupDialog_SetName(AObj: TPageSetupDialog; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function PageSetupDialog_GetTag(AObj: TPageSetupDialog): NativeInt; extdecl;
begin
{$ifdef UsehandleException}Result := NativeInt(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure PageSetupDialog_SetTag(AObj: TPageSetupDialog; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function PageSetupDialog_GetComponents(AObj: TPageSetupDialog; AIndex: Integer): TComponent; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function PageSetupDialog_StaticClassType: TClass; extdecl;
begin
  Result := TPageSetupDialog;
end;

exports
  PageSetupDialog_Create,
  PageSetupDialog_Free,
  PageSetupDialog_Execute,
  PageSetupDialog_FindComponent,
  PageSetupDialog_GetNamePath,
  PageSetupDialog_HasParent,
  PageSetupDialog_Assign,
  PageSetupDialog_ClassType,
  PageSetupDialog_ClassName,
  PageSetupDialog_InstanceSize,
  PageSetupDialog_InheritsFrom,
  PageSetupDialog_Equals,
  PageSetupDialog_GetHashCode,
  PageSetupDialog_ToString,
  PageSetupDialog_GetMarginLeft,
  PageSetupDialog_SetMarginLeft,
  PageSetupDialog_GetMarginTop,
  PageSetupDialog_SetMarginTop,
  PageSetupDialog_GetMarginRight,
  PageSetupDialog_SetMarginRight,
  PageSetupDialog_GetMarginBottom,
  PageSetupDialog_SetMarginBottom,
  PageSetupDialog_GetOptions,
  PageSetupDialog_SetOptions,
  PageSetupDialog_GetPageWidth,
  PageSetupDialog_SetPageWidth,
  PageSetupDialog_GetPageHeight,
  PageSetupDialog_SetPageHeight,
  PageSetupDialog_GetUnits,
  PageSetupDialog_GetHandle,
  PageSetupDialog_SetOnClose,
  PageSetupDialog_SetOnShow,
  PageSetupDialog_GetComponentCount,
  PageSetupDialog_GetComponentIndex,
  PageSetupDialog_SetComponentIndex,
  PageSetupDialog_GetOwner,
  PageSetupDialog_GetName,
  PageSetupDialog_SetName,
  PageSetupDialog_GetTag,
  PageSetupDialog_SetTag,
  PageSetupDialog_GetComponents,
  PageSetupDialog_StaticClassType;
