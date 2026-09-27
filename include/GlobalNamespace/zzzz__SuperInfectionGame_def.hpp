#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionGame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ESuperInfectionGameState_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagManager_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SuperInfectionGame)
namespace GlobalNamespace {
struct ESuperInfectionGameState;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace GlobalNamespace {
class SuperInfectionGame;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SuperInfectionGame*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SuperInfectionGame*, "", "SuperInfectionGame");
// Dependencies ESuperInfectionGameState, GorillaTagManager
namespace GlobalNamespace {
// Is value type: false
// CS Name: SuperInfectionGame
class CORDL_TYPE SuperInfectionGame : public ::GlobalNamespace::GorillaTagManager {
public:
// Declarations
/// @brief Field <gameState>k__BackingField, offset 0x114, size 0x2 
 __declspec(property(get=__cordl_internal_get__gameState_k__BackingField, put=__cordl_internal_set__gameState_k__BackingField)) ::GlobalNamespace::ESuperInfectionGameState  _gameState_k__BackingField;

/// @brief Field _gameState_previous, offset 0x116, size 0x2 
 __declspec(property(get=__cordl_internal_get__gameState_previous, put=__cordl_internal_set__gameState_previous)) ::GlobalNamespace::ESuperInfectionGameState  _gameState_previous;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::GlobalNamespace::SuperInfectionGame>  _instance_k__BackingField;

/// @brief Field _mySuperExampleSerializedField, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__mySuperExampleSerializedField, put=__cordl_internal_set__mySuperExampleSerializedField)) int32_t  _mySuperExampleSerializedField;

/// @brief [DebugReadout]
 __declspec(property(get=get_gameState, put=set_gameState)) ::GlobalNamespace::ESuperInfectionGameState  gameState;

/// @brief Method Awake, addr 0x5afbd14, size 0x6c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GameModeName, addr 0x5afc198, size 0x40, virtual true, abstract: false, final false
inline ::StringW GameModeName() ;

/// @brief Method GameModeNameRoomLabel, addr 0x5afc1d8, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GameModeNameRoomLabel() ;

/// @brief Method GameType, addr 0x5afbcfc, size 0x8, virtual true, abstract: false, final false
inline ::GorillaGameModes::GameModeType GameType() ;

/// @brief Method HandleTagBroadcast, addr 0x5afc6c8, size 0x528, virtual true, abstract: false, final false
inline void HandleTagBroadcast(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

/// @brief Method InfectionRoundEnd, addr 0x5afc2d8, size 0x8c, virtual true, abstract: false, final false
inline void InfectionRoundEnd() ;

/// @brief Method InfectionRoundStart, addr 0x5afc2b8, size 0x20, virtual true, abstract: false, final false
inline void InfectionRoundStart() ;

/// @brief Method InfrequentUpdate, addr 0x5afc2b0, size 0x8, virtual true, abstract: false, final false
inline void InfrequentUpdate() ;

/// @brief Method LocalCanTag, addr 0x5afc364, size 0x8, virtual true, abstract: false, final false
inline bool LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method MyMatIndex, addr 0x5afc374, size 0x8, virtual true, abstract: false, final false
inline int32_t MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer) ;

static inline ::GlobalNamespace::SuperInfectionGame* New_ctor() ;

/// @brief Method OnDisable, addr 0x5afbdd8, size 0x8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5afbd80, size 0x58, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayerEnteredRoom, addr 0x5afc0b4, size 0xe4, virtual true, abstract: false, final false
inline void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer) ;

/// @brief Method OnSerializeRead, addr 0x5afc424, size 0x15c, virtual true, abstract: false, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x5afc37c, size 0xa8, virtual true, abstract: false, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method StartPlaying, addr 0x5afbde8, size 0x21c, virtual true, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StopPlaying, addr 0x5afc004, size 0xb0, virtual true, abstract: false, final false
inline void StopPlaying() ;

/// @brief Method Tick, addr 0x5afbde0, size 0x8, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UpdatePlayerAppearance, addr 0x5afc36c, size 0x8, virtual true, abstract: false, final false
inline void UpdatePlayerAppearance(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method _OnGameStateChanged, addr 0x5afc580, size 0x148, virtual false, abstract: false, final false
inline void _OnGameStateChanged() ;

constexpr ::GlobalNamespace::ESuperInfectionGameState const& __cordl_internal_get__gameState_k__BackingField() const;

constexpr ::GlobalNamespace::ESuperInfectionGameState& __cordl_internal_get__gameState_k__BackingField() ;

constexpr ::GlobalNamespace::ESuperInfectionGameState const& __cordl_internal_get__gameState_previous() const;

constexpr ::GlobalNamespace::ESuperInfectionGameState& __cordl_internal_get__gameState_previous() ;

constexpr int32_t const& __cordl_internal_get__mySuperExampleSerializedField() const;

constexpr int32_t& __cordl_internal_get__mySuperExampleSerializedField() ;

constexpr void __cordl_internal_set__gameState_k__BackingField(::GlobalNamespace::ESuperInfectionGameState  value) ;

constexpr void __cordl_internal_set__gameState_previous(::GlobalNamespace::ESuperInfectionGameState  value) ;

constexpr void __cordl_internal_set__mySuperExampleSerializedField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5afcbf0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::SuperInfectionGame> getStaticF__instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_gameState, addr 0x5afbd04, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ESuperInfectionGameState get_gameState() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x5afbc5c, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SuperInfectionGame> get_instance() ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::SuperInfectionGame>  value) ;

/// [CompilerGenerated]
/// @brief Method set_gameState, addr 0x5afbd0c, size 0x8, virtual false, abstract: false, final false
inline void set_gameState(::GlobalNamespace::ESuperInfectionGameState  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x5afbca4, size 0x58, virtual false, abstract: false, final false
static inline void set_instance(::GlobalNamespace::SuperInfectionGame*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SuperInfectionGame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionGame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SuperInfectionGame(SuperInfectionGame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionGame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SuperInfectionGame(SuperInfectionGame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{385};

/// [SerializeField]
/// @brief Field _mySuperExampleSerializedField, offset: 0x110, size: 0x4, def value: None
 int32_t  ____mySuperExampleSerializedField;

/// [CompilerGenerated]
/// @brief Field <gameState>k__BackingField, offset: 0x114, size: 0x2, def value: None
 ::GlobalNamespace::ESuperInfectionGameState  ____gameState_k__BackingField;

/// @brief Field _gameState_previous, offset: 0x116, size: 0x2, def value: None
 ::GlobalNamespace::ESuperInfectionGameState  ____gameState_previous;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SuperInfectionGame, ____mySuperExampleSerializedField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionGame, ____gameState_k__BackingField) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionGame, ____gameState_previous) == 0x116, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SuperInfectionGame) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
