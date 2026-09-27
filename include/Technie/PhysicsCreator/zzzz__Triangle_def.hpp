#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Triangle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Triangle)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class Triangle;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::Triangle*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Triangle*, "Technie.PhysicsCreator", "Triangle");
// Dependencies System.Object, UnityEngine.Vector3
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.Triangle
class CORDL_TYPE Triangle : public ::System::Object {
public:
// Declarations
/// @brief Field area, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_area, put=__cordl_internal_set_area)) float_t  area;

/// @brief Field center, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityEngine::Vector3  center;

/// @brief Field normal, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_normal, put=__cordl_internal_set_normal)) ::UnityEngine::Vector3  normal;

static inline ::Technie::PhysicsCreator::Triangle* New_ctor(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2) ;

constexpr float_t const& __cordl_internal_get_area() const;

constexpr float_t& __cordl_internal_get_area() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_center() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_normal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_normal() ;

constexpr void __cordl_internal_set_area(float_t  value) ;

constexpr void __cordl_internal_set_center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_normal(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xadc4688, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Triangle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Triangle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Triangle(Triangle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Triangle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Triangle(Triangle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30483};

/// @brief Field normal, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___normal;

/// @brief Field area, offset: 0x1c, size: 0x4, def value: None
 float_t  ___area;

/// @brief Field center, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___center;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::Triangle, ___normal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Triangle, ___area) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Triangle, ___center) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::Triangle) == 0x30, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
