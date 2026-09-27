#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/IHandGrabUseDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IHandGrabUseDelegate)
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class IHandGrabUseDelegate;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*, "Oculus.Interaction.HandGrab", "IHandGrabUseDelegate");
// Dependencies 
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.IHandGrabUseDelegate
class CORDL_TYPE IHandGrabUseDelegate {
public:
// Declarations
/// @brief Method BeginUse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void BeginUse() ;

/// @brief Method ComputeUseStrength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t ComputeUseStrength(float_t  strength) ;

/// @brief Method EndUse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void EndUse() ;

// Ctor Parameters [CppParam { name: "", ty: "IHandGrabUseDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHandGrabUseDelegate(IHandGrabUseDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16341};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::HandGrab
