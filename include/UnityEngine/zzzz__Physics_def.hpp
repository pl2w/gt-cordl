#pragma once
// IWYU pragma private; include "UnityEngine/Physics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Physics)
namespace GlobalNamespace {
template<typename T>
struct NativeArray_1_ReadOnly;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct ContactPairHeader;
}
namespace UnityEngine {
struct ContactPair;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct MeshColliderCookingOptions;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
class Physics_ContactEventDelegate;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct SimulationMode;
}
namespace UnityEngine {
struct SimulationOption;
}
namespace UnityEngine {
struct SimulationStage;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Physics;
}
namespace UnityEngine {
class Physics_ContactEventDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Physics*);
MARK_REF_T(::UnityEngine::Physics_ContactEventDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Physics*, "UnityEngine", "Physics");
DEFINE_IL2CPP_CLASS(::UnityEngine::Physics_ContactEventDelegate*, "UnityEngine", "Physics/ContactEventDelegate");
// [StaticAccessor("GetPhysicsManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
// [NativeHeader("Modules/Physics/PhysicsQuery.h")]
// [NativeHeader("Modules/Physics/PhysicsManager.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics
class CORDL_TYPE Physics : public ::System::Object {
public:
// Declarations
using ContactEventDelegate = ::UnityEngine::Physics_ContactEventDelegate;

/// @brief Field ContactEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContactEvent, put=setStaticF_ContactEvent)) ::UnityEngine::Physics_ContactEventDelegate*  ContactEvent;

/// @brief Field ContactModifyEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContactModifyEvent, put=setStaticF_ContactModifyEvent)) ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  ContactModifyEvent;

/// @brief Field ContactModifyEventCCD, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContactModifyEventCCD, put=setStaticF_ContactModifyEventCCD)) ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  ContactModifyEventCCD;

/// @brief Field GenericContactModifyEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GenericContactModifyEvent, put=setStaticF_GenericContactModifyEvent)) ::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>*  GenericContactModifyEvent;

/// @brief Field s_ReusableCollision, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ReusableCollision, put=setStaticF_s_ReusableCollision)) ::UnityEngine::Collision*  s_ReusableCollision;

/// @brief Method BakeMesh, addr 0xb689fc8, size 0x88, virtual false, abstract: false, final false
static inline void BakeMesh(int32_t  meshID, bool  convex) ;

/// [ThreadSafe]
/// [StaticAccessor("GetPhysicsManager()")]
/// @brief Method BakeMesh, addr 0xb689f74, size 0x54, virtual false, abstract: false, final false
static inline void BakeMesh(int32_t  meshID, bool  convex, ::UnityEngine::MeshColliderCookingOptions  cookingOptions) ;

/// @brief Method CapsuleCast, addr 0xb686704, size 0x130, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCastNonAlloc, addr 0xb68908c, size 0x128, virtual false, abstract: false, final false
static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckBox, addr 0xb6898e8, size 0x108, virtual false, abstract: false, final false
static inline bool CheckBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion  orientation, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layermask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::BoxTest")]
/// @brief Method CheckBox_Internal, addr 0xb6897b8, size 0xbc, virtual false, abstract: false, final false
static inline bool CheckBox_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, int32_t  layermask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckBox_Internal_Injected, addr 0xb689874, size 0x74, virtual false, abstract: false, final false
static inline bool CheckBox_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  halfExtents, ::by_ref<::UnityEngine::Quaternion>  orientation, int32_t  layermask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckCapsule, addr 0xb6896f8, size 0xc0, virtual false, abstract: false, final false
static inline bool CheckCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::CapsuleTest")]
/// @brief Method CheckCapsule_Internal, addr 0xb6895b8, size 0xc4, virtual false, abstract: false, final false
static inline bool CheckCapsule_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckCapsule_Internal_Injected, addr 0xb68967c, size 0x7c, virtual false, abstract: false, final false
static inline bool CheckCapsule_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  start, ::by_ref<::UnityEngine::Vector3>  end, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method CheckSphere, addr 0xb689004, size 0x88, virtual false, abstract: false, final false
static inline bool CheckSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask) ;

/// @brief Method CheckSphere, addr 0xb688f6c, size 0x98, virtual false, abstract: false, final false
static inline bool CheckSphere(::UnityEngine::Vector3  position, float_t  radius, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::SphereTest")]
/// @brief Method CheckSphere_Internal, addr 0xb688e48, size 0xb8, virtual false, abstract: false, final false
static inline bool CheckSphere_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckSphere_Internal_Injected, addr 0xb688f00, size 0x6c, virtual false, abstract: false, final false
static inline bool CheckSphere_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method ClosestPoint, addr 0xb688bb4, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3  point, ::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method ComputePenetration, addr 0xb688900, size 0x130, virtual false, abstract: false, final false
static inline bool ComputePenetration(::UnityEngine::Collider*  colliderA, ::UnityEngine::Vector3  positionA, ::UnityEngine::Quaternion  rotationA, ::UnityEngine::Collider*  colliderB, ::UnityEngine::Vector3  positionB, ::UnityEngine::Quaternion  rotationB, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<float_t>  distance) ;

/// [StaticAccessor("PhysicsManager", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetBodyByInstanceID, addr 0xb68a08c, size 0x94, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetBodyByInstanceID(::UnityEngine::EntityId  entityId) ;

/// @brief Method GetBodyByInstanceID_Injected, addr 0xb68a120, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetBodyByInstanceID_Injected(::by_ref<::UnityEngine::EntityId>  entityId) ;

/// [StaticAccessor("PhysicsManager", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetColliderByInstanceID, addr 0xb67e760, size 0x94, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Collider> GetColliderByInstanceID(::UnityEngine::EntityId  entityId) ;

/// @brief Method GetColliderByInstanceID_Injected, addr 0xb68a050, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetColliderByInstanceID_Injected(::by_ref<::UnityEngine::EntityId>  entityId) ;

/// @brief Method GetCollisionToReport, addr 0xb68aa3c, size 0x12c, virtual false, abstract: false, final false
static inline ::UnityEngine::Collision* GetCollisionToReport(/* [IsReadOnly] */ ::by_ref<::UnityEngine::ContactPairHeader>  header, /* [IsReadOnly] */ ::by_ref<::UnityEngine::ContactPair>  pair, bool  flipped) ;

/// @brief Method GetIgnoreCollision, addr 0xb6852c8, size 0x13c, virtual false, abstract: false, final false
static inline bool GetIgnoreCollision(/* [NotNull] */ ::UnityEngine::Collider*  collider1, /* [NotNull] */ ::UnityEngine::Collider*  collider2) ;

/// @brief Method GetIgnoreCollision_Injected, addr 0xb685404, size 0x44, virtual false, abstract: false, final false
static inline bool GetIgnoreCollision_Injected(::System::IntPtr  collider1, ::System::IntPtr  collider2) ;

/// [ExcludeFromDocs]
/// @brief Method IgnoreCollision, addr 0xb685260, size 0x68, virtual false, abstract: false, final false
static inline void IgnoreCollision(::UnityEngine::Collider*  collider1, ::UnityEngine::Collider*  collider2) ;

/// @brief Method IgnoreCollision, addr 0xb6850c8, size 0x144, virtual false, abstract: false, final false
static inline void IgnoreCollision(/* [NotNull] */ ::UnityEngine::Collider*  collider1, /* [NotNull] */ ::UnityEngine::Collider*  collider2, /* [DefaultValue("true")] */ bool  ignore) ;

/// @brief Method IgnoreCollision_Injected, addr 0xb68520c, size 0x54, virtual false, abstract: false, final false
static inline void IgnoreCollision_Injected(::System::IntPtr  collider1, ::System::IntPtr  collider2, /* [DefaultValue("true")] */ bool  ignore) ;

/// [FreeFunction("Physics::RaycastAll")]
/// @brief Method Internal_RaycastAll, addr 0xb686ce4, size 0x160, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> Internal_RaycastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastAll_Injected, addr 0xb686e44, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_RaycastAll_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Ray>  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [ExcludeFromDocs]
/// @brief Method Linecast, addr 0xb686654, size 0xb0, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask) ;

/// @brief Method Linecast, addr 0xb686530, size 0x124, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method Linecast, addr 0xb686490, size 0xa0, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, int32_t  layerMask) ;

/// @brief Method Linecast, addr 0xb68637c, size 0x114, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [RequiredByNativeCode]
/// @brief Method OnSceneContact, addr 0xb68a4ac, size 0x234, virtual false, abstract: false, final false
static inline void OnSceneContact(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count) ;

/// [RequiredByNativeCode]
/// @brief Method OnSceneContactModify, addr 0xb684de0, size 0xac, virtual false, abstract: false, final false
static inline void OnSceneContactModify(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count, bool  isCCD) ;

/// [ExcludeFromDocs]
/// @brief Method OverlapBoxNonAlloc, addr 0xb689c2c, size 0x104, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*>  results, ::UnityEngine::Quaternion  orientation) ;

/// [ExcludeFromDocs]
/// @brief Method OverlapBoxNonAlloc, addr 0xb689b24, size 0x108, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*>  results, ::UnityEngine::Quaternion  orientation, int32_t  mask) ;

/// @brief Method OverlapBoxNonAlloc, addr 0xb6899f0, size 0x118, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*>  results, /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion  orientation, /* [DefaultValue("AllLayers")] */ int32_t  mask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method OverlapCapsuleNonAlloc, addr 0xb689ec0, size 0xb4, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results) ;

/// [ExcludeFromDocs]
/// @brief Method OverlapCapsuleNonAlloc, addr 0xb689e00, size 0xc0, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask) ;

/// @brief Method OverlapCapsuleNonAlloc, addr 0xb689d30, size 0xc8, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, /* [DefaultValue("AllLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method OverlapSphere, addr 0xb6884f8, size 0x84, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere(::UnityEngine::Vector3  position, float_t  radius) ;

/// [ExcludeFromDocs]
/// @brief Method OverlapSphere, addr 0xb688470, size 0x88, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask) ;

/// @brief Method OverlapSphere, addr 0xb6883d8, size 0x98, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, /* [DefaultValue("AllLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method OverlapSphereNonAlloc, addr 0xb688dbc, size 0x8c, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results) ;

/// [ExcludeFromDocs]
/// @brief Method OverlapSphereNonAlloc, addr 0xb688d24, size 0x98, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask) ;

/// @brief Method OverlapSphereNonAlloc, addr 0xb688c7c, size 0xa0, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, /* [DefaultValue("AllLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::OverlapSphere")]
/// @brief Method OverlapSphere_Internal, addr 0xb6882b8, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere_Internal_Injected, addr 0xb68836c, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method PhysXOnSceneContactModify, addr 0xb684e8c, size 0xf4, virtual false, abstract: false, final false
static inline void PhysXOnSceneContactModify(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count, bool  isCCD) ;

/// [FreeFunction("Physics::ClosestPoint")]
/// @brief Method Query_ClosestPoint, addr 0xb688a30, size 0x118, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Query_ClosestPoint(/* [NotNull] */ ::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  point) ;

/// @brief Method Query_ClosestPoint_Injected, addr 0xb688b48, size 0x6c, virtual false, abstract: false, final false
static inline void Query_ClosestPoint_Injected(::System::IntPtr  collider, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// [FreeFunction("Physics::ComputePenetration")]
/// @brief Method Query_ComputePenetration, addr 0xb6886d8, size 0x19c, virtual false, abstract: false, final false
static inline bool Query_ComputePenetration(/* [NotNull] */ ::UnityEngine::Collider*  colliderA, ::UnityEngine::Vector3  positionA, ::UnityEngine::Quaternion  rotationA, /* [NotNull] */ ::UnityEngine::Collider*  colliderB, ::UnityEngine::Vector3  positionB, ::UnityEngine::Quaternion  rotationB, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<float_t>  distance) ;

/// @brief Method Query_ComputePenetration_Injected, addr 0xb688874, size 0x8c, virtual false, abstract: false, final false
static inline bool Query_ComputePenetration_Injected(::System::IntPtr  colliderA, ::by_ref<::UnityEngine::Vector3>  positionA, ::by_ref<::UnityEngine::Quaternion>  rotationA, ::System::IntPtr  colliderB, ::by_ref<::UnityEngine::Vector3>  positionB, ::by_ref<::UnityEngine::Quaternion>  rotationB, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<float_t>  distance) ;

/// [FreeFunction("Physics::SphereCastAll")]
/// @brief Method Query_SphereCastAll, addr 0xb687d6c, size 0x174, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> Query_SphereCastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_SphereCastAll_Injected, addr 0xb687ee0, size 0x8c, virtual false, abstract: false, final false
static inline void Query_SphereCastAll_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, float_t  radius, ::by_ref<::UnityEngine::Vector3>  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb685888, size 0xbc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb685db8, size 0xcc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb685cec, size 0xcc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// [ExcludeFromDocs]
/// [RequiredByNativeCode]
/// @brief Method Raycast, addr 0xb685c0c, size 0xe0, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0xb685944, size 0xdc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb6857bc, size 0xcc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb6856f4, size 0xc8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0xb685448, size 0xdc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb68604c, size 0x8c, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb6862e8, size 0x94, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb686244, size 0xa4, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb68618c, size 0xb8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0xb6860d8, size 0xb4, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb685fc0, size 0x8c, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb685f20, size 0xa0, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0xb685e84, size 0x9c, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method RaycastAll, addr 0xb68722c, size 0xa4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction) ;

/// [ExcludeFromDocs]
/// @brief Method RaycastAll, addr 0xb687180, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// [ExcludeFromDocs]
/// @brief Method RaycastAll, addr 0xb6870d0, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastAll, addr 0xb686ec0, size 0x210, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method RaycastAll, addr 0xb6874d8, size 0x9c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray  ray) ;

/// [ExcludeFromDocs]
/// @brief Method RaycastAll, addr 0xb687434, size 0xa4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance) ;

/// [RequiredByNativeCode]
/// [ExcludeFromDocs]
/// @brief Method RaycastAll, addr 0xb687384, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastAll, addr 0xb6872d0, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray  ray, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method RaycastNonAlloc, addr 0xb687ca4, size 0xc8, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results) ;

/// [ExcludeFromDocs]
/// @brief Method RaycastNonAlloc, addr 0xb687bdc, size 0xc8, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance) ;

/// [ExcludeFromDocs]
/// @brief Method RaycastNonAlloc, addr 0xb687b00, size 0xdc, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastNonAlloc, addr 0xb687a28, size 0xd8, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method RaycastNonAlloc, addr 0xb687998, size 0x90, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  results) ;

/// [ExcludeFromDocs]
/// @brief Method RaycastNonAlloc, addr 0xb6878f8, size 0xa0, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance) ;

/// [ExcludeFromDocs]
/// [RequiredByNativeCode]
/// @brief Method RaycastNonAlloc, addr 0xb68785c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastNonAlloc, addr 0xb687574, size 0xb0, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  results, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method ReportContacts, addr 0xb68a6e0, size 0x32c, virtual false, abstract: false, final false
static inline void ReportContacts(::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>  array) ;

/// [StaticAccessor("PhysicsManager", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method SendOnCollisionEnter, addr 0xb68a15c, size 0xb0, virtual false, abstract: false, final false
static inline void SendOnCollisionEnter(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionEnter_Injected, addr 0xb68a20c, size 0x44, virtual false, abstract: false, final false
static inline void SendOnCollisionEnter_Injected(::System::IntPtr  component, ::UnityEngine::Collision*  collision) ;

/// [StaticAccessor("PhysicsManager", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method SendOnCollisionExit, addr 0xb68a344, size 0xb0, virtual false, abstract: false, final false
static inline void SendOnCollisionExit(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionExit_Injected, addr 0xb68a3f4, size 0x44, virtual false, abstract: false, final false
static inline void SendOnCollisionExit_Injected(::System::IntPtr  component, ::UnityEngine::Collision*  collision) ;

/// [StaticAccessor("PhysicsManager", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method SendOnCollisionStay, addr 0xb68a250, size 0xb0, virtual false, abstract: false, final false
static inline void SendOnCollisionStay(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionStay_Injected, addr 0xb68a300, size 0x44, virtual false, abstract: false, final false
static inline void SendOnCollisionStay_Injected(::System::IntPtr  component, ::UnityEngine::Collision*  collision) ;

/// [NativeName("Simulate")]
/// @brief Method Simulate_Internal, addr 0xb68857c, size 0xa8, virtual false, abstract: false, final false
static inline void Simulate_Internal(::UnityEngine::PhysicsScene  physicsScene, float_t  step, ::UnityEngine::SimulationStage  stages, ::UnityEngine::SimulationOption  options) ;

/// @brief Method Simulate_Internal_Injected, addr 0xb688624, size 0x64, virtual false, abstract: false, final false
static inline void Simulate_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, float_t  step, ::UnityEngine::SimulationStage  stages, ::UnityEngine::SimulationOption  options) ;

/// [ExcludeFromDocs]
/// @brief Method SphereCast, addr 0xb68692c, size 0xc8, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCast, addr 0xb686854, size 0xd0, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method SphereCast, addr 0xb686c3c, size 0xa8, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCast, addr 0xb686b70, size 0xcc, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method SphereCast, addr 0xb686ad0, size 0xa0, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCast, addr 0xb6869f4, size 0xdc, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCastAll, addr 0xb687f6c, size 0x164, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method SphereCastAll, addr 0xb688228, size 0x90, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance) ;

/// [ExcludeFromDocs]
/// @brief Method SphereCastAll, addr 0xb68818c, size 0x9c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCastAll, addr 0xb6880d0, size 0xbc, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Ray  ray, float_t  radius, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [ExcludeFromDocs]
/// @brief Method SphereCastNonAlloc, addr 0xb6894f0, size 0xc8, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCastNonAlloc, addr 0xb6892e8, size 0xe8, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SyncTransforms, addr 0xb688688, size 0x28, virtual false, abstract: false, final false
static inline void SyncTransforms() ;

static inline ::UnityEngine::Physics_ContactEventDelegate* getStaticF_ContactEvent() ;

static inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEvent() ;

static inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEventCCD() ;

static inline ::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>* getStaticF_GenericContactModifyEvent() ;

static inline ::UnityEngine::Collision* getStaticF_s_ReusableCollision() ;

/// @brief Method get_autoSimulation, addr 0xb68a438, size 0x74, virtual false, abstract: false, final false
static inline bool get_autoSimulation() ;

/// @brief Method get_defaultPhysicsScene, addr 0xb6850c0, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::PhysicsScene get_defaultPhysicsScene() ;

/// [ThreadSafe]
/// @brief Method get_gravity, addr 0xb684f80, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_gravity() ;

/// @brief Method get_gravity_Injected, addr 0xb68500c, size 0x3c, virtual false, abstract: false, final false
static inline void get_gravity_Injected(::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_invokeCollisionCallbacks, addr 0xb685098, size 0x28, virtual false, abstract: false, final false
static inline bool get_invokeCollisionCallbacks() ;

/// @brief Method get_queriesHitTriggers, addr 0xb685048, size 0x28, virtual false, abstract: false, final false
static inline bool get_queriesHitTriggers() ;

/// @brief Method get_reuseCollisionCallbacks, addr 0xb6886b0, size 0x28, virtual false, abstract: false, final false
static inline bool get_reuseCollisionCallbacks() ;

/// @brief Method get_simulationMode, addr 0xb685070, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::SimulationMode get_simulationMode() ;

static inline void setStaticF_ContactEvent(::UnityEngine::Physics_ContactEventDelegate*  value) ;

static inline void setStaticF_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline void setStaticF_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline void setStaticF_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>*  value) ;

static inline void setStaticF_s_ReusableCollision(::UnityEngine::Collision*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Physics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Physics(Physics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Physics(Physics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30571};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Physics) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics/ContactEventDelegate
class CORDL_TYPE Physics_ContactEventDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb68acf0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::PhysicsScene  scene, ::GlobalNamespace::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>  headerArray) ;

static inline ::UnityEngine::Physics_ContactEventDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb68ac50, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Physics_ContactEventDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Physics_ContactEventDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Physics_ContactEventDelegate(Physics_ContactEventDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Physics_ContactEventDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Physics_ContactEventDelegate(Physics_ContactEventDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30570};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Physics_ContactEventDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
