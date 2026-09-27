#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/Primitives/ColorTweenableVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableAsyncBase_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(ColorTweenableVariable)
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template<typename T>
struct TweenJobData_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
class ColorTweenableVariable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives", "ColorTweenableVariable");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.Color, UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.ColorTweenableVariable
class CORDL_TYPE ColorTweenableVariable : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<::UnityEngine::Color> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable* New_ctor() ;

/// @brief Method ScheduleTweenJob, addr 0xb42b97c, size 0xd0, virtual true, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleTweenJob(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>>  jobData) ;

/// @brief Method .ctor, addr 0xb42ba4c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorTweenableVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorTweenableVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorTweenableVariable(ColorTweenableVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorTweenableVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorTweenableVariable(ColorTweenableVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11241};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::ColorTweenableVariable) == 0xb8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives
