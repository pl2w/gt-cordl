#pragma once
// IWYU pragma private; include "GorillaGameModes/GameModeZoneMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaGameModes/zzzz__GameModeNameOverrides_def.hpp"
#include "GorillaGameModes/zzzz__GameModeTypeCountdown_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "GorillaGameModes/zzzz__ZoneGameModes_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameModeZoneMapping)
namespace GameObjectScheduling {
class CountdownTextDate;
}
namespace GlobalNamespace {
struct GTZone;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GorillaGameModes {
class GameModeZoneMapping;
}
// Write type traits
MARK_REF_T(::GorillaGameModes::GameModeZoneMapping*);
DEFINE_IL2CPP_CLASS(::GorillaGameModes::GameModeZoneMapping*, "GorillaGameModes", "GameModeZoneMapping");
// [CreateAssetMenu(fileName = "New Game Mode Zone Map", menuName = "Game Settings/Game Mode Zone Map", order = 2)]
// Dependencies GorillaGameModes.GameModeNameOverrides, GorillaGameModes.GameModeType, GorillaGameModes.GameModeTypeCountdown, GorillaGameModes.ZoneGameModes, UnityEngine.ScriptableObject
namespace GorillaGameModes {
// Is value type: false
// CS Name: GorillaGameModes.GameModeZoneMapping
class CORDL_TYPE GameModeZoneMapping : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_AllModes)) ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  AllModes;

/// @brief Field allModes, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_allModes, put=__cordl_internal_set_allModes)) ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  allModes;

/// @brief Field bigRoomGameModes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bigRoomGameModes, put=__cordl_internal_set_bigRoomGameModes)) ::ArrayW<::GorillaGameModes::GameModeType>  bigRoomGameModes;

/// @brief Field bigRoomZoneGameModesLookup, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_bigRoomZoneGameModesLookup, put=__cordl_internal_set_bigRoomZoneGameModesLookup)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*  bigRoomZoneGameModesLookup;

/// @brief Field defaultGameModes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultGameModes, put=__cordl_internal_set_defaultGameModes)) ::ArrayW<::GorillaGameModes::GameModeType>  defaultGameModes;

/// @brief Field gameModeNameOverrides, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeNameOverrides, put=__cordl_internal_set_gameModeNameOverrides)) ::ArrayW<::GorillaGameModes::GameModeNameOverrides>  gameModeNameOverrides;

/// @brief Field gameModeTypeCountdowns, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeTypeCountdowns, put=__cordl_internal_set_gameModeTypeCountdowns)) ::ArrayW<::GorillaGameModes::GameModeTypeCountdown>  gameModeTypeCountdowns;

/// @brief Field gameModeTypeCountdownsLookup, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeTypeCountdownsLookup, put=__cordl_internal_set_gameModeTypeCountdownsLookup)) ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::UnityW<::GameObjectScheduling::CountdownTextDate>>*  gameModeTypeCountdownsLookup;

/// @brief Field isNewLookup, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_isNewLookup, put=__cordl_internal_set_isNewLookup)) ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  isNewLookup;

/// @brief Field modeNameLookup, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_modeNameLookup, put=__cordl_internal_set_modeNameLookup)) ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::StringW>*  modeNameLookup;

/// @brief Field newThisUpdate, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_newThisUpdate, put=__cordl_internal_set_newThisUpdate)) ::ArrayW<::GorillaGameModes::GameModeType>  newThisUpdate;

/// @brief Field notes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_notes, put=__cordl_internal_set_notes)) ::StringW  notes;

/// @brief Field privateZoneGameModesLookup, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_privateZoneGameModesLookup, put=__cordl_internal_set_privateZoneGameModesLookup)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*  privateZoneGameModesLookup;

/// @brief Field publicZoneGameModesLookup, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_publicZoneGameModesLookup, put=__cordl_internal_set_publicZoneGameModesLookup)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*  publicZoneGameModesLookup;

/// @brief Field zoneGameModes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneGameModes, put=__cordl_internal_set_zoneGameModes)) ::ArrayW<::GorillaGameModes::ZoneGameModes>  zoneGameModes;

/// @brief Method GetCountdown, addr 0x5b7706c, size 0x9c, virtual false, abstract: false, final false
inline ::UnityW<::GameObjectScheduling::CountdownTextDate> GetCountdown(::GorillaGameModes::GameModeType  mode) ;

/// @brief Method GetModeName, addr 0x5b76f2c, size 0xe0, virtual false, abstract: false, final false
inline ::StringW GetModeName(::GorillaGameModes::GameModeType  mode) ;

/// @brief Method GetModesForZone, addr 0x5b76db0, size 0x118, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* GetModesForZone(::GlobalNamespace::GTZone  zone, bool  isPrivate) ;

/// @brief Method Init, addr 0x5b76720, size 0x690, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method IsBigRoomMode, addr 0x5b76ec8, size 0x64, virtual false, abstract: false, final false
inline bool IsBigRoomMode(::GorillaGameModes::GameModeType  gameModeType) ;

/// @brief Method IsNew, addr 0x5b7700c, size 0x60, virtual false, abstract: false, final false
inline bool IsNew(::GorillaGameModes::GameModeType  mode) ;

static inline ::GorillaGameModes::GameModeZoneMapping* New_ctor() ;

/// @brief Method VerifyModeForZone, addr 0x5b77108, size 0x2f8, virtual false, abstract: false, final false
inline ::GorillaGameModes::GameModeType VerifyModeForZone(::GlobalNamespace::GTZone  zone, ::GorillaGameModes::GameModeType  mode, bool  isPrivate) ;

constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* const& __cordl_internal_get_allModes() const;

constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*& __cordl_internal_get_allModes() ;

constexpr ::ArrayW<::GorillaGameModes::GameModeType> const& __cordl_internal_get_bigRoomGameModes() const;

constexpr ::ArrayW<::GorillaGameModes::GameModeType>& __cordl_internal_get_bigRoomGameModes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>* const& __cordl_internal_get_bigRoomZoneGameModesLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*& __cordl_internal_get_bigRoomZoneGameModesLookup() ;

constexpr ::ArrayW<::GorillaGameModes::GameModeType> const& __cordl_internal_get_defaultGameModes() const;

constexpr ::ArrayW<::GorillaGameModes::GameModeType>& __cordl_internal_get_defaultGameModes() ;

constexpr ::ArrayW<::GorillaGameModes::GameModeNameOverrides> const& __cordl_internal_get_gameModeNameOverrides() const;

constexpr ::ArrayW<::GorillaGameModes::GameModeNameOverrides>& __cordl_internal_get_gameModeNameOverrides() ;

constexpr ::ArrayW<::GorillaGameModes::GameModeTypeCountdown> const& __cordl_internal_get_gameModeTypeCountdowns() const;

constexpr ::ArrayW<::GorillaGameModes::GameModeTypeCountdown>& __cordl_internal_get_gameModeTypeCountdowns() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::UnityW<::GameObjectScheduling::CountdownTextDate>>* const& __cordl_internal_get_gameModeTypeCountdownsLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::UnityW<::GameObjectScheduling::CountdownTextDate>>*& __cordl_internal_get_gameModeTypeCountdownsLookup() ;

constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* const& __cordl_internal_get_isNewLookup() const;

constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*& __cordl_internal_get_isNewLookup() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::StringW>* const& __cordl_internal_get_modeNameLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::StringW>*& __cordl_internal_get_modeNameLookup() ;

constexpr ::ArrayW<::GorillaGameModes::GameModeType> const& __cordl_internal_get_newThisUpdate() const;

constexpr ::ArrayW<::GorillaGameModes::GameModeType>& __cordl_internal_get_newThisUpdate() ;

constexpr ::StringW const& __cordl_internal_get_notes() const;

constexpr ::StringW& __cordl_internal_get_notes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>* const& __cordl_internal_get_privateZoneGameModesLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*& __cordl_internal_get_privateZoneGameModesLookup() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>* const& __cordl_internal_get_publicZoneGameModesLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*& __cordl_internal_get_publicZoneGameModesLookup() ;

constexpr ::ArrayW<::GorillaGameModes::ZoneGameModes> const& __cordl_internal_get_zoneGameModes() const;

constexpr ::ArrayW<::GorillaGameModes::ZoneGameModes>& __cordl_internal_get_zoneGameModes() ;

constexpr void __cordl_internal_set_allModes(::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  value) ;

constexpr void __cordl_internal_set_bigRoomGameModes(::ArrayW<::GorillaGameModes::GameModeType>  value) ;

constexpr void __cordl_internal_set_bigRoomZoneGameModesLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*  value) ;

constexpr void __cordl_internal_set_defaultGameModes(::ArrayW<::GorillaGameModes::GameModeType>  value) ;

constexpr void __cordl_internal_set_gameModeNameOverrides(::ArrayW<::GorillaGameModes::GameModeNameOverrides>  value) ;

constexpr void __cordl_internal_set_gameModeTypeCountdowns(::ArrayW<::GorillaGameModes::GameModeTypeCountdown>  value) ;

constexpr void __cordl_internal_set_gameModeTypeCountdownsLookup(::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::UnityW<::GameObjectScheduling::CountdownTextDate>>*  value) ;

constexpr void __cordl_internal_set_isNewLookup(::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  value) ;

constexpr void __cordl_internal_set_modeNameLookup(::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::StringW>*  value) ;

constexpr void __cordl_internal_set_newThisUpdate(::ArrayW<::GorillaGameModes::GameModeType>  value) ;

constexpr void __cordl_internal_set_notes(::StringW  value) ;

constexpr void __cordl_internal_set_privateZoneGameModesLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*  value) ;

constexpr void __cordl_internal_set_publicZoneGameModesLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*  value) ;

constexpr void __cordl_internal_set_zoneGameModes(::ArrayW<::GorillaGameModes::ZoneGameModes>  value) ;

/// @brief Method .ctor, addr 0x5b77400, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AllModes, addr 0x5b76708, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* get_AllModes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameModeZoneMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameModeZoneMapping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameModeZoneMapping(GameModeZoneMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameModeZoneMapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameModeZoneMapping(GameModeZoneMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3890};

/// [SerializeField]
/// [TextArea(4, 40)]
/// @brief Field notes, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___notes;

/// [SerializeField]
/// @brief Field gameModeNameOverrides, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GorillaGameModes::GameModeNameOverrides>  ___gameModeNameOverrides;

/// [SerializeField]
/// @brief Field defaultGameModes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GorillaGameModes::GameModeType>  ___defaultGameModes;

/// [SerializeField]
/// @brief Field bigRoomGameModes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GorillaGameModes::GameModeType>  ___bigRoomGameModes;

/// [SerializeField]
/// @brief Field zoneGameModes, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GorillaGameModes::ZoneGameModes>  ___zoneGameModes;

/// [SerializeField]
/// @brief Field gameModeTypeCountdowns, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GorillaGameModes::GameModeTypeCountdown>  ___gameModeTypeCountdowns;

/// [SerializeField]
/// @brief Field newThisUpdate, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GorillaGameModes::GameModeType>  ___newThisUpdate;

/// @brief Field bigRoomZoneGameModesLookup, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*  ___bigRoomZoneGameModesLookup;

/// @brief Field publicZoneGameModesLookup, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*  ___publicZoneGameModesLookup;

/// @brief Field privateZoneGameModesLookup, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>*  ___privateZoneGameModesLookup;

/// @brief Field modeNameLookup, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::StringW>*  ___modeNameLookup;

/// @brief Field isNewLookup, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  ___isNewLookup;

/// @brief Field gameModeTypeCountdownsLookup, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::UnityW<::GameObjectScheduling::CountdownTextDate>>*  ___gameModeTypeCountdownsLookup;

/// @brief Field allModes, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  ___allModes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___notes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___gameModeNameOverrides) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___defaultGameModes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___bigRoomGameModes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___zoneGameModes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___gameModeTypeCountdowns) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___newThisUpdate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___bigRoomZoneGameModesLookup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___publicZoneGameModesLookup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___privateZoneGameModesLookup) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___modeNameLookup) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___isNewLookup) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___gameModeTypeCountdownsLookup) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeZoneMapping, ___allModes) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GorillaGameModes::GameModeZoneMapping) == 0x88, "Size mismatch!");

} // namespace end def GorillaGameModes
