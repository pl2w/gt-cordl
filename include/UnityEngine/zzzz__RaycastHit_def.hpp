#pragma once
// IWYU pragma private; include "UnityEngine/RaycastHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastHit)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct RaycastHit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RaycastHit);
DEFINE_IL2CPP_CLASS(::UnityEngine::RaycastHit, "UnityEngine", "RaycastHit");
// [NativeHeader("Runtime/Interfaces/IRaycast.h")]
// [UsedByNativeCode]
// [NativeHeader("PhysicsScriptingClasses.h")]
// [NativeHeader("Modules/Physics/RaycastHit.h")]
// Dependencies UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RaycastHit
struct CORDL_TYPE RaycastHit {
public:
// Declarations
 __declspec(property(get=get_collider)) ::UnityW<::UnityEngine::Collider>  collider;

 __declspec(property(get=get_colliderInstanceID)) int32_t  colliderInstanceID;

 __declspec(property(get=get_distance, put=set_distance)) float_t  distance;

 __declspec(property(get=get_normal, put=set_normal)) ::UnityEngine::Vector3  normal;

 __declspec(property(get=get_point, put=set_point)) ::UnityEngine::Vector3  point;

 __declspec(property(get=get_rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  rigidbody;

 __declspec(property(get=get_transform)) ::UnityW<::UnityEngine::Transform>  transform;

 __declspec(property(get=get_triangleIndex)) int32_t  triangleIndex;

/// @brief Method get_collider, addr 0xb68f8b8, size 0xac, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_collider() ;

/// @brief Method get_colliderInstanceID, addr 0xb68f964, size 0x8, virtual false, abstract: false, final false
inline int32_t get_colliderInstanceID() ;

/// @brief Method get_distance, addr 0xb68f99c, size 0x8, virtual false, abstract: false, final false
inline float_t get_distance() ;

/// @brief Method get_normal, addr 0xb68f984, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_normal() ;

/// @brief Method get_point, addr 0xb68f96c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_point() ;

/// @brief Method get_rigidbody, addr 0xb68fa8c, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_rigidbody() ;

/// @brief Method get_transform, addr 0xb68f9b4, size 0xd8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_transform() ;

/// @brief Method get_triangleIndex, addr 0xb68f9ac, size 0x8, virtual false, abstract: false, final false
inline int32_t get_triangleIndex() ;

/// @brief Method set_distance, addr 0xb68f9a4, size 0x8, virtual false, abstract: false, final false
inline void set_distance(float_t  value) ;

/// @brief Method set_normal, addr 0xb68f990, size 0xc, virtual false, abstract: false, final false
inline void set_normal(::UnityEngine::Vector3  value) ;

/// @brief Method set_point, addr 0xb68f978, size 0xc, virtual false, abstract: false, final false
inline void set_point(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RaycastHit() ;

// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FaceID", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_UV", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RaycastHit(::UnityEngine::Vector3  m_Point, ::UnityEngine::Vector3  m_Normal, uint32_t  m_FaceID, float_t  m_Distance, ::UnityEngine::Vector2  m_UV, int32_t  m_Collider) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30596};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// [NativeName("point")]
/// @brief Field m_Point, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Point;

/// [NativeName("normal")]
/// @brief Field m_Normal, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Normal;

/// [NativeName("faceID")]
/// @brief Field m_FaceID, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_FaceID;

/// [NativeName("distance")]
/// @brief Field m_Distance, offset: 0x1c, size: 0x4, def value: None
 float_t  m_Distance;

/// [NativeName("uv")]
/// @brief Field m_UV, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_UV;

/// [NativeName("collider")]
/// @brief Field m_Collider, offset: 0x28, size: 0x4, def value: None
 int32_t  m_Collider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RaycastHit, m_Point) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_Normal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_FaceID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_Distance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_UV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_Collider) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::RaycastHit) == 0x2c, "Size mismatch!");

} // namespace end def UnityEngine
