/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern int GetPageBoxType ( PtrElement pEl,
                            PtrDocument pDoc,
                            int viewNb,
                            PtrPSchema * pSchPPage );
extern int GetPageCounter ( PtrElement pEl,
                            PtrDocument pDoc,
                            int viewNb,
                            PtrPSchema * pSchPPage );
extern void ApplPage ( PtrElement pEl,
                       PtrDocument pDoc,
                       DocViewNumber viewNb,
                       int viewSch,
                       int TypeP,
                       PtrPSchema pSchPPage,
                       PtrAbstractBox pNewAbbox );

#else /* __STDC__ */

extern int GetPageBoxType ( PtrElement pEl,
                              PtrDocument pDoc,
                              int viewNb,
                              PtrPSchema * pSchPPage );
extern int GetPageCounter ( PtrElement pEl,
                              PtrDocument pDoc,
                              int viewNb,
                              PtrPSchema * pSchPPage );
extern void ApplPage ( PtrElement pEl,
                         PtrDocument pDoc,
                         DocViewNumber viewNb,
                         int viewSch,
                         int TypeP,
                         PtrPSchema pSchPPage,
                         PtrAbstractBox pNewAbbox );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
