#pragma once
// IWYU pragma private; include "Oculus/Interaction/FloatConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatConstraint)
// Forward declare root types
namespace Oculus::Interaction {
class FloatConstraint;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::FloatConstraint*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::FloatConstraint*, "Oculus.Interaction", "FloatConstraint");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.FloatConstraint
class CORDL_TYPE FloatConstraint : public ::System::Object {
public:
// Declarations
/// @brief Field Constrain, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Constrain, put=__cordl_internal_set_Constrain)) bool  Constrain;

/// @brief Field Value, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) float_t  Value;

static inline ::Oculus::Interaction::FloatConstraint* New_ctor() ;

constexpr bool const& __cordl_internal_get_Constrain() const;

constexpr bool& __cordl_internal_get_Constrain() ;

constexpr float_t const& __cordl_internal_get_Value() const;

constexpr float_t& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_Constrain(bool  value) ;

constexpr void __cordl_internal_set_Value(float_t  value) ;

/// @brief Method .ctor, addr 0xa444e10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatConstraint(FloatConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatConstraint(FloatConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15808};

/// @brief Field Constrain, offset: 0x10, size: 0x1, def value: None
 bool  ___Constrain;

/// @brief Field Value, offset: 0x14, size: 0x4, def value: None
 float_t  ___Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::FloatConstraint, ___Constrain) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::FloatConstraint, ___Value) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::FloatConstraint) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction
