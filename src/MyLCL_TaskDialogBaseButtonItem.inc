
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function TaskDialogBaseButtonItem_Create(AOwner: TCollection): TTaskDialogBaseButtonItem; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TTaskDialogBaseButtonItem.Create(AOwner);
  handleExceptionEnd
end;

procedure TaskDialogBaseButtonItem_Free(AObj: TTaskDialogBaseButtonItem); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TaskDialogBaseButtonItem_GetNamePath(AObj: TTaskDialogBaseButtonItem): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TaskDialogBaseButtonItem_Assign(AObj: TTaskDialogBaseButtonItem; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TaskDialogBaseButtonItem_ClassType(AObj: TTaskDialogBaseButtonItem): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TaskDialogBaseButtonItem_ClassName(AObj: TTaskDialogBaseButtonItem): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TaskDialogBaseButtonItem_InstanceSize(AObj: TTaskDialogBaseButtonItem): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TaskDialogBaseButtonItem_InheritsFrom(AObj: TTaskDialogBaseButtonItem; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TaskDialogBaseButtonItem_Equals(AObj: TTaskDialogBaseButtonItem; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TaskDialogBaseButtonItem_GetHashCode(AObj: TTaskDialogBaseButtonItem): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TaskDialogBaseButtonItem_ToString(AObj: TTaskDialogBaseButtonItem): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function TaskDialogBaseButtonItem_GetModalResult(AObj: TTaskDialogBaseButtonItem): TModalResult; extdecl;
begin
{$ifdef UsehandleException}Result := TModalResult(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ModalResult;
  handleExceptionEnd
end;

procedure TaskDialogBaseButtonItem_SetModalResult(AObj: TTaskDialogBaseButtonItem; AValue: TModalResult); extdecl;
begin
  handleExceptionBegin
  AObj.ModalResult := AValue;
  handleExceptionEnd
end;

function TaskDialogBaseButtonItem_GetCaption(AObj: TTaskDialogBaseButtonItem): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.Caption);
  handleExceptionEnd
end;

procedure TaskDialogBaseButtonItem_SetCaption(AObj: TTaskDialogBaseButtonItem; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Caption := AValue;
  handleExceptionEnd
end;

function TaskDialogBaseButtonItem_GetDefault(AObj: TTaskDialogBaseButtonItem): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Default;
  handleExceptionEnd
end;

procedure TaskDialogBaseButtonItem_SetDefault(AObj: TTaskDialogBaseButtonItem; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Default := AValue;
  handleExceptionEnd
end;

function TaskDialogBaseButtonItem_GetCollection(AObj: TTaskDialogBaseButtonItem): TCollection; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Collection;
  handleExceptionEnd
end;

procedure TaskDialogBaseButtonItem_SetCollection(AObj: TTaskDialogBaseButtonItem; AValue: TCollection); extdecl;
begin
  handleExceptionBegin
  AObj.Collection := AValue;
  handleExceptionEnd
end;

function TaskDialogBaseButtonItem_GetIndex(AObj: TTaskDialogBaseButtonItem): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Index;
  handleExceptionEnd
end;

procedure TaskDialogBaseButtonItem_SetIndex(AObj: TTaskDialogBaseButtonItem; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Index := AValue;
  handleExceptionEnd
end;

function TaskDialogBaseButtonItem_GetDisplayName(AObj: TTaskDialogBaseButtonItem): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.DisplayName);
  handleExceptionEnd
end;

procedure TaskDialogBaseButtonItem_SetDisplayName(AObj: TTaskDialogBaseButtonItem; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DisplayName := AValue;
  handleExceptionEnd
end;

function TaskDialogBaseButtonItem_StaticClassType: TClass; extdecl;
begin
  Result := TTaskDialogBaseButtonItem;
end;

exports
  TaskDialogBaseButtonItem_Create,
  TaskDialogBaseButtonItem_Free,
  TaskDialogBaseButtonItem_GetNamePath,
  TaskDialogBaseButtonItem_Assign,
  TaskDialogBaseButtonItem_ClassType,
  TaskDialogBaseButtonItem_ClassName,
  TaskDialogBaseButtonItem_InstanceSize,
  TaskDialogBaseButtonItem_InheritsFrom,
  TaskDialogBaseButtonItem_Equals,
  TaskDialogBaseButtonItem_GetHashCode,
  TaskDialogBaseButtonItem_ToString,
  TaskDialogBaseButtonItem_GetModalResult,
  TaskDialogBaseButtonItem_SetModalResult,
  TaskDialogBaseButtonItem_GetCaption,
  TaskDialogBaseButtonItem_SetCaption,
  TaskDialogBaseButtonItem_GetDefault,
  TaskDialogBaseButtonItem_SetDefault,
  TaskDialogBaseButtonItem_GetCollection,
  TaskDialogBaseButtonItem_SetCollection,
  TaskDialogBaseButtonItem_GetIndex,
  TaskDialogBaseButtonItem_SetIndex,
  TaskDialogBaseButtonItem_GetDisplayName,
  TaskDialogBaseButtonItem_SetDisplayName,
  TaskDialogBaseButtonItem_StaticClassType;

