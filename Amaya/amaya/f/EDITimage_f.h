/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern ThotBool DeleteMap ( NotifyElement * event );
extern void CallbackImage ( int ref,
                            int typedata,
                            char *data );
extern void InitImage ( void );
extern void CreateAreaRect ( Document doc,
                             View view );
extern void CreateAreaCircle ( Document doc,
                               View view );
extern void CreateAreaPoly ( Document doc,
                             View view );
extern void ComputeSRCattribute ( Element el,
                                  Document doc,
                                  Document sourceDocument,
                                  Attribute attr,
                                  char *text );
extern void UpdateSRCattribute ( NotifyOnTarget *event );
extern void SvgImageCreated ( NotifyElement *event );
extern void SRCattrModified ( NotifyAttribute *event );
extern void CreateObject ( Document doc,
                           View view );
extern void AddNewImage ( Document doc,
                          View view,
                          ThotBool isInput,
                          ThotBool isSvg );
extern void CreateImage ( Document doc,
                          View view );
extern void InsertImageOrObject ( Element el,
                                  Document doc );
extern void RegisterSaveAsUpdate ( LoadedImageDesc *desc,
                                   char *newuri );
extern void ClearSaveAsUpdate ( ThotBool withUndo );
extern ThotBool AddLocalResource ( char *fullname,
                                   char *name,
                                   char *url,
                                   Document doc,
                                   LoadedImageDesc **desc,
                                   LoadedImageDesc **list,
                                   ThotBool saveAs );

#else /* __STDC__ */

extern ThotBool DeleteMap ( NotifyElement * event );
extern void CallbackImage ( int ref,
                              int typedata,
                              char *data );
extern void InitImage ( void );
extern void CreateAreaRect ( Document doc,
                               View view );
extern void CreateAreaCircle ( Document doc,
                                 View view );
extern void CreateAreaPoly ( Document doc,
                               View view );
extern void ComputeSRCattribute ( Element el,
                                    Document doc,
                                    Document sourceDocument,
                                    Attribute attr,
                                    char *text );
extern void UpdateSRCattribute ( NotifyOnTarget *event );
extern void SvgImageCreated ( NotifyElement *event );
extern void SRCattrModified ( NotifyAttribute *event );
extern void CreateObject ( Document doc,
                             View view );
extern void AddNewImage ( Document doc,
                            View view,
                            ThotBool isInput,
                            ThotBool isSvg );
extern void CreateImage ( Document doc,
                            View view );
extern void InsertImageOrObject ( Element el,
                                    Document doc );
extern void RegisterSaveAsUpdate ( LoadedImageDesc *desc,
                                     char *newuri );
extern void ClearSaveAsUpdate ( ThotBool withUndo );
extern ThotBool AddLocalResource ( char *fullname,
                                     char *name,
                                     char *url,
                                     Document doc,
                                     LoadedImageDesc **desc,
                                     LoadedImageDesc **list,
                                     ThotBool saveAs );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
