#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModeSelectorButtonLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameModeSelectorButtonLayout)
namespace GlobalNamespace {
struct GameModeSelectorButtonLayout__SetupButtons_d__9;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class ModeSelectButton;
}
namespace GlobalNamespace {
class PartyGameModeWarning;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GameModeSelectorButtonLayout;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameModeSelectorButtonLayout*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameModeSelectorButtonLayout*, "", "GameModeSelectorButtonLayout");
// Dependencies GTZone, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameModeSelectorButtonLayout
class CORDL_TYPE GameModeSelectorButtonLayout : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _SetupButtons_d__9 = ::GlobalNamespace::GameModeSelectorButtonLayout__SetupButtons_d__9;

/// @brief Field currentButtons, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentButtons, put=__cordl_internal_set_currentButtons)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModeSelectButton>>*  currentButtons;

/// @brief Field pf_button, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pf_button, put=__cordl_internal_set_pf_button)) ::UnityW<::GlobalNamespace::ModeSelectButton>  pf_button;

/// @brief Field superToggleButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_superToggleButton, put=__cordl_internal_set_superToggleButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  superToggleButton;

/// @brief Field warningScreen, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_warningScreen, put=__cordl_internal_set_warningScreen)) ::UnityW<::GlobalNamespace::PartyGameModeWarning>  warningScreen;

/// @brief Field zone, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

static inline ::GlobalNamespace::GameModeSelectorButtonLayout* New_ctor() ;

/// @brief Method OnDisable, addr 0x5706110, size 0x18c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5705f78, size 0x198, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [AsyncStateMachine(typeof(GameModeSelectorButtonLayout::<SetupButtons>d__9))]
/// @brief Method SetupButtons, addr 0x570629c, size 0xa4, virtual true, abstract: false, final false
inline void SetupButtons() ;

/// @brief Method _OnPressedSuperToggleButton, addr 0x5706340, size 0x3c0, virtual false, abstract: false, final false
inline void _OnPressedSuperToggleButton(::GlobalNamespace::GorillaPressableButton*  btn, bool  isLeftHandPress) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModeSelectButton>>* const& __cordl_internal_get_currentButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModeSelectButton>>*& __cordl_internal_get_currentButtons() ;

constexpr ::UnityW<::GlobalNamespace::ModeSelectButton> const& __cordl_internal_get_pf_button() const;

constexpr ::UnityW<::GlobalNamespace::ModeSelectButton>& __cordl_internal_get_pf_button() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_superToggleButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_superToggleButton() ;

constexpr ::UnityW<::GlobalNamespace::PartyGameModeWarning> const& __cordl_internal_get_warningScreen() const;

constexpr ::UnityW<::GlobalNamespace::PartyGameModeWarning>& __cordl_internal_get_warningScreen() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_currentButtons(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModeSelectButton>>*  value) ;

constexpr void __cordl_internal_set_pf_button(::UnityW<::GlobalNamespace::ModeSelectButton>  value) ;

constexpr void __cordl_internal_set_superToggleButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_warningScreen(::UnityW<::GlobalNamespace::PartyGameModeWarning>  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5706700, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameModeSelectorButtonLayout() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameModeSelectorButtonLayout", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameModeSelectorButtonLayout(GameModeSelectorButtonLayout && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameModeSelectorButtonLayout", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameModeSelectorButtonLayout(GameModeSelectorButtonLayout const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{166};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GT/GameModeSelectorButtonLayout]  "};

/// [SerializeField]
/// @brief Field superToggleButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___superToggleButton;

/// [SerializeField]
/// @brief Field pf_button, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModeSelectButton>  ___pf_button;

/// [SerializeField]
/// @brief Field zone, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// [SerializeField]
/// @brief Field warningScreen, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PartyGameModeWarning>  ___warningScreen;

/// @brief Field currentButtons, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModeSelectButton>>*  ___currentButtons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameModeSelectorButtonLayout, ___superToggleButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSelectorButtonLayout, ___pf_button) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSelectorButtonLayout, ___zone) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSelectorButtonLayout, ___warningScreen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSelectorButtonLayout, ___currentButtons) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameModeSelectorButtonLayout) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
