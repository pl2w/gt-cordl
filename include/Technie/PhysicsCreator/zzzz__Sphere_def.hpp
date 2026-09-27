#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Sphere.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Sphere)
// Forward declare root types
namespace Technie::PhysicsCreator {
class Sphere;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::Sphere*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Sphere*, "Technie.PhysicsCreator", "Sphere");
// Dependencies System.Object, UnityEngine.Vector3
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.Sphere
class CORDL_TYPE Sphere : public ::System::Object {
public:
// Declarations
/// @brief Field center, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityEngine::Vector3  center;

/// @brief Field radius, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

static inline ::Technie::PhysicsCreator::Sphere* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_center() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr void __cordl_internal_set_center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

/// @brief Method .ctor, addr 0xadc82cc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sphere() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sphere", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Sphere(Sphere && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sphere", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sphere(Sphere const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30519};

/// @brief Field center, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___center;

/// @brief Field radius, offset: 0x1c, size: 0x4, def value: None
 float_t  ___radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::Sphere, ___center) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Sphere, ___radius) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::Sphere) == 0x20, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
