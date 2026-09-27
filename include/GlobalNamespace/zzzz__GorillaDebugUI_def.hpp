#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaDebugUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaDebugUI)
namespace TMPro {
class TMP_Dropdown;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaDebugUI;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaDebugUI*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaDebugUI*, "", "GorillaDebugUI");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaDebugUI
class CORDL_TYPE GorillaDebugUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Delay, put=__cordl_internal_set_Delay)) float_t  Delay;

/// @brief Field currentRoomTextBox, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentRoomTextBox, put=__cordl_internal_set_currentRoomTextBox)) ::UnityW<::TMPro::TMP_Text>  currentRoomTextBox;

/// @brief Field gameModeDropdown, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeDropdown, put=__cordl_internal_set_gameModeDropdown)) ::UnityW<::TMPro::TMP_Dropdown>  gameModeDropdown;

/// @brief Field gameModeTextBox, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeTextBox, put=__cordl_internal_set_gameModeTextBox)) ::UnityW<::TMPro::TMP_Text>  gameModeTextBox;

/// @brief Field locationDropdown, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_locationDropdown, put=__cordl_internal_set_locationDropdown)) ::UnityW<::TMPro::TMP_Dropdown>  locationDropdown;

/// @brief Field networkStateTextBox, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkStateTextBox, put=__cordl_internal_set_networkStateTextBox)) ::UnityW<::TMPro::TMP_Text>  networkStateTextBox;

/// @brief Field parentCanvas, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentCanvas, put=__cordl_internal_set_parentCanvas)) ::UnityW<::UnityEngine::GameObject>  parentCanvas;

/// @brief Field playerCountTextBox, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCountTextBox, put=__cordl_internal_set_playerCountTextBox)) ::UnityW<::TMPro::TMP_Text>  playerCountTextBox;

/// @brief Field playerNameDropdown, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNameDropdown, put=__cordl_internal_set_playerNameDropdown)) ::UnityW<::TMPro::TMP_Dropdown>  playerNameDropdown;

/// @brief Field playfabIdDropdown, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_playfabIdDropdown, put=__cordl_internal_set_playfabIdDropdown)) ::UnityW<::TMPro::TMP_Dropdown>  playfabIdDropdown;

/// @brief Field rayInteractorLeft, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rayInteractorLeft, put=__cordl_internal_set_rayInteractorLeft)) ::UnityW<::UnityEngine::GameObject>  rayInteractorLeft;

/// @brief Field rayInteractorRight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rayInteractorRight, put=__cordl_internal_set_rayInteractorRight)) ::UnityW<::UnityEngine::GameObject>  rayInteractorRight;

/// @brief Field roomIdDropdown, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomIdDropdown, put=__cordl_internal_set_roomIdDropdown)) ::UnityW<::TMPro::TMP_Dropdown>  roomIdDropdown;

/// @brief Field roomVisibilityTextBox, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomVisibilityTextBox, put=__cordl_internal_set_roomVisibilityTextBox)) ::UnityW<::TMPro::TMP_Text>  roomVisibilityTextBox;

/// @brief Field timeMultiplierTextBox, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeMultiplierTextBox, put=__cordl_internal_set_timeMultiplierTextBox)) ::UnityW<::TMPro::TMP_Text>  timeMultiplierTextBox;

/// @brief Field timeOfDayDropdown, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeOfDayDropdown, put=__cordl_internal_set_timeOfDayDropdown)) ::UnityW<::TMPro::TMP_Dropdown>  timeOfDayDropdown;

/// @brief Field versionTextBox, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_versionTextBox, put=__cordl_internal_set_versionTextBox)) ::UnityW<::TMPro::TMP_Text>  versionTextBox;

static inline ::GlobalNamespace::GorillaDebugUI* New_ctor() ;

constexpr float_t const& __cordl_internal_get_Delay() const;

constexpr float_t& __cordl_internal_get_Delay() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_currentRoomTextBox() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_currentRoomTextBox() ;

constexpr ::UnityW<::TMPro::TMP_Dropdown> const& __cordl_internal_get_gameModeDropdown() const;

constexpr ::UnityW<::TMPro::TMP_Dropdown>& __cordl_internal_get_gameModeDropdown() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_gameModeTextBox() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_gameModeTextBox() ;

constexpr ::UnityW<::TMPro::TMP_Dropdown> const& __cordl_internal_get_locationDropdown() const;

constexpr ::UnityW<::TMPro::TMP_Dropdown>& __cordl_internal_get_locationDropdown() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_networkStateTextBox() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_networkStateTextBox() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_parentCanvas() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_parentCanvas() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerCountTextBox() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerCountTextBox() ;

constexpr ::UnityW<::TMPro::TMP_Dropdown> const& __cordl_internal_get_playerNameDropdown() const;

constexpr ::UnityW<::TMPro::TMP_Dropdown>& __cordl_internal_get_playerNameDropdown() ;

constexpr ::UnityW<::TMPro::TMP_Dropdown> const& __cordl_internal_get_playfabIdDropdown() const;

constexpr ::UnityW<::TMPro::TMP_Dropdown>& __cordl_internal_get_playfabIdDropdown() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rayInteractorLeft() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rayInteractorLeft() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rayInteractorRight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rayInteractorRight() ;

constexpr ::UnityW<::TMPro::TMP_Dropdown> const& __cordl_internal_get_roomIdDropdown() const;

constexpr ::UnityW<::TMPro::TMP_Dropdown>& __cordl_internal_get_roomIdDropdown() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_roomVisibilityTextBox() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_roomVisibilityTextBox() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_timeMultiplierTextBox() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_timeMultiplierTextBox() ;

constexpr ::UnityW<::TMPro::TMP_Dropdown> const& __cordl_internal_get_timeOfDayDropdown() const;

constexpr ::UnityW<::TMPro::TMP_Dropdown>& __cordl_internal_get_timeOfDayDropdown() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_versionTextBox() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_versionTextBox() ;

constexpr void __cordl_internal_set_Delay(float_t  value) ;

constexpr void __cordl_internal_set_currentRoomTextBox(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_gameModeDropdown(::UnityW<::TMPro::TMP_Dropdown>  value) ;

constexpr void __cordl_internal_set_gameModeTextBox(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_locationDropdown(::UnityW<::TMPro::TMP_Dropdown>  value) ;

constexpr void __cordl_internal_set_networkStateTextBox(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_parentCanvas(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_playerCountTextBox(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playerNameDropdown(::UnityW<::TMPro::TMP_Dropdown>  value) ;

constexpr void __cordl_internal_set_playfabIdDropdown(::UnityW<::TMPro::TMP_Dropdown>  value) ;

constexpr void __cordl_internal_set_rayInteractorLeft(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rayInteractorRight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_roomIdDropdown(::UnityW<::TMPro::TMP_Dropdown>  value) ;

constexpr void __cordl_internal_set_roomVisibilityTextBox(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_timeMultiplierTextBox(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_timeOfDayDropdown(::UnityW<::TMPro::TMP_Dropdown>  value) ;

constexpr void __cordl_internal_set_versionTextBox(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5799300, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaDebugUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaDebugUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaDebugUI(GorillaDebugUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaDebugUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaDebugUI(GorillaDebugUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1470};

/// @brief Field Delay, offset: 0x20, size: 0x4, def value: None
 float_t  ___Delay;

/// @brief Field parentCanvas, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___parentCanvas;

/// @brief Field rayInteractorLeft, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rayInteractorLeft;

/// @brief Field rayInteractorRight, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rayInteractorRight;

/// [SerializeField]
/// @brief Field playfabIdDropdown, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Dropdown>  ___playfabIdDropdown;

/// [SerializeField]
/// @brief Field roomIdDropdown, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Dropdown>  ___roomIdDropdown;

/// [SerializeField]
/// @brief Field locationDropdown, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Dropdown>  ___locationDropdown;

/// [SerializeField]
/// @brief Field playerNameDropdown, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Dropdown>  ___playerNameDropdown;

/// [SerializeField]
/// @brief Field gameModeDropdown, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Dropdown>  ___gameModeDropdown;

/// [SerializeField]
/// @brief Field timeOfDayDropdown, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Dropdown>  ___timeOfDayDropdown;

/// [SerializeField]
/// @brief Field networkStateTextBox, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___networkStateTextBox;

/// [SerializeField]
/// @brief Field gameModeTextBox, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___gameModeTextBox;

/// [SerializeField]
/// @brief Field currentRoomTextBox, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___currentRoomTextBox;

/// [SerializeField]
/// @brief Field playerCountTextBox, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerCountTextBox;

/// [SerializeField]
/// @brief Field roomVisibilityTextBox, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___roomVisibilityTextBox;

/// [SerializeField]
/// @brief Field timeMultiplierTextBox, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___timeMultiplierTextBox;

/// [SerializeField]
/// @brief Field versionTextBox, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___versionTextBox;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___Delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___parentCanvas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___rayInteractorLeft) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___rayInteractorRight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___playfabIdDropdown) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___roomIdDropdown) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___locationDropdown) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___playerNameDropdown) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___gameModeDropdown) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___timeOfDayDropdown) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___networkStateTextBox) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___gameModeTextBox) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___currentRoomTextBox) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___playerCountTextBox) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___roomVisibilityTextBox) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___timeMultiplierTextBox) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDebugUI, ___versionTextBox) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaDebugUI) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
