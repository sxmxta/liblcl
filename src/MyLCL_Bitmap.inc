
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function Bitmap_Create: TBitmap; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TBitmap.Create;
  handleExceptionEnd
end;

procedure Bitmap_Free(AObj: TBitmap); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Bitmap_LoadFromDevice(AObj: TBitmap; ADc: HDC); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromDevice(ADc);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Bitmap_EndUpdate(AObj: TBitmap; AStreamIsValid: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate(AStreamIsValid);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Bitmap_BeginUpdate(AObj: TBitmap; ACanvasOnly: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate(ACanvasOnly);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Bitmap_Clear(AObj: TBitmap); extdecl;
begin
  handleExceptionBegin
  AObj.Clear;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Bitmap_Assign(AObj: TBitmap; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Bitmap_FreeImage(AObj: TBitmap); extdecl;
begin
  handleExceptionBegin
  AObj.FreeImage;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Bitmap_HandleAllocated(AObj: TBitmap): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.HandleAllocated;
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Bitmap_LoadFromStream(AObj: TBitmap; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Bitmap_SaveToStream(AObj: TBitmap; Stream: TStream); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Bitmap_SetSize(AObj: TBitmap; AWidth: Integer; AHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetSize(AWidth, AHeight);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Bitmap_LoadFromResourceName(AObj: TBitmap; Instance: NativeUInt; ResName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromResourceName(Instance, ResName);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Bitmap_LoadFromResourceID(AObj: TBitmap; Instance: NativeUInt; ResID: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromResourceID(Instance, ResID);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Bitmap_Equals(AObj: TBitmap; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Bitmap_LoadFromFile(AObj: TBitmap; Filename: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromFile(Filename);
  handleExceptionEnd
end;

//CLASSMETHOD:
procedure Bitmap_SaveToFile(AObj: TBitmap; Filename: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SaveToFile(Filename);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Bitmap_GetNamePath(AObj: TBitmap): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Bitmap_ClassType(AObj: TBitmap): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Bitmap_ClassName(AObj: TBitmap): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Bitmap_InstanceSize(AObj: TBitmap): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Bitmap_InheritsFrom(AObj: TBitmap; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Bitmap_GetHashCode(AObj: TBitmap): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Bitmap_ToString(AObj: TBitmap): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function Bitmap_GetCanvas(AObj: TBitmap): TCanvas; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.Canvas;
  handleExceptionEnd
end;

function Bitmap_GetHandle(AObj: TBitmap): HBITMAP; extdecl;
begin
{$ifdef UsehandleException}Result := HBITMAP(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

procedure Bitmap_SetHandle(AObj: TBitmap; AValue: HBITMAP); extdecl;
begin
  handleExceptionBegin
  AObj.Handle := AValue;
  handleExceptionEnd
end;

function Bitmap_GetHandleType(AObj: TBitmap): TBitmapHandleType; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TBitmapHandleType);{$endif}
  handleExceptionBegin
  Result :=  AObj.HandleType;
  handleExceptionEnd
end;

procedure Bitmap_SetHandleType(AObj: TBitmap; AValue: TBitmapHandleType); extdecl;
begin
  handleExceptionBegin
  AObj.HandleType := AValue;
  handleExceptionEnd
end;

function Bitmap_GetMaskHandle(AObj: TBitmap): HBITMAP; extdecl;
begin
{$ifdef UsehandleException}Result := HBITMAP(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.MaskHandle;
  handleExceptionEnd
end;

procedure Bitmap_SetMaskHandle(AObj: TBitmap; AValue: HBITMAP); extdecl;
begin
  handleExceptionBegin
  AObj.MaskHandle := AValue;
  handleExceptionEnd
end;

function Bitmap_GetPixelFormat(AObj: TBitmap): TPixelFormat; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TPixelFormat);{$endif}
  handleExceptionBegin
  Result :=  AObj.PixelFormat;
  handleExceptionEnd
end;

procedure Bitmap_SetPixelFormat(AObj: TBitmap; AValue: TPixelFormat); extdecl;
begin
  handleExceptionBegin
  AObj.PixelFormat := AValue;
  handleExceptionEnd
end;

function Bitmap_GetTransparentMode(AObj: TBitmap): TTransparentMode; extdecl;
begin
{$ifdef UsehandleException}Result := Low(TTransparentMode);{$endif}
  handleExceptionBegin
  Result :=  AObj.TransparentMode;
  handleExceptionEnd
end;

procedure Bitmap_SetTransparentMode(AObj: TBitmap; AValue: TTransparentMode); extdecl;
begin
  handleExceptionBegin
  AObj.TransparentMode := AValue;
  handleExceptionEnd
end;

function Bitmap_GetEmpty(AObj: TBitmap): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Empty;
  handleExceptionEnd
end;

function Bitmap_GetHeight(AObj: TBitmap): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure Bitmap_SetHeight(AObj: TBitmap; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function Bitmap_GetModified(AObj: TBitmap): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Modified;
  handleExceptionEnd
end;

procedure Bitmap_SetModified(AObj: TBitmap; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Modified := AValue;
  handleExceptionEnd
end;

function Bitmap_GetPalette(AObj: TBitmap): HPALETTE; extdecl;
begin
{$ifdef UsehandleException}Result := HPALETTE(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Palette;
  handleExceptionEnd
end;

procedure Bitmap_SetPalette(AObj: TBitmap; AValue: HPALETTE); extdecl;
begin
  handleExceptionBegin
  AObj.Palette := AValue;
  handleExceptionEnd
end;

function Bitmap_GetPaletteModified(AObj: TBitmap): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.PaletteModified;
  handleExceptionEnd
end;

procedure Bitmap_SetPaletteModified(AObj: TBitmap; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.PaletteModified := AValue;
  handleExceptionEnd
end;

function Bitmap_GetTransparent(AObj: TBitmap): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Transparent;
  handleExceptionEnd
end;

procedure Bitmap_SetTransparent(AObj: TBitmap; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Transparent := AValue;
  handleExceptionEnd
end;

function Bitmap_GetWidth(AObj: TBitmap): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure Bitmap_SetWidth(AObj: TBitmap; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure Bitmap_SetOnChange(AObj: TBitmap; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

function Bitmap_GetScanLine(AObj: TBitmap; Row: Integer): Pointer; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  AObj.ScanLine[Row];
  handleExceptionEnd
end;

function Bitmap_StaticClassType: TClass; extdecl;
begin
  Result := TBitmap;
end;

exports
  Bitmap_Create,
  Bitmap_Free,
  Bitmap_LoadFromDevice,
  Bitmap_EndUpdate,
  Bitmap_BeginUpdate,
  Bitmap_Clear,
  Bitmap_Assign,
  Bitmap_FreeImage,
  Bitmap_HandleAllocated,
  Bitmap_LoadFromStream,
  Bitmap_SaveToStream,
  Bitmap_SetSize,
  Bitmap_LoadFromResourceName,
  Bitmap_LoadFromResourceID,
  Bitmap_Equals,
  Bitmap_LoadFromFile,
  Bitmap_SaveToFile,
  Bitmap_GetNamePath,
  Bitmap_ClassType,
  Bitmap_ClassName,
  Bitmap_InstanceSize,
  Bitmap_InheritsFrom,
  Bitmap_GetHashCode,
  Bitmap_ToString,
  Bitmap_GetCanvas,
  Bitmap_GetHandle,
  Bitmap_SetHandle,
  Bitmap_GetHandleType,
  Bitmap_SetHandleType,
  Bitmap_GetMaskHandle,
  Bitmap_SetMaskHandle,
  Bitmap_GetPixelFormat,
  Bitmap_SetPixelFormat,
  Bitmap_GetTransparentMode,
  Bitmap_SetTransparentMode,
  Bitmap_GetEmpty,
  Bitmap_GetHeight,
  Bitmap_SetHeight,
  Bitmap_GetModified,
  Bitmap_SetModified,
  Bitmap_GetPalette,
  Bitmap_SetPalette,
  Bitmap_GetPaletteModified,
  Bitmap_SetPaletteModified,
  Bitmap_GetTransparent,
  Bitmap_SetTransparent,
  Bitmap_GetWidth,
  Bitmap_SetWidth,
  Bitmap_SetOnChange,
  Bitmap_GetScanLine,
  Bitmap_StaticClassType;
