#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/Point3d.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Technie/PhysicsCreator/QHull/zzzz__Vector3d_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Point3d)
namespace Technie::PhysicsCreator::QHull {
class Vector3d;
}
// Forward declare root types
namespace Technie::PhysicsCreator::QHull {
class Point3d;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::QHull::Point3d*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::QHull::Point3d*, "Technie.PhysicsCreator.QHull", "Point3d");
// Dependencies Technie.PhysicsCreator.QHull.Vector3d
namespace Technie::PhysicsCreator::QHull {
// Is value type: false
// CS Name: Technie.PhysicsCreator.QHull.Point3d
class CORDL_TYPE Point3d : public ::Technie::PhysicsCreator::QHull::Vector3d {
public:
// Declarations
static inline ::Technie::PhysicsCreator::QHull::Point3d* New_ctor() ;

static inline ::Technie::PhysicsCreator::QHull::Point3d* New_ctor(::Technie::PhysicsCreator::QHull::Vector3d*  v) ;

static inline ::Technie::PhysicsCreator::QHull::Point3d* New_ctor(double_t  x, double_t  y, double_t  z) ;

/// @brief Method .ctor, addr 0xaddcee8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xadddeec, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Technie::PhysicsCreator::QHull::Vector3d*  v) ;

/// @brief Method .ctor, addr 0xadddf48, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(double_t  x, double_t  y, double_t  z) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Point3d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Point3d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Point3d(Point3d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Point3d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Point3d(Point3d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30540};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::QHull::Point3d) == 0x28, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::QHull
