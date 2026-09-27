#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckChoiceButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckChoiceButton)
namespace Liv::Lck::UI {
class LckButtonColors;
}
namespace Liv::Lck::UI {
class LckDoubleButtonTrigger;
}
namespace Liv::Lck {
class LckDiscreetAudioController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace Liv::Lck::UI {
class LckChoiceButton;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UI::LckChoiceButton*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckChoiceButton*, "Liv.Lck.UI", "LckChoiceButton");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckChoiceButton
class CORDL_TYPE LckChoiceButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnSelectionChanged, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSelectionChanged, put=__cordl_internal_set_OnSelectionChanged)) ::System::Action_1<int32_t>*  OnSelectionChanged;

 __declspec(property(get=get_SelectedIndex, put=set_SelectedIndex)) int32_t  SelectedIndex;

/// @brief Field TextColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_TextColor, put=setStaticF_TextColor)) ::UnityEngine::Color  TextColor;

/// @brief Field _audioController, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioController, put=__cordl_internal_set__audioController)) ::UnityW<::Liv::Lck::LckDiscreetAudioController>  _audioController;

/// @brief Field _colors, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::UnityW<::Liv::Lck::UI::LckButtonColors>  _colors;

/// @brief Field _colorsSelected, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorsSelected, put=__cordl_internal_set__colorsSelected)) ::UnityW<::Liv::Lck::UI::LckButtonColors>  _colorsSelected;

/// @brief Field _leftBackground, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftBackground, put=__cordl_internal_set__leftBackground)) ::UnityW<::UnityEngine::UI::Image>  _leftBackground;

/// @brief Field _leftLabel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftLabel, put=__cordl_internal_set__leftLabel)) ::StringW  _leftLabel;

/// @brief Field _leftText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftText, put=__cordl_internal_set__leftText)) ::UnityW<::TMPro::TMP_Text>  _leftText;

/// @brief Field _leftTrigger, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftTrigger, put=__cordl_internal_set__leftTrigger)) ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>  _leftTrigger;

/// @brief Field _rightBackground, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightBackground, put=__cordl_internal_set__rightBackground)) ::UnityW<::UnityEngine::UI::Image>  _rightBackground;

/// @brief Field _rightLabel, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightLabel, put=__cordl_internal_set__rightLabel)) ::StringW  _rightLabel;

/// @brief Field _rightText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightText, put=__cordl_internal_set__rightText)) ::UnityW<::TMPro::TMP_Text>  _rightText;

/// @brief Field _rightTrigger, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightTrigger, put=__cordl_internal_set__rightTrigger)) ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>  _rightTrigger;

/// @brief Field _selectedIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectedIndex, put=__cordl_internal_set__selectedIndex)) int32_t  _selectedIndex;

/// @brief Field _title, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__title, put=__cordl_internal_set__title)) ::StringW  _title;

/// @brief Field _titleText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__titleText, put=__cordl_internal_set__titleText)) ::UnityW<::TMPro::TMP_Text>  _titleText;

/// @brief Method GetColorsForSide, addr 0x9d4f6f8, size 0x28, virtual false, abstract: false, final false
inline ::UnityW<::Liv::Lck::UI::LckButtonColors> GetColorsForSide(bool  isRight) ;

static inline ::Liv::Lck::UI::LckChoiceButton* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x9d4f8a8, size 0xc, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// @brief Method OnDisable, addr 0x9d4f0d0, size 0x23c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d4e9d0, size 0x244, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnter, addr 0x9d4f674, size 0x84, virtual false, abstract: false, final false
inline void OnEnter(bool  isRight) ;

/// @brief Method OnExit, addr 0x9d4f8a4, size 0x4, virtual false, abstract: false, final false
inline void OnExit(bool  isRight) ;

/// @brief Method OnPressDown, addr 0x9d4f720, size 0xcc, virtual false, abstract: false, final false
inline void OnPressDown(bool  isRight) ;

/// @brief Method OnPressUp, addr 0x9d4f7ec, size 0xb8, virtual false, abstract: false, final false
inline void OnPressUp(bool  isRight, bool  usingCollider) ;

/// @brief Method OnValidate, addr 0x9d4f8b4, size 0x114, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SelectLeft, addr 0x9d4f5cc, size 0x50, virtual false, abstract: false, final false
inline void SelectLeft() ;

/// @brief Method SelectRight, addr 0x9d4f61c, size 0x58, virtual false, abstract: false, final false
inline void SelectRight() ;

/// @brief Method SetSelectedIndex, addr 0x9d4e9c0, size 0x10, virtual false, abstract: false, final false
inline void SetSelectedIndex(int32_t  index) ;

/// @brief Method UpdateVisuals, addr 0x9d4eed4, size 0x1fc, virtual false, abstract: false, final false
inline void UpdateVisuals() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnSelectionChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnSelectionChanged() ;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController> const& __cordl_internal_get__audioController() const;

constexpr ::UnityW<::Liv::Lck::LckDiscreetAudioController>& __cordl_internal_get__audioController() ;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& __cordl_internal_get__colors() const;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& __cordl_internal_get__colors() ;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& __cordl_internal_get__colorsSelected() const;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& __cordl_internal_get__colorsSelected() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__leftBackground() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__leftBackground() ;

constexpr ::StringW const& __cordl_internal_get__leftLabel() const;

constexpr ::StringW& __cordl_internal_get__leftLabel() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__leftText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__leftText() ;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger> const& __cordl_internal_get__leftTrigger() const;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>& __cordl_internal_get__leftTrigger() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__rightBackground() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__rightBackground() ;

constexpr ::StringW const& __cordl_internal_get__rightLabel() const;

constexpr ::StringW& __cordl_internal_get__rightLabel() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__rightText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__rightText() ;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger> const& __cordl_internal_get__rightTrigger() const;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>& __cordl_internal_get__rightTrigger() ;

constexpr int32_t const& __cordl_internal_get__selectedIndex() const;

constexpr int32_t& __cordl_internal_get__selectedIndex() ;

constexpr ::StringW const& __cordl_internal_get__title() const;

constexpr ::StringW& __cordl_internal_get__title() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__titleText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__titleText() ;

constexpr void __cordl_internal_set_OnSelectionChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__audioController(::UnityW<::Liv::Lck::LckDiscreetAudioController>  value) ;

constexpr void __cordl_internal_set__colors(::UnityW<::Liv::Lck::UI::LckButtonColors>  value) ;

constexpr void __cordl_internal_set__colorsSelected(::UnityW<::Liv::Lck::UI::LckButtonColors>  value) ;

constexpr void __cordl_internal_set__leftBackground(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__leftLabel(::StringW  value) ;

constexpr void __cordl_internal_set__leftText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__leftTrigger(::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>  value) ;

constexpr void __cordl_internal_set__rightBackground(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__rightLabel(::StringW  value) ;

constexpr void __cordl_internal_set__rightText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__rightTrigger(::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>  value) ;

constexpr void __cordl_internal_set__selectedIndex(int32_t  value) ;

constexpr void __cordl_internal_set__title(::StringW  value) ;

constexpr void __cordl_internal_set__titleText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x9d4f9c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnSelectionChanged, addr 0x9d4e848, size 0xb0, virtual false, abstract: false, final false
inline void add_OnSelectionChanged(::System::Action_1<int32_t>*  value) ;

static inline ::UnityEngine::Color getStaticF_TextColor() ;

/// @brief Method get_SelectedIndex, addr 0x9d4e9a8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SelectedIndex() ;

/// [CompilerGenerated]
/// @brief Method remove_OnSelectionChanged, addr 0x9d4e8f8, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnSelectionChanged(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF_TextColor(::UnityEngine::Color  value) ;

/// @brief Method set_SelectedIndex, addr 0x9d4e9b0, size 0x10, virtual false, abstract: false, final false
inline void set_SelectedIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckChoiceButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckChoiceButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckChoiceButton(LckChoiceButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckChoiceButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckChoiceButton(LckChoiceButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24916};

/// [CompilerGenerated]
/// @brief Field OnSelectionChanged, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnSelectionChanged;

/// [Header("Settings")]
/// [SerializeField]
/// @brief Field _title, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____title;

/// [SerializeField]
/// @brief Field _leftLabel, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____leftLabel;

/// [SerializeField]
/// @brief Field _rightLabel, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____rightLabel;

/// [SerializeField]
/// @brief Field _selectedIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ____selectedIndex;

/// [SerializeField]
/// @brief Field _colors, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckButtonColors>  ____colors;

/// [SerializeField]
/// @brief Field _colorsSelected, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckButtonColors>  ____colorsSelected;

/// [Header("References")]
/// [SerializeField]
/// @brief Field _titleText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____titleText;

/// [SerializeField]
/// @brief Field _leftText, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____leftText;

/// [SerializeField]
/// @brief Field _rightText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____rightText;

/// [SerializeField]
/// @brief Field _leftBackground, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____leftBackground;

/// [SerializeField]
/// @brief Field _rightBackground, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____rightBackground;

/// [SerializeField]
/// @brief Field _leftTrigger, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>  ____leftTrigger;

/// [SerializeField]
/// @brief Field _rightTrigger, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckDoubleButtonTrigger>  ____rightTrigger;

/// [Header("Audio")]
/// [SerializeField]
/// @brief Field _audioController, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckDiscreetAudioController>  ____audioController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ___OnSelectionChanged) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____title) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____leftLabel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____rightLabel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____selectedIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____colors) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____colorsSelected) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____titleText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____leftText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____rightText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____leftBackground) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____rightBackground) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____leftTrigger) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____rightTrigger) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckChoiceButton, ____audioController) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckChoiceButton) == 0x98, "Size mismatch!");

} // namespace end def Liv::Lck::UI
