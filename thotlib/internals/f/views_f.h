/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern ThotBool PaginatedView ( PtrDocument pDoc,
                                int view );
extern void GetDocAndView ( int frame,
                            PtrDocument *pDoc,
                            int *viewNum );
extern int BuildDocumentViewList ( PtrDocument pDoc,
                                   AvailableView viewList );
extern void ChangeDocumentName ( PtrDocument pDoc,
                                 char *newName );
extern void TtaSetDocumentName ( Document document,
                                 char *documentName );
extern void ViewClosed ( int nFrame );
extern void OpenDefaultViews ( PtrDocument pDoc );
extern int CreateAbstractImage ( PtrDocument pDoc,
                                 int v,
                                 PtrSSchema pSS,
                                 int chosenView,
                                 ThotBool begin,
                                 PtrElement viewRoot );
extern ThotBool IsEmptyDocument ( PtrDocument pDoc );
extern void OpenCreatedView ( PtrDocument pDoc,
                              int view,
                              int X,
                              int Y,
                              int width,
                              int height,
                              ThotBool withMenu,
                              ThotBool withButton,
                              int window_id,
                              int page_id,
                              int page_position,
                              const char * viewName );
extern int OpenViewByName ( PtrDocument pDoc,
                            Name viewName,
                            int X,
                            int Y,
                            int width,
                            int height );
extern void BuildViewList ( PtrDocument pDoc,
                            char *buffer,
                            int *nItems );
extern void CloseView ( PtrDocument pDoc,
                        int viewNb );
extern void TtcCloseView ( Document document,
                           View viewIn );

#else /* __STDC__ */

extern ThotBool PaginatedView ( PtrDocument pDoc,
                                  int view );
extern void GetDocAndView ( int frame,
                              PtrDocument *pDoc,
                              int *viewNum );
extern int BuildDocumentViewList ( PtrDocument pDoc,
                                     AvailableView viewList );
extern void ChangeDocumentName ( PtrDocument pDoc,
                                   char *newName );
extern void TtaSetDocumentName ( Document document,
                                   char *documentName );
extern void ViewClosed ( int nFrame );
extern void OpenDefaultViews ( PtrDocument pDoc );
extern int CreateAbstractImage ( PtrDocument pDoc,
                                   int v,
                                   PtrSSchema pSS,
                                   int chosenView,
                                   ThotBool begin,
                                   PtrElement viewRoot );
extern ThotBool IsEmptyDocument ( PtrDocument pDoc );
extern void OpenCreatedView ( PtrDocument pDoc,
                                int view,
                                int X,
                                int Y,
                                int width,
                                int height,
                                ThotBool withMenu,
                                ThotBool withButton,
                                int window_id,
                                int page_id,
                                int page_position,
                                const char * viewName );
extern int OpenViewByName ( PtrDocument pDoc,
                              Name viewName,
                              int X,
                              int Y,
                              int width,
                              int height );
extern void BuildViewList ( PtrDocument pDoc,
                              char *buffer,
                              int *nItems );
extern void CloseView ( PtrDocument pDoc,
                          int viewNb );
extern void TtcCloseView ( Document document,
                             View viewIn );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
