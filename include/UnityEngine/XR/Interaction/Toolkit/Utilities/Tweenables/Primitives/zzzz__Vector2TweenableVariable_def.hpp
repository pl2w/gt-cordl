#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/Primitives/Vector2TweenableVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableAsyncBase_1_def.hpp"
CORDL_MODULE_EXPORT(Vector2TweenableVariable)
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct float2;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template<typename T>
struct TweenJobData_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
class Vector2TweenableVariable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector2TweenableVariable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector2TweenableVariable*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives", "Vector2TweenableVariable");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies Unity.Mathematics.float2, UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector2TweenableVariable
class CORDL_TYPE Vector2TweenableVariable : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<::Unity::Mathematics::float2> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector2TweenableVariable* New_ctor() ;

/// @brief Method ScheduleTweenJob, addr 0xb42bc00, size 0xac, virtual true, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleTweenJob(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>>  jobData) ;

/// @brief Method .ctor, addr 0xb42bcac, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector2TweenableVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector2TweenableVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector2TweenableVariable(Vector2TweenableVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector2TweenableVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector2TweenableVariable(Vector2TweenableVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11244};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector2TweenableVariable) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives
