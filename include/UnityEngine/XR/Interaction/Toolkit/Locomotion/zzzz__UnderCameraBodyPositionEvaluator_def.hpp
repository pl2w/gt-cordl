#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/UnderCameraBodyPositionEvaluator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(UnderCameraBodyPositionEvaluator)
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
class UnderCameraBodyPositionEvaluator;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "UnderCameraBodyPositionEvaluator");
// [CreateAssetMenu(fileName = "UnderCameraBodyPositionEvaluator", menuName = "XR/Locomotion/Under Camera Body Position Evaluator")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.UnderCameraBodyPositionEvaluator.html")]
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.UnderCameraBodyPositionEvaluator
class CORDL_TYPE UnderCameraBodyPositionEvaluator : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*() noexcept;

/// @brief Method GetBodyGroundLocalPosition, addr 0xb44965c, size 0x24, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetBodyGroundLocalPosition(::Unity::XR::CoreUtils::XROrigin*  xrOrigin) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator* New_ctor() ;

/// @brief Method .ctor, addr 0xb449680, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator* i___UnityEngine__XR__Interaction__Toolkit__Locomotion__IXRBodyPositionEvaluator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnderCameraBodyPositionEvaluator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnderCameraBodyPositionEvaluator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnderCameraBodyPositionEvaluator(UnderCameraBodyPositionEvaluator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnderCameraBodyPositionEvaluator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnderCameraBodyPositionEvaluator(UnderCameraBodyPositionEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11338};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
