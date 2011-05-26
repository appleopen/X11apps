#include "x11.h"

/* common.c */
extern void enterprocedure (char *s);
extern void warn (char *s);
extern void panic (char *s);
extern void *Malloc (long n);
extern void Free (void *p);
extern void SetSignalHandling (void);
extern void SetUpConnectionSocket (int iport, void (*connectionFunc) (int));

/* decode11.c */
extern void InitReplyQ (void);
extern void FlushReplyQ (FD fd);
extern short CheckReplyTable (FD fd, short SequenceNumber, short *minorp);
extern void ReplyExpected (FD fd, short Request);
extern void ExtendedReplyExpected (FD fd, short Request, short RequestMinor);
extern void KeepLastReplyExpected (void);

extern void DecodeRequest	(FD fd, const unsigned char *buf, long n);
extern void DecodeReply		(FD fd, const unsigned char *buf, long n);
extern void DecodeError		(FD fd, const unsigned char *buf, long n);
extern void DecodeEvent		(FD fd, const unsigned char *buf, long n);

/* print11.c */
extern void PrintSetUpMessage (const unsigned char *buf);
extern void PrintSetUpReply (const unsigned char *buf);

extern void RequestError (const unsigned char *buf);
extern void ValueError (const unsigned char *buf);
extern void WindowError (const unsigned char *buf);
extern void PixmapError (const unsigned char *buf);
extern void AtomError (const unsigned char *buf);
extern void CursorError (const unsigned char *buf);
extern void FontError (const unsigned char *buf);
extern void MatchError (const unsigned char *buf);
extern void DrawableError (const unsigned char *buf);
extern void AccessError (const unsigned char *buf);
extern void AllocError (const unsigned char *buf);
extern void ColormapError (const unsigned char *buf);
extern void GContextError (const unsigned char *buf);
extern void IDChoiceError (const unsigned char *buf);
extern void NameError (const unsigned char *buf);
extern void LengthError (const unsigned char *buf);
extern void ImplementationError (const unsigned char *buf);
extern void UnknownError (const unsigned char *buf);

extern void KeyPressEvent (const unsigned char *buf);
extern void KeyReleaseEvent (const unsigned char *buf);
extern void ButtonPressEvent (const unsigned char *buf);
extern void ButtonReleaseEvent (const unsigned char *buf);
extern void MotionNotifyEvent (const unsigned char *buf);
extern void EnterNotifyEvent (const unsigned char *buf);
extern void LeaveNotifyEvent (const unsigned char *buf);
extern void FocusInEvent (const unsigned char *buf);
extern void FocusOutEvent (const unsigned char *buf);
extern void KeymapNotifyEvent (const unsigned char *buf);
extern void ExposeEvent (const unsigned char *buf);
extern void GraphicsExposureEvent (const unsigned char *buf);
extern void NoExposureEvent (const unsigned char *buf);
extern void VisibilityNotifyEvent (const unsigned char *buf);
extern void CreateNotifyEvent (const unsigned char *buf);
extern void DestroyNotifyEvent (const unsigned char *buf);
extern void UnmapNotifyEvent (const unsigned char *buf);
extern void MapNotifyEvent (const unsigned char *buf);
extern void MapRequestEvent (const unsigned char *buf);
extern void ReparentNotifyEvent (const unsigned char *buf);
extern void ConfigureNotifyEvent (const unsigned char *buf);
extern void ConfigureRequestEvent (const unsigned char *buf);
extern void GravityNotifyEvent (const unsigned char *buf);
extern void ResizeRequestEvent (const unsigned char *buf);
extern void CirculateNotifyEvent (const unsigned char *buf);
extern void CirculateRequestEvent (const unsigned char *buf);
extern void PropertyNotifyEvent (const unsigned char *buf);
extern void SelectionClearEvent (const unsigned char *buf);
extern void SelectionRequestEvent (const unsigned char *buf);
extern void SelectionNotifyEvent (const unsigned char *buf);
extern void ColormapNotifyEvent (const unsigned char *buf);
extern void ClientMessageEvent (const unsigned char *buf);
extern void MappingNotifyEvent (const unsigned char *buf);
extern void UnknownGenericEvent (const unsigned char *buf);
extern void UnknownEvent (const unsigned char *buf);

extern void ExtendedRequest (int fd, const unsigned char *buf);
extern void UnknownReply (const unsigned char *buf);

extern void CreateWindow (FD fd, const unsigned char *buf);
extern void ChangeWindowAttributes (FD fd, const unsigned char *buf);
extern void GetWindowAttributes (FD fd, const unsigned char *buf);
extern void GetWindowAttributesReply (const unsigned char *buf);
extern void DestroyWindow (FD fd, const unsigned char *buf);
extern void DestroySubwindows (FD fd, const unsigned char *buf);
extern void ChangeSaveSet (FD fd, const unsigned char *buf);
extern void ReparentWindow (FD fd, const unsigned char *buf);
extern void MapWindow (FD fd, const unsigned char *buf);
extern void MapSubwindows (FD fd, const unsigned char *buf);
extern void UnmapWindow (FD fd, const unsigned char *buf);
extern void UnmapSubwindows (FD fd, const unsigned char *buf);
extern void ConfigureWindow (FD fd, const unsigned char *buf);
extern void CirculateWindow (FD fd, const unsigned char *buf);
extern void GetGeometry (FD fd, const unsigned char *buf);
extern void GetGeometryReply (const unsigned char *buf);
extern void QueryTree (FD fd, const unsigned char *buf);
extern void QueryTreeReply (const unsigned char *buf);
extern void InternAtom (FD fd, const unsigned char *buf);
extern void InternAtomReply (const unsigned char *buf);
extern void GetAtomName (FD fd, const unsigned char *buf);
extern void GetAtomNameReply (const unsigned char *buf);
extern void ChangeProperty (FD fd, const unsigned char *buf);
extern void DeleteProperty (FD fd, const unsigned char *buf);
extern void GetProperty (FD fd, const unsigned char *buf);
extern void GetPropertyReply (const unsigned char *buf);
extern void ListProperties (FD fd, const unsigned char *buf);
extern void ListPropertiesReply (const unsigned char *buf);
extern void SetSelectionOwner (FD fd, const unsigned char *buf);
extern void GetSelectionOwner (FD fd, const unsigned char *buf);
extern void GetSelectionOwnerReply (const unsigned char *buf);
extern void ConvertSelection (FD fd, const unsigned char *buf);
extern void SendEvent (FD fd, const unsigned char *buf);
extern void GrabPointer (FD fd, const unsigned char *buf);
extern void GrabPointerReply (const unsigned char *buf);
extern void UngrabPointer (FD fd, const unsigned char *buf);
extern void GrabButton (FD fd, const unsigned char *buf);
extern void UngrabButton (FD fd, const unsigned char *buf);
extern void ChangeActivePointerGrab (FD fd, const unsigned char *buf);
extern void GrabKeyboard (FD fd, const unsigned char *buf);
extern void GrabKeyboardReply (const unsigned char *buf);
extern void UngrabKeyboard (FD fd, const unsigned char *buf);
extern void GrabKey (FD fd, const unsigned char *buf);
extern void UngrabKey (FD fd, const unsigned char *buf);
extern void AllowEvents (FD fd, const unsigned char *buf);
extern void GrabServer (FD fd, const unsigned char *buf);
extern void UngrabServer (FD fd, const unsigned char *buf);
extern void QueryPointer (FD fd, const unsigned char *buf);
extern void QueryPointerReply (const unsigned char *buf);
extern void GetMotionEvents (FD fd, const unsigned char *buf);
extern void GetMotionEventsReply (const unsigned char *buf);
extern void TranslateCoordinates (FD fd, const unsigned char *buf);
extern void TranslateCoordinatesReply (const unsigned char *buf);
extern void WarpPointer (FD fd, const unsigned char *buf);
extern void SetInputFocus (FD fd, const unsigned char *buf);
extern void GetInputFocus (FD fd, const unsigned char *buf);
extern void GetInputFocusReply (const unsigned char *buf);
extern void QueryKeymap (FD fd, const unsigned char *buf);
extern void QueryKeymapReply (const unsigned char *buf);
extern void OpenFont (FD fd, const unsigned char *buf);
extern void CloseFont (FD fd, const unsigned char *buf);
extern void QueryFont (FD fd, const unsigned char *buf);
extern void QueryFontReply (const unsigned char *buf);
extern void QueryTextExtents (FD fd, const unsigned char *buf);
extern void QueryTextExtentsReply (const unsigned char *buf);
extern void ListFonts (FD fd, const unsigned char *buf);
extern void ListFontsReply (const unsigned char *buf);
extern void ListFontsWithInfo (FD fd, const unsigned char *buf);
extern void ListFontsWithInfoReply (const unsigned char *buf);
extern void SetFontPath (FD fd, const unsigned char *buf);
extern void GetFontPath (FD fd, const unsigned char *buf);
extern void GetFontPathReply (const unsigned char *buf);
extern void CreatePixmap (FD fd, const unsigned char *buf);
extern void FreePixmap (FD fd, const unsigned char *buf);
extern void CreateGC (FD fd, const unsigned char *buf);
extern void ChangeGC (FD fd, const unsigned char *buf);
extern void CopyGC (FD fd, const unsigned char *buf);
extern void SetDashes (FD fd, const unsigned char *buf);
extern void SetClipRectangles (FD fd, const unsigned char *buf);
extern void FreeGC (FD fd, const unsigned char *buf);
extern void ClearArea (FD fd, const unsigned char *buf);
extern void CopyArea (FD fd, const unsigned char *buf);
extern void CopyPlane (FD fd, const unsigned char *buf);
extern void PolyPoint (FD fd, const unsigned char *buf);
extern void PolyLine (FD fd, const unsigned char *buf);
extern void PolySegment (FD fd, const unsigned char *buf);
extern void PolyRectangle (FD fd, const unsigned char *buf);
extern void PolyArc (FD fd, const unsigned char *buf);
extern void FillPoly (FD fd, const unsigned char *buf);
extern void PolyFillRectangle (FD fd, const unsigned char *buf);
extern void PolyFillArc (FD fd, const unsigned char *buf);
extern void PutImage (FD fd, const unsigned char *buf);
extern void GetImage (FD fd, const unsigned char *buf);
extern void GetImageReply (const unsigned char *buf);
extern void PolyText8 (FD fd, const unsigned char *buf);
extern void PolyText16 (FD fd, const unsigned char *buf);
extern void ImageText8 (FD fd, const unsigned char *buf);
extern void ImageText16 (FD fd, const unsigned char *buf);
extern void CreateColormap (FD fd, const unsigned char *buf);
extern void FreeColormap (FD fd, const unsigned char *buf);
extern void CopyColormapAndFree (FD fd, const unsigned char *buf);
extern void InstallColormap (FD fd, const unsigned char *buf);
extern void UninstallColormap (FD fd, const unsigned char *buf);
extern void ListInstalledColormaps (FD fd, const unsigned char *buf);
extern void ListInstalledColormapsReply (const unsigned char *buf);
extern void AllocColor (FD fd, const unsigned char *buf);
extern void AllocColorReply (const unsigned char *buf);
extern void AllocNamedColor (FD fd, const unsigned char *buf);
extern void AllocNamedColorReply (const unsigned char *buf);
extern void AllocColorCells (FD fd, const unsigned char *buf);
extern void AllocColorCellsReply (const unsigned char *buf);
extern void AllocColorPlanes (FD fd, const unsigned char *buf);
extern void AllocColorPlanesReply (const unsigned char *buf);
extern void FreeColors (FD fd, const unsigned char *buf);
extern void StoreColors (FD fd, const unsigned char *buf);
extern void StoreNamedColor (FD fd, const unsigned char *buf);
extern void QueryColors (FD fd, const unsigned char *buf);
extern void QueryColorsReply (const unsigned char *buf);
extern void LookupColor (FD fd, const unsigned char *buf);
extern void LookupColorReply (const unsigned char *buf);
extern void CreateCursor (FD fd, const unsigned char *buf);
extern void CreateGlyphCursor (FD fd, const unsigned char *buf);
extern void FreeCursor (FD fd, const unsigned char *buf);
extern void RecolorCursor (FD fd, const unsigned char *buf);
extern void QueryBestSize (FD fd, const unsigned char *buf);
extern void QueryBestSizeReply (const unsigned char *buf);
extern void QueryExtension (FD fd, const unsigned char *buf);
extern void QueryExtensionReply (const unsigned char *buf);
extern void ListExtensions (FD fd, const unsigned char *buf);
extern void ListExtensionsReply (const unsigned char *buf);
extern void ChangeKeyboardMapping (FD fd, const unsigned char *buf);
extern void GetKeyboardMapping (FD fd, const unsigned char *buf);
extern void GetKeyboardMappingReply (const unsigned char *buf);
extern void ChangeKeyboardControl (FD fd, const unsigned char *buf);
extern void GetKeyboardControl (FD fd, const unsigned char *buf);
extern void GetKeyboardControlReply (const unsigned char *buf);
extern void Bell (FD fd, const unsigned char *buf);
extern void ChangePointerControl (FD fd, const unsigned char *buf);
extern void GetPointerControl (FD fd, const unsigned char *buf);
extern void GetPointerControlReply (const unsigned char *buf);
extern void SetScreenSaver (FD fd, const unsigned char *buf);
extern void GetScreenSaver (FD fd, const unsigned char *buf);
extern void GetScreenSaverReply (const unsigned char *buf);
extern void ChangeHosts (FD fd, const unsigned char *buf);
extern void ListHosts (FD fd, const unsigned char *buf);
extern void ListHostsReply (const unsigned char *buf);
extern void SetAccessControl (FD fd, const unsigned char *buf);
extern void SetCloseDownMode (FD fd, const unsigned char *buf);
extern void KillClient (FD fd, const unsigned char *buf);
extern void RotateProperties (FD fd, const unsigned char *buf);
extern void ForceScreenSaver (FD fd, const unsigned char *buf);
extern void SetPointerMapping (FD fd, const unsigned char *buf);
extern void SetPointerMappingReply (const unsigned char *buf);
extern void GetPointerMapping (FD fd, const unsigned char *buf);
extern void GetPointerMappingReply (const unsigned char *buf);
extern void SetModifierMapping (FD fd, const unsigned char *buf);
extern void SetModifierMappingReply (const unsigned char *buf);
extern void GetModifierMapping (FD fd, const unsigned char *buf);
extern void GetModifierMappingReply (const unsigned char *buf);
extern void NoOperation (FD fd, const unsigned char *buf);

/* prtype.c */
extern void SetIndentLevel (short which);
extern void DumpHexBuffer (const unsigned char *buf, long n);
extern void DumpItem (const char *name, FD fd,
		      const unsigned char *buf, long n);
extern void PrintField (const unsigned char *buf, short start, short length,
			short FieldType, const char *name);
extern int PrintBytes (const unsigned char *buf, long number,
		       const char *name);
extern void PrintValues (const unsigned char *control, int clength, int ctype,
			 const unsigned char *values, const char *name);
extern void PrintTextList8 (const unsigned char *buf, int length,
			    const char *name);
extern void PrintTextList16 (const unsigned char *buf, int length,
			     const char *name);

/* scope.c */
extern void TestBreakPoints (const unsigned char *buf, long n);
extern void TimerExpired (void);
extern void SetUpPair (FD client, FD server);
extern FD FDPair (FD fd);
extern FD ClientHalf (FD fd);
extern FD ServerHalf (FD fd);
extern char *ClientName (FD fd);
extern int ClientNumber (FD fd);
extern void NewConnection (FD fd);
extern void FlushFD (FD fd);
extern short GetServerport (void);
extern void ReadCommands (void);

/* server.c */
extern FD ConnectToServer (Boolean report);
extern void ProcessBuffer (FD fd, const unsigned char *buf, long n);
extern void ReportFromClient (FD fd, const unsigned char *buf, long n);
extern void ReportFromServer (FD fd, const unsigned char *buf, long n);
extern void PrintTime (void);
extern void SetBufLimit (FD fd);
extern void ClearBufLimit (FD fd);
extern void StartClientConnection (FD fd);
extern void StopClientConnection (FD fd);
extern void StartServerConnection (FD fd);
extern void StopServerConnection (FD fd);
extern long StartSetUpMessage (FD fd, const unsigned char *buf, long n);
extern long StartSetUpReply (FD fd, const unsigned char *buf, long n);

extern long GetXRequestFromName (const char *name);

/* table11.c */
extern void InitializeX11 (void);
extern TYPE DefineType (short typeid, short class, const char *name,
			int (*printproc)(const unsigned char *));
extern void DefineEValue (TYPE type, long value, const char *name);
extern void DefineValues (TYPE type, long value, short length,
			  short ctype, const char *name);
extern long GetEValue (short typeid, const char *name);
