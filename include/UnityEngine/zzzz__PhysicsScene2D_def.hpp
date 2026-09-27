#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsScene2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsScene2D)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
struct ContactFilter2D;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct PhysicsScene2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PhysicsScene2D);
DEFINE_IL2CPP_CLASS(::UnityEngine::PhysicsScene2D, "UnityEngine", "PhysicsScene2D");
// [NativeHeader("Modules/Physics2D/Public/PhysicsSceneHandle2D.h")]
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.PhysicsScene2D
struct CORDL_TYPE PhysicsScene2D {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PhysicsScene2D>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::PhysicsScene2D>*() ;

/// @brief Method CircleCast, addr 0xb67a78c, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::RaycastHit2D CircleCast(::UnityEngine::Vector2  origin, float_t  radius, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter) ;

/// [NativeMethod("CircleCast_Binding")]
/// [StaticAccessor("PhysicsQuery2D", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method CircleCast_Internal, addr 0xb67a7d8, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D CircleCast_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, float_t  radius, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter) ;

/// @brief Method CircleCast_Internal_Injected, addr 0xb67a874, size 0x84, virtual false, abstract: false, final false
static inline void CircleCast_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, float_t  radius, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::RaycastHit2D>  ret) ;

/// @brief Method Equals, addr 0xb679a90, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0xb679b08, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::PhysicsScene2D  other) ;

/// @brief Method GetHashCode, addr 0xb679a88, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetRayIntersection, addr 0xb67a8f8, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::RaycastHit2D GetRayIntersection(::UnityEngine::Ray  ray, float_t  distance, /* [DefaultValue("Physics2D.DefaultRaycastLayers")] */ int32_t  layerMask) ;

/// @brief Method GetRayIntersection, addr 0xb67a9e0, size 0x1c, virtual false, abstract: false, final false
inline int32_t GetRayIntersection(::UnityEngine::Ray  ray, float_t  distance, ::ArrayW<::UnityEngine::RaycastHit2D>  results, /* [DefaultValue("Physics2D.DefaultRaycastLayers")] */ int32_t  layerMask) ;

/// [NativeMethod("GetRayIntersectionArray_Binding")]
/// [StaticAccessor("PhysicsQuery2D", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetRayIntersectionArray_Internal, addr 0xb67a9fc, size 0x128, virtual false, abstract: false, final false
static inline int32_t GetRayIntersectionArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  distance, int32_t  layerMask, /* [NotNull] */ ::ArrayW<::UnityEngine::RaycastHit2D>  results) ;

/// @brief Method GetRayIntersectionArray_Internal_Injected, addr 0xb67aba0, size 0x7c, virtual false, abstract: false, final false
static inline int32_t GetRayIntersectionArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction, float_t  distance, int32_t  layerMask, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  results) ;

/// [NativeMethod("GetRayIntersection_Binding")]
/// [StaticAccessor("PhysicsQuery2D", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method GetRayIntersection_Internal, addr 0xb67a944, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D GetRayIntersection_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  distance, int32_t  layerMask) ;

/// @brief Method GetRayIntersection_Internal_Injected, addr 0xb67ab24, size 0x7c, virtual false, abstract: false, final false
static inline void GetRayIntersection_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction, float_t  distance, int32_t  layerMask, ::by_ref<::UnityEngine::RaycastHit2D>  ret) ;

/// @brief Method IsValid, addr 0xb679b18, size 0x48, virtual false, abstract: false, final false
inline bool IsValid() ;

/// [StaticAccessor("GetPhysicsManager2D()", (UnityEngine.Bindings.StaticAccessorType)1)]
/// [NativeMethod("IsPhysicsSceneValid")]
/// @brief Method IsValid_Internal, addr 0xb679b60, size 0x44, virtual false, abstract: false, final false
static inline bool IsValid_Internal(::UnityEngine::PhysicsScene2D  physicsScene) ;

/// @brief Method IsValid_Internal_Injected, addr 0xb679ba4, size 0x3c, virtual false, abstract: false, final false
static inline bool IsValid_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene) ;

/// @brief Method Linecast, addr 0xb679d70, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::RaycastHit2D Linecast(::UnityEngine::Vector2  start, ::UnityEngine::Vector2  end, ::UnityEngine::ContactFilter2D  contactFilter) ;

/// [NativeMethod("Linecast_Binding")]
/// [StaticAccessor("PhysicsQuery2D", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method Linecast_Internal, addr 0xb679dbc, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Linecast_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  start, ::UnityEngine::Vector2  end, ::UnityEngine::ContactFilter2D  contactFilter) ;

/// @brief Method Linecast_Internal_Injected, addr 0xb679e40, size 0x6c, virtual false, abstract: false, final false
static inline void Linecast_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  start, ::by_ref<::UnityEngine::Vector2>  end, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::RaycastHit2D>  ret) ;

/// @brief Method OverlapBox, addr 0xb67af64, size 0xf0, virtual false, abstract: false, final false
inline int32_t OverlapBox(::UnityEngine::Vector2  point, ::UnityEngine::Vector2  size, float_t  angle, ::ArrayW<::UnityEngine::Collider2D*>  results, /* [DefaultValue("Physics2D.DefaultRaycastLayers")] */ int32_t  layerMask) ;

/// [StaticAccessor("PhysicsQuery2D", (UnityEngine.Bindings.StaticAccessorType)2)]
/// [NativeMethod("OverlapBoxArray_Binding")]
/// @brief Method OverlapBoxArray_Internal, addr 0xb67b054, size 0xb4, virtual false, abstract: false, final false
static inline int32_t OverlapBoxArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  point, ::UnityEngine::Vector2  size, float_t  angle, ::UnityEngine::ContactFilter2D  contactFilter, /* [NotNull] [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider2D*>  results) ;

/// @brief Method OverlapBoxArray_Internal_Injected, addr 0xb67b108, size 0x7c, virtual false, abstract: false, final false
static inline int32_t OverlapBoxArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  point, ::by_ref<::UnityEngine::Vector2>  size, float_t  angle, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::ArrayW<::UnityEngine::Collider2D*>  results) ;

/// @brief Method OverlapCircle, addr 0xb67aec8, size 0x30, virtual false, abstract: false, final false
inline int32_t OverlapCircle(::UnityEngine::Vector2  point, float_t  radius, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::Collider2D*>  results) ;

/// @brief Method OverlapCircle, addr 0xb67ad44, size 0xd8, virtual false, abstract: false, final false
inline int32_t OverlapCircle(::UnityEngine::Vector2  point, float_t  radius, ::ArrayW<::UnityEngine::Collider2D*>  results, /* [DefaultValue("Physics2D.DefaultRaycastLayers")] */ int32_t  layerMask) ;

/// [StaticAccessor("PhysicsQuery2D", (UnityEngine.Bindings.StaticAccessorType)2)]
/// [NativeMethod("OverlapCircleArray_Binding")]
/// @brief Method OverlapCircleArray_Internal, addr 0xb67ae1c, size 0xac, virtual false, abstract: false, final false
static inline int32_t OverlapCircleArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  point, float_t  radius, ::UnityEngine::ContactFilter2D  contactFilter, /* [NotNull] [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider2D*>  results) ;

/// @brief Method OverlapCircleArray_Internal_Injected, addr 0xb67aef8, size 0x6c, virtual false, abstract: false, final false
static inline int32_t OverlapCircleArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  point, float_t  radius, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::ArrayW<::UnityEngine::Collider2D*>  results) ;

/// @brief Method OverlapPoint, addr 0xb67ac1c, size 0x30, virtual false, abstract: false, final false
inline int32_t OverlapPoint(::UnityEngine::Vector2  point, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::Collider2D*>  results) ;

/// [NativeMethod("OverlapPointArray_Binding")]
/// [StaticAccessor("PhysicsQuery2D", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method OverlapPointArray_Internal, addr 0xb67ac4c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t OverlapPointArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  point, ::UnityEngine::ContactFilter2D  contactFilter, /* [NotNull] [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider2D*>  results) ;

/// @brief Method OverlapPointArray_Internal_Injected, addr 0xb67ace8, size 0x5c, virtual false, abstract: false, final false
static inline int32_t OverlapPointArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  point, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::ArrayW<::UnityEngine::Collider2D*>  results) ;

/// @brief Method Raycast, addr 0xb67a158, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter) ;

/// @brief Method Raycast, addr 0xb679eac, size 0x10c, virtual false, abstract: false, final false
inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, /* [DefaultValue("Physics2D.DefaultRaycastLayers")] */ int32_t  layerMask) ;

/// @brief Method Raycast, addr 0xb67a3b4, size 0x30, virtual false, abstract: false, final false
inline int32_t Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D>  results) ;

/// @brief Method Raycast, addr 0xb67a3e4, size 0x30, virtual false, abstract: false, final false
inline int32_t Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*  results) ;

/// @brief Method Raycast, addr 0xb67a1a4, size 0xf0, virtual false, abstract: false, final false
inline int32_t Raycast(::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::ArrayW<::UnityEngine::RaycastHit2D>  results, /* [DefaultValue("Physics2D.DefaultRaycastLayers")] */ int32_t  layerMask) ;

/// [NativeMethod("RaycastArray_Binding")]
/// [StaticAccessor("PhysicsQuery2D", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method RaycastArray_Internal, addr 0xb67a294, size 0x120, virtual false, abstract: false, final false
static inline int32_t RaycastArray_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, /* [NotNull] */ ::ArrayW<::UnityEngine::RaycastHit2D>  results) ;

/// @brief Method RaycastArray_Internal_Injected, addr 0xb67a694, size 0x7c, virtual false, abstract: false, final false
static inline int32_t RaycastArray_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  results) ;

/// [StaticAccessor("PhysicsQuery2D", (UnityEngine.Bindings.StaticAccessorType)2)]
/// [NativeMethod("RaycastList_Binding")]
/// @brief Method RaycastList_Internal, addr 0xb67a414, size 0x204, virtual false, abstract: false, final false
static inline int32_t RaycastList_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter, /* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*  results) ;

/// @brief Method RaycastList_Internal_Injected, addr 0xb67a710, size 0x7c, virtual false, abstract: false, final false
static inline int32_t RaycastList_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  results) ;

/// [StaticAccessor("PhysicsQuery2D", (UnityEngine.Bindings.StaticAccessorType)2)]
/// [NativeMethod("Raycast_Binding")]
/// @brief Method Raycast_Internal, addr 0xb67a0c4, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit2D Raycast_Internal(::UnityEngine::PhysicsScene2D  physicsScene, ::UnityEngine::Vector2  origin, ::UnityEngine::Vector2  direction, float_t  distance, ::UnityEngine::ContactFilter2D  contactFilter) ;

/// @brief Method Raycast_Internal_Injected, addr 0xb67a618, size 0x7c, virtual false, abstract: false, final false
static inline void Raycast_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D>  physicsScene, ::by_ref<::UnityEngine::Vector2>  origin, ::by_ref<::UnityEngine::Vector2>  direction, float_t  distance, ::by_ref<::UnityEngine::ContactFilter2D>  contactFilter, ::by_ref<::UnityEngine::RaycastHit2D>  ret) ;

/// [ExcludeFromDocs]
/// @brief Method Simulate, addr 0xb679be0, size 0x8, virtual false, abstract: false, final false
inline bool Simulate(float_t  deltaTime) ;

/// @brief Method Simulate, addr 0xb679be8, size 0xf4, virtual false, abstract: false, final false
inline bool Simulate(float_t  deltaTime, /* [DefaultValue("Physics2D.AllLayers")] */ int32_t  simulationLayers) ;

/// @brief Method ToString, addr 0xb679a04, size 0x78, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::PhysicsScene2D>"
constexpr ::System::IEquatable_1<::UnityEngine::PhysicsScene2D>* i___System__IEquatable_1___UnityEngine__PhysicsScene2D_() ;

/// @brief Method op_Inequality, addr 0xb679a7c, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::PhysicsScene2D  lhs, ::UnityEngine::PhysicsScene2D  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr PhysicsScene2D() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PhysicsScene2D(int32_t  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32206};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PhysicsScene2D, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::PhysicsScene2D) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
