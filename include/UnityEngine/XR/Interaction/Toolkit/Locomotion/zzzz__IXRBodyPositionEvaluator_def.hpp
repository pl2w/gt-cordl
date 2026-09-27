#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/IXRBodyPositionEvaluator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRBodyPositionEvaluator)
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IXRBodyPositionEvaluator;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "IXRBodyPositionEvaluator");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.IXRBodyPositionEvaluator
class CORDL_TYPE IXRBodyPositionEvaluator {
public:
// Declarations
/// @brief Method GetBodyGroundLocalPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 GetBodyGroundLocalPosition(::Unity::XR::CoreUtils::XROrigin*  xrOrigin) ;

// Ctor Parameters [CppParam { name: "", ty: "IXRBodyPositionEvaluator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRBodyPositionEvaluator(IXRBodyPositionEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11329};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
