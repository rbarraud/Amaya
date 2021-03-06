#ifdef _WX

#ifndef __AMAYAPOPUPLIST_H__
#define __AMAYAPOPUPLIST_H__

#include "wx/wx.h"

/*
 * =====================================================================================
 *        Class:  AmayaPopupList
 * 
 *       Author:  Stephane GULLY
 *      Created:  06/05/2004 04:45:34 PM CET
 * =====================================================================================
 */
class AmayaPopupList : public wxMenu
{

 public:
  DECLARE_DYNAMIC_CLASS(AmayaPopupList)

  AmayaPopupList ( wxWindow * p_parent = NULL, int ref = 0 );
  virtual ~AmayaPopupList();

 protected:
  DECLARE_EVENT_TABLE()
  void OnMenuItem( wxCommandEvent& event );

 protected:
  int m_Ref;
};

#endif // __AMAYAPOPUPLIST_H__

#endif /* #ifdef _WX */
