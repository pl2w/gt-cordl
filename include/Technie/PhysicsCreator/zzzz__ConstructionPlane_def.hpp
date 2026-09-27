#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/ConstructionPlane.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConstructionPlane)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class ConstructionPlane;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::ConstructionPlane*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::ConstructionPlane*, "Technie.PhysicsCreator", "ConstructionPlane");
// Dependencies System.Object, UnityEngine.Matrix4x4, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.ConstructionPlane
class CORDL_TYPE ConstructionPlane : public ::System::Object {
public:
// Declarations
/// @brief Field center, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityEngine::Vector3  center;

/// @brief Field normal, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_normal, put=__cordl_internal_set_normal)) ::UnityEngine::Vector3  normal;

/// @brief Field planeToWorld, offset 0x44, size 0x40 
 __declspec(property(get=__cordl_internal_get_planeToWorld, put=__cordl_internal_set_planeToWorld)) ::UnityEngine::Matrix4x4  planeToWorld;

/// @brief Field rotation, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field tangent, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_tangent, put=__cordl_internal_set_tangent)) ::UnityEngine::Vector3  tangent;

/// @brief Field worldToPlane, offset 0x84, size 0x40 
 __declspec(property(get=__cordl_internal_get_worldToPlane, put=__cordl_internal_set_worldToPlane)) ::UnityEngine::Matrix4x4  worldToPlane;

/// @brief Method Init, addr 0xadc5fc8, size 0x1dc, virtual false, abstract: false, final false
inline void Init() ;

static inline ::Technie::PhysicsCreator::ConstructionPlane* New_ctor(::Technie::PhysicsCreator::ConstructionPlane*  basePlane, float_t  angle) ;

static inline ::Technie::PhysicsCreator::ConstructionPlane* New_ctor(::Technie::PhysicsCreator::ConstructionPlane*  basePlane, ::UnityEngine::Vector3  positionOffset) ;

static inline ::Technie::PhysicsCreator::ConstructionPlane* New_ctor(::UnityEngine::Vector3  c) ;

static inline ::Technie::PhysicsCreator::ConstructionPlane* New_ctor(::UnityEngine::Vector3  c, ::UnityEngine::Vector3  n, ::UnityEngine::Vector3  t) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_center() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_normal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_normal() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_planeToWorld() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_planeToWorld() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_tangent() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_tangent() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_worldToPlane() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_worldToPlane() ;

constexpr void __cordl_internal_set_center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_normal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_planeToWorld(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_tangent(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_worldToPlane(::UnityEngine::Matrix4x4  value) ;

/// @brief Method .ctor, addr 0xadc61a4, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Technie::PhysicsCreator::ConstructionPlane*  basePlane, float_t  angle) ;

/// @brief Method .ctor, addr 0xadc622c, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Technie::PhysicsCreator::ConstructionPlane*  basePlane, ::UnityEngine::Vector3  positionOffset) ;

/// @brief Method .ctor, addr 0xadc3998, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  c) ;

/// @brief Method .ctor, addr 0xadc3c28, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  c, ::UnityEngine::Vector3  n, ::UnityEngine::Vector3  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConstructionPlane() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConstructionPlane", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstructionPlane(ConstructionPlane && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstructionPlane", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstructionPlane(ConstructionPlane const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30489};

/// @brief Field center, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___center;

/// @brief Field normal, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___normal;

/// @brief Field tangent, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___tangent;

/// @brief Field rotation, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation;

/// @brief Field planeToWorld, offset: 0x44, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___planeToWorld;

/// @brief Field worldToPlane, offset: 0x84, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___worldToPlane;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::ConstructionPlane, ___center) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::ConstructionPlane, ___normal) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::ConstructionPlane, ___tangent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::ConstructionPlane, ___rotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::ConstructionPlane, ___planeToWorld) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::ConstructionPlane, ___worldToPlane) == 0x84, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::ConstructionPlane) == 0xc8, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
