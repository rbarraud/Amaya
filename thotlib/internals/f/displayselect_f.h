/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern void DrawHandle ( int handle,
                         int frame,
                         int thick,
                         ... );
extern void DisplayPointSelection ( int frame,
                                    PtrBox pBox,
                                    int pointselect,
                                    ThotBool could_resize );
extern void DisplayBgBoxSelection ( int frame,
                                    PtrBox pBox );
extern void DrawBoxSelection ( int frame,
                               PtrBox pBox );
extern void SetNewSelectionStatus ( int frame,
                                    PtrAbstractBox pAb,
                                    ThotBool status );
extern void DisplayStringSelection ( int frame,
                                     int leftX,
                                     int rightX,
                                     int t,
                                     PtrBox pBox );

#else /* __STDC__ */

extern void DrawHandle ( int handle,
                           int frame,
                           int thick,
                           ... );
extern void DisplayPointSelection ( int frame,
                                      PtrBox pBox,
                                      int pointselect,
                                      ThotBool could_resize );
extern void DisplayBgBoxSelection ( int frame,
                                      PtrBox pBox );
extern void DrawBoxSelection ( int frame,
                                 PtrBox pBox );
extern void SetNewSelectionStatus ( int frame,
                                      PtrAbstractBox pAb,
                                      ThotBool status );
extern void DisplayStringSelection ( int frame,
                                       int leftX,
                                       int rightX,
                                       int t,
                                       PtrBox pBox );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
