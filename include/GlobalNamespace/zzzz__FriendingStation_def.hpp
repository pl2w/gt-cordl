#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendingStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FriendingManager_FriendStationData_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FriendingStation)
namespace GlobalNamespace {
struct FriendingManager_FriendStationData;
}
namespace GlobalNamespace {
struct FriendingManager_FriendStationState;
}
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class TriggerEventNotifier;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class FriendingStation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FriendingStation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendingStation*, "", "FriendingStation");
// Dependencies FriendingManager::FriendStationData, GTZone, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendingStation
class CORDL_TYPE FriendingStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Player1Text)) ::UnityW<::TMPro::TextMeshProUGUI>  Player1Text;

 __declspec(property(get=get_Player2Text)) ::UnityW<::TMPro::TextMeshProUGUI>  Player2Text;

 __declspec(property(get=get_StatusText)) ::UnityW<::TMPro::TextMeshProUGUI>  StatusText;

 __declspec(property(get=get_Zone)) ::GlobalNamespace::GTZone  Zone;

/// @brief Field addFriendButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_addFriendButton, put=__cordl_internal_set_addFriendButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  addFriendButton;

/// @brief Field displayedData, offset 0x50, size 0x14 
 __declspec(property(get=__cordl_internal_get_displayedData, put=__cordl_internal_set_displayedData)) ::GlobalNamespace::FriendingManager_FriendStationData  displayedData;

/// @brief Field player1Text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_player1Text, put=__cordl_internal_set_player1Text)) ::UnityW<::TMPro::TextMeshProUGUI>  player1Text;

/// @brief Field player2Text, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_player2Text, put=__cordl_internal_set_player2Text)) ::UnityW<::TMPro::TextMeshProUGUI>  player2Text;

/// @brief Field statusText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_statusText, put=__cordl_internal_set_statusText)) ::UnityW<::TMPro::TextMeshProUGUI>  statusText;

/// @brief Field triggerNotifier, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerNotifier, put=__cordl_internal_set_triggerNotifier)) ::UnityW<::GlobalNamespace::TriggerEventNotifier>  triggerNotifier;

/// @brief Field zone, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

/// @brief Method Awake, addr 0x5aaaf64, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FriendButtonPressed, addr 0x5aaba8c, size 0x230, virtual false, abstract: false, final false
inline void FriendButtonPressed() ;

/// @brief Method FriendButtonReleased, addr 0x5aabf5c, size 0x1f4, virtual false, abstract: false, final false
inline void FriendButtonReleased() ;

/// @brief Method LocalPlayerIsAtCapacity, addr 0x5aabcbc, size 0x2a0, virtual false, abstract: false, final false
inline bool LocalPlayerIsAtCapacity(::by_ref<::StringW>  fullMessage) ;

static inline ::GlobalNamespace::FriendingStation* New_ctor() ;

/// @brief Method OnDisable, addr 0x5aab4a0, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5aab03c, size 0xc0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TriggerEntered, addr 0x5aab654, size 0x220, virtual false, abstract: false, final false
inline void TriggerEntered(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other) ;

/// @brief Method TriggerExited, addr 0x5aab874, size 0x218, virtual false, abstract: false, final false
inline void TriggerExited(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other) ;

/// @brief Method UpdateAddFriendButton, addr 0x5aab500, size 0xdc, virtual false, abstract: false, final false
inline void UpdateAddFriendButton() ;

/// @brief Method UpdateDisplay, addr 0x5aab5dc, size 0x78, virtual false, abstract: false, final false
inline void UpdateDisplay(::by_ref<::GlobalNamespace::FriendingManager_FriendStationData>  data) ;

/// @brief Method UpdateDisplayedState, addr 0x5aab210, size 0x290, virtual false, abstract: false, final false
inline void UpdateDisplayedState(::GlobalNamespace::FriendingManager_FriendStationState  state) ;

/// @brief Method UpdatePlayerText, addr 0x5aab0fc, size 0x114, virtual false, abstract: false, final false
inline void UpdatePlayerText(::TMPro::TextMeshProUGUI*  playerText, int32_t  playerId) ;

/// @brief Method UpdateState, addr 0x5aa71a8, size 0x4, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::FriendingManager_FriendStationData  data) ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_addFriendButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_addFriendButton() ;

constexpr ::GlobalNamespace::FriendingManager_FriendStationData const& __cordl_internal_get_displayedData() const;

constexpr ::GlobalNamespace::FriendingManager_FriendStationData& __cordl_internal_get_displayedData() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_player1Text() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_player1Text() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_player2Text() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_player2Text() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_statusText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_statusText() ;

constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier> const& __cordl_internal_get_triggerNotifier() const;

constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier>& __cordl_internal_get_triggerNotifier() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_addFriendButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_displayedData(::GlobalNamespace::FriendingManager_FriendStationData  value) ;

constexpr void __cordl_internal_set_player1Text(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_player2Text(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_statusText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_triggerNotifier(::UnityW<::GlobalNamespace::TriggerEventNotifier>  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5aac150, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Player1Text, addr 0x5aaaf44, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::TMPro::TextMeshProUGUI> get_Player1Text() ;

/// @brief Method get_Player2Text, addr 0x5aaaf4c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::TMPro::TextMeshProUGUI> get_Player2Text() ;

/// @brief Method get_StatusText, addr 0x5aaaf54, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::TMPro::TextMeshProUGUI> get_StatusText() ;

/// @brief Method get_Zone, addr 0x5aaaf5c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTZone get_Zone() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendingStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendingStation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendingStation(FriendingStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendingStation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendingStation(FriendingStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3267};

/// [SerializeField]
/// @brief Field triggerNotifier, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TriggerEventNotifier>  ___triggerNotifier;

/// [SerializeField]
/// @brief Field player1Text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___player1Text;

/// [SerializeField]
/// @brief Field player2Text, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___player2Text;

/// [SerializeField]
/// @brief Field statusText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___statusText;

/// [SerializeField]
/// @brief Field zone, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// [SerializeField]
/// @brief Field addFriendButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___addFriendButton;

/// @brief Field displayedData, offset: 0x50, size: 0x14, def value: None
 ::GlobalNamespace::FriendingManager_FriendStationData  ___displayedData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendingStation, ___triggerNotifier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingStation, ___player1Text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingStation, ___player2Text) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingStation, ___statusText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingStation, ___zone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingStation, ___addFriendButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendingStation, ___displayedData) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendingStation) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
