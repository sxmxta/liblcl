
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function BoundLabel_Create(AOwner: TComponent): TBoundLabel; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TBoundLabel.Create(AOwner);
  handleExceptionEnd
end;

procedure BoundLabel_Free(AObj: TBoundLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_BringToFront(AObj: TBoundLabel); extdecl;
begin
  handleExceptionBegin
  AObj.BringToFront;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure BoundLabel_ClientToScreen(AObj: TBoundLabel; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToScreen(Point);
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure BoundLabel_ClientToParent(AObj: TBoundLabel; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToParent(Point, AParent);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_Dragging(AObj: TBoundLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Dragging;
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_HasParent(AObj: TBoundLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_Hide(AObj: TBoundLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Hide;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_Invalidate(AObj: TBoundLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Invalidate;
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_Perform(AObj: TBoundLabel; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
{$ifdef UsehandleException}Result := NativeInt(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Perform(Msg, WParam, LParam);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_Refresh(AObj: TBoundLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Refresh;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_Repaint(AObj: TBoundLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Repaint;
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure BoundLabel_ScreenToClient(AObj: TBoundLabel; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScreenToClient(Point);
  handleExceptionEnd
end;

//CLASSMETHOD:
//RETURNISLASTPARAM:
//PARAMS:2=nonPtr
procedure BoundLabel_ParentToClient(AObj: TBoundLabel; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentToClient(Point, AParent);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_SendToBack(AObj: TBoundLabel); extdecl;
begin
  handleExceptionBegin
  AObj.SendToBack;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_SetBounds(AObj: TBoundLabel; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_Show(AObj: TBoundLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Show;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_Update(AObj: TBoundLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Update;
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_GetTextBuf(AObj: TBoundLabel; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_GetTextLen(AObj: TBoundLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  {$ifdef darwin}Length(AObj.Caption){$else}AObj.GetTextLen{$endif};
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_SetTextBuf(AObj: TBoundLabel; Buffer: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextBuf(Buffer);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_FindComponent(AObj: TBoundLabel; AName: PChar): TComponent; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_GetNamePath(AObj: TBoundLabel): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_Assign(AObj: TBoundLabel; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_ClassType(AObj: TBoundLabel): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_ClassName(AObj: TBoundLabel): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_InstanceSize(AObj: TBoundLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_InheritsFrom(AObj: TBoundLabel; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_Equals(AObj: TBoundLabel; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_GetHashCode(AObj: TBoundLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_ToString(AObj: TBoundLabel): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_AnchorToNeighbour(AObj: TBoundLabel; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorToNeighbour(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_AnchorParallel(AObj: TBoundLabel; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorParallel(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_AnchorHorizontalCenterTo(AObj: TBoundLabel; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorHorizontalCenterTo(ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_AnchorVerticalCenterTo(AObj: TBoundLabel; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorVerticalCenterTo(ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_AnchorSame(AObj: TBoundLabel; ASide: TAnchorKind; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSame(ASide, ASibling);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_AnchorAsAlign(AObj: TBoundLabel; ATheAlign: TAlign; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorAsAlign(ATheAlign, ASpace);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_AnchorClient(AObj: TBoundLabel; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorClient(ASpace);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_ScaleDesignToForm(AObj: TBoundLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleDesignToForm(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_ScaleFormToDesign(AObj: TBoundLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleFormToDesign(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_Scale96ToForm(AObj: TBoundLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Scale96ToForm(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_ScaleFormTo96(AObj: TBoundLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleFormTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_Scale96ToFont(AObj: TBoundLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Scale96ToFont(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_ScaleFontTo96(AObj: TBoundLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleFontTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_ScaleScreenToFont(AObj: TBoundLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleScreenToFont(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_ScaleFontToScreen(AObj: TBoundLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleFontToScreen(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_Scale96ToScreen(AObj: TBoundLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Scale96ToScreen(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
function BoundLabel_ScaleScreenTo96(AObj: TBoundLabel; ASize: Integer): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ScaleScreenTo96(ASize);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_AutoAdjustLayout(AObj: TBoundLabel; AMode: TLayoutAdjustmentPolicy; AFromPPI: Integer; AToPPI: Integer; AOldFormWidth: Integer; ANewFormWidth: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AutoAdjustLayout(AMode, AFromPPI, AToPPI, AOldFormWidth, ANewFormWidth);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure BoundLabel_FixDesignFontsPPI(AObj: TBoundLabel; ADesignTimePPI: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

//CLASSMETHOD:
//PARAMS:3=nonPtr
procedure BoundLabel_ScaleFontsPPI(AObj: TBoundLabel; AToPPI: Integer; var AProportion: Double); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleFontsPPI(AToPPI, AProportion);
  handleExceptionEnd
end;

function BoundLabel_GetBiDiMode(AObj: TBoundLabel): TBiDiMode; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TBiDiMode);{$endif}
  handleExceptionBegin
  Result :=  AObj.BiDiMode;
  handleExceptionEnd
end;

procedure BoundLabel_SetBiDiMode(AObj: TBoundLabel; AValue: TBiDiMode); extdecl;
begin
  handleExceptionBegin
  AObj.BiDiMode := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetCaption(AObj: TBoundLabel): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.Caption);
  handleExceptionEnd
end;

procedure BoundLabel_SetCaption(AObj: TBoundLabel; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Caption := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetColor(AObj: TBoundLabel): TColor; extdecl;
begin
{$ifdef UsehandleException}Result := TColor(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Color;
  handleExceptionEnd
end;

procedure BoundLabel_SetColor(AObj: TBoundLabel; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.Color := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetDragCursor(AObj: TBoundLabel): TCursor; extdecl;
begin
{$ifdef UsehandleException}Result := TCursor(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.DragCursor;
  handleExceptionEnd
end;

procedure BoundLabel_SetDragCursor(AObj: TBoundLabel; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.DragCursor := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetDragMode(AObj: TBoundLabel): TDragMode; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TDragMode);{$endif}
  handleExceptionBegin
  Result :=  AObj.DragMode;
  handleExceptionEnd
end;

procedure BoundLabel_SetDragMode(AObj: TBoundLabel; AValue: TDragMode); extdecl;
begin
  handleExceptionBegin
  AObj.DragMode := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetFont(AObj: TBoundLabel): TFont; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Font;
  handleExceptionEnd
end;

procedure BoundLabel_SetFont(AObj: TBoundLabel; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.Font := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetHeight(AObj: TBoundLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure BoundLabel_SetHeight(AObj: TBoundLabel; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetLeft(AObj: TBoundLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Left;
  handleExceptionEnd
end;

function BoundLabel_GetParentColor(AObj: TBoundLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.ParentColor;
  handleExceptionEnd
end;

procedure BoundLabel_SetParentColor(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentColor := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetParentFont(AObj: TBoundLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.ParentFont;
  handleExceptionEnd
end;

procedure BoundLabel_SetParentFont(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentFont := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetParentShowHint(AObj: TBoundLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.ParentShowHint;
  handleExceptionEnd
end;

procedure BoundLabel_SetParentShowHint(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentShowHint := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetPopupMenu(AObj: TBoundLabel): TPopupMenu; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.PopupMenu;
  handleExceptionEnd
end;

procedure BoundLabel_SetPopupMenu(AObj: TBoundLabel; AValue: TPopupMenu); extdecl;
begin
  handleExceptionBegin
  AObj.PopupMenu := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetShowAccelChar(AObj: TBoundLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.ShowAccelChar;
  handleExceptionEnd
end;

procedure BoundLabel_SetShowAccelChar(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowAccelChar := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetShowHint(AObj: TBoundLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.ShowHint;
  handleExceptionEnd
end;

procedure BoundLabel_SetShowHint(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowHint := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetTop(AObj: TBoundLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Top;
  handleExceptionEnd
end;

function BoundLabel_GetLayout(AObj: TBoundLabel): TTextLayout; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TTextLayout);{$endif}
  handleExceptionBegin
  Result :=  AObj.Layout;
  handleExceptionEnd
end;

procedure BoundLabel_SetLayout(AObj: TBoundLabel; AValue: TTextLayout); extdecl;
begin
  handleExceptionBegin
  AObj.Layout := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetWordWrap(AObj: TBoundLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.WordWrap;
  handleExceptionEnd
end;

procedure BoundLabel_SetWordWrap(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.WordWrap := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetWidth(AObj: TBoundLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure BoundLabel_SetWidth(AObj: TBoundLabel; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure BoundLabel_SetOnClick(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClick}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure BoundLabel_SetOnDblClick(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//EVENT_TYPE:TDragDropEvent
procedure BoundLabel_SetOnDragDrop(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//EVENT_TYPE:TDragOverEvent
procedure BoundLabel_SetOnDragOver(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//EVENT_TYPE:TEndDragEvent
procedure BoundLabel_SetOnEndDrag(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure BoundLabel_SetOnMouseDown(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//EVENT_TYPE:TMouseMoveEvent
procedure BoundLabel_SetOnMouseMove(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure BoundLabel_SetOnMouseUp(AObj: TBoundLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

function BoundLabel_GetCanvas(AObj: TBoundLabel): TCanvas; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Canvas;
  handleExceptionEnd
end;

function BoundLabel_GetEnabled(AObj: TBoundLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Enabled;
  handleExceptionEnd
end;

procedure BoundLabel_SetEnabled(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetAction(AObj: TBoundLabel): TBasicAction; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Action;
  handleExceptionEnd
end;

procedure BoundLabel_SetAction(AObj: TBoundLabel; AValue: TBasicAction); extdecl;
begin
  handleExceptionBegin
  AObj.Action := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetAlign(AObj: TBoundLabel): TAlign; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TAlign);{$endif}
  handleExceptionBegin
  Result :=  AObj.Align;
  handleExceptionEnd
end;

procedure BoundLabel_SetAlign(AObj: TBoundLabel; AValue: TAlign); extdecl;
begin
  handleExceptionBegin
  AObj.Align := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetAnchors(AObj: TBoundLabel): TAnchors; extdecl;
begin
{$ifdef UsehandleException}Result := [];{$endif}
  handleExceptionBegin
  Result :=  AObj.Anchors;
  handleExceptionEnd
end;

procedure BoundLabel_SetAnchors(AObj: TBoundLabel; AValue: TAnchors); extdecl;
begin
  handleExceptionBegin
  AObj.Anchors := AValue;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure BoundLabel_GetBoundsRect(AObj: TBoundLabel; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BoundsRect;
  handleExceptionEnd
end;

//PARAMS:2=nonPtr
procedure BoundLabel_SetBoundsRect(AObj: TBoundLabel; var AValue: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.BoundsRect := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetClientHeight(AObj: TBoundLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClientHeight;
  handleExceptionEnd
end;

procedure BoundLabel_SetClientHeight(AObj: TBoundLabel; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientHeight := AValue;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure BoundLabel_GetClientOrigin(AObj: TBoundLabel; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientOrigin;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure BoundLabel_GetClientRect(AObj: TBoundLabel; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientRect;
  handleExceptionEnd
end;

function BoundLabel_GetClientWidth(AObj: TBoundLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClientWidth;
  handleExceptionEnd
end;

procedure BoundLabel_SetClientWidth(AObj: TBoundLabel; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientWidth := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetConstraints(AObj: TBoundLabel): TSizeConstraints; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Constraints;
  handleExceptionEnd
end;

procedure BoundLabel_SetConstraints(AObj: TBoundLabel; AValue: TSizeConstraints); extdecl;
begin
  handleExceptionBegin
  AObj.Constraints := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetControlState(AObj: TBoundLabel): TControlState; extdecl;
begin
{$ifdef UsehandleException}Result := [];{$endif}
  handleExceptionBegin
  Result :=  AObj.ControlState;
  handleExceptionEnd
end;

procedure BoundLabel_SetControlState(AObj: TBoundLabel; AValue: TControlState); extdecl;
begin
  handleExceptionBegin
  AObj.ControlState := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetControlStyle(AObj: TBoundLabel): TControlStyle; extdecl;
begin
{$ifdef UsehandleException}Result := [];{$endif}
  handleExceptionBegin
  Result :=  AObj.ControlStyle;
  handleExceptionEnd
end;

procedure BoundLabel_SetControlStyle(AObj: TBoundLabel; AValue: TControlStyle); extdecl;
begin
  handleExceptionBegin
  AObj.ControlStyle := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetFloating(AObj: TBoundLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Floating;
  handleExceptionEnd
end;

function BoundLabel_GetVisible(AObj: TBoundLabel): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Visible;
  handleExceptionEnd
end;

procedure BoundLabel_SetVisible(AObj: TBoundLabel; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetParent(AObj: TBoundLabel): TWinControl; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Parent;
  handleExceptionEnd
end;

procedure BoundLabel_SetParent(AObj: TBoundLabel; AValue: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.Parent := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetCursor(AObj: TBoundLabel): TCursor; extdecl;
begin
{$ifdef UsehandleException}Result := TCursor(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Cursor;
  handleExceptionEnd
end;

procedure BoundLabel_SetCursor(AObj: TBoundLabel; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.Cursor := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetHint(AObj: TBoundLabel): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.Hint);
  handleExceptionEnd
end;

procedure BoundLabel_SetHint(AObj: TBoundLabel; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Hint := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetComponentCount(AObj: TBoundLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function BoundLabel_GetComponentIndex(AObj: TBoundLabel): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure BoundLabel_SetComponentIndex(AObj: TBoundLabel; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetOwner(AObj: TBoundLabel): TComponent; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function BoundLabel_GetName(AObj: TBoundLabel): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure BoundLabel_SetName(AObj: TBoundLabel; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetTag(AObj: TBoundLabel): NativeInt; extdecl;
begin
{$ifdef UsehandleException}Result := NativeInt(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure BoundLabel_SetTag(AObj: TBoundLabel; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetAnchorSideLeft(AObj: TBoundLabel): TAnchorSide; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.AnchorSideLeft;
  handleExceptionEnd
end;

procedure BoundLabel_SetAnchorSideLeft(AObj: TBoundLabel; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideLeft := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetAnchorSideTop(AObj: TBoundLabel): TAnchorSide; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.AnchorSideTop;
  handleExceptionEnd
end;

procedure BoundLabel_SetAnchorSideTop(AObj: TBoundLabel; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideTop := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetAnchorSideRight(AObj: TBoundLabel): TAnchorSide; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.AnchorSideRight;
  handleExceptionEnd
end;

procedure BoundLabel_SetAnchorSideRight(AObj: TBoundLabel; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideRight := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetAnchorSideBottom(AObj: TBoundLabel): TAnchorSide; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.AnchorSideBottom;
  handleExceptionEnd
end;

procedure BoundLabel_SetAnchorSideBottom(AObj: TBoundLabel; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideBottom := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetBorderSpacing(AObj: TBoundLabel): TControlBorderSpacing; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.BorderSpacing;
  handleExceptionEnd
end;

procedure BoundLabel_SetBorderSpacing(AObj: TBoundLabel; AValue: TControlBorderSpacing); extdecl;
begin
  handleExceptionBegin
  AObj.BorderSpacing := AValue;
  handleExceptionEnd
end;

function BoundLabel_GetComponents(AObj: TBoundLabel; AIndex: Integer): TComponent; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function BoundLabel_GetAnchorSide(AObj: TBoundLabel; AKind: TAnchorKind): TAnchorSide; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.AnchorSide[AKind];
  handleExceptionEnd
end;

function BoundLabel_StaticClassType: TClass; extdecl;
begin
  Result := TBoundLabel;
end;

exports
  BoundLabel_Create,
  BoundLabel_Free,
  BoundLabel_BringToFront,
  BoundLabel_ClientToScreen,
  BoundLabel_ClientToParent,
  BoundLabel_Dragging,
  BoundLabel_HasParent,
  BoundLabel_Hide,
  BoundLabel_Invalidate,
  BoundLabel_Perform,
  BoundLabel_Refresh,
  BoundLabel_Repaint,
  BoundLabel_ScreenToClient,
  BoundLabel_ParentToClient,
  BoundLabel_SendToBack,
  BoundLabel_SetBounds,
  BoundLabel_Show,
  BoundLabel_Update,
  BoundLabel_GetTextBuf,
  BoundLabel_GetTextLen,
  BoundLabel_SetTextBuf,
  BoundLabel_FindComponent,
  BoundLabel_GetNamePath,
  BoundLabel_Assign,
  BoundLabel_ClassType,
  BoundLabel_ClassName,
  BoundLabel_InstanceSize,
  BoundLabel_InheritsFrom,
  BoundLabel_Equals,
  BoundLabel_GetHashCode,
  BoundLabel_ToString,
  BoundLabel_AnchorToNeighbour,
  BoundLabel_AnchorParallel,
  BoundLabel_AnchorHorizontalCenterTo,
  BoundLabel_AnchorVerticalCenterTo,
  BoundLabel_AnchorSame,
  BoundLabel_AnchorAsAlign,
  BoundLabel_AnchorClient,
  BoundLabel_ScaleDesignToForm,
  BoundLabel_ScaleFormToDesign,
  BoundLabel_Scale96ToForm,
  BoundLabel_ScaleFormTo96,
  BoundLabel_Scale96ToFont,
  BoundLabel_ScaleFontTo96,
  BoundLabel_ScaleScreenToFont,
  BoundLabel_ScaleFontToScreen,
  BoundLabel_Scale96ToScreen,
  BoundLabel_ScaleScreenTo96,
  BoundLabel_AutoAdjustLayout,
  BoundLabel_FixDesignFontsPPI,
  BoundLabel_ScaleFontsPPI,
  BoundLabel_GetBiDiMode,
  BoundLabel_SetBiDiMode,
  BoundLabel_GetCaption,
  BoundLabel_SetCaption,
  BoundLabel_GetColor,
  BoundLabel_SetColor,
  BoundLabel_GetDragCursor,
  BoundLabel_SetDragCursor,
  BoundLabel_GetDragMode,
  BoundLabel_SetDragMode,
  BoundLabel_GetFont,
  BoundLabel_SetFont,
  BoundLabel_GetHeight,
  BoundLabel_SetHeight,
  BoundLabel_GetLeft,
  BoundLabel_GetParentColor,
  BoundLabel_SetParentColor,
  BoundLabel_GetParentFont,
  BoundLabel_SetParentFont,
  BoundLabel_GetParentShowHint,
  BoundLabel_SetParentShowHint,
  BoundLabel_GetPopupMenu,
  BoundLabel_SetPopupMenu,
  BoundLabel_GetShowAccelChar,
  BoundLabel_SetShowAccelChar,
  BoundLabel_GetShowHint,
  BoundLabel_SetShowHint,
  BoundLabel_GetTop,
  BoundLabel_GetLayout,
  BoundLabel_SetLayout,
  BoundLabel_GetWordWrap,
  BoundLabel_SetWordWrap,
  BoundLabel_GetWidth,
  BoundLabel_SetWidth,
  BoundLabel_SetOnClick,
  BoundLabel_SetOnDblClick,
  BoundLabel_SetOnDragDrop,
  BoundLabel_SetOnDragOver,
  BoundLabel_SetOnEndDrag,
  BoundLabel_SetOnMouseDown,
  BoundLabel_SetOnMouseMove,
  BoundLabel_SetOnMouseUp,
  BoundLabel_GetCanvas,
  BoundLabel_GetEnabled,
  BoundLabel_SetEnabled,
  BoundLabel_GetAction,
  BoundLabel_SetAction,
  BoundLabel_GetAlign,
  BoundLabel_SetAlign,
  BoundLabel_GetAnchors,
  BoundLabel_SetAnchors,
  BoundLabel_GetBoundsRect,
  BoundLabel_SetBoundsRect,
  BoundLabel_GetClientHeight,
  BoundLabel_SetClientHeight,
  BoundLabel_GetClientOrigin,
  BoundLabel_GetClientRect,
  BoundLabel_GetClientWidth,
  BoundLabel_SetClientWidth,
  BoundLabel_GetConstraints,
  BoundLabel_SetConstraints,
  BoundLabel_GetControlState,
  BoundLabel_SetControlState,
  BoundLabel_GetControlStyle,
  BoundLabel_SetControlStyle,
  BoundLabel_GetFloating,
  BoundLabel_GetVisible,
  BoundLabel_SetVisible,
  BoundLabel_GetParent,
  BoundLabel_SetParent,
  BoundLabel_GetCursor,
  BoundLabel_SetCursor,
  BoundLabel_GetHint,
  BoundLabel_SetHint,
  BoundLabel_GetComponentCount,
  BoundLabel_GetComponentIndex,
  BoundLabel_SetComponentIndex,
  BoundLabel_GetOwner,
  BoundLabel_GetName,
  BoundLabel_SetName,
  BoundLabel_GetTag,
  BoundLabel_SetTag,
  BoundLabel_GetAnchorSideLeft,
  BoundLabel_SetAnchorSideLeft,
  BoundLabel_GetAnchorSideTop,
  BoundLabel_SetAnchorSideTop,
  BoundLabel_GetAnchorSideRight,
  BoundLabel_SetAnchorSideRight,
  BoundLabel_GetAnchorSideBottom,
  BoundLabel_SetAnchorSideBottom,
  BoundLabel_GetBorderSpacing,
  BoundLabel_SetBorderSpacing,
  BoundLabel_GetComponents,
  BoundLabel_GetAnchorSide,
  BoundLabel_StaticClassType;
