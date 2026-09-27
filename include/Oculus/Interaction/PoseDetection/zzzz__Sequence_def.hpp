#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Sequence.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateModel_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Sequence)
namespace Oculus::Interaction::PoseDetection {
class DebugModel_Sequence__GetChildrenCoroutine_d__0;
}
namespace Oculus::Interaction::PoseDetection {
class DebugModel_Sequence___c;
}
namespace Oculus::Interaction::PoseDetection {
class Sequence_ActivationStep;
}
namespace Oculus::Interaction::PoseDetection {
class Sequence_DebugModel;
}
namespace Oculus::Interaction::PoseDetection {
class Sequence___c;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace Oculus::Interaction {
class ITimeConsumer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class DebugModel_Sequence__GetChildrenCoroutine_d__0;
}
namespace Oculus::Interaction::PoseDetection {
class DebugModel_Sequence___c;
}
namespace Oculus::Interaction::PoseDetection {
class Sequence;
}
namespace Oculus::Interaction::PoseDetection {
class Sequence_ActivationStep;
}
namespace Oculus::Interaction::PoseDetection {
class Sequence_DebugModel;
}
namespace Oculus::Interaction::PoseDetection {
class Sequence___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::Sequence*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::Sequence_DebugModel*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::Sequence___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0*, "Oculus.Interaction.PoseDetection", "Sequence/DebugModel/<GetChildrenCoroutine>d__0");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*, "Oculus.Interaction.PoseDetection", "Sequence/DebugModel/<>c");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Sequence*, "Oculus.Interaction.PoseDetection", "Sequence");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*, "Oculus.Interaction.PoseDetection", "Sequence/ActivationStep");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Sequence_DebugModel*, "Oculus.Interaction.PoseDetection", "Sequence/DebugModel");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Sequence___c*, "Oculus.Interaction.PoseDetection", "Sequence/<>c");
// Dependencies Oculus.Interaction.PoseDetection.Sequence::ActivationStep, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Sequence
class CORDL_TYPE Sequence : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ActivationStep = ::Oculus::Interaction::PoseDetection::Sequence_ActivationStep;

using DebugModel = ::Oculus::Interaction::PoseDetection::Sequence_DebugModel;

using __c = ::Oculus::Interaction::PoseDetection::Sequence___c;

 __declspec(property(get=get_Active, put=set_Active)) bool  Active;

 __declspec(property(get=get_CurrentActivationStep, put=set_CurrentActivationStep)) int32_t  CurrentActivationStep;

 __declspec(property(get=get_RemainActiveWhile, put=set_RemainActiveWhile)) ::Oculus::Interaction::IActiveState*  RemainActiveWhile;

/// @brief Field <Active>k__BackingField, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__Active_k__BackingField, put=__cordl_internal_set__Active_k__BackingField)) bool  _Active_k__BackingField;

/// @brief Field <CurrentActivationStep>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentActivationStep_k__BackingField, put=__cordl_internal_set__CurrentActivationStep_k__BackingField)) int32_t  _CurrentActivationStep_k__BackingField;

/// @brief Field <RemainActiveWhile>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__RemainActiveWhile_k__BackingField, put=__cordl_internal_set__RemainActiveWhile_k__BackingField)) ::Oculus::Interaction::IActiveState*  _RemainActiveWhile_k__BackingField;

/// @brief Field _cooldownExceededTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__cooldownExceededTime, put=__cordl_internal_set__cooldownExceededTime)) float_t  _cooldownExceededTime;

/// @brief Field _currentStepActivatedTime, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentStepActivatedTime, put=__cordl_internal_set__currentStepActivatedTime)) float_t  _currentStepActivatedTime;

/// @brief Field _currentStepWasActive, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__currentStepWasActive, put=__cordl_internal_set__currentStepWasActive)) bool  _currentStepWasActive;

/// @brief Field _remainActiveCooldown, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__remainActiveCooldown, put=__cordl_internal_set__remainActiveCooldown)) float_t  _remainActiveCooldown;

/// @brief Field _remainActiveWhile, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__remainActiveWhile, put=__cordl_internal_set__remainActiveWhile)) ::UnityW<::UnityEngine::Object>  _remainActiveWhile;

/// @brief Field _stepFailedTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__stepFailedTime, put=__cordl_internal_set__stepFailedTime)) float_t  _stepFailedTime;

/// @brief Field _stepsToActivate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__stepsToActivate, put=__cordl_internal_set__stepsToActivate)) ::ArrayW<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>  _stepsToActivate;

/// @brief Field _timeProvider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Field _wasRemainActive, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasRemainActive, put=__cordl_internal_set__wasRemainActive)) bool  _wasRemainActive;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Method Awake, addr 0xa4a3a94, size 0x64, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method EnterNextStep, addr 0xa4a3fc0, size 0x88, virtual false, abstract: false, final false
inline void EnterNextStep(float_t  time) ;

/// @brief Method InjectOptionalRemainActiveWhile, addr 0xa4a4064, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalRemainActiveWhile(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method InjectOptionalStepsToActivate, addr 0xa4a405c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalStepsToActivate(::ArrayW<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>  stepsToActivate) ;

/// [Obsolete("Use SetTimeProvider()")]
/// @brief Method InjectOptionalTimeProvider, addr 0xa4a4134, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

static inline ::Oculus::Interaction::PoseDetection::Sequence* New_ctor() ;

/// @brief Method ResetState, addr 0xa4a3af8, size 0xc, virtual false, abstract: false, final false
inline void ResetState() ;

/// @brief Method SetTimeProvider, addr 0xa4a3a6c, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa4a3b04, size 0xf4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4a3c68, size 0x358, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__Active_k__BackingField() const;

constexpr bool& __cordl_internal_get__Active_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CurrentActivationStep_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentActivationStep_k__BackingField() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get__RemainActiveWhile_k__BackingField() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get__RemainActiveWhile_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__cooldownExceededTime() const;

constexpr float_t& __cordl_internal_get__cooldownExceededTime() ;

constexpr float_t const& __cordl_internal_get__currentStepActivatedTime() const;

constexpr float_t& __cordl_internal_get__currentStepActivatedTime() ;

constexpr bool const& __cordl_internal_get__currentStepWasActive() const;

constexpr bool& __cordl_internal_get__currentStepWasActive() ;

constexpr float_t const& __cordl_internal_get__remainActiveCooldown() const;

constexpr float_t& __cordl_internal_get__remainActiveCooldown() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__remainActiveWhile() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__remainActiveWhile() ;

constexpr float_t const& __cordl_internal_get__stepFailedTime() const;

constexpr float_t& __cordl_internal_get__stepFailedTime() ;

constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*> const& __cordl_internal_get__stepsToActivate() const;

constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>& __cordl_internal_get__stepsToActivate() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr bool const& __cordl_internal_get__wasRemainActive() const;

constexpr bool& __cordl_internal_get__wasRemainActive() ;

constexpr void __cordl_internal_set__Active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CurrentActivationStep_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__RemainActiveWhile_k__BackingField(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set__cooldownExceededTime(float_t  value) ;

constexpr void __cordl_internal_set__currentStepActivatedTime(float_t  value) ;

constexpr void __cordl_internal_set__currentStepWasActive(bool  value) ;

constexpr void __cordl_internal_set__remainActiveCooldown(float_t  value) ;

constexpr void __cordl_internal_set__remainActiveWhile(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__stepFailedTime(float_t  value) ;

constexpr void __cordl_internal_set__stepsToActivate(::ArrayW<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__wasRemainActive(bool  value) ;

/// @brief Method .ctor, addr 0xa4a413c, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Active, addr 0xa4a4048, size 0x8, virtual true, abstract: false, final true
inline bool get_Active() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentActivationStep, addr 0xa4a3a84, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentActivationStep() ;

/// [CompilerGenerated]
/// @brief Method get_RemainActiveWhile, addr 0xa4a3a74, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IActiveState* get_RemainActiveWhile() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Active, addr 0xa4a4050, size 0x8, virtual false, abstract: false, final false
inline void set_Active(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentActivationStep, addr 0xa4a3a8c, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentActivationStep(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RemainActiveWhile, addr 0xa4a3a7c, size 0x8, virtual false, abstract: false, final false
inline void set_RemainActiveWhile(::Oculus::Interaction::IActiveState*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sequence() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sequence", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Sequence(Sequence && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sequence", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sequence(Sequence const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16147};

/// [Tooltip("The sequence will step through these ActivationSteps one at a time, advancing when each step becomes Active. Once all steps are active, the sequence itself will become Active.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _stepsToActivate, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*>  ____stepsToActivate;

/// [Tooltip("Once the sequence is active, it will remain active as long as this IActiveState is Active.")]
/// [SerializeField]
/// [Optional]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _remainActiveWhile, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____remainActiveWhile;

/// [Tooltip("Sequence will not become inactive until RemainActiveWhile has been inactive for at least this many seconds.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _remainActiveCooldown, offset: 0x30, size: 0x4, def value: None
 float_t  ____remainActiveCooldown;

/// @brief Field _timeProvider, offset: 0x38, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// [CompilerGenerated]
/// @brief Field <RemainActiveWhile>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ____RemainActiveWhile_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CurrentActivationStep>k__BackingField, offset: 0x48, size: 0x4, def value: None
 int32_t  ____CurrentActivationStep_k__BackingField;

/// @brief Field _currentStepActivatedTime, offset: 0x4c, size: 0x4, def value: None
 float_t  ____currentStepActivatedTime;

/// @brief Field _stepFailedTime, offset: 0x50, size: 0x4, def value: None
 float_t  ____stepFailedTime;

/// @brief Field _currentStepWasActive, offset: 0x54, size: 0x1, def value: None
 bool  ____currentStepWasActive;

/// @brief Field _cooldownExceededTime, offset: 0x58, size: 0x4, def value: None
 float_t  ____cooldownExceededTime;

/// @brief Field _wasRemainActive, offset: 0x5c, size: 0x1, def value: None
 bool  ____wasRemainActive;

/// [CompilerGenerated]
/// @brief Field <Active>k__BackingField, offset: 0x5d, size: 0x1, def value: None
 bool  ____Active_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence, ____stepsToActivate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence, ____remainActiveWhile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence, ____remainActiveCooldown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence, ____timeProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence, ____RemainActiveWhile_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence, ____CurrentActivationStep_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence, ____currentStepActivatedTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence, ____stepFailedTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence, ____currentStepWasActive) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence, ____cooldownExceededTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence, ____wasRemainActive) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence, ____Active_k__BackingField) == 0x5d, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Sequence) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Sequence/<>c
class CORDL_TYPE Sequence___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PoseDetection::Sequence___c*  __9;

/// @brief Field <>9__33_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__33_0, put=setStaticF___9__33_0)) ::System::Func_1<float_t>*  __9__33_0;

static inline ::Oculus::Interaction::PoseDetection::Sequence___c* New_ctor() ;

/// @brief Method <.ctor>b__33_0, addr 0xa4a4a14, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__33_0() ;

/// @brief Method .ctor, addr 0xa4a4a0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::Sequence___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__33_0() ;

static inline void setStaticF___9(::Oculus::Interaction::PoseDetection::Sequence___c*  value) ;

static inline void setStaticF___9__33_0(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sequence___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sequence___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Sequence___c(Sequence___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sequence___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sequence___c(Sequence___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16146};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::Sequence___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies Oculus.Interaction.PoseDetection.Debug.ActiveStateModel`1<TActiveState>
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Sequence/DebugModel
class CORDL_TYPE Sequence_DebugModel : public ::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<::UnityW<::Oculus::Interaction::PoseDetection::Sequence>> {
public:
// Declarations
using _GetChildrenCoroutine_d__0 = ::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0;

using __c = ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c;

/// @brief Method GetChildrenAsync, addr 0xa4a4354, size 0x14c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* GetChildrenAsync(::Oculus::Interaction::PoseDetection::Sequence*  activeState) ;

/// [IteratorStateMachine(typeof(Oculus.Interaction.PoseDetection.Sequence::DebugModel::<GetChildrenCoroutine>d__0))]
/// @brief Method GetChildrenCoroutine, addr 0xa4a42a4, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GetChildrenCoroutine(::Oculus::Interaction::PoseDetection::Sequence*  sequence, ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*  tcs) ;

static inline ::Oculus::Interaction::PoseDetection::Sequence_DebugModel* New_ctor() ;

/// @brief Method .ctor, addr 0xa4a44a0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sequence_DebugModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sequence_DebugModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Sequence_DebugModel(Sequence_DebugModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sequence_DebugModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sequence_DebugModel(Sequence_DebugModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16145};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::Sequence_DebugModel) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Sequence/DebugModel/<GetChildrenCoroutine>d__0
class CORDL_TYPE DebugModel_Sequence__GetChildrenCoroutine_d__0 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field sequence, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sequence, put=__cordl_internal_set_sequence)) ::UnityW<::Oculus::Interaction::PoseDetection::Sequence>  sequence;

/// @brief Field tcs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*  tcs;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa4a4598, size 0x3c4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa4a495c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa4a4964, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa4a499c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa4a4594, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Sequence> const& __cordl_internal_get_sequence() const;

constexpr ::UnityW<::Oculus::Interaction::PoseDetection::Sequence>& __cordl_internal_get_sequence() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_sequence(::UnityW<::Oculus::Interaction::PoseDetection::Sequence>  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa4a432c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugModel_Sequence__GetChildrenCoroutine_d__0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugModel_Sequence__GetChildrenCoroutine_d__0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugModel_Sequence__GetChildrenCoroutine_d__0(DebugModel_Sequence__GetChildrenCoroutine_d__0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugModel_Sequence__GetChildrenCoroutine_d__0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugModel_Sequence__GetChildrenCoroutine_d__0(DebugModel_Sequence__GetChildrenCoroutine_d__0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16144};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field sequence, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PoseDetection::Sequence>  ___sequence;

/// @brief Field tcs, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0, ___sequence) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0, ___tcs) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::DebugModel_Sequence__GetChildrenCoroutine_d__0) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Sequence/DebugModel/<>c
class CORDL_TYPE DebugModel_Sequence___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,bool>*  __9__0_0;

/// @brief Field <>9__0_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_1, put=setStaticF___9__0_1)) ::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,::Oculus::Interaction::IActiveState*>*  __9__0_1;

/// @brief Field <>9__0_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_2, put=setStaticF___9__0_2)) ::System::Func_2<::Oculus::Interaction::IActiveState*,bool>*  __9__0_2;

static inline ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c* New_ctor() ;

/// @brief Method <GetChildrenCoroutine>b__0_0, addr 0xa4a4558, size 0x1c, virtual false, abstract: false, final false
inline bool _GetChildrenCoroutine_b__0_0(::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*  s) ;

/// @brief Method <GetChildrenCoroutine>b__0_1, addr 0xa4a4574, size 0x14, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IActiveState* _GetChildrenCoroutine_b__0_1(::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*  step) ;

/// @brief Method <GetChildrenCoroutine>b__0_2, addr 0xa4a4588, size 0xc, virtual false, abstract: false, final false
inline bool _GetChildrenCoroutine_b__0_2(::Oculus::Interaction::IActiveState*  c) ;

/// @brief Method .ctor, addr 0xa4a4550, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c* getStaticF___9() ;

static inline ::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,bool>* getStaticF___9__0_0() ;

static inline ::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,::Oculus::Interaction::IActiveState*>* getStaticF___9__0_1() ;

static inline ::System::Func_2<::Oculus::Interaction::IActiveState*,bool>* getStaticF___9__0_2() ;

static inline void setStaticF___9(::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c*  value) ;

static inline void setStaticF___9__0_0(::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,bool>*  value) ;

static inline void setStaticF___9__0_1(::System::Func_2<::Oculus::Interaction::PoseDetection::Sequence_ActivationStep*,::Oculus::Interaction::IActiveState*>*  value) ;

static inline void setStaticF___9__0_2(::System::Func_2<::Oculus::Interaction::IActiveState*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugModel_Sequence___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugModel_Sequence___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugModel_Sequence___c(DebugModel_Sequence___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugModel_Sequence___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugModel_Sequence___c(DebugModel_Sequence___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16143};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::DebugModel_Sequence___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Sequence/ActivationStep
class CORDL_TYPE Sequence_ActivationStep : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ActiveState, put=set_ActiveState)) ::Oculus::Interaction::IActiveState*  ActiveState;

 __declspec(property(get=get_MaxStepTime)) float_t  MaxStepTime;

 __declspec(property(get=get_MinActiveTime)) float_t  MinActiveTime;

/// @brief Field <ActiveState>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActiveState_k__BackingField, put=__cordl_internal_set__ActiveState_k__BackingField)) ::Oculus::Interaction::IActiveState*  _ActiveState_k__BackingField;

/// @brief Field _activeState, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) ::UnityW<::UnityEngine::Object>  _activeState;

/// @brief Field _maxStepTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxStepTime, put=__cordl_internal_set__maxStepTime)) float_t  _maxStepTime;

/// @brief Field _minActiveTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__minActiveTime, put=__cordl_internal_set__minActiveTime)) float_t  _minActiveTime;

static inline ::Oculus::Interaction::PoseDetection::Sequence_ActivationStep* New_ctor() ;

static inline ::Oculus::Interaction::PoseDetection::Sequence_ActivationStep* New_ctor(::Oculus::Interaction::IActiveState*  activeState, float_t  minActiveTime, float_t  maxStepTime) ;

/// @brief Method Start, addr 0xa4a3bf8, size 0x70, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get__ActiveState_k__BackingField() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get__ActiveState_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__activeState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__activeState() ;

constexpr float_t const& __cordl_internal_get__maxStepTime() const;

constexpr float_t& __cordl_internal_get__maxStepTime() ;

constexpr float_t const& __cordl_internal_get__minActiveTime() const;

constexpr float_t& __cordl_internal_get__minActiveTime() ;

constexpr void __cordl_internal_set__ActiveState_k__BackingField(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__maxStepTime(float_t  value) ;

constexpr void __cordl_internal_set__minActiveTime(float_t  value) ;

/// @brief Method .ctor, addr 0xa4a4254, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa4a425c, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::IActiveState*  activeState, float_t  minActiveTime, float_t  maxStepTime) ;

/// [CompilerGenerated]
/// @brief Method get_ActiveState, addr 0xa4a4234, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IActiveState* get_ActiveState() ;

/// @brief Method get_MaxStepTime, addr 0xa4a424c, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxStepTime() ;

/// @brief Method get_MinActiveTime, addr 0xa4a4244, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinActiveTime() ;

/// [CompilerGenerated]
/// @brief Method set_ActiveState, addr 0xa4a423c, size 0x8, virtual false, abstract: false, final false
inline void set_ActiveState(::Oculus::Interaction::IActiveState*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Sequence_ActivationStep() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Sequence_ActivationStep", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Sequence_ActivationStep(Sequence_ActivationStep && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Sequence_ActivationStep", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Sequence_ActivationStep(Sequence_ActivationStep const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16142};

/// [Tooltip("The IActiveState that is used to determine if the conditions of this step are fulfilled.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _activeState, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____activeState;

/// [CompilerGenerated]
/// @brief Field <ActiveState>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ____ActiveState_k__BackingField;

/// [SerializeField]
/// [Tooltip("This step must be consistently active for this amount of time before continuing to the next step.")]
/// @brief Field _minActiveTime, offset: 0x20, size: 0x4, def value: None
 float_t  ____minActiveTime;

/// [SerializeField]
/// [Tooltip("Maximum time that can be spent waiting for this step to complete, before the whole sequence is abandoned. This value must be greater than minActiveTime, or zero. This value is ignored if zero, and for the first step in the list.")]
/// @brief Field _maxStepTime, offset: 0x24, size: 0x4, def value: None
 float_t  ____maxStepTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence_ActivationStep, ____activeState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence_ActivationStep, ____ActiveState_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence_ActivationStep, ____minActiveTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Sequence_ActivationStep, ____maxStepTime) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Sequence_ActivationStep) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
