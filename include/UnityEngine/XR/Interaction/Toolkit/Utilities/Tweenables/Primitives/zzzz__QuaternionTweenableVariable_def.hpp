#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/Primitives/QuaternionTweenableVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableSynchronousBase_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(QuaternionTweenableVariable)
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
class QuaternionTweenableVariable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives", "QuaternionTweenableVariable");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.Quaternion, UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableSynchronousBase`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.QuaternionTweenableVariable
class CORDL_TYPE QuaternionTweenableVariable : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<::UnityEngine::Quaternion> {
public:
// Declarations
/// @brief Field <angleEqualityThreshold>k__BackingField, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__angleEqualityThreshold_k__BackingField, put=__cordl_internal_set__angleEqualityThreshold_k__BackingField)) float_t  _angleEqualityThreshold_k__BackingField;

 __declspec(property(get=get_angleEqualityThreshold, put=set_angleEqualityThreshold)) float_t  angleEqualityThreshold;

/// @brief Method IsNearlyEqual, addr 0xb42bb94, size 0x6c, virtual true, abstract: false, final false
inline bool IsNearlyEqual(::UnityEngine::Quaternion  startValue, ::UnityEngine::Quaternion  targetValue) ;

/// @brief Method Lerp, addr 0xb42bb84, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion  from, ::UnityEngine::Quaternion  to, float_t  t) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable* New_ctor() ;

constexpr float_t const& __cordl_internal_get__angleEqualityThreshold_k__BackingField() const;

constexpr float_t& __cordl_internal_get__angleEqualityThreshold_k__BackingField() ;

constexpr void __cordl_internal_set__angleEqualityThreshold_k__BackingField(float_t  value) ;

/// @brief Method .ctor, addr 0xb42a4c0, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_angleEqualityThreshold, addr 0xb42bb74, size 0x8, virtual false, abstract: false, final false
inline float_t get_angleEqualityThreshold() ;

/// [CompilerGenerated]
/// @brief Method set_angleEqualityThreshold, addr 0xb42bb7c, size 0x8, virtual false, abstract: false, final false
inline void set_angleEqualityThreshold(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuaternionTweenableVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuaternionTweenableVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuaternionTweenableVariable(QuaternionTweenableVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuaternionTweenableVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuaternionTweenableVariable(QuaternionTweenableVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11243};

/// [CompilerGenerated]
/// @brief Field <angleEqualityThreshold>k__BackingField, offset: 0x68, size: 0x4, def value: None
 float_t  ____angleEqualityThreshold_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable, ____angleEqualityThreshold_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable) == 0x70, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives
