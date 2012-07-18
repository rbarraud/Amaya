/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern void ApplyInherit ( PRuleType ruleType,
                           PtrAbstractBox pAb,
                           PtrDocument pDoc,
                           ThotBool display );
extern int NumTypePRuleAPI ( PtrPRule pRule );
extern int RuleSetIn ( int num,
                       RuleSet RuleS1 );
extern void RuleSetPut ( RuleSet RuleS1,
                         int num );
extern void RuleSetClr ( RuleSet RuleS1 );
extern ThotBool BothHaveNoSpecRules ( PtrElement pEl1,
                                      PtrElement pEl2 );
extern PtrAbstractBox AbsBoxOfEl ( PtrElement pEl,
                                   int view );
extern void ApplyNewRule ( PtrDocument pDoc,
                           PtrPRule pRule,
                           PtrElement pEl );
extern void ApplyStandardRule ( PtrElement pEl,
                                PtrDocument pDoc,
                                PRuleType ruleType,
                                FunctionType funcType,
                                int viewSch );
extern void ApplyASpecificStyleRule ( PtrPRule pRule,
                                      PtrElement pEl,
                                      PtrDocument pDoc,
                                      ThotBool remove );
extern void ApplyAGenericStyleRule ( Document doc,
                                     PtrSSchema pSS,
                                     int elType,
                                     int attrType,
                                     int presBox,
                                     PtrPRule pRule,
                                     ThotBool remove );
extern void RemoveSpecPresTree ( PtrElement pElRoot,
                                 PtrDocument pDoc,
                                 RuleSet RulesS,
                                 int viewToApply );
extern ThotBool TtaIsCSSPRule ( PRule pRule );
extern void TtaRemovePRule ( Element element,
                             PRule pRule,
                             Document document );
extern void TtaNextPRule ( Element element,
                           PRule * pRule );

#else /* __STDC__ */

extern void ApplyInherit ( PRuleType ruleType,
                             PtrAbstractBox pAb,
                             PtrDocument pDoc,
                             ThotBool display );
extern int NumTypePRuleAPI ( PtrPRule pRule );
extern int RuleSetIn ( int num,
                         RuleSet RuleS1 );
extern void RuleSetPut ( RuleSet RuleS1,
                           int num );
extern void RuleSetClr ( RuleSet RuleS1 );
extern ThotBool BothHaveNoSpecRules ( PtrElement pEl1,
                                        PtrElement pEl2 );
extern PtrAbstractBox AbsBoxOfEl ( PtrElement pEl,
                                     int view );
extern void ApplyNewRule ( PtrDocument pDoc,
                             PtrPRule pRule,
                             PtrElement pEl );
extern void ApplyStandardRule ( PtrElement pEl,
                                  PtrDocument pDoc,
                                  PRuleType ruleType,
                                  FunctionType funcType,
                                  int viewSch );
extern void ApplyASpecificStyleRule ( PtrPRule pRule,
                                        PtrElement pEl,
                                        PtrDocument pDoc,
                                        ThotBool remove );
extern void ApplyAGenericStyleRule ( Document doc,
                                       PtrSSchema pSS,
                                       int elType,
                                       int attrType,
                                       int presBox,
                                       PtrPRule pRule,
                                       ThotBool remove );
extern void RemoveSpecPresTree ( PtrElement pElRoot,
                                   PtrDocument pDoc,
                                   RuleSet RulesS,
                                   int viewToApply );
extern ThotBool TtaIsCSSPRule ( PRule pRule );
extern void TtaRemovePRule ( Element element,
                               PRule pRule,
                               Document document );
extern void TtaNextPRule ( Element element,
                             PRule * pRule );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
