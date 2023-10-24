
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function TreeNode_Create(AOwner: TTreeNodes): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TTreeNode.Create(AOwner);
  handleExceptionEnd
end;

procedure TreeNode_Free(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_Bottom(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Bottom;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_BottomExpanded(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.BottomExpanded;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_DefaultTreeViewSort(AObj: TTreeNode; Node1: TTreeNode; Node2: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.DefaultTreeViewSort(Node1, Node2);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_DisplayExpandSignLeft(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.DisplayExpandSignLeft;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
procedure TreeNode_DisplayExpandSignRect(AObj: TTreeNode; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DisplayExpandSignRect;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_DisplayExpandSignRight(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.DisplayExpandSignRight;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_DisplayIconLeft(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.DisplayIconLeft;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
procedure TreeNode_DisplayRect(AObj: TTreeNode; TextOnly: LongBool; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DisplayRect(TextOnly);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_DisplayStateIconLeft(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.DisplayStateIconLeft;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_DisplayTextLeft(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.DisplayTextLeft;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_DisplayTextRight(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.DisplayTextRight;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_EditText(AObj: TTreeNode): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.EditText;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_FindNode(AObj: TTreeNode; NodeText: PChar): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.FindNode(NodeText);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetFirstChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetFirstChild;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetFirstVisibleChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetFirstVisibleChild;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetLastChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetLastChild;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetLastSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetLastSibling;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetLastSubChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetLastSubChild;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetLastVisibleChild(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetLastVisibleChild;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetNext(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetNext;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetNextChild(AObj: TTreeNode; AValue: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetNextChild(AValue);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetNextExpanded(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetNextExpanded;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetNextMultiSelected(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetNextMultiSelected;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetNextSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetNextSibling;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetNextSkipChildren(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetNextSkipChildren;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetNextVisible(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetNextVisible;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetNextVisibleSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetNextVisibleSibling;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetParentNodeOfAbsoluteLevel(AObj: TTreeNode; TheAbsoluteLevel: Integer): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetParentNodeOfAbsoluteLevel(TheAbsoluteLevel);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetPrev(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetPrev;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetPrevChild(AObj: TTreeNode; AValue: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetPrevChild(AValue);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetPrevExpanded(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetPrevExpanded;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetPrevMultiSelected(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetPrevMultiSelected;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetPrevSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetPrevSibling;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetPrevVisible(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetPrevVisible;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetPrevVisibleSibling(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.GetPrevVisibleSibling;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetTextPath(AObj: TTreeNode): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetTextPath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_HasAsParent(AObj: TTreeNode; AValue: TTreeNode): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.HasAsParent(AValue);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_IndexOf(AObj: TTreeNode; AValue: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.IndexOf(AValue);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_IndexOfText(AObj: TTreeNode; NodeText: PChar): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.IndexOfText(NodeText);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_Assign(AObj: TTreeNode; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_Collapse(AObj: TTreeNode; Recurse: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Collapse(Recurse);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_ConsistencyCheck(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.ConsistencyCheck;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_Delete(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.Delete;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_DeleteChildren(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.DeleteChildren;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_EndEdit(AObj: TTreeNode; Cancel: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.EndEdit(Cancel);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_Expand(AObj: TTreeNode; Recurse: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Expand(Recurse);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_ExpandParents(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.ExpandParents;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_FreeAllNodeData(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.FreeAllNodeData;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_MakeVisible(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.MakeVisible;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_MoveTo(AObj: TTreeNode; Destination: TTreeNode; Mode: TNodeAttachMode); extdecl;
begin
  handleExceptionBegin
  AObj.MoveTo(Destination, Mode);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_MultiSelectGroup(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.MultiSelectGroup;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_Update(AObj: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.Update;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure TreeNode_WriteDebugReport(AObj: TTreeNode; Prefix: PChar; Recurse: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.WriteDebugReport(Prefix, Recurse);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_CustomSort(AObj: TTreeNode; SortProc: PFNTVCOMPARE; Data: NativeInt; ARecurse: LongBool): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.CustomSort(SortProc, Data, ARecurse);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetNamePath(AObj: TTreeNode): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_ClassType(AObj: TTreeNode): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_ClassName(AObj: TTreeNode): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_InstanceSize(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_InheritsFrom(AObj: TTreeNode; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_Equals(AObj: TTreeNode; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_GetHashCode(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function TreeNode_ToString(AObj: TTreeNode): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function TreeNode_GetAbsoluteIndex(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.AbsoluteIndex;
  handleExceptionEnd
end;

function TreeNode_GetCount(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Count;
  handleExceptionEnd
end;

function TreeNode_GetCut(AObj: TTreeNode): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Cut;
  handleExceptionEnd
end;

procedure TreeNode_SetCut(AObj: TTreeNode; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Cut := AValue;
  handleExceptionEnd
end;

function TreeNode_GetData(AObj: TTreeNode): Pointer; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Data;
  handleExceptionEnd
end;

procedure TreeNode_SetData(AObj: TTreeNode; AValue: Pointer); extdecl;
begin
  handleExceptionBegin
  AObj.Data := AValue;
  handleExceptionEnd
end;

function TreeNode_GetDeleting(AObj: TTreeNode): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Deleting;
  handleExceptionEnd
end;

function TreeNode_GetDropTarget(AObj: TTreeNode): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.DropTarget;
  handleExceptionEnd
end;

procedure TreeNode_SetDropTarget(AObj: TTreeNode; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DropTarget := AValue;
  handleExceptionEnd
end;

function TreeNode_GetExpanded(AObj: TTreeNode): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Expanded;
  handleExceptionEnd
end;

procedure TreeNode_SetExpanded(AObj: TTreeNode; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Expanded := AValue;
  handleExceptionEnd
end;

function TreeNode_GetFocused(AObj: TTreeNode): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Focused;
  handleExceptionEnd
end;

procedure TreeNode_SetFocused(AObj: TTreeNode; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Focused := AValue;
  handleExceptionEnd
end;

function TreeNode_GetHandle(AObj: TTreeNode): NativeUInt; extdecl;
begin
{$ifdef UsehandleException}Result := NativeUInt(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

function TreeNode_GetHasChildren(AObj: TTreeNode): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.HasChildren;
  handleExceptionEnd
end;

procedure TreeNode_SetHasChildren(AObj: TTreeNode; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.HasChildren := AValue;
  handleExceptionEnd
end;

function TreeNode_GetHeight(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure TreeNode_SetHeight(AObj: TTreeNode; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function TreeNode_GetImageIndex(AObj: TTreeNode): TImageIndex; extdecl;
begin
{$ifdef UsehandleException}Result := TImageIndex(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ImageIndex;
  handleExceptionEnd
end;

procedure TreeNode_SetImageIndex(AObj: TTreeNode; AValue: TImageIndex); extdecl;
begin
  handleExceptionBegin
  AObj.ImageIndex := AValue;
  handleExceptionEnd
end;

function TreeNode_GetIndex(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Index;
  handleExceptionEnd
end;

procedure TreeNode_SetIndex(AObj: TTreeNode; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Index := AValue;
  handleExceptionEnd
end;

function TreeNode_GetIsFullHeightVisible(AObj: TTreeNode): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.IsFullHeightVisible;
  handleExceptionEnd
end;

function TreeNode_GetIsVisible(AObj: TTreeNode): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.IsVisible;
  handleExceptionEnd
end;

function TreeNode_GetLevel(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Level;
  handleExceptionEnd
end;

function TreeNode_GetMultiSelected(AObj: TTreeNode): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.MultiSelected;
  handleExceptionEnd
end;

procedure TreeNode_SetMultiSelected(AObj: TTreeNode; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MultiSelected := AValue;
  handleExceptionEnd
end;

function TreeNode_GetOverlayIndex(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.OverlayIndex;
  handleExceptionEnd
end;

procedure TreeNode_SetOverlayIndex(AObj: TTreeNode; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.OverlayIndex := AValue;
  handleExceptionEnd
end;

function TreeNode_GetOwner(AObj: TTreeNode): TTreeNodes; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function TreeNode_GetParent(AObj: TTreeNode): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Parent;
  handleExceptionEnd
end;

function TreeNode_GetSelected(AObj: TTreeNode): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Selected;
  handleExceptionEnd
end;

procedure TreeNode_SetSelected(AObj: TTreeNode; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Selected := AValue;
  handleExceptionEnd
end;

function TreeNode_GetSelectedIndex(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.SelectedIndex;
  handleExceptionEnd
end;

procedure TreeNode_SetSelectedIndex(AObj: TTreeNode; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SelectedIndex := AValue;
  handleExceptionEnd
end;

function TreeNode_GetStateIndex(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.StateIndex;
  handleExceptionEnd
end;

procedure TreeNode_SetStateIndex(AObj: TTreeNode; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.StateIndex := AValue;
  handleExceptionEnd
end;

function TreeNode_GetSubTreeCount(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.SubTreeCount;
  handleExceptionEnd
end;

function TreeNode_GetText(AObj: TTreeNode): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.Text);
  handleExceptionEnd
end;

procedure TreeNode_SetText(AObj: TTreeNode; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Text := AValue;
  handleExceptionEnd
end;

function TreeNode_GetTop(AObj: TTreeNode): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Top;
  handleExceptionEnd
end;

function TreeNode_GetTreeNodes(AObj: TTreeNode): TTreeNodes; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.TreeNodes;
  handleExceptionEnd
end;

function TreeNode_GetTreeView(AObj: TTreeNode): TCustomTreeView; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.TreeView;
  handleExceptionEnd
end;

function TreeNode_GetVisible(AObj: TTreeNode): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Visible;
  handleExceptionEnd
end;

procedure TreeNode_SetVisible(AObj: TTreeNode; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function TreeNode_GetItems(AObj: TTreeNode; ItemIndex: Integer): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Items[ItemIndex];
  handleExceptionEnd
end;

procedure TreeNode_SetItems(AObj: TTreeNode; ItemIndex: Integer; AValue: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.Items[ItemIndex] := AValue;
  handleExceptionEnd
end;

function TreeNode_GetItem(AObj: TTreeNode; Index: Integer): TTreeNode; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Items[Index];
  handleExceptionEnd
end;

procedure TreeNode_SetItem(AObj: TTreeNode; Index: Integer; AValue: TTreeNode); extdecl;
begin
  handleExceptionBegin
  AObj.Items[Index] := AValue;
  handleExceptionEnd
end;

function TreeNode_StaticClassType: TClass; extdecl;
begin
  Result := TTreeNode;
end;

exports
  TreeNode_Create,
  TreeNode_Free,
  TreeNode_Bottom,
  TreeNode_BottomExpanded,
  TreeNode_DefaultTreeViewSort,
  TreeNode_DisplayExpandSignLeft,
  TreeNode_DisplayExpandSignRect,
  TreeNode_DisplayExpandSignRight,
  TreeNode_DisplayIconLeft,
  TreeNode_DisplayRect,
  TreeNode_DisplayStateIconLeft,
  TreeNode_DisplayTextLeft,
  TreeNode_DisplayTextRight,
  TreeNode_EditText,
  TreeNode_FindNode,
  TreeNode_GetFirstChild,
  TreeNode_GetFirstVisibleChild,
  TreeNode_GetLastChild,
  TreeNode_GetLastSibling,
  TreeNode_GetLastSubChild,
  TreeNode_GetLastVisibleChild,
  TreeNode_GetNext,
  TreeNode_GetNextChild,
  TreeNode_GetNextExpanded,
  TreeNode_GetNextMultiSelected,
  TreeNode_GetNextSibling,
  TreeNode_GetNextSkipChildren,
  TreeNode_GetNextVisible,
  TreeNode_GetNextVisibleSibling,
  TreeNode_GetParentNodeOfAbsoluteLevel,
  TreeNode_GetPrev,
  TreeNode_GetPrevChild,
  TreeNode_GetPrevExpanded,
  TreeNode_GetPrevMultiSelected,
  TreeNode_GetPrevSibling,
  TreeNode_GetPrevVisible,
  TreeNode_GetPrevVisibleSibling,
  TreeNode_GetTextPath,
  TreeNode_HasAsParent,
  TreeNode_IndexOf,
  TreeNode_IndexOfText,
  TreeNode_Assign,
  TreeNode_Collapse,
  TreeNode_ConsistencyCheck,
  TreeNode_Delete,
  TreeNode_DeleteChildren,
  TreeNode_EndEdit,
  TreeNode_Expand,
  TreeNode_ExpandParents,
  TreeNode_FreeAllNodeData,
  TreeNode_MakeVisible,
  TreeNode_MoveTo,
  TreeNode_MultiSelectGroup,
  TreeNode_Update,
  TreeNode_WriteDebugReport,
  TreeNode_CustomSort,
  TreeNode_GetNamePath,
  TreeNode_ClassType,
  TreeNode_ClassName,
  TreeNode_InstanceSize,
  TreeNode_InheritsFrom,
  TreeNode_Equals,
  TreeNode_GetHashCode,
  TreeNode_ToString,
  TreeNode_GetAbsoluteIndex,
  TreeNode_GetCount,
  TreeNode_GetCut,
  TreeNode_SetCut,
  TreeNode_GetData,
  TreeNode_SetData,
  TreeNode_GetDeleting,
  TreeNode_GetDropTarget,
  TreeNode_SetDropTarget,
  TreeNode_GetExpanded,
  TreeNode_SetExpanded,
  TreeNode_GetFocused,
  TreeNode_SetFocused,
  TreeNode_GetHandle,
  TreeNode_GetHasChildren,
  TreeNode_SetHasChildren,
  TreeNode_GetHeight,
  TreeNode_SetHeight,
  TreeNode_GetImageIndex,
  TreeNode_SetImageIndex,
  TreeNode_GetIndex,
  TreeNode_SetIndex,
  TreeNode_GetIsFullHeightVisible,
  TreeNode_GetIsVisible,
  TreeNode_GetLevel,
  TreeNode_GetMultiSelected,
  TreeNode_SetMultiSelected,
  TreeNode_GetOverlayIndex,
  TreeNode_SetOverlayIndex,
  TreeNode_GetOwner,
  TreeNode_GetParent,
  TreeNode_GetSelected,
  TreeNode_SetSelected,
  TreeNode_GetSelectedIndex,
  TreeNode_SetSelectedIndex,
  TreeNode_GetStateIndex,
  TreeNode_SetStateIndex,
  TreeNode_GetSubTreeCount,
  TreeNode_GetText,
  TreeNode_SetText,
  TreeNode_GetTop,
  TreeNode_GetTreeNodes,
  TreeNode_GetTreeView,
  TreeNode_GetVisible,
  TreeNode_SetVisible,
  TreeNode_GetItems,
  TreeNode_SetItems,
  TreeNode_GetItem,
  TreeNode_SetItem,
  TreeNode_StaticClassType;
