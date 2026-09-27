#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaEnemyAI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaEnemyAI)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Realtime {
class IInRoomCallbacks;
}
namespace Photon::Realtime {
class Player;
}
namespace UnityEngine::AI {
class NavMeshAgent;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaEnemyAI;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaEnemyAI*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaEnemyAI*, "", "GorillaEnemyAI");
// [RequireComponent(typeof(UnityEngine.AI.NavMeshAgent))]
// [RequireComponent(typeof(UnityEngine.Rigidbody))]
// Dependencies Photon.Pun.MonoBehaviourPun, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaEnemyAI
class CORDL_TYPE GorillaEnemyAI : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
/// @brief Field agent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  agent;

/// @brief Field lerpValue, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpValue, put=__cordl_internal_set_lerpValue)) float_t  lerpValue;

/// @brief Field playerTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerTransform, put=__cordl_internal_set_playerTransform)) ::UnityW<::UnityEngine::Transform>  playerTransform;

/// @brief Field r, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_r, put=__cordl_internal_set_r)) ::UnityW<::UnityEngine::Rigidbody>  r;

/// @brief Field targetPosition, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPosition, put=__cordl_internal_set_targetPosition)) ::UnityEngine::Vector3  targetPosition;

/// @brief Field targetRotation, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetRotation, put=__cordl_internal_set_targetRotation)) ::UnityEngine::Vector3  targetRotation;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr operator  ::Photon::Realtime::IInRoomCallbacks*() noexcept;

/// @brief Method FindClosestPlayer, addr 0x59a3d14, size 0x1f0, virtual false, abstract: false, final false
inline void FindClosestPlayer() ;

static inline ::GlobalNamespace::GorillaEnemyAI* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x59a3f04, size 0xa4, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method Photon.Pun.IPunObservable.OnPhotonSerializeView, addr 0x59a3708, size 0x38c, virtual true, abstract: false, final true
inline void Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched, addr 0x59a3fa8, size 0x90, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom, addr 0x59a4038, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom, addr 0x59a403c, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate, addr 0x59a4044, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate, addr 0x59a4040, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method Start, addr 0x59a3608, size 0x100, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x59a3a94, size 0x280, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_agent() ;

constexpr float_t const& __cordl_internal_get_lerpValue() const;

constexpr float_t& __cordl_internal_get_lerpValue() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_playerTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_playerTransform() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_r() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_r() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetRotation() ;

constexpr void __cordl_internal_set_agent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_lerpValue(float_t  value) ;

constexpr void __cordl_internal_set_playerTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_r(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_targetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_targetRotation(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x59a4048, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* i___Photon__Realtime__IInRoomCallbacks() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaEnemyAI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaEnemyAI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaEnemyAI(GorillaEnemyAI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaEnemyAI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaEnemyAI(GorillaEnemyAI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2628};

/// @brief Field playerTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___playerTransform;

/// @brief Field agent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___agent;

/// @brief Field r, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___r;

/// @brief Field targetPosition, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPosition;

/// @brief Field targetRotation, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetRotation;

/// @brief Field lerpValue, offset: 0x58, size: 0x4, def value: None
 float_t  ___lerpValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaEnemyAI, ___playerTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEnemyAI, ___agent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEnemyAI, ___r) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEnemyAI, ___targetPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEnemyAI, ___targetRotation) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEnemyAI, ___lerpValue) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaEnemyAI) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
