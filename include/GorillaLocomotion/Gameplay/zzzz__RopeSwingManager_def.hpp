#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/RopeSwingManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkSceneObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RopeSwingManager)
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct RpcInfo;
}
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GorillaLocomotion::Gameplay {
class GorillaRopeSwing;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
class RopeSwingManager;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Gameplay::RopeSwingManager*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::RopeSwingManager*, "GorillaLocomotion.Gameplay", "RopeSwingManager");
// Dependencies NetworkSceneObject
namespace GorillaLocomotion::Gameplay {
// Is value type: false
// CS Name: GorillaLocomotion.Gameplay.RopeSwingManager
class CORDL_TYPE RopeSwingManager : public ::GlobalNamespace::NetworkSceneObject {
public:
// Declarations
/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::GorillaLocomotion::Gameplay::RopeSwingManager>  _instance_k__BackingField;

/// @brief Field ropes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropes, put=__cordl_internal_set_ropes)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  ropes;

/// @brief Method Awake, addr 0x5cf00d8, size 0x204, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaLocomotion::Gameplay::RopeSwingManager* New_ctor() ;

/// [Rpc]
/// @brief Method RPC_SetVelocity, addr 0x5cf0620, size 0x278, virtual false, abstract: false, final false
static inline void RPC_SetVelocity(::Fusion::NetworkRunner*  runner, int32_t  ropeId, int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcStaticWeavedInvoker("System.Void GorillaLocomotion.Gameplay.RopeSwingManager::RPC_SetVelocity(Fusion.NetworkRunner,System.Int32,System.Int32,UnityEngine.Vector3,System.Boolean,Fusion.RpcInfo)")]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_SetVelocity@Invoker, addr 0x5cf0920, size 0xd8, virtual false, abstract: false, final false
static inline void RPC_SetVelocity@Invoker(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message) ;

/// @brief Method Register, addr 0x5ce9b88, size 0x58, virtual false, abstract: false, final false
static inline void Register(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  t) ;

/// @brief Method RegisterInstance, addr 0x5cf02dc, size 0x60, virtual false, abstract: false, final false
inline void RegisterInstance(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  t) ;

/// @brief Method SendSetVelocity_RPC, addr 0x5ceb9fc, size 0x298, virtual false, abstract: false, final false
inline void SendSetVelocity_RPC(int32_t  ropeId, int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope) ;

/// [PunRPC]
/// @brief Method SetVelocity, addr 0x5cf0508, size 0x118, virtual false, abstract: false, final false
inline void SetVelocity(int32_t  ropeId, int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetVelocityShared, addr 0x5cf0398, size 0x170, virtual false, abstract: false, final false
inline void SetVelocityShared(int32_t  ropeId, int32_t  boneIndex, ::UnityEngine::Vector3  velocity, bool  wholeRope, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method TryGetRope, addr 0x5ceca60, size 0x68, virtual false, abstract: false, final false
inline bool TryGetRope(int32_t  ropeId, ::by_ref<::GorillaLocomotion::Gameplay::GorillaRopeSwing*>  result) ;

/// @brief Method Unregister, addr 0x5ce9c88, size 0x58, virtual false, abstract: false, final false
static inline void Unregister(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  t) ;

/// @brief Method UnregisterInstance, addr 0x5cf033c, size 0x5c, virtual false, abstract: false, final false
inline void UnregisterInstance(::GorillaLocomotion::Gameplay::GorillaRopeSwing*  t) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>* const& __cordl_internal_get_ropes() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*& __cordl_internal_get_ropes() ;

constexpr void __cordl_internal_set_ropes(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  value) ;

/// @brief Method .ctor, addr 0x5cf0898, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaLocomotion::Gameplay::RopeSwingManager> getStaticF__instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x5cf0038, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaLocomotion::Gameplay::RopeSwingManager> get_instance() ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::GorillaLocomotion::Gameplay::RopeSwingManager>  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x5cf0080, size 0x58, virtual false, abstract: false, final false
static inline void set_instance(::GorillaLocomotion::Gameplay::RopeSwingManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RopeSwingManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RopeSwingManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RopeSwingManager(RopeSwingManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RopeSwingManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RopeSwingManager(RopeSwingManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4537};

/// @brief Field ropes, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>>*  ___ropes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::RopeSwingManager, ___ropes) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::RopeSwingManager) == 0x58, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
