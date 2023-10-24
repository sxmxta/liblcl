
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

//CLASSMETHOD:
procedure GridColumnTitle_Assign(AObj: TGridColumnTitle; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GridColumnTitle_FillTitleDefaultFont(AObj: TGridColumnTitle); extdecl;
begin
  handleExceptionBegin
  AObj.FillTitleDefaultFont;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure GridColumnTitle_FixDesignFontsPPI(AObj: TGridColumnTitle; ADesignTimePPI: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

//CLASSMETHOD:
//PARAMS:3=nonPtr
procedure GridColumnTitle_ScaleFontsPPI(AObj: TGridColumnTitle; AToPPI: Integer; var AProportion: Double); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleFontsPPI(AToPPI, AProportion);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GridColumnTitle_IsDefault(AObj: TGridColumnTitle): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.IsDefault;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GridColumnTitle_GetNamePath(AObj: TGridColumnTitle): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GridColumnTitle_ClassType(AObj: TGridColumnTitle): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GridColumnTitle_ClassName(AObj: TGridColumnTitle): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GridColumnTitle_InstanceSize(AObj: TGridColumnTitle): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GridColumnTitle_InheritsFrom(AObj: TGridColumnTitle; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GridColumnTitle_Equals(AObj: TGridColumnTitle; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function GridColumnTitle_GetHashCode(AObj: TGridColumnTitle): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function GridColumnTitle_ToString(AObj: TGridColumnTitle): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function GridColumnTitle_GetColumn(AObj: TGridColumnTitle): TGridColumn; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Column;
  handleExceptionEnd
end;

function GridColumnTitle_GetAlignment(AObj: TGridColumnTitle): TAlignment; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TAlignment);{$endif}
  handleExceptionBegin
  Result :=  AObj.Alignment;
  handleExceptionEnd
end;

procedure GridColumnTitle_SetAlignment(AObj: TGridColumnTitle; AValue: TAlignment); extdecl;
begin
  handleExceptionBegin
  AObj.Alignment := AValue;
  handleExceptionEnd
end;

function GridColumnTitle_GetCaption(AObj: TGridColumnTitle): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.Caption);
  handleExceptionEnd
end;

procedure GridColumnTitle_SetCaption(AObj: TGridColumnTitle; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Caption := AValue;
  handleExceptionEnd
end;

function GridColumnTitle_GetColor(AObj: TGridColumnTitle): TColor; extdecl;
begin
{$ifdef UsehandleException}Result := TColor(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Color;
  handleExceptionEnd
end;

procedure GridColumnTitle_SetColor(AObj: TGridColumnTitle; AValue: TColor); extdecl;
begin
  handleExceptionBegin
  AObj.Color := AValue;
  handleExceptionEnd
end;

function GridColumnTitle_GetFont(AObj: TGridColumnTitle): TFont; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Font;
  handleExceptionEnd
end;

procedure GridColumnTitle_SetFont(AObj: TGridColumnTitle; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.Font := AValue;
  handleExceptionEnd
end;

function GridColumnTitle_GetImageIndex(AObj: TGridColumnTitle): TImageIndex; extdecl;
begin
{$ifdef UsehandleException}Result := TImageIndex(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.ImageIndex;
  handleExceptionEnd
end;

procedure GridColumnTitle_SetImageIndex(AObj: TGridColumnTitle; AValue: TImageIndex); extdecl;
begin
  handleExceptionBegin
  AObj.ImageIndex := AValue;
  handleExceptionEnd
end;

function GridColumnTitle_GetImageLayout(AObj: TGridColumnTitle): TButtonLayout; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TButtonLayout);{$endif}
  handleExceptionBegin
  Result :=  AObj.ImageLayout;
  handleExceptionEnd
end;

procedure GridColumnTitle_SetImageLayout(AObj: TGridColumnTitle; AValue: TButtonLayout); extdecl;
begin
  handleExceptionBegin
  AObj.ImageLayout := AValue;
  handleExceptionEnd
end;

function GridColumnTitle_GetLayout(AObj: TGridColumnTitle): TTextLayout; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TTextLayout);{$endif}
  handleExceptionBegin
  Result :=  AObj.Layout;
  handleExceptionEnd
end;

procedure GridColumnTitle_SetLayout(AObj: TGridColumnTitle; AValue: TTextLayout); extdecl;
begin
  handleExceptionBegin
  AObj.Layout := AValue;
  handleExceptionEnd
end;

function GridColumnTitle_GetMultiLine(AObj: TGridColumnTitle): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.MultiLine;
  handleExceptionEnd
end;

procedure GridColumnTitle_SetMultiLine(AObj: TGridColumnTitle; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MultiLine := AValue;
  handleExceptionEnd
end;

function GridColumnTitle_GetPrefixOption(AObj: TGridColumnTitle): TPrefixOption; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TPrefixOption);{$endif}
  handleExceptionBegin
  Result :=  AObj.PrefixOption;
  handleExceptionEnd
end;

procedure GridColumnTitle_SetPrefixOption(AObj: TGridColumnTitle; AValue: TPrefixOption); extdecl;
begin
  handleExceptionBegin
  AObj.PrefixOption := AValue;
  handleExceptionEnd
end;

function GridColumnTitle_StaticClassType: TClass; extdecl;
begin
  Result := TGridColumnTitle;
end;

exports
  GridColumnTitle_Assign,
  GridColumnTitle_FillTitleDefaultFont,
  GridColumnTitle_FixDesignFontsPPI,
  GridColumnTitle_ScaleFontsPPI,
  GridColumnTitle_IsDefault,
  GridColumnTitle_GetNamePath,
  GridColumnTitle_ClassType,
  GridColumnTitle_ClassName,
  GridColumnTitle_InstanceSize,
  GridColumnTitle_InheritsFrom,
  GridColumnTitle_Equals,
  GridColumnTitle_GetHashCode,
  GridColumnTitle_ToString,
  GridColumnTitle_GetColumn,
  GridColumnTitle_GetAlignment,
  GridColumnTitle_SetAlignment,
  GridColumnTitle_GetCaption,
  GridColumnTitle_SetCaption,
  GridColumnTitle_GetColor,
  GridColumnTitle_SetColor,
  GridColumnTitle_GetFont,
  GridColumnTitle_SetFont,
  GridColumnTitle_GetImageIndex,
  GridColumnTitle_SetImageIndex,
  GridColumnTitle_GetImageLayout,
  GridColumnTitle_SetImageLayout,
  GridColumnTitle_GetLayout,
  GridColumnTitle_SetLayout,
  GridColumnTitle_GetMultiLine,
  GridColumnTitle_SetMultiLine,
  GridColumnTitle_GetPrefixOption,
  GridColumnTitle_SetPrefixOption,
  GridColumnTitle_StaticClassType;
