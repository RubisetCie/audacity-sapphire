/*  SPDX-License-Identifier: GPL-2.0-or-later */
/*!********************************************************************

  Audacity: A Digital Audio Editor

  ShareAudioToolbar.h

  Dmitry Vedenko

**********************************************************************/
#pragma once

#include "toolbars/ToolBar.h"

class AudacityProject;

namespace audacity::cloud
{
class ShareAudioToolbar final : public ToolBar
{
public:
   static Identifier ID();

   explicit ShareAudioToolbar(AudacityProject& project);
   ~ShareAudioToolbar() override;

   static ShareAudioToolbar& Get(AudacityProject& project);
   static const ShareAudioToolbar& Get(const AudacityProject& project);

private:
   void Create(wxWindow* parent) override;
   void RegenerateTooltips() override;
   void Populate() override;
   void Repaint(wxDC* dc) override;
   void EnableDisableButtons() override;
   void ReCreateButtons() override;

   AButton* MakeButton(int id, const TranslatableString& label, const wxImage& icon);
   void MakeShareAudioButton();
   void MakeGetEffectsButton();
   void ArrangeButtons();

   AButton* mShareAudioButton {};
   AButton* mGetEffectsButton {};

   enum
   {
      ID_SHARE_AUDIO_BUTTON = 14000,
      ID_GET_EFFECTS_BUTTON = 14001,
      BUTTON_COUNT,
   };

   DECLARE_CLASS(ShareAudioToolbar)
}; // class ShareAudioToolbar
} // namespace audacity::cloud
