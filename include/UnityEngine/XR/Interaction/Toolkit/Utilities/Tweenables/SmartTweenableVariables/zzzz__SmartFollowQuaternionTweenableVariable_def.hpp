#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/SmartTweenableVariables/SmartFollowQuaternionTweenableVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/Primitives/zzzz__QuaternionTweenableVariable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SmartFollowQuaternionTweenableVariable)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowQuaternionTweenableVariable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables", "SmartFollowQuaternionTweenableVariable");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables", "SmartFollowQuaternionTweenableVariable/ComputeNewTweenTarget_00000416$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables", "SmartFollowQuaternionTweenableVariable/ComputeNewTweenTarget_00000416$PostfixBurstDelegate");
// [BurstCompile]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.QuaternionTweenableVariable
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.SmartFollowQuaternionTweenableVariable
class CORDL_TYPE SmartFollowQuaternionTweenableVariable : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::QuaternionTweenableVariable {
public:
// Declarations
using ComputeNewTweenTarget_00000416$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall;

using ComputeNewTweenTarget_00000416$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate;

/// @brief Field <maxAngleAllowed>k__BackingField, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAngleAllowed_k__BackingField, put=__cordl_internal_set__maxAngleAllowed_k__BackingField)) float_t  _maxAngleAllowed_k__BackingField;

/// @brief Field <minAngleAllowed>k__BackingField, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minAngleAllowed_k__BackingField, put=__cordl_internal_set__minAngleAllowed_k__BackingField)) float_t  _minAngleAllowed_k__BackingField;

/// @brief Field <minToMaxDelaySeconds>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__minToMaxDelaySeconds_k__BackingField, put=__cordl_internal_set__minToMaxDelaySeconds_k__BackingField)) float_t  _minToMaxDelaySeconds_k__BackingField;

/// @brief Field m_LastUpdateTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastUpdateTime, put=__cordl_internal_set_m_LastUpdateTime)) float_t  m_LastUpdateTime;

 __declspec(property(get=get_maxAngleAllowed, put=set_maxAngleAllowed)) float_t  maxAngleAllowed;

 __declspec(property(get=get_minAngleAllowed, put=set_minAngleAllowed)) float_t  minAngleAllowed;

 __declspec(property(get=get_minToMaxDelaySeconds, put=set_minToMaxDelaySeconds)) float_t  minToMaxDelaySeconds;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.SmartFollowQuaternionTweenableVariable::ComputeNewTweenTarget_00000416$PostfixBurstDelegate))]
/// @brief Method ComputeNewTweenTarget, addr 0xb42a454, size 0x4, virtual false, abstract: false, final false
static inline void ComputeNewTweenTarget(float_t  deltaTime, float_t  angleOffsetDeg, float_t  maxAngleAllowed, float_t  lowerSpeed, float_t  upperSpeed, ::by_ref<float_t>  newTweenTarget) ;

/// [BurstCompile]
/// @brief Method ComputeNewTweenTarget$BurstManaged, addr 0xb42a904, size 0x74, virtual false, abstract: false, final false
static inline void ComputeNewTweenTarget$BurstManaged(float_t  deltaTime, float_t  angleOffsetDeg, float_t  maxAngleAllowed, float_t  lowerSpeed, float_t  upperSpeed, ::by_ref<float_t>  newTweenTarget) ;

/// @brief Method HandleSmartTween, addr 0xb42a6c8, size 0x100, virtual false, abstract: false, final false
inline void HandleSmartTween(float_t  deltaTime, float_t  lowerSpeed, float_t  upperSpeed) ;

/// @brief Method IsNewTargetWithinThreshold, addr 0xb42a514, size 0xf8, virtual false, abstract: false, final false
inline bool IsNewTargetWithinThreshold(::UnityEngine::Quaternion  newTarget) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable* New_ctor(float_t  minAngleAllowed, float_t  maxAngleAllowed, float_t  minToMaxDelaySeconds) ;

/// @brief Method OnTargetChanged, addr 0xb42a6ac, size 0x1c, virtual true, abstract: false, final false
inline void OnTargetChanged(::UnityEngine::Quaternion  newTarget) ;

/// @brief Method SetTargetWithinThreshold, addr 0xb42a60c, size 0xa0, virtual false, abstract: false, final false
inline bool SetTargetWithinThreshold(::UnityEngine::Quaternion  newTarget) ;

constexpr float_t const& __cordl_internal_get__maxAngleAllowed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__maxAngleAllowed_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__minAngleAllowed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__minAngleAllowed_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__minToMaxDelaySeconds_k__BackingField() const;

constexpr float_t& __cordl_internal_get__minToMaxDelaySeconds_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_m_LastUpdateTime() const;

constexpr float_t& __cordl_internal_get_m_LastUpdateTime() ;

constexpr void __cordl_internal_set__maxAngleAllowed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__minAngleAllowed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__minToMaxDelaySeconds_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_LastUpdateTime(float_t  value) ;

/// @brief Method .ctor, addr 0xb42a488, size 0x38, virtual false, abstract: false, final false
inline void _ctor(float_t  minAngleAllowed, float_t  maxAngleAllowed, float_t  minToMaxDelaySeconds) ;

/// [CompilerGenerated]
/// @brief Method get_maxAngleAllowed, addr 0xb42a468, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxAngleAllowed() ;

/// [CompilerGenerated]
/// @brief Method get_minAngleAllowed, addr 0xb42a458, size 0x8, virtual false, abstract: false, final false
inline float_t get_minAngleAllowed() ;

/// [CompilerGenerated]
/// @brief Method get_minToMaxDelaySeconds, addr 0xb42a478, size 0x8, virtual false, abstract: false, final false
inline float_t get_minToMaxDelaySeconds() ;

/// [CompilerGenerated]
/// @brief Method set_maxAngleAllowed, addr 0xb42a470, size 0x8, virtual false, abstract: false, final false
inline void set_maxAngleAllowed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_minAngleAllowed, addr 0xb42a460, size 0x8, virtual false, abstract: false, final false
inline void set_minAngleAllowed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_minToMaxDelaySeconds, addr 0xb42a480, size 0x8, virtual false, abstract: false, final false
inline void set_minToMaxDelaySeconds(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmartFollowQuaternionTweenableVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowQuaternionTweenableVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmartFollowQuaternionTweenableVariable(SmartFollowQuaternionTweenableVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowQuaternionTweenableVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmartFollowQuaternionTweenableVariable(SmartFollowQuaternionTweenableVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11235};

/// [CompilerGenerated]
/// @brief Field <minAngleAllowed>k__BackingField, offset: 0x6c, size: 0x4, def value: None
 float_t  ____minAngleAllowed_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <maxAngleAllowed>k__BackingField, offset: 0x70, size: 0x4, def value: None
 float_t  ____maxAngleAllowed_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <minToMaxDelaySeconds>k__BackingField, offset: 0x74, size: 0x4, def value: None
 float_t  ____minToMaxDelaySeconds_k__BackingField;

/// @brief Field m_LastUpdateTime, offset: 0x78, size: 0x4, def value: None
 float_t  ___m_LastUpdateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable, ____minAngleAllowed_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable, ____maxAngleAllowed_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable, ____minToMaxDelaySeconds_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable, ___m_LastUpdateTime) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.SmartFollowQuaternionTweenableVariable/ComputeNewTweenTarget_00000416$BurstDirectCall
class CORDL_TYPE SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb42ac08, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb42ab18, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42a7c8, size 0x13c, virtual false, abstract: false, final false
static inline void Invoke(float_t  deltaTime, float_t  angleOffsetDeg, float_t  maxAngleAllowed, float_t  lowerSpeed, float_t  upperSpeed, ::by_ref<float_t>  newTweenTarget) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall(SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall(SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11234};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.SmartFollowQuaternionTweenableVariable/ComputeNewTweenTarget_00000416$PostfixBurstDelegate
class CORDL_TYPE SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb42aa2c, size 0xe0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  deltaTime, float_t  angleOffsetDeg, float_t  maxAngleAllowed, float_t  lowerSpeed, float_t  upperSpeed, ::by_ref<float_t>  newTweenTarget, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method EndInvoke, addr 0xb42ab0c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42aa18, size 0x14, virtual true, abstract: false, final false
inline void Invoke(float_t  deltaTime, float_t  angleOffsetDeg, float_t  maxAngleAllowed, float_t  lowerSpeed, float_t  upperSpeed, ::by_ref<float_t>  newTweenTarget) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb42a978, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate(SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate(SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11233};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables
