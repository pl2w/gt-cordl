#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaVRConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaVRConstraint)
// Forward declare root types
namespace GlobalNamespace {
class GorillaVRConstraint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaVRConstraint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaVRConstraint*, "", "GorillaVRConstraint");
// Dependencies MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaVRConstraint
class CORDL_TYPE GorillaVRConstraint : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field angle, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_angle, put=__cordl_internal_set_angle)) float_t  angle;

/// @brief Field isConstrained, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_isConstrained, put=__cordl_internal_set_isConstrained)) bool  isConstrained;

static inline ::GlobalNamespace::GorillaVRConstraint* New_ctor() ;

/// @brief Method Tick, addr 0x5947314, size 0xa4, virtual true, abstract: false, final false
inline void Tick() ;

constexpr float_t const& __cordl_internal_get_angle() const;

constexpr float_t& __cordl_internal_get_angle() ;

constexpr bool const& __cordl_internal_get_isConstrained() const;

constexpr bool& __cordl_internal_get_isConstrained() ;

constexpr void __cordl_internal_set_angle(float_t  value) ;

constexpr void __cordl_internal_set_isConstrained(bool  value) ;

/// @brief Method .ctor, addr 0x59473b8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaVRConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaVRConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaVRConstraint(GorillaVRConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaVRConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaVRConstraint(GorillaVRConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2279};

/// @brief Field isConstrained, offset: 0x21, size: 0x1, def value: None
 bool  ___isConstrained;

/// @brief Field angle, offset: 0x24, size: 0x4, def value: None
 float_t  ___angle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaVRConstraint, ___isConstrained) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaVRConstraint, ___angle) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaVRConstraint) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
