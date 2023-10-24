
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function ListItem_Create(AOwner: TListItems): TListItem; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TListItem.Create(AOwner);
  handleExceptionEnd
end;

procedure ListItem_Free(AObj: TListItem); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
procedure ListItem_DisplayRectSubItem(AObj: TListItem; subItem: Integer; Code: TDisplayCode; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DisplayRectSubItem(subItem, Code);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ListItem_Assign(AObj: TListItem; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ListItem_Delete(AObj: TListItem); extdecl;
begin
  handleExceptionBegin
  AObj.Delete;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
procedure ListItem_DisplayRect(AObj: TListItem; Code: TDisplayCode; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DisplayRect(Code);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ListItem_EditCaption(AObj: TListItem): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.EditCaption;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure ListItem_MakeVisible(AObj: TListItem; PartialOK: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MakeVisible(PartialOK);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ListItem_GetNamePath(AObj: TListItem): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ListItem_ClassType(AObj: TListItem): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ListItem_ClassName(AObj: TListItem): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ListItem_InstanceSize(AObj: TListItem): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ListItem_InheritsFrom(AObj: TListItem; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ListItem_Equals(AObj: TListItem; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function ListItem_GetHashCode(AObj: TListItem): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function ListItem_ToString(AObj: TListItem): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function ListItem_GetDropTarget(AObj: TListItem): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.DropTarget;
  handleExceptionEnd
end;

procedure ListItem_SetDropTarget(AObj: TListItem; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DropTarget := AValue;
  handleExceptionEnd
end;

function ListItem_GetCaption(AObj: TListItem): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.Caption);
  handleExceptionEnd
end;

procedure ListItem_SetCaption(AObj: TListItem; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Caption := AValue;
  handleExceptionEnd
end;

function ListItem_GetChecked(AObj: TListItem): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Checked;
  handleExceptionEnd
end;

procedure ListItem_SetChecked(AObj: TListItem; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Checked := AValue;
  handleExceptionEnd
end;

function ListItem_GetCut(AObj: TListItem): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Cut;
  handleExceptionEnd
end;

procedure ListItem_SetCut(AObj: TListItem; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Cut := AValue;
  handleExceptionEnd
end;

function ListItem_GetData(AObj: TListItem): Pointer; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Data;
  handleExceptionEnd
end;

procedure ListItem_SetData(AObj: TListItem; AValue: Pointer); extdecl;
begin
  handleExceptionBegin
  AObj.Data := AValue;
  handleExceptionEnd
end;

function ListItem_GetFocused(AObj: TListItem): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Focused;
  handleExceptionEnd
end;

procedure ListItem_SetFocused(AObj: TListItem; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Focused := AValue;
  handleExceptionEnd
end;

function ListItem_GetImageIndex(AObj: TListItem): TImageIndex; extdecl;
begin
{$ifdef UsehandleException}Result := TImageIndex(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ImageIndex;
  handleExceptionEnd
end;

procedure ListItem_SetImageIndex(AObj: TListItem; AValue: TImageIndex); extdecl;
begin
  handleExceptionBegin
  AObj.ImageIndex := AValue;
  handleExceptionEnd
end;

function ListItem_GetIndex(AObj: TListItem): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Index;
  handleExceptionEnd
end;

function ListItem_GetLeft(AObj: TListItem): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Left;
  handleExceptionEnd
end;

procedure ListItem_SetLeft(AObj: TListItem; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Left := AValue;
  handleExceptionEnd
end;

function ListItem_GetListView(AObj: TListItem): TCustomListView; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.ListView;
  handleExceptionEnd
end;

function ListItem_GetOwner(AObj: TListItem): TListItems; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure ListItem_GetPosition(AObj: TListItem; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Position;
  handleExceptionEnd
end;

//PARAMS:2=nonPtr
procedure ListItem_SetPosition(AObj: TListItem; var AValue: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.Position := AValue;
  handleExceptionEnd
end;

function ListItem_GetSelected(AObj: TListItem): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Selected;
  handleExceptionEnd
end;

procedure ListItem_SetSelected(AObj: TListItem; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Selected := AValue;
  handleExceptionEnd
end;

function ListItem_GetStateIndex(AObj: TListItem): TImageIndex; extdecl;
begin
{$ifdef UsehandleException}Result := TImageIndex(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.StateIndex;
  handleExceptionEnd
end;

procedure ListItem_SetStateIndex(AObj: TListItem; AValue: TImageIndex); extdecl;
begin
  handleExceptionBegin
  AObj.StateIndex := AValue;
  handleExceptionEnd
end;

function ListItem_GetSubItems(AObj: TListItem): TStrings; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.SubItems;
  handleExceptionEnd
end;

procedure ListItem_SetSubItems(AObj: TListItem; AValue: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.SubItems := AValue;
  handleExceptionEnd
end;

function ListItem_GetTop(AObj: TListItem): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Top;
  handleExceptionEnd
end;

procedure ListItem_SetTop(AObj: TListItem; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Top := AValue;
  handleExceptionEnd
end;

function ListItem_GetSubItemImages(AObj: TListItem; Index: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.SubItemImages[Index];
  handleExceptionEnd
end;

procedure ListItem_SetSubItemImages(AObj: TListItem; Index: Integer; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SubItemImages[Index] := AValue;
  handleExceptionEnd
end;

function ListItem_StaticClassType: TClass; extdecl;
begin
  Result := TListItem;
end;

exports
  ListItem_Create,
  ListItem_Free,
  ListItem_DisplayRectSubItem,
  ListItem_Assign,
  ListItem_Delete,
  ListItem_DisplayRect,
  ListItem_EditCaption,
  ListItem_MakeVisible,
  ListItem_GetNamePath,
  ListItem_ClassType,
  ListItem_ClassName,
  ListItem_InstanceSize,
  ListItem_InheritsFrom,
  ListItem_Equals,
  ListItem_GetHashCode,
  ListItem_ToString,
  ListItem_GetDropTarget,
  ListItem_SetDropTarget,
  ListItem_GetCaption,
  ListItem_SetCaption,
  ListItem_GetChecked,
  ListItem_SetChecked,
  ListItem_GetCut,
  ListItem_SetCut,
  ListItem_GetData,
  ListItem_SetData,
  ListItem_GetFocused,
  ListItem_SetFocused,
  ListItem_GetImageIndex,
  ListItem_SetImageIndex,
  ListItem_GetIndex,
  ListItem_GetLeft,
  ListItem_SetLeft,
  ListItem_GetListView,
  ListItem_GetOwner,
  ListItem_GetPosition,
  ListItem_SetPosition,
  ListItem_GetSelected,
  ListItem_SetSelected,
  ListItem_GetStateIndex,
  ListItem_SetStateIndex,
  ListItem_GetSubItems,
  ListItem_SetSubItems,
  ListItem_GetTop,
  ListItem_SetTop,
  ListItem_GetSubItemImages,
  ListItem_SetSubItemImages,
  ListItem_StaticClassType;
