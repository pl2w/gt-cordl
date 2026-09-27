#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/Vector3d.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3d)
namespace System {
class Random;
}
// Forward declare root types
namespace Technie::PhysicsCreator::QHull {
class Vector3d;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::QHull::Vector3d*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::QHull::Vector3d*, "Technie.PhysicsCreator.QHull", "Vector3d");
// Dependencies System.Object
namespace Technie::PhysicsCreator::QHull {
// Is value type: false
// CS Name: Technie.PhysicsCreator.QHull.Vector3d
class CORDL_TYPE Vector3d : public ::System::Object {
public:
// Declarations
/// @brief Field x, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) double_t  x;

/// @brief Field y, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) double_t  y;

/// @brief Field z, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_z, put=__cordl_internal_set_z)) double_t  z;

static inline ::Technie::PhysicsCreator::QHull::Vector3d* New_ctor() ;

static inline ::Technie::PhysicsCreator::QHull::Vector3d* New_ctor(::Technie::PhysicsCreator::QHull::Vector3d*  v) ;

static inline ::Technie::PhysicsCreator::QHull::Vector3d* New_ctor(double_t  x, double_t  y, double_t  z) ;

constexpr double_t const& __cordl_internal_get_x() const;

constexpr double_t& __cordl_internal_get_x() ;

constexpr double_t const& __cordl_internal_get_y() const;

constexpr double_t& __cordl_internal_get_y() ;

constexpr double_t const& __cordl_internal_get_z() const;

constexpr double_t& __cordl_internal_get_z() ;

constexpr void __cordl_internal_set_x(double_t  value) ;

constexpr void __cordl_internal_set_y(double_t  value) ;

constexpr void __cordl_internal_set_z(double_t  value) ;

/// @brief Method .ctor, addr 0xaddcee0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xade1c3c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Technie::PhysicsCreator::QHull::Vector3d*  v) ;

/// @brief Method .ctor, addr 0xade1c78, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(double_t  x, double_t  y, double_t  z) ;

/// @brief Method add, addr 0xaddc39c, size 0x30, virtual false, abstract: false, final false
inline void add(::Technie::PhysicsCreator::QHull::Vector3d*  v1) ;

/// @brief Method add, addr 0xade1d54, size 0x38, virtual false, abstract: false, final false
inline void add(::Technie::PhysicsCreator::QHull::Vector3d*  v1, ::Technie::PhysicsCreator::QHull::Vector3d*  v2) ;

/// @brief Method cross, addr 0xade0680, size 0x58, virtual false, abstract: false, final false
inline void cross(::Technie::PhysicsCreator::QHull::Vector3d*  v1, ::Technie::PhysicsCreator::QHull::Vector3d*  v2) ;

/// @brief Method distance, addr 0xaddde14, size 0xa0, virtual false, abstract: false, final false
inline double_t distance(::Technie::PhysicsCreator::QHull::Vector3d*  v) ;

/// @brief Method distanceSquared, addr 0xadddeb4, size 0x38, virtual false, abstract: false, final false
inline double_t distanceSquared(::Technie::PhysicsCreator::QHull::Vector3d*  v) ;

/// @brief Method dot, addr 0xaddc9b4, size 0x34, virtual false, abstract: false, final false
inline double_t dot(::Technie::PhysicsCreator::QHull::Vector3d*  v1) ;

/// @brief Method get, addr 0xade05a8, size 0xa0, virtual false, abstract: false, final false
inline double_t get(int32_t  i) ;

/// @brief Method norm, addr 0xaddc798, size 0x88, virtual false, abstract: false, final false
inline double_t norm() ;

/// @brief Method normSquared, addr 0xade06d8, size 0x20, virtual false, abstract: false, final false
inline double_t normSquared() ;

/// @brief Method normalize, addr 0xaddc6e0, size 0xb8, virtual false, abstract: false, final false
inline void normalize() ;

/// @brief Method scale, addr 0xaddc3cc, size 0x1c, virtual false, abstract: false, final false
inline void scale(double_t  s) ;

/// @brief Method scale, addr 0xade1dbc, size 0x28, virtual false, abstract: false, final false
inline void scale(double_t  s, ::Technie::PhysicsCreator::QHull::Vector3d*  v1) ;

/// @brief Method set, addr 0xade1cb4, size 0xa0, virtual false, abstract: false, final false
inline void set(int32_t  i, double_t  value) ;

/// @brief Method set, addr 0xadddf28, size 0x20, virtual false, abstract: false, final false
inline void set(::Technie::PhysicsCreator::QHull::Vector3d*  v1) ;

/// @brief Method set, addr 0xadddf84, size 0xc, virtual false, abstract: false, final false
inline void set(double_t  x, double_t  y, double_t  z) ;

/// @brief Method setRandom, addr 0xade1de4, size 0x88, virtual false, abstract: false, final false
inline void setRandom(double_t  lower, double_t  upper, ::System::Random*  generator) ;

/// @brief Method setZero, addr 0xaddc390, size 0xc, virtual false, abstract: false, final false
inline void setZero() ;

/// @brief Method sub, addr 0xade1d8c, size 0x30, virtual false, abstract: false, final false
inline void sub(::Technie::PhysicsCreator::QHull::Vector3d*  v1) ;

/// @brief Method sub, addr 0xade0648, size 0x38, virtual false, abstract: false, final false
inline void sub(::Technie::PhysicsCreator::QHull::Vector3d*  v1, ::Technie::PhysicsCreator::QHull::Vector3d*  v2) ;

/// @brief Method toString, addr 0xade1e6c, size 0x13c, virtual false, abstract: false, final false
inline ::StringW toString() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector3d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector3d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector3d(Vector3d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector3d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector3d(Vector3d const& ) = delete;

/// @brief Field DOUBLE_PREC offset 0xffffffff size 0x8
static constexpr double_t  DOUBLE_PREC{static_cast<double_t>(2.220446049250313e-16)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30542};

/// @brief Field x, offset: 0x10, size: 0x8, def value: None
 double_t  ___x;

/// @brief Field y, offset: 0x18, size: 0x8, def value: None
 double_t  ___y;

/// @brief Field z, offset: 0x20, size: 0x8, def value: None
 double_t  ___z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::QHull::Vector3d, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Vector3d, ___y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Vector3d, ___z) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::QHull::Vector3d) == 0x28, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::QHull
