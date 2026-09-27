#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ShouldHideHandOnGrab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ShouldHideHandOnGrab)
// Forward declare root types
namespace Oculus::Interaction::Samples {
class ShouldHideHandOnGrab;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::ShouldHideHandOnGrab*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::ShouldHideHandOnGrab*, "Oculus.Interaction.Samples", "ShouldHideHandOnGrab");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.ShouldHideHandOnGrab
class CORDL_TYPE ShouldHideHandOnGrab : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Oculus::Interaction::Samples::ShouldHideHandOnGrab* New_ctor() ;

/// @brief Method .ctor, addr 0xa440818, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShouldHideHandOnGrab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShouldHideHandOnGrab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShouldHideHandOnGrab(ShouldHideHandOnGrab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShouldHideHandOnGrab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShouldHideHandOnGrab(ShouldHideHandOnGrab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28347};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Samples::ShouldHideHandOnGrab) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
