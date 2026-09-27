#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/IAxis1D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IAxis1D)
// Forward declare root types
namespace Oculus::Interaction::Input {
class IAxis1D;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::IAxis1D*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::IAxis1D*, "Oculus.Interaction.Input", "IAxis1D");
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.IAxis1D
class CORDL_TYPE IAxis1D {
public:
// Declarations
/// @brief Method Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t Value() ;

// Ctor Parameters [CppParam { name: "", ty: "IAxis1D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAxis1D(IAxis1D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16511};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
