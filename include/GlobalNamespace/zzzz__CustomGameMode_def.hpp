#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomGameMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaGameManager_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomGameMode)
namespace Fusion {
class NetworkObject;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class LuauScriptRunner;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
struct lua_State;
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
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomGameMode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomGameMode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomGameMode*, "", "CustomGameMode");
// Dependencies GorillaGameManager
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomGameMode
class CORDL_TYPE CustomGameMode : public ::GlobalNamespace::GorillaGameManager {
public:
// Declarations
/// @brief Field GameModeInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_GameModeInitialized, put=setStaticF_GameModeInitialized)) bool  GameModeInitialized;

/// @brief Field LuaScript, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LuaScript, put=setStaticF_LuaScript)) ::StringW  LuaScript;

/// @brief Field WasInRoom, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_WasInRoom, put=setStaticF_WasInRoom)) bool  WasInRoom;

/// @brief Field gameScriptRunner, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gameScriptRunner, put=setStaticF_gameScriptRunner)) ::GlobalNamespace::LuauScriptRunner*  gameScriptRunner;

/// @brief Method AddFusionDataBehaviour, addr 0x5a6e470, size 0x4, virtual true, abstract: false, final false
inline void AddFusionDataBehaviour(::Fusion::NetworkObject*  obj) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method AfterTickGamemode, addr 0x5a6d414, size 0x3e8, virtual false, abstract: false, final false
static inline int32_t AfterTickGamemode(::GlobalNamespace::lua_State*  L) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method GameModeBindings, addr 0x5a6cf70, size 0x4a4, virtual false, abstract: false, final false
static inline int32_t GameModeBindings(::GlobalNamespace::lua_State*  L) ;

/// @brief Method GameType, addr 0x5a6e474, size 0x8, virtual true, abstract: false, final false
inline ::GorillaGameModes::GameModeType GameType() ;

/// @brief Method GetRigScale, addr 0x5a6e5a0, size 0x18c, virtual false, abstract: false, final false
inline float_t GetRigScale(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method HitPlayer, addr 0x5a6fbe0, size 0x4, virtual true, abstract: false, final false
inline void HitPlayer(::GlobalNamespace::NetPlayer*  taggedPlayer) ;

/// @brief Method LocalPlayerSpeed, addr 0x5a74730, size 0x1e0, virtual true, abstract: false, final false
inline ::ArrayW<float_t> LocalPlayerSpeed() ;

/// @brief Method LuaStart, addr 0x5a704ec, size 0xac0, virtual false, abstract: false, final false
static inline void LuaStart() ;

/// @brief Method MyMatIndex, addr 0x5a6e47c, size 0x124, virtual true, abstract: false, final false
inline int32_t MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer) ;

static inline ::GlobalNamespace::CustomGameMode* New_ctor() ;

/// @brief Method OnEntityGrabbed, addr 0x5a6fbe4, size 0x26c, virtual false, abstract: false, final false
static inline void OnEntityGrabbed(::GlobalNamespace::GameEntity*  entity, bool  isGrabbed) ;

/// @brief Method OnGameEntityRemoved, addr 0x5a6fe50, size 0x508, virtual false, abstract: false, final false
static inline void OnGameEntityRemoved(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method OnMasterClientSwitched, addr 0x5a6f3d8, size 0x378, virtual true, abstract: false, final false
inline void OnMasterClientSwitched(::GlobalNamespace::NetPlayer*  newMasterClient) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x5a6e72c, size 0x634, virtual true, abstract: false, final false
inline void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnPlayerHit, addr 0x5a6f750, size 0x274, virtual false, abstract: false, final false
static inline void OnPlayerHit(::GlobalNamespace::GameEntity*  entity, int32_t  hitPlayer, float_t  damage) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5a6f068, size 0x370, virtual true, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnSerializeRead, addr 0x5a6e460, size 0x4, virtual true, abstract: false, final false
inline void OnSerializeRead(::System::Object*  obj) ;

/// @brief Method OnSerializeRead, addr 0x5a6e45c, size 0x4, virtual true, abstract: false, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x5a6e468, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* OnSerializeWrite() ;

/// @brief Method OnSerializeWrite, addr 0x5a6e464, size 0x4, virtual true, abstract: false, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method PreTickGamemode, addr 0x5a6d7fc, size 0xc60, virtual false, abstract: false, final false
static inline int32_t PreTickGamemode(::GlobalNamespace::lua_State*  L) ;

/// @brief Method RunGamemodeScript, addr 0x5a70fac, size 0x174, virtual false, abstract: false, final false
static inline void RunGamemodeScript(::StringW  script) ;

/// @brief Method RunGamemodeScriptFromFile, addr 0x5a74af8, size 0x1bc, virtual false, abstract: false, final false
static inline void RunGamemodeScriptFromFile(::StringW  filename) ;

/// @brief Method StartPlaying, addr 0x5a70358, size 0x194, virtual true, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StopPlaying, addr 0x5a71208, size 0x138, virtual true, abstract: false, final false
inline void StopPlaying() ;

/// @brief Method StopScript, addr 0x5a71340, size 0x7ec, virtual false, abstract: false, final false
static inline void StopScript() ;

/// @brief Method TaggedByAI, addr 0x5a6f9c4, size 0x21c, virtual false, abstract: false, final false
static inline void TaggedByAI(::GlobalNamespace::GameEntity*  entity, int32_t  taggedPlayer) ;

/// @brief Method TaggedByEnvironment, addr 0x5a71cd4, size 0x15c, virtual false, abstract: false, final false
static inline void TaggedByEnvironment() ;

/// @brief Method TouchPlayer, addr 0x5a71b2c, size 0x1a8, virtual false, abstract: false, final false
static inline void TouchPlayer(::GlobalNamespace::NetPlayer*  touchedPlayer) ;

/// @brief Method .ctor, addr 0x5a74cb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_GameModeInitialized() ;

static inline ::StringW getStaticF_LuaScript() ;

static inline bool getStaticF_WasInRoom() ;

static inline ::GlobalNamespace::LuauScriptRunner* getStaticF_gameScriptRunner() ;

static inline void setStaticF_GameModeInitialized(bool  value) ;

static inline void setStaticF_LuaScript(::StringW  value) ;

static inline void setStaticF_WasInRoom(bool  value) ;

static inline void setStaticF_gameScriptRunner(::GlobalNamespace::LuauScriptRunner*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomGameMode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomGameMode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomGameMode(CustomGameMode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomGameMode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomGameMode(CustomGameMode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3102};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CustomGameMode) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
