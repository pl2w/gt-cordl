#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CustomMapModeSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameModeSelectorButtonLayout_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapModeSelector)
namespace GlobalNamespace {
struct CustomMapModeSelector__SetupButtons_d__16;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapModeSelector;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapModeSelector*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapModeSelector*, "GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapModeSelector");
// Dependencies GameModeSelectorButtonLayout, GorillaGameModes.GameModeType
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CustomMapModeSelector
class CORDL_TYPE CustomMapModeSelector : public ::GlobalNamespace::GameModeSelectorButtonLayout {
public:
// Declarations
using _SetupButtons_d__16 = ::GlobalNamespace::CustomMapModeSelector__SetupButtons_d__16;

/// @brief Field defaultGamemodeForLoadedMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_defaultGamemodeForLoadedMap, put=setStaticF_defaultGamemodeForLoadedMap)) ::GorillaGameModes::GameModeType  defaultGamemodeForLoadedMap;

/// @brief Field gamemodes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gamemodes, put=setStaticF_gamemodes)) ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  gamemodes;

/// @brief Field instances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instances, put=setStaticF_instances)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapModeSelector>>*  instances;

/// @brief Field notInRoomHostString, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_notInRoomHostString, put=__cordl_internal_set_notInRoomHostString)) ::StringW  notInRoomHostString;

/// @brief Field reusableString, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reusableString, put=setStaticF_reusableString)) ::StringW  reusableString;

/// @brief Field roomHostDescriptionText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomHostDescriptionText, put=__cordl_internal_set_roomHostDescriptionText)) ::UnityW<::UnityEngine::GameObject>  roomHostDescriptionText;

/// @brief Field roomHostLabel, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomHostLabel, put=__cordl_internal_set_roomHostLabel)) ::StringW  roomHostLabel;

/// @brief Field roomHostText, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomHostText, put=__cordl_internal_set_roomHostText)) ::UnityW<::TMPro::TMP_Text>  roomHostText;

/// @brief Method Awake, addr 0x5bec934, size 0xa4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapModeSelector* New_ctor() ;

/// @brief Method OnDisable, addr 0x5bed0c8, size 0x208, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDisconnected, addr 0x5bed348, size 0x44, virtual false, abstract: false, final false
inline void OnDisconnected() ;

/// @brief Method OnEnable, addr 0x5bec9d8, size 0x3e8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnJoinedRoom, addr 0x5bed2d0, size 0x78, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnRoomHostSwitched, addr 0x5becdc0, size 0x308, virtual false, abstract: false, final false
inline void OnRoomHostSwitched(::GlobalNamespace::NetPlayer*  newRoomHost) ;

/// @brief Method RefreshHostName, addr 0x5beda38, size 0x1a8, virtual false, abstract: false, final false
static inline void RefreshHostName() ;

/// @brief Method ResetButtons, addr 0x5bed38c, size 0x2c8, virtual false, abstract: false, final false
static inline void ResetButtons() ;

/// @brief Method SetAvailableGameModes, addr 0x5bed654, size 0x340, virtual false, abstract: false, final false
static inline void SetAvailableGameModes(::ArrayW<int32_t>  availableModes, int32_t  defaultMode) ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.CustomMapModeSelector::<SetupButtons>d__16))]
/// @brief Method SetupButtons, addr 0x5bed994, size 0xa4, virtual true, abstract: false, final false
inline void SetupButtons() ;

constexpr ::StringW const& __cordl_internal_get_notInRoomHostString() const;

constexpr ::StringW& __cordl_internal_get_notInRoomHostString() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_roomHostDescriptionText() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_roomHostDescriptionText() ;

constexpr ::StringW const& __cordl_internal_get_roomHostLabel() const;

constexpr ::StringW& __cordl_internal_get_roomHostLabel() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_roomHostText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_roomHostText() ;

constexpr void __cordl_internal_set_notInRoomHostString(::StringW  value) ;

constexpr void __cordl_internal_set_roomHostDescriptionText(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_roomHostLabel(::StringW  value) ;

constexpr void __cordl_internal_set_roomHostText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5bedbe0, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaGameModes::GameModeType getStaticF_defaultGamemodeForLoadedMap() ;

static inline ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>* getStaticF_gamemodes() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapModeSelector>>* getStaticF_instances() ;

static inline ::StringW getStaticF_reusableString() ;

static inline void setStaticF_defaultGamemodeForLoadedMap(::GorillaGameModes::GameModeType  value) ;

static inline void setStaticF_gamemodes(::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  value) ;

static inline void setStaticF_instances(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapModeSelector>>*  value) ;

static inline void setStaticF_reusableString(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapModeSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapModeSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapModeSelector(CustomMapModeSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapModeSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapModeSelector(CustomMapModeSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4058};

/// [SerializeField]
/// @brief Field roomHostText, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___roomHostText;

/// [SerializeField]
/// @brief Field roomHostDescriptionText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___roomHostDescriptionText;

/// [SerializeField]
/// @brief Field notInRoomHostString, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___notInRoomHostString;

/// [SerializeField]
/// @brief Field roomHostLabel, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___roomHostLabel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapModeSelector, ___roomHostText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapModeSelector, ___roomHostDescriptionText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapModeSelector, ___notInRoomHostString) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapModeSelector, ___roomHostLabel) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapModeSelector) == 0x68, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
