#pragma once
// IWYU pragma private; include "GlobalNamespace/ModeSelectButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModeSelectButton)
namespace GameObjectScheduling {
class CountdownTextDate;
}
namespace GameObjectScheduling {
class CountdownText;
}
namespace GlobalNamespace {
class PartyGameModeWarning;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ModeSelectButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ModeSelectButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModeSelectButton*, "", "ModeSelectButton");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModeSelectButton
class CORDL_TYPE ModeSelectButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
 __declspec(property(get=get_WarningScreen, put=set_WarningScreen)) ::UnityW<::GlobalNamespace::PartyGameModeWarning>  WarningScreen;

/// @brief Field gameMode, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameMode, put=__cordl_internal_set_gameMode)) ::StringW  gameMode;

/// @brief Field gameModeTitle, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeTitle, put=__cordl_internal_set_gameModeTitle)) ::UnityW<::TMPro::TMP_Text>  gameModeTitle;

/// @brief Field limitedCountdown, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_limitedCountdown, put=__cordl_internal_set_limitedCountdown)) ::UnityW<::GameObjectScheduling::CountdownText>  limitedCountdown;

/// @brief Field newModeSplash, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_newModeSplash, put=__cordl_internal_set_newModeSplash)) ::UnityW<::UnityEngine::GameObject>  newModeSplash;

/// @brief Field warningScreen, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_warningScreen, put=__cordl_internal_set_warningScreen)) ::UnityW<::GlobalNamespace::PartyGameModeWarning>  warningScreen;

/// @brief Method ButtonActivationWithHand, addr 0x5969060, size 0xb8, virtual true, abstract: false, final false
inline void ButtonActivationWithHand(bool  isLeftHand) ;

/// @brief Method HideNewAndLimitedTimeInfo, addr 0x59692c0, size 0x44, virtual false, abstract: false, final false
inline void HideNewAndLimitedTimeInfo() ;

static inline ::GlobalNamespace::ModeSelectButton* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5968f5c, size 0x104, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGameModeChanged, addr 0x5969118, size 0x78, virtual false, abstract: false, final false
inline void OnGameModeChanged(::StringW  newGameMode) ;

/// @brief Method SetInfo, addr 0x5969190, size 0x130, virtual false, abstract: false, final false
inline void SetInfo(::StringW  Mode, ::StringW  ModeTitle, bool  NewMode, ::GameObjectScheduling::CountdownTextDate*  CountdownTo) ;

/// @brief Method Start, addr 0x5968e8c, size 0xd0, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::StringW const& __cordl_internal_get_gameMode() const;

constexpr ::StringW& __cordl_internal_get_gameMode() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_gameModeTitle() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_gameModeTitle() ;

constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& __cordl_internal_get_limitedCountdown() const;

constexpr ::UnityW<::GameObjectScheduling::CountdownText>& __cordl_internal_get_limitedCountdown() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_newModeSplash() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_newModeSplash() ;

constexpr ::UnityW<::GlobalNamespace::PartyGameModeWarning> const& __cordl_internal_get_warningScreen() const;

constexpr ::UnityW<::GlobalNamespace::PartyGameModeWarning>& __cordl_internal_get_warningScreen() ;

constexpr void __cordl_internal_set_gameMode(::StringW  value) ;

constexpr void __cordl_internal_set_gameModeTitle(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_limitedCountdown(::UnityW<::GameObjectScheduling::CountdownText>  value) ;

constexpr void __cordl_internal_set_newModeSplash(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_warningScreen(::UnityW<::GlobalNamespace::PartyGameModeWarning>  value) ;

/// @brief Method .ctor, addr 0x5969304, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_WarningScreen, addr 0x5968e7c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PartyGameModeWarning> get_WarningScreen() ;

/// @brief Method set_WarningScreen, addr 0x5968e84, size 0x8, virtual false, abstract: false, final false
inline void set_WarningScreen(::GlobalNamespace::PartyGameModeWarning*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModeSelectButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModeSelectButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModeSelectButton(ModeSelectButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModeSelectButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModeSelectButton(ModeSelectButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2383};

/// [SerializeField]
/// @brief Field gameMode, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___gameMode;

/// [SerializeField]
/// @brief Field warningScreen, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PartyGameModeWarning>  ___warningScreen;

/// [SerializeField]
/// @brief Field gameModeTitle, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___gameModeTitle;

/// [SerializeField]
/// @brief Field newModeSplash, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___newModeSplash;

/// [SerializeField]
/// @brief Field limitedCountdown, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::CountdownText>  ___limitedCountdown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModeSelectButton, ___gameMode) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModeSelectButton, ___warningScreen) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModeSelectButton, ___gameModeTitle) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModeSelectButton, ___newModeSplash) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModeSelectButton, ___limitedCountdown) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModeSelectButton) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
