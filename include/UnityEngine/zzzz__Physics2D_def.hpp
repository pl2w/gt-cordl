#pragma once
// IWYU pragma private; include "UnityEngine/Physics2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Physics2D)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
struct ContactFilter2D;
}
namespace UnityEngine {
struct PhysicsScene2D;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit2D;
}
namespace UnityEngine {
class Rigidbody2D;
}
namespace UnityEngine {
struct SimulationMode2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Physics2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::Physics2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Physics2D*, "UnityEngine", "Physics2D");
// [StaticAccessor("GetPhysicsManager2D()", (UnityEngine.Bindings.StaticAccessorType)1)]
// [NativeHeader("Physics2DScriptingClasses.h")]
// [NativeHeader("Modules/Physics2D/PhysicsManager2D.h")]
// [NativeHeader("Physics2DScriptingClasses.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics2D
class CORDL_TYPE Physics2D : public ::System::Object {
public:
// Declarations
/// @brief Field m_LastDisabledRigidbody2D, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_LastDisabledRigidbody2D, put=setStaticF_m_LastDisabledRigidbody2D)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>*  m_LastDisabledRigidbody2D;

/// [ExcludeFromDocs]
/// @brief Method CircleCast, addr 0xb67bc58, size 0x134, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D CircleCast(::UnityEngine::Vector2  origin, float_t  radius, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask) ;

/// @brief Method GetRayIntersection, addr 0xb67bd8c, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D GetRayIntersection(::UnityEngine::Ray  ray, float_t  distance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask) ;

/// [ExcludeFromDocs]
/// @brief Method GetRayIntersectionAll, addr 0xb67be3c, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray  ray) ;

/// [ExcludeFromDocs]
/// @brief Method GetRayIntersectionAll, addr 0xb67c010, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray  ray, float_t  distance) ;

/// [RequiredByNativeCode]
/// @brief Method GetRayIntersectionAll, addr 0xb67c084, size 0x80, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray  ray, float_t  distance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask) ;

/// [NativeMethod("GetRayIntersectionAll_Binding")]
/// [StaticAccessor("PhysicsQuery2D", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetRayIntersectionAll_Internal, addr 0xb67bea8, size 0x168, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  distance, int32_t  layerMask) ;

/// @brief Method GetRayIntersectionAll_Internal_Injected, addr 0xb67c104, size 0x7c, virtual false, abstract: false, final false
static inline void GetRayIntersectionAll_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction, float_t  distance, int32_t  layerMask, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [Obsolete("GetRayIntersectionNonAlloc is deprecated. Please use GetRayIntersection.", false)]
/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// [ExcludeFromDocs]
/// @brief Method GetRayIntersectionNonAlloc, addr 0xb67c3f8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit2D>  results) ;

/// [Obsolete("GetRayIntersectionNonAlloc is deprecated. Please use GetRayIntersection.", false)]
/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// [ExcludeFromDocs]
/// @brief Method GetRayIntersectionNonAlloc, addr 0xb67c474, size 0x84, virtual false, abstract: false, final false
static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit2D>  results, float_t  distance) ;

/// [ExcludeFromDocs]
/// [RequiredByNativeCode]
/// @brief Method GetRayIntersectionNonAlloc, addr 0xb67c180, size 0x88, virtual false, abstract: false, final false
static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit2D>  results, float_t  distance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask) ;

/// [ExcludeFromDocs]
/// @brief Method Linecast, addr 0xb67b3dc, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Linecast(::UnityEngine::Vector2  start, ::UnityEngine::Vector2  end, int32_t  layerMask) ;

/// @brief Method OverlapCircle, addr 0xb67c2a4, size 0xac, virtual false, abstract: false, final false
static inline int32_t OverlapCircle(::UnityEngine::Vector2  point, float_t  radius, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::Collider2D*>  results) ;

/// @brief Method OverlapPoint, addr 0xb67c208, size 0x9c, virtual false, abstract: false, final false
static inline int32_t OverlapPoint(::UnityEngine::Vector2  point, ::UnityEngine::ContactFilter2D  contactFilter, /* [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider2D*>  results) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb67b4f8, size 0xc4, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb67b5bc, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance) ;

/// [RequiredByNativeCode]
/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb67b688, size 0x12c, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb67b7b4, size 0x12c, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, int32_t  layerMask, float_t  minDepth) ;

/// @brief Method Raycast, addr 0xb67b8e0, size 0x134, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, /* [DefaultValue("Mathf.Infinity")] */ float_t  distance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("-Mathf.Infinity")] */ float_t  minDepth, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDepth) ;

/// [ExcludeFromDocs]
/// @brief Method Raycast, addr 0xb67ba14, size 0xbc, virtual false, abstract: false, final false
static inline int32_t Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results) ;

/// @brief Method Raycast, addr 0xb67bad0, size 0xc4, virtual false, abstract: false, final false
static inline int32_t Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results, /* [DefaultValue("Mathf.Infinity")] */ float_t  distance) ;

/// @brief Method Raycast, addr 0xb67bb94, size 0xc4, virtual false, abstract: false, final false
static inline int32_t Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::UnityEngine::ContactFilter2D  contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*  results, /* [DefaultValue("Mathf.Infinity")] */ float_t  distance) ;

/// [ExcludeFromDocs]
/// [Obsolete("RaycastNonAlloc has been deprecated. Please use Raycast.", false)]
/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief Method RaycastNonAlloc, addr 0xb67c350, size 0xa8, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, ::ArrayW<::UnityEngine::RaycastHit2D>  results, float_t  distance) ;

/// [NativeMethod("Simulate_Binding")]
/// @brief Method Simulate_Internal, addr 0xb679cdc, size 0x94, virtual false, abstract: false, final false
static inline bool Simulate_Internal(::UnityEngine::PhysicsScene2D  physicsScene, float_t  deltaTime, int32_t  simulationLayers) ;

/// @brief Method Simulate_Internal_Injected, addr 0xb67b360, size 0x54, virtual false, abstract: false, final false
static inline bool Simulate_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, float_t  deltaTime, int32_t  simulationLayers) ;

/// @brief Method SyncTransforms, addr 0xb67b3b4, size 0x28, virtual false, abstract: false, final false
static inline void SyncTransforms() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>* getStaticF_m_LastDisabledRigidbody2D() ;

/// @brief Method get_defaultPhysicsScene, addr 0xb67b308, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::PhysicsScene2D get_defaultPhysicsScene() ;

/// @brief Method get_queriesHitTriggers, addr 0xb67b310, size 0x28, virtual false, abstract: false, final false
static inline bool get_queriesHitTriggers() ;

/// @brief Method get_simulationMode, addr 0xb67b338, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::SimulationMode2D get_simulationMode() ;

static inline void setStaticF_m_LastDisabledRigidbody2D(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Physics2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Physics2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Physics2D(Physics2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Physics2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Physics2D(Physics2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32208};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Physics2D) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
