#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/Primitives/FloatTweenableVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableAsyncBase_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatTweenableVariable)
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template<typename T>
struct TweenJobData_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
class FloatTweenableVariable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives", "FloatTweenableVariable");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.FloatTweenableVariable
class CORDL_TYPE FloatTweenableVariable : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<float_t> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable* New_ctor() ;

/// @brief Method ScheduleTweenJob, addr 0xb42ba94, size 0x98, virtual true, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleTweenJob(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t>>  jobData) ;

/// @brief Method .ctor, addr 0xb42bb2c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatTweenableVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatTweenableVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatTweenableVariable(FloatTweenableVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatTweenableVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatTweenableVariable(FloatTweenableVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11242};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable) == 0x90, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives
