/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern ThotBool TypeHasException ( int exceptNum,
                                   int typeNum,
                                   PtrSSchema pSS );
extern PtrElement SearchTypeExcept ( PtrElement root,
                                     PtrElement stopEl,
                                     int TypeExcept,
                                     ThotBool Restrict );
extern ThotBool AttrHasException ( int exceptNum,
                                   int attr,
                                   PtrSSchema pSS );
extern PtrAttribute GetAttrElementWithException ( int exceptNum,
                                                  PtrElement pEl );
extern int GetAttrWithException ( int exceptNum,
                                  PtrSSchema pSS );
extern int GetElemWithException ( int exceptNum,
                                  PtrSSchema pSS );

#else /* __STDC__ */

extern ThotBool TypeHasException ( int exceptNum,
                                     int typeNum,
                                     PtrSSchema pSS );
extern PtrElement SearchTypeExcept ( PtrElement root,
                                       PtrElement stopEl,
                                       int TypeExcept,
                                       ThotBool Restrict );
extern ThotBool AttrHasException ( int exceptNum,
                                     int attr,
                                     PtrSSchema pSS );
extern PtrAttribute GetAttrElementWithException ( int exceptNum,
                                                    PtrElement pEl );
extern int GetAttrWithException ( int exceptNum,
                                    PtrSSchema pSS );
extern int GetElemWithException ( int exceptNum,
                                    PtrSSchema pSS );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
