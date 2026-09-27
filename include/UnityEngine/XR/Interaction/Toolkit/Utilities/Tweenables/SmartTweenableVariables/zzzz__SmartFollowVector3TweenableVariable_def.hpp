#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/SmartTweenableVariables/SmartFollowVector3TweenableVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/Primitives/zzzz__Vector3TweenableVariable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SmartFollowVector3TweenableVariable)
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
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowVector3TweenableVariable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
class SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables", "SmartFollowVector3TweenableVariable");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables", "SmartFollowVector3TweenableVariable/ComputeNewTweenTarget_00000422$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables", "SmartFollowVector3TweenableVariable/ComputeNewTweenTarget_00000422$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables", "SmartFollowVector3TweenableVariable/IsNewTargetWithinThreshold_00000423$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate*, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables", "SmartFollowVector3TweenableVariable/IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate");
// [BurstCompile]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.SmartFollowVector3TweenableVariable
class CORDL_TYPE SmartFollowVector3TweenableVariable : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::Vector3TweenableVariable {
public:
// Declarations
using ComputeNewTweenTarget_00000422$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall;

using ComputeNewTweenTarget_00000422$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate;

using IsNewTargetWithinThreshold_00000423$BurstDirectCall = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall;

using IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate = ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate;

/// @brief Field <minDistanceAllowed>k__BackingField, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__minDistanceAllowed_k__BackingField, put=__cordl_internal_set__minDistanceAllowed_k__BackingField)) float_t  _minDistanceAllowed_k__BackingField;

/// @brief Field <minToMaxDelaySeconds>k__BackingField, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__minToMaxDelaySeconds_k__BackingField, put=__cordl_internal_set__minToMaxDelaySeconds_k__BackingField)) float_t  _minToMaxDelaySeconds_k__BackingField;

/// @brief Field m_LastUpdateTime, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastUpdateTime, put=__cordl_internal_set_m_LastUpdateTime)) float_t  m_LastUpdateTime;

/// @brief Field m_MaxDistanceAllowed, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxDistanceAllowed, put=__cordl_internal_set_m_MaxDistanceAllowed)) float_t  m_MaxDistanceAllowed;

/// @brief Field m_SqrMaxDistanceAllowed, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SqrMaxDistanceAllowed, put=__cordl_internal_set_m_SqrMaxDistanceAllowed)) float_t  m_SqrMaxDistanceAllowed;

 __declspec(property(get=get_maxDistanceAllowed, put=set_maxDistanceAllowed)) float_t  maxDistanceAllowed;

 __declspec(property(get=get_minDistanceAllowed, put=set_minDistanceAllowed)) float_t  minDistanceAllowed;

 __declspec(property(get=get_minToMaxDelaySeconds, put=set_minToMaxDelaySeconds)) float_t  minToMaxDelaySeconds;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.SmartFollowVector3TweenableVariable::ComputeNewTweenTarget_00000422$PostfixBurstDelegate))]
/// @brief Method ComputeNewTweenTarget, addr 0xb42ac20, size 0x4, virtual false, abstract: false, final false
static inline void ComputeNewTweenTarget(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentValue, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetValue, float_t  sqrMaxDistanceAllowed, float_t  deltaTime, float_t  lowerSpeed, float_t  upperSpeed, ::by_ref<float_t>  newTweenTarget) ;

/// [BurstCompile]
/// @brief Method ComputeNewTweenTarget$BurstManaged, addr 0xb42b24c, size 0x9c, virtual false, abstract: false, final false
static inline void ComputeNewTweenTarget$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentValue, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetValue, float_t  sqrMaxDistanceAllowed, float_t  deltaTime, float_t  lowerSpeed, float_t  upperSpeed, ::by_ref<float_t>  newTweenTarget) ;

/// @brief Method HandleSmartTween, addr 0xb42ae9c, size 0xf4, virtual false, abstract: false, final false
inline void HandleSmartTween(float_t  deltaTime, float_t  lowerSpeed, float_t  upperSpeed) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.SmartFollowVector3TweenableVariable::IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate))]
/// @brief Method IsNewTargetWithinThreshold, addr 0xb42ac24, size 0x4, virtual false, abstract: false, final false
static inline bool IsNewTargetWithinThreshold(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentValue, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetValue, float_t  minDistanceAllowed, float_t  maxDistanceAllowed, float_t  timeSinceLastUpdate, float_t  minToMaxDelaySeconds) ;

/// @brief Method IsNewTargetWithinThreshold, addr 0xb42ace4, size 0xa4, virtual false, abstract: false, final false
inline bool IsNewTargetWithinThreshold(::Unity::Mathematics::float3  newTarget) ;

/// [BurstCompile]
/// @brief Method IsNewTargetWithinThreshold$BurstManaged, addr 0xb42b2e8, size 0x7c, virtual false, abstract: false, final false
static inline bool IsNewTargetWithinThreshold$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentValue, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetValue, float_t  minDistanceAllowed, float_t  maxDistanceAllowed, float_t  timeSinceLastUpdate, float_t  minToMaxDelaySeconds) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable* New_ctor(float_t  minDistanceAllowed, float_t  maxDistanceAllowed, float_t  minToMaxDelaySeconds) ;

/// @brief Method OnTargetChanged, addr 0xb42ae1c, size 0x80, virtual true, abstract: false, final false
inline void OnTargetChanged(::Unity::Mathematics::float3  newTarget) ;

/// @brief Method SetTargetWithinThreshold, addr 0xb42ad88, size 0x94, virtual false, abstract: false, final false
inline bool SetTargetWithinThreshold(::Unity::Mathematics::float3  newTarget) ;

constexpr float_t const& __cordl_internal_get__minDistanceAllowed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__minDistanceAllowed_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__minToMaxDelaySeconds_k__BackingField() const;

constexpr float_t& __cordl_internal_get__minToMaxDelaySeconds_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_m_LastUpdateTime() const;

constexpr float_t& __cordl_internal_get_m_LastUpdateTime() ;

constexpr float_t const& __cordl_internal_get_m_MaxDistanceAllowed() const;

constexpr float_t& __cordl_internal_get_m_MaxDistanceAllowed() ;

constexpr float_t const& __cordl_internal_get_m_SqrMaxDistanceAllowed() const;

constexpr float_t& __cordl_internal_get_m_SqrMaxDistanceAllowed() ;

constexpr void __cordl_internal_set__minDistanceAllowed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__minToMaxDelaySeconds_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_LastUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set_m_MaxDistanceAllowed(float_t  value) ;

constexpr void __cordl_internal_set_m_SqrMaxDistanceAllowed(float_t  value) ;

/// @brief Method .ctor, addr 0xb42ac60, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(float_t  minDistanceAllowed, float_t  maxDistanceAllowed, float_t  minToMaxDelaySeconds) ;

/// @brief Method get_maxDistanceAllowed, addr 0xb42ac38, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxDistanceAllowed() ;

/// [CompilerGenerated]
/// @brief Method get_minDistanceAllowed, addr 0xb42ac28, size 0x8, virtual false, abstract: false, final false
inline float_t get_minDistanceAllowed() ;

/// [CompilerGenerated]
/// @brief Method get_minToMaxDelaySeconds, addr 0xb42ac50, size 0x8, virtual false, abstract: false, final false
inline float_t get_minToMaxDelaySeconds() ;

/// @brief Method set_maxDistanceAllowed, addr 0xb42ac40, size 0x10, virtual false, abstract: false, final false
inline void set_maxDistanceAllowed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_minDistanceAllowed, addr 0xb42ac30, size 0x8, virtual false, abstract: false, final false
inline void set_minDistanceAllowed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_minToMaxDelaySeconds, addr 0xb42ac58, size 0x8, virtual false, abstract: false, final false
inline void set_minToMaxDelaySeconds(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmartFollowVector3TweenableVariable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowVector3TweenableVariable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmartFollowVector3TweenableVariable(SmartFollowVector3TweenableVariable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowVector3TweenableVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmartFollowVector3TweenableVariable(SmartFollowVector3TweenableVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11240};

/// [CompilerGenerated]
/// @brief Field <minDistanceAllowed>k__BackingField, offset: 0xa8, size: 0x4, def value: None
 float_t  ____minDistanceAllowed_k__BackingField;

/// @brief Field m_MaxDistanceAllowed, offset: 0xac, size: 0x4, def value: None
 float_t  ___m_MaxDistanceAllowed;

/// [CompilerGenerated]
/// @brief Field <minToMaxDelaySeconds>k__BackingField, offset: 0xb0, size: 0x4, def value: None
 float_t  ____minToMaxDelaySeconds_k__BackingField;

/// @brief Field m_SqrMaxDistanceAllowed, offset: 0xb4, size: 0x4, def value: None
 float_t  ___m_SqrMaxDistanceAllowed;

/// @brief Field m_LastUpdateTime, offset: 0xb8, size: 0x4, def value: None
 float_t  ___m_LastUpdateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable, ____minDistanceAllowed_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable, ___m_MaxDistanceAllowed) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable, ____minToMaxDelaySeconds_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable, ___m_SqrMaxDistanceAllowed) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable, ___m_LastUpdateTime) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable) == 0xc0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.SmartFollowVector3TweenableVariable/IsNewTargetWithinThreshold_00000423$BurstDirectCall
class CORDL_TYPE SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb42b964, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb42b874, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42b108, size 0x144, virtual false, abstract: false, final false
static inline bool Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentValue, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetValue, float_t  minDistanceAllowed, float_t  maxDistanceAllowed, float_t  timeSinceLastUpdate, float_t  minToMaxDelaySeconds) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall(SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall(SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11239};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.SmartFollowVector3TweenableVariable/IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate
class CORDL_TYPE SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb42b738, size 0x114, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentValue, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetValue, float_t  minDistanceAllowed, float_t  maxDistanceAllowed, float_t  timeSinceLastUpdate, float_t  minToMaxDelaySeconds, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method EndInvoke, addr 0xb42b84c, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42b724, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentValue, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetValue, float_t  minDistanceAllowed, float_t  maxDistanceAllowed, float_t  timeSinceLastUpdate, float_t  minToMaxDelaySeconds) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb42b670, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate(SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate(SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11238};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000423$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.SmartFollowVector3TweenableVariable/ComputeNewTweenTarget_00000422$BurstDirectCall
class CORDL_TYPE SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0xb42b658, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0xb42b568, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42af90, size 0x178, virtual false, abstract: false, final false
static inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentValue, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetValue, float_t  sqrMaxDistanceAllowed, float_t  deltaTime, float_t  lowerSpeed, float_t  upperSpeed, ::by_ref<float_t>  newTweenTarget) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall(SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall(SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11237};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.SmartTweenableVariables.SmartFollowVector3TweenableVariable/ComputeNewTweenTarget_00000422$PostfixBurstDelegate
class CORDL_TYPE SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb42b42c, size 0x130, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentValue, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetValue, float_t  sqrMaxDistanceAllowed, float_t  deltaTime, float_t  lowerSpeed, float_t  upperSpeed, ::by_ref<float_t>  newTweenTarget, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method EndInvoke, addr 0xb42b55c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0xb42b418, size 0x14, virtual true, abstract: false, final false
inline void Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentValue, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetValue, float_t  sqrMaxDistanceAllowed, float_t  deltaTime, float_t  lowerSpeed, float_t  upperSpeed, ::by_ref<float_t>  newTweenTarget) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0xb42b364, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate(SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate(SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11236};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables::SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::SmartTweenableVariables
