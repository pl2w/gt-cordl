#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/TweenableVariableSynchronousBase_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableBase_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TweenableVariableSynchronousBase_1)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
template<typename T>
class TweenableVariableSynchronousBase_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables", "TweenableVariableSynchronousBase`1");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableSynchronousBase`1<T>
class CORDL_TYPE TweenableVariableSynchronousBase_1 : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T> {
public:
// Declarations
/// @brief Method ExecuteTween, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ExecuteTween(T  startValue, T  targetValue, float_t  tweenAmount, bool  useCurve) ;

/// @brief Method IsNearlyEqual, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsNearlyEqual(T  startValue, T  targetValue) ;

/// @brief Method Lerp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T Lerp(T  from, T  to, float_t  t) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TweenableVariableSynchronousBase_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TweenableVariableSynchronousBase_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TweenableVariableSynchronousBase_1(TweenableVariableSynchronousBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TweenableVariableSynchronousBase_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TweenableVariableSynchronousBase_1(TweenableVariableSynchronousBase_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11232};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables
