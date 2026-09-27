#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsScene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsScene)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Collider;
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
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct PhysicsScene;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PhysicsScene);
DEFINE_IL2CPP_CLASS(::UnityEngine::PhysicsScene, "UnityEngine", "PhysicsScene");
// [NativeHeader("Modules/Physics/Public/PhysicsSceneHandle.h")]
// [NativeHeader("Modules/Physics/PhysicsQuery.h")]
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.PhysicsScene
struct CORDL_TYPE PhysicsScene {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::PhysicsScene>*() ;

/// @brief Method CapsuleCast, addr 0xb686834, size 0x20, virtual false, abstract: false, final false
inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCast, addr 0xb6891b4, size 0x134, virtual false, abstract: false, final false
inline int32_t CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Equals, addr 0xb68dd0c, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0xb68dd84, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::PhysicsScene  other) ;

/// @brief Method GetDefaultScene, addr 0xb68de5c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::PhysicsScene GetDefaultScene() ;

/// @brief Method GetHashCode, addr 0xb68dc98, size 0x74, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Internal_CapsuleCast, addr 0xb68e48c, size 0x14c, virtual false, abstract: false, final false
static inline bool Internal_CapsuleCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::CapsuleCastNonAlloc")]
/// @brief Method Internal_CapsuleCastNonAlloc, addr 0xb68e5d8, size 0x12c, virtual false, abstract: false, final false
static inline int32_t Internal_CapsuleCastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_CapsuleCastNonAlloc_Injected, addr 0xb68e704, size 0x9c, virtual false, abstract: false, final false
static inline int32_t Internal_CapsuleCastNonAlloc_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  p0, ::by_ref<::UnityEngine::Vector3>  p1, float_t  radius, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::Raycast")]
/// @brief Method Internal_Raycast, addr 0xb68e0cc, size 0x7c, virtual false, abstract: false, final false
static inline bool Internal_Raycast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::RaycastNonAlloc")]
/// @brief Method Internal_RaycastNonAlloc, addr 0xb68e1c4, size 0x104, virtual false, abstract: false, final false
static inline int32_t Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastNonAlloc_Injected, addr 0xb68e2c8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t Internal_RaycastNonAlloc_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::RaycastTest")]
/// @brief Method Internal_RaycastTest, addr 0xb68dfe4, size 0x7c, virtual false, abstract: false, final false
static inline bool Internal_RaycastTest(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastTest_Injected, addr 0xb68e060, size 0x6c, virtual false, abstract: false, final false
static inline bool Internal_RaycastTest_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Ray>  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_Raycast_Injected, addr 0xb68e148, size 0x7c, virtual false, abstract: false, final false
static inline bool Internal_Raycast_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Ray>  ray, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_SphereCast, addr 0xb68e9d8, size 0x12c, virtual false, abstract: false, final false
static inline bool Internal_SphereCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::SphereCastNonAlloc")]
/// @brief Method Internal_SphereCastNonAlloc, addr 0xb68eb04, size 0x118, virtual false, abstract: false, final false
static inline int32_t Internal_SphereCastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_SphereCastNonAlloc_Injected, addr 0xb68ec1c, size 0x8c, virtual false, abstract: false, final false
static inline int32_t Internal_SphereCastNonAlloc_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, float_t  radius, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method IsValid, addr 0xb68dd94, size 0x48, virtual false, abstract: false, final false
inline bool IsValid() ;

/// [StaticAccessor("GetPhysicsManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// [NativeMethod("IsPhysicsSceneValid")]
/// @brief Method IsValid_Internal, addr 0xb68dddc, size 0x44, virtual false, abstract: false, final false
static inline bool IsValid_Internal(::UnityEngine::PhysicsScene  physicsScene) ;

/// @brief Method IsValid_Internal_Injected, addr 0xb68de20, size 0x3c, virtual false, abstract: false, final false
static inline bool IsValid_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene) ;

/// @brief Method OverlapBox, addr 0xb689b08, size 0x1c, virtual false, abstract: false, final false
inline int32_t OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*>  results, /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion  orientation, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::OverlapBoxNonAlloc")]
/// @brief Method OverlapBoxNonAlloc_Internal, addr 0xb68eda8, size 0x88, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, /* [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider*>  results, ::UnityEngine::Quaternion  orientation, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapBoxNonAlloc_Internal_Injected, addr 0xb68ee30, size 0x84, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  halfExtents, ::ArrayW<::UnityEngine::Collider*>  results, ::by_ref<::UnityEngine::Quaternion>  orientation, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsule, addr 0xb689df8, size 0x8, virtual false, abstract: false, final false
inline int32_t OverlapCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, /* [DefaultValue("AllLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::OverlapCapsuleNonAlloc")]
/// @brief Method OverlapCapsuleNonAlloc_Internal, addr 0xb68e7a0, size 0x90, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, /* [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsuleNonAlloc_Internal_Injected, addr 0xb68e830, size 0x84, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  point0, ::by_ref<::UnityEngine::Vector3>  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere, addr 0xb688d1c, size 0x8, virtual false, abstract: false, final false
inline int32_t OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, /* [DefaultValue("AllLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::OverlapSphereNonAlloc")]
/// @brief Method OverlapSphereNonAlloc_Internal, addr 0xb68eca8, size 0x84, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, /* [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphereNonAlloc_Internal_Injected, addr 0xb68ed2c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::CapsuleCast")]
/// @brief Method Query_CapsuleCast, addr 0xb68e344, size 0xac, virtual false, abstract: false, final false
static inline bool Query_CapsuleCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_CapsuleCast_Injected, addr 0xb68e3f0, size 0x9c, virtual false, abstract: false, final false
static inline bool Query_CapsuleCast_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  point1, ::by_ref<::UnityEngine::Vector3>  point2, float_t  radius, ::by_ref<::UnityEngine::Vector3>  direction, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// [FreeFunction("Physics::SphereCast")]
/// @brief Method Query_SphereCast, addr 0xb68e8b4, size 0x98, virtual false, abstract: false, final false
static inline bool Query_SphereCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_SphereCast_Injected, addr 0xb68e94c, size 0x8c, virtual false, abstract: false, final false
static inline bool Query_SphereCast_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, float_t  radius, ::by_ref<::UnityEngine::Vector3>  direction, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0xb685a20, size 0x1ec, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("Physics.DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0xb685524, size 0x1d0, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("Physics.DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0xb687624, size 0x238, virtual false, abstract: false, final false
inline int32_t Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("Physics.DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Simulate, addr 0xb68de64, size 0x180, virtual false, abstract: false, final false
inline void Simulate(float_t  step) ;

/// @brief Method SphereCast, addr 0xb686924, size 0x8, virtual false, abstract: false, final false
inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCast, addr 0xb6893d0, size 0x120, virtual false, abstract: false, final false
inline int32_t SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method ToString, addr 0xb68dbec, size 0x94, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
constexpr ::System::IEquatable_1<::UnityEngine::PhysicsScene>* i___System__IEquatable_1___UnityEngine__PhysicsScene_() ;

/// @brief Method op_Equality, addr 0xb68dc80, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::PhysicsScene  lhs, ::UnityEngine::PhysicsScene  rhs) ;

/// @brief Method op_Inequality, addr 0xb68dc8c, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::PhysicsScene  lhs, ::UnityEngine::PhysicsScene  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsScene() ;

// Ctor Parameters [CppParam { name: "m_index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_version", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PhysicsScene(int32_t  m_index, int32_t  m_version) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30590};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_index, offset: 0x0, size: 0x4, def value: None
 int32_t  m_index;

/// @brief Field m_version, offset: 0x4, size: 0x4, def value: None
 int32_t  m_version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PhysicsScene, m_index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PhysicsScene, m_version) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::PhysicsScene) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine
