
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function Label_Create(AOwner: TComponent): TLabel; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TLabel.Create(AOwner);
  handleExceptionEnd
end;

procedure Label_Free(AObj: TLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_BringToFront(AObj: TLabel); extdecl;
begin
  handleExceptionBegin
  AObj.BringToFront;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure Label_ClientToScreen(AObj: TLabel; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToScreen(Point);
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure Label_ClientToParent(AObj: TLabel; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToParent(Point, AParent);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_Dragging(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Dragging;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_HasParent(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_Hide(AObj: TLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Hide;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_Invalidate(AObj: TLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Invalidate;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_Perform(AObj: TLabel; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
{$ifdef UsehandleException}Result := NativeInt(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Perform(Msg, WParam, LParam);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_Refresh(AObj: TLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Refresh;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_Repaint(AObj: TLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Repaint;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure Label_ScreenToClient(AObj: TLabel; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScreenToClient(Point);
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure Label_ParentToClient(AObj: TLabel; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentToClient(Point, AParent);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_SendToBack(AObj: TLabel); extdecl;
begin
  handleExceptionBegin
  AObj.SendToBack;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_SetBounds(AObj: TLabel; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_Show(AObj: TLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Show;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_Update(AObj: TLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Update;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_GetTextBuf(AObj: TLabel; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_GetTextLen(AObj: TLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  {$ifdef darwin}Length(AObj.Caption){$else}AObj.GetTextLen{$endif};
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_SetTextBuf(AObj: TLabel; Buffer: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextBuf(Buffer);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_FindComponent(AObj: TLabel; AName: PChar): TComponent; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_GetNamePath(AObj: TLabel): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_Assign(AObj: TLabel; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_ClassType(AObj: TLabel): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_ClassName(AObj: TLabel): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_InstanceSize(AObj: TLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_InheritsFrom(AObj: TLabel; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_Equals(AObj: TLabel; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_GetHashCode(AObj: TLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_ToString(AObj: TLabel): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_AnchorToNeighbour(AObj: TLabel; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorToNeighbour(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_AnchorParallel(AObj: TLabel; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorParallel(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_AnchorHorizontalCenterTo(AObj: TLabel; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorHorizontalCenterTo(ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_AnchorVerticalCenterTo(AObj: TLabel; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorVerticalCenterTo(ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_AnchorSame(AObj: TLabel; ASide: TAnchorKind; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSame(ASide, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_AnchorAsAlign(AObj: TLabel; ATheAlign: TAlign; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorAsAlign(ATheAlign, ASpace);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_AnchorClient(AObj: TLabel; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorClient(ASpace);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_ScaleDesignToForm(AObj: TLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleDesignToForm(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_ScaleFormToDesign(AObj: TLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleFormToDesign(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_Scale96ToForm(AObj: TLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Scale96ToForm(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_ScaleFormTo96(AObj: TLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleFormTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_Scale96ToFont(AObj: TLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Scale96ToFont(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_ScaleFontTo96(AObj: TLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleFontTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_ScaleScreenToFont(AObj: TLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleScreenToFont(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_ScaleFontToScreen(AObj: TLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleFontToScreen(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_Scale96ToScreen(AObj: TLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Scale96ToScreen(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Label_ScaleScreenTo96(AObj: TLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleScreenTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_AutoAdjustLayout(AObj: TLabel; AMode: TLayoutAdjustmentPolicy; AFromPPI: Integer; AToPPI: Integer; AOldFormWidth: Integer; ANewFormWidth: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AutoAdjustLayout(AMode, AFromPPI, AToPPI, AOldFormWidth, ANewFormWidth);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Label_FixDesignFontsPPI(AObj: TLabel; ADesignTimePPI: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

//CLASSMETHOD:
//PARAMS:3=nonPtr
procedure Label_ScaleFontsPPI(AObj: TLabel; AToPPI: Integer; var AProportion: Double); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleFontsPPI(AToPPI, AProportion);
  handleExceptionEnd
end;

function Label_GetOptimalFill(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.OptimalFill;
  handleExceptionEnd
end;

procedure Label_SetOptimalFill(AObj: TLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.OptimalFill := AValue;
  handleExceptionEnd
end;

function Label_GetAlign(AObj: TLabel): TAlign; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TAlign);{$endif}
  handleExceptionBegin
  Result :=  AObj.Align;
  handleExceptionEnd
end;

procedure Label_SetAlign(AObj: TLabel; AValue: TAlign); extdecl;
begin
  handleExceptionBegin
  AObj.Align := AValue;
  handleExceptionEnd
end;

function Label_GetAlignment(AObj: TLabel): TAlignment; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TAlignment);{$endif}
  handleExceptionBegin
  Result :=  AObj.Alignment;
  handleExceptionEnd
end;

procedure Label_SetAlignment(AObj: TLabel; AValue: TAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.Alignment := AValue;
  handleExceptionEnd
end;

function Label_GetAnchors(AObj: TLabel): TAnchors; extdecl;
begin
{$ifdef UsehandleException}Result := [];{$endif}
  handleExceptionBegin
  Result :=  AObj.Anchors;
  handleExceptionEnd
end;

procedure Label_SetAnchors(AObj: TLabel; AValue: TAnchors); extdecl;
begin
  handleExceptionBegin
  AObj.Anchors := AValue;
  handleExceptionEnd
end;

function Label_GetAutoSize(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.AutoSize;
  handleExceptionEnd
end;

procedure Label_SetAutoSize(AObj: TLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AutoSize := AValue;
  handleExceptionEnd
end;

function Label_GetBiDiMode(AObj: TLabel): TBiDiMode; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TBiDiMode);{$endif}
  handleExceptionBegin
  Result :=  AObj.BiDiMode;
  handleExceptionEnd
end;

procedure Label_SetBiDiMode(AObj: TLabel; AValue: TBiDiMode); extdecl;
begin
  handleExceptionBegin
  AObj.BiDiMode := AValue;
  handleExceptionEnd
end;

function Label_GetCaption(AObj: TLabel): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.Caption);
  handleExceptionEnd
end;

procedure Label_SetCaption(AObj: TLabel; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Caption := AValue;
  handleExceptionEnd
end;

function Label_GetColor(AObj: TLabel): TColor; extdecl;
begin
{$ifdef UsehandleException}Result := TColor(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Color;
  handleExceptionEnd
end;

procedure Label_SetColor(AObj: TLabel; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.Color := AValue;
  handleExceptionEnd
end;

function Label_GetConstraints(AObj: TLabel): TSizeConstraints; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Constraints;
  handleExceptionEnd
end;

procedure Label_SetConstraints(AObj: TLabel; AValue: TSizeConstraints); extdecl;
begin
  handleExceptionBegin
  AObj.Constraints := AValue;
  handleExceptionEnd
end;

function Label_GetDragCursor(AObj: TLabel): TCursor; extdecl;
begin
{$ifdef UsehandleException}Result := TCursor(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.DragCursor;
  handleExceptionEnd
end;

procedure Label_SetDragCursor(AObj: TLabel; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.DragCursor := AValue;
  handleExceptionEnd
end;

function Label_GetDragKind(AObj: TLabel): TDragKind; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TDragKind);{$endif}
  handleExceptionBegin
  Result :=  AObj.DragKind;
  handleExceptionEnd
end;

procedure Label_SetDragKind(AObj: TLabel; AValue: TDragKind); extdecl;
begin
  handleExceptionBegin
  AObj.DragKind := AValue;
  handleExceptionEnd
end;

function Label_GetDragMode(AObj: TLabel): TDragMode; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TDragMode);{$endif}
  handleExceptionBegin
  Result :=  AObj.DragMode;
  handleExceptionEnd
end;

procedure Label_SetDragMode(AObj: TLabel; AValue: TDragMode); extdecl;
begin
  handleExceptionBegin
  AObj.DragMode := AValue;
  handleExceptionEnd
end;

function Label_GetEnabled(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Enabled;
  handleExceptionEnd
end;

procedure Label_SetEnabled(AObj: TLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function Label_GetFocusControl(AObj: TLabel): TWinControl; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.FocusControl;
  handleExceptionEnd
end;

procedure Label_SetFocusControl(AObj: TLabel; AValue: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.FocusControl := AValue;
  handleExceptionEnd
end;

function Label_GetFont(AObj: TLabel): TFont; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Font;
  handleExceptionEnd
end;

procedure Label_SetFont(AObj: TLabel; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.Font := AValue;
  handleExceptionEnd
end;

function Label_GetParentColor(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.ParentColor;
  handleExceptionEnd
end;

procedure Label_SetParentColor(AObj: TLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentColor := AValue;
  handleExceptionEnd
end;

function Label_GetParentFont(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.ParentFont;
  handleExceptionEnd
end;

procedure Label_SetParentFont(AObj: TLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentFont := AValue;
  handleExceptionEnd
end;

function Label_GetParentShowHint(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.ParentShowHint;
  handleExceptionEnd
end;

procedure Label_SetParentShowHint(AObj: TLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentShowHint := AValue;
  handleExceptionEnd
end;

function Label_GetPopupMenu(AObj: TLabel): TPopupMenu; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.PopupMenu;
  handleExceptionEnd
end;

procedure Label_SetPopupMenu(AObj: TLabel; AValue: TPopupMenu); extdecl;
begin
  handleExceptionBegin
  AObj.PopupMenu := AValue;
  handleExceptionEnd
end;

function Label_GetShowAccelChar(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.ShowAccelChar;
  handleExceptionEnd
end;

procedure Label_SetShowAccelChar(AObj: TLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowAccelChar := AValue;
  handleExceptionEnd
end;

function Label_GetShowHint(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.ShowHint;
  handleExceptionEnd
end;

procedure Label_SetShowHint(AObj: TLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowHint := AValue;
  handleExceptionEnd
end;

function Label_GetTransparent(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Transparent;
  handleExceptionEnd
end;

procedure Label_SetTransparent(AObj: TLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Transparent := AValue;
  handleExceptionEnd
end;

function Label_GetLayout(AObj: TLabel): TTextLayout; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TTextLayout);{$endif}
  handleExceptionBegin
  Result :=  AObj.Layout;
  handleExceptionEnd
end;

procedure Label_SetLayout(AObj: TLabel; AValue: TTextLayout); extdecl;
begin
  handleExceptionBegin
  AObj.Layout := AValue;
  handleExceptionEnd
end;

function Label_GetVisible(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Visible;
  handleExceptionEnd
end;

procedure Label_SetVisible(AObj: TLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function Label_GetWordWrap(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.WordWrap;
  handleExceptionEnd
end;

procedure Label_SetWordWrap(AObj: TLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.WordWrap := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure Label_SetOnClick(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClick}
  EventMethodCode
end;

//EVENT_TYPE:TContextPopupEvent
procedure Label_SetOnContextPopup(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure Label_SetOnDblClick(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//EVENT_TYPE:TDragDropEvent
procedure Label_SetOnDragDrop(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//EVENT_TYPE:TDragOverEvent
procedure Label_SetOnDragOver(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//EVENT_TYPE:TEndDragEvent
procedure Label_SetOnEndDrag(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure Label_SetOnMouseDown(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//EVENT_TYPE:TMouseMoveEvent
procedure Label_SetOnMouseMove(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure Label_SetOnMouseUp(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure Label_SetOnMouseEnter(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure Label_SetOnMouseLeave(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

function Label_GetCanvas(AObj: TLabel): TCanvas; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Canvas;
  handleExceptionEnd
end;

function Label_GetAction(AObj: TLabel): TBasicAction; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Action;
  handleExceptionEnd
end;

procedure Label_SetAction(AObj: TLabel; AValue: TBasicAction); extdecl;
begin
  handleExceptionBegin
  AObj.Action := AValue;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure Label_GetBoundsRect(AObj: TLabel; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BoundsRect;
  handleExceptionEnd
end;

//PARAMS:2=nonPtr
procedure Label_SetBoundsRect(AObj: TLabel; var AValue: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.BoundsRect := AValue;
  handleExceptionEnd
end;

function Label_GetClientHeight(AObj: TLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClientHeight;
  handleExceptionEnd
end;

procedure Label_SetClientHeight(AObj: TLabel; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientHeight := AValue;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure Label_GetClientOrigin(AObj: TLabel; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientOrigin;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure Label_GetClientRect(AObj: TLabel; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientRect;
  handleExceptionEnd
end;

function Label_GetClientWidth(AObj: TLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClientWidth;
  handleExceptionEnd
end;

procedure Label_SetClientWidth(AObj: TLabel; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientWidth := AValue;
  handleExceptionEnd
end;

function Label_GetControlState(AObj: TLabel): TControlState; extdecl;
begin
{$ifdef UsehandleException}Result := [];{$endif}
  handleExceptionBegin
  Result :=  AObj.ControlState;
  handleExceptionEnd
end;

procedure Label_SetControlState(AObj: TLabel; AValue: TControlState); extdecl;
begin
  handleExceptionBegin
  AObj.ControlState := AValue;
  handleExceptionEnd
end;

function Label_GetControlStyle(AObj: TLabel): TControlStyle; extdecl;
begin
{$ifdef UsehandleException}Result := [];{$endif}
  handleExceptionBegin
  Result :=  AObj.ControlStyle;
  handleExceptionEnd
end;

procedure Label_SetControlStyle(AObj: TLabel; AValue: TControlStyle); extdecl;
begin
  handleExceptionBegin
  AObj.ControlStyle := AValue;
  handleExceptionEnd
end;

function Label_GetFloating(AObj: TLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Floating;
  handleExceptionEnd
end;

function Label_GetParent(AObj: TLabel): TWinControl; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Parent;
  handleExceptionEnd
end;

procedure Label_SetParent(AObj: TLabel; AValue: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.Parent := AValue;
  handleExceptionEnd
end;

function Label_GetLeft(AObj: TLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Left;
  handleExceptionEnd
end;

procedure Label_SetLeft(AObj: TLabel; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Left := AValue;
  handleExceptionEnd
end;

function Label_GetTop(AObj: TLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Top;
  handleExceptionEnd
end;

procedure Label_SetTop(AObj: TLabel; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Top := AValue;
  handleExceptionEnd
end;

function Label_GetWidth(AObj: TLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure Label_SetWidth(AObj: TLabel; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

function Label_GetHeight(AObj: TLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure Label_SetHeight(AObj: TLabel; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function Label_GetCursor(AObj: TLabel): TCursor; extdecl;
begin
{$ifdef UsehandleException}Result := TCursor(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Cursor;
  handleExceptionEnd
end;

procedure Label_SetCursor(AObj: TLabel; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.Cursor := AValue;
  handleExceptionEnd
end;

function Label_GetHint(AObj: TLabel): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.Hint);
  handleExceptionEnd
end;

procedure Label_SetHint(AObj: TLabel; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Hint := AValue;
  handleExceptionEnd
end;

function Label_GetComponentCount(AObj: TLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function Label_GetComponentIndex(AObj: TLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure Label_SetComponentIndex(AObj: TLabel; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function Label_GetOwner(AObj: TLabel): TComponent; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function Label_GetName(AObj: TLabel): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure Label_SetName(AObj: TLabel; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function Label_GetTag(AObj: TLabel): NativeInt; extdecl;
begin
{$ifdef UsehandleException}Result := NativeInt(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure Label_SetTag(AObj: TLabel; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function Label_GetAnchorSideLeft(AObj: TLabel): TAnchorSide; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.AnchorSideLeft;
  handleExceptionEnd
end;

procedure Label_SetAnchorSideLeft(AObj: TLabel; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideLeft := AValue;
  handleExceptionEnd
end;

function Label_GetAnchorSideTop(AObj: TLabel): TAnchorSide; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.AnchorSideTop;
  handleExceptionEnd
end;

procedure Label_SetAnchorSideTop(AObj: TLabel; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideTop := AValue;
  handleExceptionEnd
end;

function Label_GetAnchorSideRight(AObj: TLabel): TAnchorSide; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.AnchorSideRight;
  handleExceptionEnd
end;

procedure Label_SetAnchorSideRight(AObj: TLabel; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideRight := AValue;
  handleExceptionEnd
end;

function Label_GetAnchorSideBottom(AObj: TLabel): TAnchorSide; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.AnchorSideBottom;
  handleExceptionEnd
end;

procedure Label_SetAnchorSideBottom(AObj: TLabel; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideBottom := AValue;
  handleExceptionEnd
end;

function Label_GetBorderSpacing(AObj: TLabel): TControlBorderSpacing; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.BorderSpacing;
  handleExceptionEnd
end;

procedure Label_SetBorderSpacing(AObj: TLabel; AValue: TControlBorderSpacing); extdecl;
begin
  handleExceptionBegin
  AObj.BorderSpacing := AValue;
  handleExceptionEnd
end;

function Label_GetComponents(AObj: TLabel; AIndex: Integer): TComponent; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function Label_GetAnchorSide(AObj: TLabel; AKind: TAnchorKind): TAnchorSide; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.AnchorSide[AKind];
  handleExceptionEnd
end;

function Label_StaticClassType: TClass; extdecl;
begin
  Result := TLabel;
end;

exports
  Label_Create,
  Label_Free,
  Label_BringToFront,
  Label_ClientToScreen,
  Label_ClientToParent,
  Label_Dragging,
  Label_HasParent,
  Label_Hide,
  Label_Invalidate,
  Label_Perform,
  Label_Refresh,
  Label_Repaint,
  Label_ScreenToClient,
  Label_ParentToClient,
  Label_SendToBack,
  Label_SetBounds,
  Label_Show,
  Label_Update,
  Label_GetTextBuf,
  Label_GetTextLen,
  Label_SetTextBuf,
  Label_FindComponent,
  Label_GetNamePath,
  Label_Assign,
  Label_ClassType,
  Label_ClassName,
  Label_InstanceSize,
  Label_InheritsFrom,
  Label_Equals,
  Label_GetHashCode,
  Label_ToString,
  Label_AnchorToNeighbour,
  Label_AnchorParallel,
  Label_AnchorHorizontalCenterTo,
  Label_AnchorVerticalCenterTo,
  Label_AnchorSame,
  Label_AnchorAsAlign,
  Label_AnchorClient,
  Label_ScaleDesignToForm,
  Label_ScaleFormToDesign,
  Label_Scale96ToForm,
  Label_ScaleFormTo96,
  Label_Scale96ToFont,
  Label_ScaleFontTo96,
  Label_ScaleScreenToFont,
  Label_ScaleFontToScreen,
  Label_Scale96ToScreen,
  Label_ScaleScreenTo96,
  Label_AutoAdjustLayout,
  Label_FixDesignFontsPPI,
  Label_ScaleFontsPPI,
  Label_GetOptimalFill,
  Label_SetOptimalFill,
  Label_GetAlign,
  Label_SetAlign,
  Label_GetAlignment,
  Label_SetAlignment,
  Label_GetAnchors,
  Label_SetAnchors,
  Label_GetAutoSize,
  Label_SetAutoSize,
  Label_GetBiDiMode,
  Label_SetBiDiMode,
  Label_GetCaption,
  Label_SetCaption,
  Label_GetColor,
  Label_SetColor,
  Label_GetConstraints,
  Label_SetConstraints,
  Label_GetDragCursor,
  Label_SetDragCursor,
  Label_GetDragKind,
  Label_SetDragKind,
  Label_GetDragMode,
  Label_SetDragMode,
  Label_GetEnabled,
  Label_SetEnabled,
  Label_GetFocusControl,
  Label_SetFocusControl,
  Label_GetFont,
  Label_SetFont,
  Label_GetParentColor,
  Label_SetParentColor,
  Label_GetParentFont,
  Label_SetParentFont,
  Label_GetParentShowHint,
  Label_SetParentShowHint,
  Label_GetPopupMenu,
  Label_SetPopupMenu,
  Label_GetShowAccelChar,
  Label_SetShowAccelChar,
  Label_GetShowHint,
  Label_SetShowHint,
  Label_GetTransparent,
  Label_SetTransparent,
  Label_GetLayout,
  Label_SetLayout,
  Label_GetVisible,
  Label_SetVisible,
  Label_GetWordWrap,
  Label_SetWordWrap,
  Label_SetOnClick,
  Label_SetOnContextPopup,
  Label_SetOnDblClick,
  Label_SetOnDragDrop,
  Label_SetOnDragOver,
  Label_SetOnEndDrag,
  Label_SetOnMouseDown,
  Label_SetOnMouseMove,
  Label_SetOnMouseUp,
  Label_SetOnMouseEnter,
  Label_SetOnMouseLeave,
  Label_GetCanvas,
  Label_GetAction,
  Label_SetAction,
  Label_GetBoundsRect,
  Label_SetBoundsRect,
  Label_GetClientHeight,
  Label_SetClientHeight,
  Label_GetClientOrigin,
  Label_GetClientRect,
  Label_GetClientWidth,
  Label_SetClientWidth,
  Label_GetControlState,
  Label_SetControlState,
  Label_GetControlStyle,
  Label_SetControlStyle,
  Label_GetFloating,
  Label_GetParent,
  Label_SetParent,
  Label_GetLeft,
  Label_SetLeft,
  Label_GetTop,
  Label_SetTop,
  Label_GetWidth,
  Label_SetWidth,
  Label_GetHeight,
  Label_SetHeight,
  Label_GetCursor,
  Label_SetCursor,
  Label_GetHint,
  Label_SetHint,
  Label_GetComponentCount,
  Label_GetComponentIndex,
  Label_SetComponentIndex,
  Label_GetOwner,
  Label_GetName,
  Label_SetName,
  Label_GetTag,
  Label_SetTag,
  Label_GetAnchorSideLeft,
  Label_SetAnchorSideLeft,
  Label_GetAnchorSideTop,
  Label_SetAnchorSideTop,
  Label_GetAnchorSideRight,
  Label_SetAnchorSideRight,
  Label_GetAnchorSideBottom,
  Label_SetAnchorSideBottom,
  Label_GetBorderSpacing,
  Label_SetBorderSpacing,
  Label_GetComponents,
  Label_GetAnchorSide,
  Label_StaticClassType;
