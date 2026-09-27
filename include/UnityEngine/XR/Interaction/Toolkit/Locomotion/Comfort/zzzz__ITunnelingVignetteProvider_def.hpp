#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/ITunnelingVignetteProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITunnelingVignetteProvider)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class VignetteParameters;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class ITunnelingVignetteProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort", "ITunnelingVignetteProvider");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort.ITunnelingVignetteProvider
class CORDL_TYPE ITunnelingVignetteProvider {
public:
// Declarations
 __declspec(property(get=get_vignetteParameters)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  vignetteParameters;

/// @brief Method get_vignetteParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* get_vignetteParameters() ;

// Ctor Parameters [CppParam { name: "", ty: "ITunnelingVignetteProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITunnelingVignetteProvider(ITunnelingVignetteProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort
