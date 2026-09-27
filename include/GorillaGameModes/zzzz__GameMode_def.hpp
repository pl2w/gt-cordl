#pragma once
// IWYU pragma private; include "GorillaGameModes/GameMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaGameManager_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameMode)
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkRunner;
}
namespace GlobalNamespace {
class FusionGameModeData;
}
namespace GlobalNamespace {
class GameModeSerializer;
}
namespace GlobalNamespace {
class GorillaGameManager;
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
namespace GorillaGameModes {
class GameModeZoneMapping;
}
namespace GorillaGameModes {
class GameMode_OnStartGameModeAction;
}
namespace GorillaGameModes {
class GameMode___c__DisplayClass43_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GorillaGameModes {
class GameMode;
}
namespace GorillaGameModes {
class GameMode_OnStartGameModeAction;
}
namespace GorillaGameModes {
class GameMode___c__DisplayClass43_0;
}
// Write type traits
MARK_REF_T(::GorillaGameModes::GameMode*);
MARK_REF_T(::GorillaGameModes::GameMode_OnStartGameModeAction*);
MARK_REF_T(::GorillaGameModes::GameMode___c__DisplayClass43_0*);
DEFINE_IL2CPP_CLASS(::GorillaGameModes::GameMode*, "GorillaGameModes", "GameMode");
DEFINE_IL2CPP_CLASS(::GorillaGameModes::GameMode_OnStartGameModeAction*, "GorillaGameModes", "GameMode/OnStartGameModeAction");
DEFINE_IL2CPP_CLASS(::GorillaGameModes::GameMode___c__DisplayClass43_0*, "GorillaGameModes", "GameMode/<>c__DisplayClass43_0");
// Dependencies GorillaGameManager, GorillaGameModes.GameModeType, NetPlayer, UnityEngine.MonoBehaviour
namespace GorillaGameModes {
// Is value type: false
// CS Name: GorillaGameModes.GameMode
class CORDL_TYPE GameMode : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OnStartGameModeAction = ::GorillaGameModes::GameMode_OnStartGameModeAction;

using __c__DisplayClass43_0 = ::GorillaGameModes::GameMode___c__DisplayClass43_0;

/// @brief Field OnStartGameMode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnStartGameMode, put=setStaticF_OnStartGameMode)) ::GorillaGameModes::GameMode_OnStartGameModeAction*  OnStartGameMode;

/// @brief Field ParticipatingPlayersChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ParticipatingPlayersChanged, put=setStaticF_ParticipatingPlayersChanged)) ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*  ParticipatingPlayersChanged;

/// @brief Field <CurrentGameModeType>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CurrentGameModeType_k__BackingField, put=setStaticF__CurrentGameModeType_k__BackingField)) ::GorillaGameModes::GameModeType  _CurrentGameModeType_k__BackingField;

/// @brief Field _oldPlayersBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__oldPlayersBuffer, put=setStaticF__oldPlayersBuffer)) ::ArrayW<::GlobalNamespace::NetPlayer*>  _oldPlayersBuffer;

/// @brief Field _oldPlayersCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__oldPlayersCount, put=setStaticF__oldPlayersCount)) int32_t  _oldPlayersCount;

/// @brief Field _participatingPlayers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__participatingPlayers, put=setStaticF__participatingPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  _participatingPlayers;

/// @brief Field _tempAddedPlayers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__tempAddedPlayers, put=setStaticF__tempAddedPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  _tempAddedPlayers;

/// @brief Field _tempRemovedPlayers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__tempRemovedPlayers, put=setStaticF__tempRemovedPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  _tempRemovedPlayers;

/// @brief Field activatedGameModes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activatedGameModes, put=setStaticF_activatedGameModes)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>*  activatedGameModes;

/// @brief Field activeGameMode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeGameMode, put=setStaticF_activeGameMode)) ::UnityW<::GlobalNamespace::GorillaGameManager>  activeGameMode;

/// @brief Field activeNetworkHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeNetworkHandler, put=setStaticF_activeNetworkHandler)) ::UnityW<::GlobalNamespace::GameModeSerializer>  activeNetworkHandler;

/// @brief Field fusionTypeTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_fusionTypeTable, put=setStaticF_fusionTypeTable)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::FusionGameModeData>>*  fusionTypeTable;

/// @brief Field gameModeKeyByName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gameModeKeyByName, put=setStaticF_gameModeKeyByName)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  gameModeKeyByName;

/// @brief Field gameModeNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gameModeNames, put=setStaticF_gameModeNames)) ::System::Collections::Generic::List_1<::StringW>*  gameModeNames;

/// @brief Field gameModeTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gameModeTable, put=setStaticF_gameModeTable)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GorillaGameManager>>*  gameModeTable;

/// @brief Field gameModeZoneMapping, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeZoneMapping, put=__cordl_internal_set_gameModeZoneMapping)) ::UnityW<::GorillaGameModes::GameModeZoneMapping>  gameModeZoneMapping;

/// @brief Field gameModes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gameModes, put=setStaticF_gameModes)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>*  gameModes;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaGameModes::GameMode>  instance;

/// @brief Field optOutPlayers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_optOutPlayers, put=setStaticF_optOutPlayers)) ::System::Collections::Generic::HashSet_1<int32_t>*  optOutPlayers;

/// @brief Method Awake, addr 0x5b72448, size 0x3e0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BroadcastRoundComplete, addr 0x5b75490, size 0x1c8, virtual false, abstract: false, final false
static inline void BroadcastRoundComplete() ;

/// @brief Method BroadcastTag, addr 0x5b75658, size 0x26c, virtual false, abstract: false, final false
static inline void BroadcastTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

/// @brief Method CanParticipate, addr 0x5b75f58, size 0x1b0, virtual false, abstract: false, final false
static inline bool CanParticipate(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method ChangeGameFromProperty, addr 0x5b73778, size 0x50, virtual false, abstract: false, final false
static inline bool ChangeGameFromProperty() ;

/// @brief Method ChangeGameFromProperty, addr 0x5b7397c, size 0x74, virtual false, abstract: false, final false
static inline bool ChangeGameFromProperty(::StringW  prop) ;

/// @brief Method ChangeGameMode, addr 0x5b737c8, size 0x118, virtual false, abstract: false, final false
static inline bool ChangeGameMode(::StringW  gameMode) ;

/// @brief Method ChangeGameMode, addr 0x5b74218, size 0x294, virtual false, abstract: false, final false
static inline bool ChangeGameMode(int32_t  key) ;

/// @brief Method ContainsNetPlayer, addr 0x5b761d0, size 0x68, virtual false, abstract: false, final false
static inline bool ContainsNetPlayer(::ArrayW<::GlobalNamespace::NetPlayer*>  array, ::GlobalNamespace::NetPlayer*  candidate, int32_t  length) ;

/// @brief Method ContainsNetPlayer, addr 0x5b76108, size 0xc8, virtual false, abstract: false, final false
static inline bool ContainsNetPlayer(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  list, ::GlobalNamespace::NetPlayer*  candidate) ;

/// @brief Method FindGameModeFromRoomProperty, addr 0x5b734e8, size 0x13c, virtual false, abstract: false, final false
static inline ::StringW FindGameModeFromRoomProperty() ;

/// @brief Method FindGameModeInPropertyString, addr 0x5b73954, size 0x28, virtual false, abstract: false, final false
static inline ::StringW FindGameModeInPropertyString(::StringW  gmString) ;

/// @brief Method GetGameModeInstance, addr 0x5b74a50, size 0x54, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GorillaGameManager> GetGameModeInstance(::GorillaGameModes::GameModeType  type) ;

/// @brief Method GetGameModeInstance, addr 0x5b74aa4, size 0x21c, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GorillaGameManager> GetGameModeInstance(int32_t  type) ;

/// @brief Method GetGameModeInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::GorillaGameManager*>)
static inline T GetGameModeInstance(::GorillaGameModes::GameModeType  type) ;

/// @brief Method GetGameModeInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::GorillaGameManager*>)
static inline T GetGameModeInstance(int32_t  type) ;

/// @brief Method GetGameModeKeyFromRoomProp, addr 0x5b739f0, size 0x138, virtual false, abstract: false, final false
static inline int32_t GetGameModeKeyFromRoomProp() ;

/// @brief Method IsPlaying, addr 0x5b73404, size 0x94, virtual false, abstract: false, final false
static inline bool IsPlaying(::GorillaGameModes::GameModeType  type) ;

/// @brief Method IsValidGameMode, addr 0x5b73b28, size 0xa0, virtual false, abstract: false, final false
static inline bool IsValidGameMode(::StringW  gameMode) ;

/// @brief Method LoadGameMode, addr 0x5b73624, size 0x154, virtual false, abstract: false, final false
static inline bool LoadGameMode(::StringW  gameMode) ;

/// @brief Method LoadGameMode, addr 0x5b73bc8, size 0x648, virtual false, abstract: false, final false
static inline bool LoadGameMode(int32_t  key) ;

/// @brief Method LoadGameModeFromProperty, addr 0x5b73498, size 0x50, virtual false, abstract: false, final false
static inline bool LoadGameModeFromProperty() ;

/// @brief Method LoadGameModeFromProperty, addr 0x5b738e0, size 0x74, virtual false, abstract: false, final false
static inline bool LoadGameModeFromProperty(::StringW  prop) ;

/// @brief Method LocalIsTagged, addr 0x5b75350, size 0x140, virtual false, abstract: false, final false
static inline bool LocalIsTagged(::GlobalNamespace::NetPlayer*  player) ;

static inline ::GorillaGameModes::GameMode* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5b72828, size 0xc4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OptIn, addr 0x5b764e4, size 0x74, virtual false, abstract: false, final false
static inline void OptIn(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OptIn, addr 0x5b76440, size 0xa4, virtual false, abstract: false, final false
static inline void OptIn(int32_t  playerActorNumber) ;

/// @brief Method OptIn, addr 0x5b763c8, size 0x78, virtual false, abstract: false, final false
static inline void OptIn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method OptOut, addr 0x5b76354, size 0x74, virtual false, abstract: false, final false
static inline void OptOut(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OptOut, addr 0x5b762b0, size 0xa4, virtual false, abstract: false, final false
static inline void OptOut(int32_t  playerActorNumber) ;

/// @brief Method OptOut, addr 0x5b76238, size 0x78, virtual false, abstract: false, final false
static inline void OptOut(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method RefreshPlayers, addr 0x5b7591c, size 0x63c, virtual false, abstract: false, final false
static inline void RefreshPlayers() ;

/// @brief Method RemoveNetworkLink, addr 0x5b74910, size 0x140, virtual false, abstract: false, final false
static inline void RemoveNetworkLink(::GlobalNamespace::GameModeSerializer*  networkSerializer) ;

/// @brief Method ReportHit, addr 0x5b75168, size 0x1e8, virtual false, abstract: false, final false
static inline void ReportHit() ;

/// @brief Method ReportTag, addr 0x5b74f98, size 0x1d0, virtual false, abstract: false, final false
static inline void ReportTag(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method ResetGameModeSafe, addr 0x5b74f04, size 0x94, virtual false, abstract: false, final false
static inline void ResetGameModeSafe(::GlobalNamespace::GorillaGameManager*  gameMode) ;

/// @brief Method ResetGameModes, addr 0x5b74cc0, size 0x244, virtual false, abstract: false, final false
static inline void ResetGameModes() ;

/// @brief Method SetupGameModeRemote, addr 0x5b74540, size 0x33c, virtual false, abstract: false, final false
static inline void SetupGameModeRemote(::GlobalNamespace::GameModeSerializer*  networkSerializer) ;

/// @brief Method StartGameModeSafe, addr 0x5b7487c, size 0x94, virtual false, abstract: false, final false
static inline void StartGameModeSafe(::GlobalNamespace::GorillaGameManager*  gameMode) ;

/// [OnEnterPlay_Run]
/// @brief Method StaticLoad, addr 0x5b7326c, size 0x198, virtual false, abstract: false, final false
static inline void StaticLoad() ;

/// @brief Method StopGameModeSafe, addr 0x5b744ac, size 0x94, virtual false, abstract: false, final false
static inline void StopGameModeSafe(::GlobalNamespace::GorillaGameManager*  gameMode) ;

constexpr ::UnityW<::GorillaGameModes::GameModeZoneMapping> const& __cordl_internal_get_gameModeZoneMapping() const;

constexpr ::UnityW<::GorillaGameModes::GameModeZoneMapping>& __cordl_internal_get_gameModeZoneMapping() ;

constexpr void __cordl_internal_set_gameModeZoneMapping(::UnityW<::GorillaGameModes::GameModeZoneMapping>  value) ;

/// @brief Method .ctor, addr 0x5b76558, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnStartGameMode, addr 0x5b728ec, size 0xd8, virtual false, abstract: false, final false
static inline void add_OnStartGameMode(::GorillaGameModes::GameMode_OnStartGameModeAction*  value) ;

/// [CompilerGenerated]
/// @brief Method add_ParticipatingPlayersChanged, addr 0x5b72cf4, size 0xf4, virtual false, abstract: false, final false
static inline void add_ParticipatingPlayersChanged(::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*  value) ;

static inline ::GorillaGameModes::GameMode_OnStartGameModeAction* getStaticF_OnStartGameMode() ;

static inline ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>* getStaticF_ParticipatingPlayersChanged() ;

static inline ::GorillaGameModes::GameModeType getStaticF__CurrentGameModeType_k__BackingField() ;

static inline ::ArrayW<::GlobalNamespace::NetPlayer*> getStaticF__oldPlayersBuffer() ;

static inline int32_t getStaticF__oldPlayersCount() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* getStaticF__participatingPlayers() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* getStaticF__tempAddedPlayers() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* getStaticF__tempRemovedPlayers() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>* getStaticF_activatedGameModes() ;

static inline ::UnityW<::GlobalNamespace::GorillaGameManager> getStaticF_activeGameMode() ;

static inline ::UnityW<::GlobalNamespace::GameModeSerializer> getStaticF_activeNetworkHandler() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::FusionGameModeData>>* getStaticF_fusionTypeTable() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* getStaticF_gameModeKeyByName() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_gameModeNames() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GorillaGameManager>>* getStaticF_gameModeTable() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>* getStaticF_gameModes() ;

static inline ::UnityW<::GorillaGameModes::GameMode> getStaticF_instance() ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_optOutPlayers() ;

/// @brief Method get_ActiveGameMode, addr 0x5b72a9c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GorillaGameManager> get_ActiveGameMode() ;

/// @brief Method get_ActiveNetworkHandler, addr 0x5b72af4, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GameModeSerializer> get_ActiveNetworkHandler() ;

/// @brief Method get_CurrentGameModeFlag, addr 0x5b72c64, size 0x90, virtual false, abstract: false, final false
static inline int32_t get_CurrentGameModeFlag() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentGameModeType, addr 0x5b72bb0, size 0x58, virtual false, abstract: false, final false
static inline ::GorillaGameModes::GameModeType get_CurrentGameModeType() ;

/// @brief Method get_GameModeZoneMapping, addr 0x5b72b4c, size 0x64, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaGameModes::GameModeZoneMapping> get_GameModeZoneMapping() ;

/// @brief Method get_ParticipatingPlayers, addr 0x5b758c4, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* get_ParticipatingPlayers() ;

/// [CompilerGenerated]
/// @brief Method remove_OnStartGameMode, addr 0x5b729c4, size 0xd8, virtual false, abstract: false, final false
static inline void remove_OnStartGameMode(::GorillaGameModes::GameMode_OnStartGameModeAction*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_ParticipatingPlayersChanged, addr 0x5b72de8, size 0xf4, virtual false, abstract: false, final false
static inline void remove_ParticipatingPlayersChanged(::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*  value) ;

static inline void setStaticF_OnStartGameMode(::GorillaGameModes::GameMode_OnStartGameModeAction*  value) ;

static inline void setStaticF_ParticipatingPlayersChanged(::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*,::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>*  value) ;

static inline void setStaticF__CurrentGameModeType_k__BackingField(::GorillaGameModes::GameModeType  value) ;

static inline void setStaticF__oldPlayersBuffer(::ArrayW<::GlobalNamespace::NetPlayer*>  value) ;

static inline void setStaticF__oldPlayersCount(int32_t  value) ;

static inline void setStaticF__participatingPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF__tempAddedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF__tempRemovedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF_activatedGameModes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>*  value) ;

static inline void setStaticF_activeGameMode(::UnityW<::GlobalNamespace::GorillaGameManager>  value) ;

static inline void setStaticF_activeNetworkHandler(::UnityW<::GlobalNamespace::GameModeSerializer>  value) ;

static inline void setStaticF_fusionTypeTable(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::FusionGameModeData>>*  value) ;

static inline void setStaticF_gameModeKeyByName(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

static inline void setStaticF_gameModeNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF_gameModeTable(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GorillaGameManager>>*  value) ;

static inline void setStaticF_gameModes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGameManager>>*  value) ;

static inline void setStaticF_instance(::UnityW<::GorillaGameModes::GameMode>  value) ;

static inline void setStaticF_optOutPlayers(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentGameModeType, addr 0x5b72c08, size 0x5c, virtual false, abstract: false, final false
static inline void set_CurrentGameModeType(::GorillaGameModes::GameModeType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameMode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameMode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameMode(GameMode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameMode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameMode(GameMode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3889};

/// [SerializeField]
/// @brief Field gameModeZoneMapping, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaGameModes::GameModeZoneMapping>  ___gameModeZoneMapping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaGameModes::GameMode, ___gameModeZoneMapping) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaGameModes::GameMode) == 0x28, "Size mismatch!");

} // namespace end def GorillaGameModes
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaGameModes {
// Is value type: false
// CS Name: GorillaGameModes.GameMode/<>c__DisplayClass43_0
class CORDL_TYPE GameMode___c__DisplayClass43_0 : public ::System::Object {
public:
// Declarations
/// @brief Field key, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_key, put=__cordl_internal_set_key)) int32_t  key;

static inline ::GorillaGameModes::GameMode___c__DisplayClass43_0* New_ctor() ;

/// @brief Method <LoadGameMode>b__0, addr 0x5b766a4, size 0x64, virtual false, abstract: false, final false
inline void _LoadGameMode_b__0(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  no) ;

constexpr int32_t const& __cordl_internal_get_key() const;

constexpr int32_t& __cordl_internal_get_key() ;

constexpr void __cordl_internal_set_key(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b74210, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameMode___c__DisplayClass43_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameMode___c__DisplayClass43_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameMode___c__DisplayClass43_0(GameMode___c__DisplayClass43_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameMode___c__DisplayClass43_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameMode___c__DisplayClass43_0(GameMode___c__DisplayClass43_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3888};

/// @brief Field key, offset: 0x10, size: 0x4, def value: None
 int32_t  ___key;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaGameModes::GameMode___c__DisplayClass43_0, ___key) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaGameModes::GameMode___c__DisplayClass43_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaGameModes
// Dependencies System.MulticastDelegate
namespace GorillaGameModes {
// Is value type: false
// CS Name: GorillaGameModes.GameMode/OnStartGameModeAction
class CORDL_TYPE GameMode_OnStartGameModeAction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b76614, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GorillaGameModes::GameModeType  newGameModeType, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b76698, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b76600, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GorillaGameModes::GameModeType  newGameModeType) ;

static inline ::GorillaGameModes::GameMode_OnStartGameModeAction* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b76560, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameMode_OnStartGameModeAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameMode_OnStartGameModeAction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameMode_OnStartGameModeAction(GameMode_OnStartGameModeAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameMode_OnStartGameModeAction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameMode_OnStartGameModeAction(GameMode_OnStartGameModeAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3887};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaGameModes::GameMode_OnStartGameModeAction) == 0x80, "Size mismatch!");

} // namespace end def GorillaGameModes
