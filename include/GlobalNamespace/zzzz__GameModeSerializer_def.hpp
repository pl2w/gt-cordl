#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModeSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaSerializerMasterOnly_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameModeSerializer)
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
class IStateAuthorityChanged;
}
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
struct RpcInfo;
}
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class FusionGameModeData;
}
namespace GlobalNamespace {
class GorillaGameManager;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
struct RpcTarget;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GameModeSerializer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameModeSerializer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameModeSerializer*, "", "GameModeSerializer");
// [NetworkBehaviourWeaved(1)]
// Dependencies GorillaGameModes.GameModeType, GorillaSerializerMasterOnly
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameModeSerializer
class CORDL_TYPE GameModeSerializer : public ::GlobalNamespace::GorillaSerializerMasterOnly {
public:
// Declarations
/// @brief Field FusionGameModeOwnerChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FusionGameModeOwnerChanged, put=setStaticF_FusionGameModeOwnerChanged)) ::System::Action_1<::GlobalNamespace::NetPlayer*>*  FusionGameModeOwnerChanged;

 __declspec(property(get=get_GameModeInstance)) ::UnityW<::GlobalNamespace::GorillaGameManager>  GameModeInstance;

/// @brief Field _gameModeKeyInt, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__gameModeKeyInt, put=__cordl_internal_set__gameModeKeyInt)) int32_t  _gameModeKeyInt;

/// @brief Field broadcastTagCallLimit, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_broadcastTagCallLimit, put=__cordl_internal_set_broadcastTagCallLimit)) ::GlobalNamespace::CallLimiter*  broadcastTagCallLimit;

/// @brief Field currentGameDataType, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentGameDataType, put=__cordl_internal_set_currentGameDataType)) ::System::Type*  currentGameDataType;

/// @brief Field gameModeData, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeData, put=__cordl_internal_set_gameModeData)) ::UnityW<::GlobalNamespace::FusionGameModeData>  gameModeData;

/// @brief Field gameModeInstance, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeInstance, put=__cordl_internal_set_gameModeInstance)) ::UnityW<::GlobalNamespace::GorillaGameManager>  gameModeInstance;

/// @brief Field gameModeKey, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameModeKey, put=__cordl_internal_set_gameModeKey)) ::GorillaGameModes::GameModeType  gameModeKey;

/// [Networked]
/// @brief [NetworkedWeaved(0, 1)]
 __declspec(property(get=get_gameModeKeyInt, put=set_gameModeKeyInt)) int32_t  gameModeKeyInt;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Convert operator to "::Fusion::IStateAuthorityChanged"
constexpr operator  ::Fusion::IStateAuthorityChanged*() noexcept;

/// @brief Method BroadcastRoundComplete, addr 0x58f28a0, size 0xe0, virtual false, abstract: false, final false
inline void BroadcastRoundComplete(::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method BroadcastTag, addr 0x58f2a6c, size 0x11c, virtual false, abstract: false, final false
inline void BroadcastTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x58f2d58, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x58f2d64, size 0x18, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method FusionDataRPC, addr 0x58f2c0c, size 0x4, virtual true, abstract: false, final false
inline void FusionDataRPC(::StringW  method, ::Photon::Pun::RpcTarget  target, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method FusionDataRPC, addr 0x58f2b88, size 0x84, virtual true, abstract: false, final false
inline void FusionDataRPC(::StringW  method, ::GlobalNamespace::NetPlayer*  targetPlayer, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Fusion.IStateAuthorityChanged.StateAuthorityChanged, addr 0x58f2c14, size 0xc4, virtual true, abstract: false, final true
inline void Fusion_IStateAuthorityChanged_StateAuthorityChanged() ;

/// @brief Method Init, addr 0x58f1920, size 0x84, virtual false, abstract: false, final false
inline void Init(int32_t  gameModeType) ;

static inline ::GlobalNamespace::GameModeSerializer* New_ctor() ;

/// @brief Method OnBeforeDespawn, addr 0x58f1a1c, size 0x58, virtual true, abstract: false, final false
inline void OnBeforeDespawn() ;

/// @brief Method OnFailedSpawn, addr 0x58f1a74, size 0x4, virtual true, abstract: false, final false
inline void OnFailedSpawn() ;

/// @brief Method OnSpawnSetupCheck, addr 0x58f1164, size 0x7bc, virtual true, abstract: false, final false
inline bool OnSpawnSetupCheck(::GlobalNamespace::PhotonMessageInfoWrapped  wrappedInfo, ::by_ref<::UnityEngine::GameObject*>  outTargetObject, ::by_ref<::System::Type*>  outTargetType) ;

/// @brief Method OnSuccesfullySpawned, addr 0x58f19a4, size 0x78, virtual true, abstract: false, final false
inline void OnSuccesfullySpawned(::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// [PunRPC]
/// @brief Method RPC_BroadcastRoundComplete, addr 0x58f2848, size 0x58, virtual false, abstract: false, final false
inline void RPC_BroadcastRoundComplete(::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_BroadcastTag, addr 0x58f2980, size 0xec, virtual false, abstract: false, final false
inline void RPC_BroadcastTag(int32_t  taggedPlayer, int32_t  taggingPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)7)]
/// @brief Method RPC_ReportHit, addr 0x58f2208, size 0x1e8, virtual false, abstract: false, final false
inline void RPC_ReportHit(::Fusion::RpcInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_ReportHit, addr 0x58f1c2c, size 0x60, virtual false, abstract: false, final false
inline void RPC_ReportHit(::Photon::Pun::PhotonMessageInfo  info) ;

/// [NetworkRpcWeavedInvoker(2, 7, 7)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_ReportHit@Invoker, addr 0x58f2e38, size 0xb0, virtual false, abstract: false, final false
static inline void RPC_ReportHit@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)7)]
/// @brief Method RPC_ReportTag, addr 0x58f1fc8, size 0x240, virtual false, abstract: false, final false
inline void RPC_ReportTag(int32_t  taggedPlayer, ::Fusion::RpcInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_ReportTag, addr 0x58f1a78, size 0xe0, virtual false, abstract: false, final false
inline void RPC_ReportTag(int32_t  taggedPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [NetworkRpcWeavedInvoker(1, 7, 7)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_ReportTag@Invoker, addr 0x58f2d80, size 0xb8, virtual false, abstract: false, final false
static inline void RPC_ReportTag@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// @brief Method ReportHit, addr 0x58f1c8c, size 0x33c, virtual false, abstract: false, final false
inline void ReportHit(::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method ReportTag, addr 0x58f1b58, size 0xd4, virtual false, abstract: false, final false
inline void ReportTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

constexpr int32_t const& __cordl_internal_get__gameModeKeyInt() const;

constexpr int32_t& __cordl_internal_get__gameModeKeyInt() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_broadcastTagCallLimit() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_broadcastTagCallLimit() ;

constexpr ::System::Type* const& __cordl_internal_get_currentGameDataType() const;

constexpr ::System::Type*& __cordl_internal_get_currentGameDataType() ;

constexpr ::UnityW<::GlobalNamespace::FusionGameModeData> const& __cordl_internal_get_gameModeData() const;

constexpr ::UnityW<::GlobalNamespace::FusionGameModeData>& __cordl_internal_get_gameModeData() ;

constexpr ::UnityW<::GlobalNamespace::GorillaGameManager> const& __cordl_internal_get_gameModeInstance() const;

constexpr ::UnityW<::GlobalNamespace::GorillaGameManager>& __cordl_internal_get_gameModeInstance() ;

constexpr ::GorillaGameModes::GameModeType const& __cordl_internal_get_gameModeKey() const;

constexpr ::GorillaGameModes::GameModeType& __cordl_internal_get_gameModeKey() ;

constexpr void __cordl_internal_set__gameModeKeyInt(int32_t  value) ;

constexpr void __cordl_internal_set_broadcastTagCallLimit(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_currentGameDataType(::System::Type*  value) ;

constexpr void __cordl_internal_set_gameModeData(::UnityW<::GlobalNamespace::FusionGameModeData>  value) ;

constexpr void __cordl_internal_set_gameModeInstance(::UnityW<::GlobalNamespace::GorillaGameManager>  value) ;

constexpr void __cordl_internal_set_gameModeKey(::GorillaGameModes::GameModeType  value) ;

/// @brief Method .ctor, addr 0x58f2cd8, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::GlobalNamespace::NetPlayer*>* getStaticF_FusionGameModeOwnerChanged() ;

/// @brief Method get_GameModeInstance, addr 0x58f115c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GorillaGameManager> get_GameModeInstance() ;

/// @brief Method get_gameModeKeyInt, addr 0x58f10a4, size 0x5c, virtual false, abstract: false, final false
inline int32_t get_gameModeKeyInt() ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

/// @brief Convert to "::Fusion::IStateAuthorityChanged"
constexpr ::Fusion::IStateAuthorityChanged* i___Fusion__IStateAuthorityChanged() noexcept;

static inline void setStaticF_FusionGameModeOwnerChanged(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value) ;

/// @brief Method set_gameModeKeyInt, addr 0x58f1100, size 0x5c, virtual false, abstract: false, final false
inline void set_gameModeKeyInt(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameModeSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameModeSerializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameModeSerializer(GameModeSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameModeSerializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameModeSerializer(GameModeSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2119};

/// [WeaverGenerated]
/// [DefaultForProperty("gameModeKeyInt", 0, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _gameModeKeyInt, offset: 0xb0, size: 0x4, def value: None
 int32_t  ____gameModeKeyInt;

/// @brief Field gameModeKey, offset: 0xb4, size: 0x4, def value: None
 ::GorillaGameModes::GameModeType  ___gameModeKey;

/// @brief Field gameModeInstance, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaGameManager>  ___gameModeInstance;

/// @brief Field gameModeData, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FusionGameModeData>  ___gameModeData;

/// @brief Field currentGameDataType, offset: 0xc8, size: 0x8, def value: None
 ::System::Type*  ___currentGameDataType;

/// @brief Field broadcastTagCallLimit, offset: 0xd0, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___broadcastTagCallLimit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameModeSerializer, ____gameModeKeyInt) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSerializer, ___gameModeKey) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSerializer, ___gameModeInstance) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSerializer, ___gameModeData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSerializer, ___currentGameDataType) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSerializer, ___broadcastTagCallLimit) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameModeSerializer) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
