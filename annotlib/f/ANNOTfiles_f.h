/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern void ANNOT_SetPath ( Document document );
extern Document ANNOT_NewDocument ( Document doc,
                                    AnnotMode mode );
extern AnnotMeta *GetMetaData ( Document doc,
                                Document doc_annot );
extern void ANNOT_LoadAnnotation ( Document doc,
                                   Document docAnnot );
extern void ANNOT_ReloadAnnotMeta ( Document annotDoc );
extern void ANNOT_InitDocumentMeta ( Document doc,
                                     Document docAnnot,
                                     AnnotMeta *annot,
                                     char *source_doc_title );
extern void ANNOT_InitDocumentBody ( Document docAnnot,
                                     char *source_doc_title );
extern Element ANNOT_AddThreadItem ( Document doc,
                                     AnnotMeta *annot );
extern void ANNOT_DeleteThread ( Document thread_doc );
extern void ANNOT_BuildThread ( Document thread_doc );
extern void ANNOT_ToggleThread ( Document thread_doc,
                                 Document annot_doc,
                                 ThotBool turnOn );
extern Document ANNOT_GetThreadDoc ( Document thread_doc );
extern void ANNOT_UpdateThreadItem ( Document doc,
                                     AnnotMeta *annot,
                                     char *body_url );
extern void ANNOT_InitDocumentStructure ( Document doc,
                                          Document docAnnot,
                                          AnnotMeta *annot,
                                          AnnotMode mode );
extern void ANNOT_PrepareAnnotView ( Document document );
extern ThotBool ANNOT_LocalSave ( Document doc_annot,
                                  char *html_filename );

#else /* __STDC__ */

extern void ANNOT_SetPath ( Document document );
extern Document ANNOT_NewDocument ( Document doc,
                                      AnnotMode mode );
extern AnnotMeta *GetMetaData ( Document doc,
                                  Document doc_annot );
extern void ANNOT_LoadAnnotation ( Document doc,
                                     Document docAnnot );
extern void ANNOT_ReloadAnnotMeta ( Document annotDoc );
extern void ANNOT_InitDocumentMeta ( Document doc,
                                       Document docAnnot,
                                       AnnotMeta *annot,
                                       char *source_doc_title );
extern void ANNOT_InitDocumentBody ( Document docAnnot,
                                       char *source_doc_title );
extern Element ANNOT_AddThreadItem ( Document doc,
                                       AnnotMeta *annot );
extern void ANNOT_DeleteThread ( Document thread_doc );
extern void ANNOT_BuildThread ( Document thread_doc );
extern void ANNOT_ToggleThread ( Document thread_doc,
                                   Document annot_doc,
                                   ThotBool turnOn );
extern Document ANNOT_GetThreadDoc ( Document thread_doc );
extern void ANNOT_UpdateThreadItem ( Document doc,
                                       AnnotMeta *annot,
                                       char *body_url );
extern void ANNOT_InitDocumentStructure ( Document doc,
                                            Document docAnnot,
                                            AnnotMeta *annot,
                                            AnnotMode mode );
extern void ANNOT_PrepareAnnotView ( Document document );
extern ThotBool ANNOT_LocalSave ( Document doc_annot,
                                    char *html_filename );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
