#pragma once
// IWYU pragma private; include "BoingKit/BoingBoneCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__BoingBoneCollider_Type_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BoingBoneCollider)
namespace GlobalNamespace {
struct BoingBoneCollider_Type;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BoingKit {
class BoingBoneCollider;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingBoneCollider*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingBoneCollider*, "BoingKit", "BoingBoneCollider");
// Dependencies BoingKit.BoingBoneCollider::Type, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingBoneCollider
class CORDL_TYPE BoingBoneCollider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Type = ::GlobalNamespace::BoingBoneCollider_Type;

 __declspec(property(get=get_Bounds)) ::UnityEngine::Bounds  Bounds;

/// @brief Field Dimensions, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_Dimensions, put=__cordl_internal_set_Dimensions)) ::UnityEngine::Vector3  Dimensions;

/// @brief Field Height, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Height, put=__cordl_internal_set_Height)) float_t  Height;

/// @brief Field Radius, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) float_t  Radius;

/// @brief Field Shape, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Shape, put=__cordl_internal_set_Shape)) ::GlobalNamespace::BoingBoneCollider_Type  Shape;

/// @brief Method Collide, addr 0x5e1282c, size 0x41c, virtual false, abstract: false, final false
inline bool Collide(::UnityEngine::Vector3  boneCenter, float_t  boneRadius, ::by_ref<::UnityEngine::Vector3>  push) ;

/// @brief Method DrawGizmos, addr 0x5e12c84, size 0x7d0, virtual false, abstract: false, final false
inline void DrawGizmos() ;

static inline ::BoingKit::BoingBoneCollider* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x5e12c80, size 0x4, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnValidate, addr 0x5e12c48, size 0x38, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Dimensions() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Dimensions() ;

constexpr float_t const& __cordl_internal_get_Height() const;

constexpr float_t& __cordl_internal_get_Height() ;

constexpr float_t const& __cordl_internal_get_Radius() const;

constexpr float_t& __cordl_internal_get_Radius() ;

constexpr ::GlobalNamespace::BoingBoneCollider_Type const& __cordl_internal_get_Shape() const;

constexpr ::GlobalNamespace::BoingBoneCollider_Type& __cordl_internal_get_Shape() ;

constexpr void __cordl_internal_set_Dimensions(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Height(float_t  value) ;

constexpr void __cordl_internal_set_Radius(float_t  value) ;

constexpr void __cordl_internal_set_Shape(::GlobalNamespace::BoingBoneCollider_Type  value) ;

/// @brief Method .ctor, addr 0x5e13454, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Bounds, addr 0x5e12428, size 0x404, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_Bounds() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingBoneCollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingBoneCollider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingBoneCollider(BoingBoneCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingBoneCollider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingBoneCollider(BoingBoneCollider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5165};

/// @brief Field Shape, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::BoingBoneCollider_Type  ___Shape;

/// @brief Field Radius, offset: 0x24, size: 0x4, def value: None
 float_t  ___Radius;

/// @brief Field Height, offset: 0x28, size: 0x4, def value: None
 float_t  ___Height;

/// @brief Field Dimensions, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Dimensions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingBoneCollider, ___Shape) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBoneCollider, ___Radius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBoneCollider, ___Height) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBoneCollider, ___Dimensions) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingBoneCollider) == 0x38, "Size mismatch!");

} // namespace end def BoingKit
