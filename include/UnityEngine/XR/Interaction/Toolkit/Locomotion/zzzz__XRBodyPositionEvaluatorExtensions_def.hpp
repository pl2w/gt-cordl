#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyPositionEvaluatorExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRBodyPositionEvaluatorExtensions)
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IXRBodyPositionEvaluator;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRBodyPositionEvaluatorExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyPositionEvaluatorExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyPositionEvaluatorExtensions*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "XRBodyPositionEvaluatorExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.XRBodyPositionEvaluatorExtensions
class CORDL_TYPE XRBodyPositionEvaluatorExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetBodyGroundWorldPosition, addr 0xb446efc, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetBodyGroundWorldPosition(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  evaluator, ::Unity::XR::CoreUtils::XROrigin*  xrOrigin) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBodyPositionEvaluatorExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBodyPositionEvaluatorExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBodyPositionEvaluatorExtensions(XRBodyPositionEvaluatorExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBodyPositionEvaluatorExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBodyPositionEvaluatorExtensions(XRBodyPositionEvaluatorExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11330};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyPositionEvaluatorExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
