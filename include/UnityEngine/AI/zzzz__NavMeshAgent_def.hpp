#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshAgent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshAgent)
namespace System {
struct IntPtr;
}
namespace UnityEngine::AI {
struct NavMeshPathStatus;
}
namespace UnityEngine::AI {
struct OffMeshLinkData;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMeshAgent;
}
// Write type traits
MARK_REF_T(::UnityEngine::AI::NavMeshAgent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshAgent*, "UnityEngine.AI", "NavMeshAgent");
// [MovedFrom("UnityEngine")]
// [NativeHeader("Modules/AI/Components/NavMeshAgent.bindings.h")]
// [NativeHeader("Modules/AI/NavMesh/NavMesh.bindings.h")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.ai.navigation@2.0/manual/NavMeshAgent.html")]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMeshAgent
class CORDL_TYPE NavMeshAgent : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(put=set_acceleration)) float_t  acceleration;

 __declspec(property(put=set_agentTypeID)) int32_t  agentTypeID;

 __declspec(property(put=set_angularSpeed)) float_t  angularSpeed;

 __declspec(property(get=get_autoTraverseOffMeshLink, put=set_autoTraverseOffMeshLink)) bool  autoTraverseOffMeshLink;

 __declspec(property(get=get_currentOffMeshLinkData)) ::UnityEngine::AI::OffMeshLinkData  currentOffMeshLinkData;

 __declspec(property(get=get_desiredVelocity)) ::UnityEngine::Vector3  desiredVelocity;

 __declspec(property(get=get_destination, put=set_destination)) ::UnityEngine::Vector3  destination;

 __declspec(property(get=get_isOnNavMesh)) bool  isOnNavMesh;

 __declspec(property(get=get_isOnOffMeshLink)) bool  isOnOffMeshLink;

 __declspec(property(get=get_isStopped, put=set_isStopped)) bool  isStopped;

 __declspec(property(get=get_pathPending)) bool  pathPending;

 __declspec(property(get=get_pathStatus)) ::UnityEngine::AI::NavMeshPathStatus  pathStatus;

 __declspec(property(get=get_remainingDistance)) float_t  remainingDistance;

 __declspec(property(get=get_speed, put=set_speed)) float_t  speed;

 __declspec(property(get=get_stoppingDistance)) float_t  stoppingDistance;

 __declspec(property(get=get_updateRotation, put=set_updateRotation)) bool  updateRotation;

 __declspec(property(get=get_velocity, put=set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method CompleteOffMeshLink, addr 0xb51eca8, size 0x78, virtual false, abstract: false, final false
inline void CompleteOffMeshLink() ;

/// @brief Method CompleteOffMeshLink_Injected, addr 0xb51ed20, size 0x3c, virtual false, abstract: false, final false
static inline void CompleteOffMeshLink_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("NavMeshAgentScriptBindings::GetCurrentOffMeshLinkDataInternal", HasExplicitThis = true)]
/// @brief Method GetCurrentOffMeshLinkDataInternal, addr 0xb51ebbc, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::AI::OffMeshLinkData GetCurrentOffMeshLinkDataInternal() ;

/// @brief Method GetCurrentOffMeshLinkDataInternal_Injected, addr 0xb51ec64, size 0x44, virtual false, abstract: false, final false
static inline void GetCurrentOffMeshLinkDataInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::AI::OffMeshLinkData>  ret) ;

static inline ::UnityEngine::AI::NavMeshAgent* New_ctor() ;

/// @brief Method SetDestination, addr 0xb51e458, size 0x94, virtual false, abstract: false, final false
inline bool SetDestination(::UnityEngine::Vector3  target) ;

/// @brief Method SetDestination_Injected, addr 0xb51e4ec, size 0x44, virtual false, abstract: false, final false
static inline bool SetDestination_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  target) ;

/// @brief Method Warp, addr 0xb51f03c, size 0x94, virtual false, abstract: false, final false
inline bool Warp(::UnityEngine::Vector3  newPosition) ;

/// @brief Method Warp_Injected, addr 0xb51f0d0, size 0x44, virtual false, abstract: false, final false
static inline bool Warp_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  newPosition) ;

/// @brief Method .ctor, addr 0xb51f8ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_autoTraverseOffMeshLink, addr 0xb51ed5c, size 0x78, virtual false, abstract: false, final false
inline bool get_autoTraverseOffMeshLink() ;

/// @brief Method get_autoTraverseOffMeshLink_Injected, addr 0xb51edd4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_autoTraverseOffMeshLink_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_currentOffMeshLinkData, addr 0xb51eb88, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::AI::OffMeshLinkData get_currentOffMeshLinkData() ;

/// @brief Method get_desiredVelocity, addr 0xb51e944, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_desiredVelocity() ;

/// @brief Method get_desiredVelocity_Injected, addr 0xb51e9dc, size 0x44, virtual false, abstract: false, final false
static inline void get_desiredVelocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_destination, addr 0xb51e530, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_destination() ;

/// @brief Method get_destination_Injected, addr 0xb51e5c8, size 0x44, virtual false, abstract: false, final false
static inline void get_destination_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// [NativeName("InCrowdSystem")]
/// @brief Method get_isOnNavMesh, addr 0xb51f7f8, size 0x78, virtual false, abstract: false, final false
inline bool get_isOnNavMesh() ;

/// @brief Method get_isOnNavMesh_Injected, addr 0xb51f870, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isOnNavMesh_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("IsOnOffMeshLink")]
/// @brief Method get_isOnOffMeshLink, addr 0xb51ead4, size 0x78, virtual false, abstract: false, final false
inline bool get_isOnOffMeshLink() ;

/// @brief Method get_isOnOffMeshLink_Injected, addr 0xb51eb4c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isOnOffMeshLink_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("NavMeshAgentScriptBindings::GetIsStopped", HasExplicitThis = true)]
/// @brief Method get_isStopped, addr 0xb51f114, size 0x78, virtual false, abstract: false, final false
inline bool get_isStopped() ;

/// @brief Method get_isStopped_Injected, addr 0xb51f18c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isStopped_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("PathPending")]
/// @brief Method get_pathPending, addr 0xb51eed4, size 0x78, virtual false, abstract: false, final false
inline bool get_pathPending() ;

/// @brief Method get_pathPending_Injected, addr 0xb51ef4c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_pathPending_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pathStatus, addr 0xb51ef88, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::AI::NavMeshPathStatus get_pathStatus() ;

/// @brief Method get_pathStatus_Injected, addr 0xb51f000, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::AI::NavMeshPathStatus get_pathStatus_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_remainingDistance, addr 0xb51ea20, size 0x78, virtual false, abstract: false, final false
inline float_t get_remainingDistance() ;

/// @brief Method get_remainingDistance_Injected, addr 0xb51ea98, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_remainingDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_speed, addr 0xb51f350, size 0x78, virtual false, abstract: false, final false
inline float_t get_speed() ;

/// @brief Method get_speed_Injected, addr 0xb51f3c8, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_speed_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stoppingDistance, addr 0xb51e6e0, size 0x78, virtual false, abstract: false, final false
inline float_t get_stoppingDistance() ;

/// @brief Method get_stoppingDistance_Injected, addr 0xb51e758, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_stoppingDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_updateRotation, addr 0xb51f680, size 0x78, virtual false, abstract: false, final false
inline bool get_updateRotation() ;

/// @brief Method get_updateRotation_Injected, addr 0xb51f6f8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_updateRotation_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_velocity, addr 0xb51e794, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_velocity() ;

/// @brief Method get_velocity_Injected, addr 0xb51e82c, size 0x44, virtual false, abstract: false, final false
static inline void get_velocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method set_acceleration, addr 0xb51f5ac, size 0x88, virtual false, abstract: false, final false
inline void set_acceleration(float_t  value) ;

/// @brief Method set_acceleration_Injected, addr 0xb51f634, size 0x4c, virtual false, abstract: false, final false
static inline void set_acceleration_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_agentTypeID, addr 0xb51f28c, size 0x80, virtual false, abstract: false, final false
inline void set_agentTypeID(int32_t  value) ;

/// @brief Method set_agentTypeID_Injected, addr 0xb51f30c, size 0x44, virtual false, abstract: false, final false
static inline void set_agentTypeID_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_angularSpeed, addr 0xb51f4d8, size 0x88, virtual false, abstract: false, final false
inline void set_angularSpeed(float_t  value) ;

/// @brief Method set_angularSpeed_Injected, addr 0xb51f560, size 0x4c, virtual false, abstract: false, final false
static inline void set_angularSpeed_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_autoTraverseOffMeshLink, addr 0xb51ee10, size 0x80, virtual false, abstract: false, final false
inline void set_autoTraverseOffMeshLink(bool  value) ;

/// @brief Method set_autoTraverseOffMeshLink_Injected, addr 0xb51ee90, size 0x44, virtual false, abstract: false, final false
static inline void set_autoTraverseOffMeshLink_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_destination, addr 0xb51e60c, size 0x90, virtual false, abstract: false, final false
inline void set_destination(::UnityEngine::Vector3  value) ;

/// @brief Method set_destination_Injected, addr 0xb51e69c, size 0x44, virtual false, abstract: false, final false
static inline void set_destination_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// [FreeFunction("NavMeshAgentScriptBindings::SetIsStopped", HasExplicitThis = true)]
/// @brief Method set_isStopped, addr 0xb51f1c8, size 0x80, virtual false, abstract: false, final false
inline void set_isStopped(bool  value) ;

/// @brief Method set_isStopped_Injected, addr 0xb51f248, size 0x44, virtual false, abstract: false, final false
static inline void set_isStopped_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_speed, addr 0xb51f404, size 0x88, virtual false, abstract: false, final false
inline void set_speed(float_t  value) ;

/// @brief Method set_speed_Injected, addr 0xb51f48c, size 0x4c, virtual false, abstract: false, final false
static inline void set_speed_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_updateRotation, addr 0xb51f734, size 0x80, virtual false, abstract: false, final false
inline void set_updateRotation(bool  value) ;

/// @brief Method set_updateRotation_Injected, addr 0xb51f7b4, size 0x44, virtual false, abstract: false, final false
static inline void set_updateRotation_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_velocity, addr 0xb51e870, size 0x90, virtual false, abstract: false, final false
inline void set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method set_velocity_Injected, addr 0xb51e900, size 0x44, virtual false, abstract: false, final false
static inline void set_velocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshAgent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshAgent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshAgent(NavMeshAgent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshAgent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshAgent(NavMeshAgent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32095};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AI::NavMeshAgent) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::AI
