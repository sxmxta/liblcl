
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function DragObject_Create(AOwner: TControl): TDragObject; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TDragObject.Create(AOwner);
  handleExceptionEnd
end;

procedure DragObject_Free(AObj: TDragObject); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure DragObject_Assign(AObj: TDragObject; Source: TDragObject); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure DragObject_HideDragImage(AObj: TDragObject); extdecl;
begin
  handleExceptionBegin
  AObj.HideDragImage;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure DragObject_ShowDragImage(AObj: TDragObject); extdecl;
begin
  handleExceptionBegin
  AObj.ShowDragImage;
  handleExceptionEnd
end;

//CLASSMETHOD:
function DragObject_ClassType(AObj: TDragObject): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function DragObject_ClassName(AObj: TDragObject): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function DragObject_InstanceSize(AObj: TDragObject): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function DragObject_InheritsFrom(AObj: TDragObject; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function DragObject_Equals(AObj: TDragObject; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function DragObject_GetHashCode(AObj: TDragObject): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function DragObject_ToString(AObj: TDragObject): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function DragObject_GetAlwaysShowDragImages(AObj: TDragObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.AlwaysShowDragImages;
  handleExceptionEnd
end;

procedure DragObject_SetAlwaysShowDragImages(AObj: TDragObject; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AlwaysShowDragImages := AValue;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure DragObject_GetDragPos(AObj: TDragObject; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragPos;
  handleExceptionEnd
end;

//PARAMS:2=nonPtr
procedure DragObject_SetDragPos(AObj: TDragObject; var AValue: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.DragPos := AValue;
  handleExceptionEnd
end;

function DragObject_GetDragTarget(AObj: TDragObject): Pointer; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.DragTarget;
  handleExceptionEnd
end;

procedure DragObject_SetDragTarget(AObj: TDragObject; AValue: Pointer); extdecl;
begin
  handleExceptionBegin
  AObj.DragTarget := AValue;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure DragObject_GetDragTargetPos(AObj: TDragObject; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragTargetPos;
  handleExceptionEnd
end;

//PARAMS:2=nonPtr
procedure DragObject_SetDragTargetPos(AObj: TDragObject; var AValue: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.DragTargetPos := AValue;
  handleExceptionEnd
end;

function DragObject_GetDropped(AObj: TDragObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Dropped;
  handleExceptionEnd
end;

function DragObject_StaticClassType: TClass; extdecl;
begin
  Result := TDragObject;
end;

exports
  DragObject_Create,
  DragObject_Free,
  DragObject_Assign,
  DragObject_HideDragImage,
  DragObject_ShowDragImage,
  DragObject_ClassType,
  DragObject_ClassName,
  DragObject_InstanceSize,
  DragObject_InheritsFrom,
  DragObject_Equals,
  DragObject_GetHashCode,
  DragObject_ToString,
  DragObject_GetAlwaysShowDragImages,
  DragObject_SetAlwaysShowDragImages,
  DragObject_GetDragPos,
  DragObject_SetDragPos,
  DragObject_GetDragTarget,
  DragObject_SetDragTarget,
  DragObject_GetDragTargetPos,
  DragObject_SetDragTargetPos,
  DragObject_GetDropped,
  DragObject_StaticClassType;

