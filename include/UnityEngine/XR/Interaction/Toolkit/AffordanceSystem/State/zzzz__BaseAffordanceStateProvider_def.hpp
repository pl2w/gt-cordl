#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/BaseAffordanceStateProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__AffordanceStateData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BaseAffordanceStateProvider)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class IReadOnlyBindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings {
class BindingsGroup;
}
namespace Unity::XR::CoreUtils::Bindings {
class IEventBinding;
}
namespace Unity::XR::CoreUtils::Collections {
template<typename T>
class HashSetList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
class IAffordanceStateReceiver;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
class IAsyncAffordanceStateReceiver;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
class ISynchronousAffordanceStateReceiver;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct AffordanceStateData;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class BaseAffordanceStateProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "BaseAffordanceStateProvider");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.BaseAffordanceStateProvider
class CORDL_TYPE BaseAffordanceStateProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_currentAffordanceStateData)) ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*  currentAffordanceStateData;

 __declspec(property(get=get_isCurrentlyTransitioning)) bool  isCurrentlyTransitioning;

/// @brief Field m_AffordanceStateData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AffordanceStateData, put=__cordl_internal_set_m_AffordanceStateData)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*  m_AffordanceStateData;

/// @brief Field m_AffordanceStateDataBeforeSet, offset 0x30, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_AffordanceStateDataBeforeSet, put=__cordl_internal_set_m_AffordanceStateDataBeforeSet)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  m_AffordanceStateDataBeforeSet;

/// @brief Field m_AsyncAffordanceReceivers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AsyncAffordanceReceivers, put=__cordl_internal_set_m_AsyncAffordanceReceivers)) ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>*  m_AsyncAffordanceReceivers;

/// @brief Field m_BindingsGroup, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BindingsGroup, put=__cordl_internal_set_m_BindingsGroup)) ::Unity::XR::CoreUtils::Bindings::BindingsGroup*  m_BindingsGroup;

/// @brief Field m_CompletingTweens, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CompletingTweens, put=__cordl_internal_set_m_CompletingTweens)) bool  m_CompletingTweens;

/// @brief Field m_InterpolationSpeed, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InterpolationSpeed, put=__cordl_internal_set_m_InterpolationSpeed)) float_t  m_InterpolationSpeed;

/// @brief Field m_IsFirstFrame, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsFirstFrame, put=__cordl_internal_set_m_IsFirstFrame)) bool  m_IsFirstFrame;

/// @brief Field m_MaxTransitionDuration, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxTransitionDuration, put=__cordl_internal_set_m_MaxTransitionDuration)) float_t  m_MaxTransitionDuration;

/// @brief Field m_PreviousAffordanceStateData, offset 0x32, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_PreviousAffordanceStateData, put=__cordl_internal_set_m_PreviousAffordanceStateData)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  m_PreviousAffordanceStateData;

/// @brief Field m_ScheduledJobs, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScheduledJobs, put=__cordl_internal_set_m_ScheduledJobs)) ::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>*  m_ScheduledJobs;

/// @brief Field m_SynchronousAffordanceReceivers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SynchronousAffordanceReceivers, put=__cordl_internal_set_m_SynchronousAffordanceReceivers)) ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>*  m_SynchronousAffordanceReceivers;

/// @brief Field m_TimeSinceLastStateUpdate, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TimeSinceLastStateUpdate, put=__cordl_internal_set_m_TimeSinceLastStateUpdate)) float_t  m_TimeSinceLastStateUpdate;

/// @brief Field m_TransitionDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TransitionDuration, put=__cordl_internal_set_m_TransitionDuration)) float_t  m_TransitionDuration;

 __declspec(property(get=get_transitionDuration, put=set_transitionDuration)) float_t  transitionDuration;

/// @brief Method AddBinding, addr 0xb4d2ee0, size 0x18, virtual false, abstract: false, final false
inline void AddBinding(::Unity::XR::CoreUtils::Bindings::IEventBinding*  binding) ;

/// @brief Method BindToProviders, addr 0xb4d2e0c, size 0xd4, virtual true, abstract: false, final false
inline void BindToProviders() ;

/// @brief Method ClearBindings, addr 0xb4d2ef8, size 0x18, virtual true, abstract: false, final false
inline void ClearBindings() ;

/// @brief Method CompleteJobs, addr 0xb4d335c, size 0xc0, virtual false, abstract: false, final false
inline bool CompleteJobs() ;

/// @brief Method DoTween, addr 0xb4d2ac4, size 0x348, virtual false, abstract: false, final false
inline void DoTween(float_t  tweenTarget) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider* New_ctor() ;

/// @brief Method OnAffordanceStateUpdated, addr 0xb4d28d0, size 0x1f4, virtual false, abstract: false, final false
inline void OnAffordanceStateUpdated(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  newAffordanceStateData) ;

/// @brief Method OnDisable, addr 0xb4d282c, size 0xc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4d27fc, size 0x30, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xb4d27d4, size 0x28, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RefreshTransitionDuration, addr 0xb4d2744, size 0x28, virtual false, abstract: false, final false
inline void RefreshTransitionDuration() ;

/// @brief Method RegisterAffordanceReceiver, addr 0xb4d2f7c, size 0x13c, virtual false, abstract: false, final false
inline bool RegisterAffordanceReceiver(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*  receiver) ;

/// @brief Method RegisterAffordanceReceiver, addr 0xb4d30b8, size 0x58, virtual false, abstract: false, final false
inline bool RegisterAffordanceReceiver(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*  receiver) ;

/// @brief Method RegisterAffordanceReceiver, addr 0xb4d3110, size 0x58, virtual false, abstract: false, final false
inline bool RegisterAffordanceReceiver(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*  receiver) ;

/// @brief Method UnregisterAffordanceReceiver, addr 0xb4d3168, size 0x13c, virtual false, abstract: false, final false
inline bool UnregisterAffordanceReceiver(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*  receiver) ;

/// @brief Method UnregisterAffordanceReceiver, addr 0xb4d32a4, size 0x60, virtual false, abstract: false, final false
inline bool UnregisterAffordanceReceiver(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*  receiver) ;

/// @brief Method UnregisterAffordanceReceiver, addr 0xb4d3304, size 0x58, virtual false, abstract: false, final false
inline bool UnregisterAffordanceReceiver(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*  receiver) ;

/// @brief Method Update, addr 0xb4d2838, size 0x98, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAffordanceState, addr 0xb4d2f10, size 0x6c, virtual false, abstract: false, final false
inline void UpdateAffordanceState(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  newAffordanceStateData) ;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>* const& __cordl_internal_get_m_AffordanceStateData() const;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*& __cordl_internal_get_m_AffordanceStateData() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData const& __cordl_internal_get_m_AffordanceStateDataBeforeSet() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData& __cordl_internal_get_m_AffordanceStateDataBeforeSet() ;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>* const& __cordl_internal_get_m_AsyncAffordanceReceivers() const;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>*& __cordl_internal_get_m_AsyncAffordanceReceivers() ;

constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup* const& __cordl_internal_get_m_BindingsGroup() const;

constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& __cordl_internal_get_m_BindingsGroup() ;

constexpr bool const& __cordl_internal_get_m_CompletingTweens() const;

constexpr bool& __cordl_internal_get_m_CompletingTweens() ;

constexpr float_t const& __cordl_internal_get_m_InterpolationSpeed() const;

constexpr float_t& __cordl_internal_get_m_InterpolationSpeed() ;

constexpr bool const& __cordl_internal_get_m_IsFirstFrame() const;

constexpr bool& __cordl_internal_get_m_IsFirstFrame() ;

constexpr float_t const& __cordl_internal_get_m_MaxTransitionDuration() const;

constexpr float_t& __cordl_internal_get_m_MaxTransitionDuration() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData const& __cordl_internal_get_m_PreviousAffordanceStateData() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData& __cordl_internal_get_m_PreviousAffordanceStateData() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>* const& __cordl_internal_get_m_ScheduledJobs() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>*& __cordl_internal_get_m_ScheduledJobs() ;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>* const& __cordl_internal_get_m_SynchronousAffordanceReceivers() const;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>*& __cordl_internal_get_m_SynchronousAffordanceReceivers() ;

constexpr float_t const& __cordl_internal_get_m_TimeSinceLastStateUpdate() const;

constexpr float_t& __cordl_internal_get_m_TimeSinceLastStateUpdate() ;

constexpr float_t const& __cordl_internal_get_m_TransitionDuration() const;

constexpr float_t& __cordl_internal_get_m_TransitionDuration() ;

constexpr void __cordl_internal_set_m_AffordanceStateData(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*  value) ;

constexpr void __cordl_internal_set_m_AffordanceStateDataBeforeSet(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  value) ;

constexpr void __cordl_internal_set_m_AsyncAffordanceReceivers(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>*  value) ;

constexpr void __cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup*  value) ;

constexpr void __cordl_internal_set_m_CompletingTweens(bool  value) ;

constexpr void __cordl_internal_set_m_InterpolationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_IsFirstFrame(bool  value) ;

constexpr void __cordl_internal_set_m_MaxTransitionDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_PreviousAffordanceStateData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  value) ;

constexpr void __cordl_internal_set_m_ScheduledJobs(::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>*  value) ;

constexpr void __cordl_internal_set_m_SynchronousAffordanceReceivers(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>*  value) ;

constexpr void __cordl_internal_set_m_TimeSinceLastStateUpdate(float_t  value) ;

constexpr void __cordl_internal_set_m_TransitionDuration(float_t  value) ;

/// @brief Method .ctor, addr 0xb4d341c, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_currentAffordanceStateData, addr 0xb4d27cc, size 0x8, virtual false, abstract: false, final false
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>* get_currentAffordanceStateData() ;

/// @brief Method get_isCurrentlyTransitioning, addr 0xb4d276c, size 0x60, virtual false, abstract: false, final false
inline bool get_isCurrentlyTransitioning() ;

/// @brief Method get_transitionDuration, addr 0xb4d2714, size 0x8, virtual false, abstract: false, final false
inline float_t get_transitionDuration() ;

/// @brief Method set_transitionDuration, addr 0xb4d271c, size 0x28, virtual false, abstract: false, final false
inline void set_transitionDuration(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseAffordanceStateProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseAffordanceStateProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseAffordanceStateProvider(BaseAffordanceStateProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseAffordanceStateProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseAffordanceStateProvider(BaseAffordanceStateProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11730};

/// [SerializeField]
/// [Range(0, 5)]
/// [Tooltip("Duration of transition in seconds. 0 means no smoothing.")]
/// @brief Field m_TransitionDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_TransitionDuration;

/// @brief Field m_AffordanceStateData, offset: 0x28, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*  ___m_AffordanceStateData;

/// @brief Field m_AffordanceStateDataBeforeSet, offset: 0x30, size: 0x2, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  ___m_AffordanceStateDataBeforeSet;

/// @brief Field m_PreviousAffordanceStateData, offset: 0x32, size: 0x2, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  ___m_PreviousAffordanceStateData;

/// @brief Field m_AsyncAffordanceReceivers, offset: 0x38, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>*  ___m_AsyncAffordanceReceivers;

/// @brief Field m_SynchronousAffordanceReceivers, offset: 0x40, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>*  ___m_SynchronousAffordanceReceivers;

/// @brief Field m_ScheduledJobs, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>*  ___m_ScheduledJobs;

/// @brief Field m_BindingsGroup, offset: 0x50, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::BindingsGroup*  ___m_BindingsGroup;

/// @brief Field m_TimeSinceLastStateUpdate, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_TimeSinceLastStateUpdate;

/// @brief Field m_IsFirstFrame, offset: 0x5c, size: 0x1, def value: None
 bool  ___m_IsFirstFrame;

/// @brief Field m_CompletingTweens, offset: 0x5d, size: 0x1, def value: None
 bool  ___m_CompletingTweens;

/// @brief Field m_InterpolationSpeed, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_InterpolationSpeed;

/// @brief Field m_MaxTransitionDuration, offset: 0x64, size: 0x4, def value: None
 float_t  ___m_MaxTransitionDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider, ___m_TransitionDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider, ___m_AffordanceStateData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider, ___m_AffordanceStateDataBeforeSet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider, ___m_PreviousAffordanceStateData) == 0x32, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider, ___m_AsyncAffordanceReceivers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider, ___m_SynchronousAffordanceReceivers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider, ___m_ScheduledJobs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider, ___m_BindingsGroup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider, ___m_TimeSinceLastStateUpdate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider, ___m_IsFirstFrame) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider, ___m_CompletingTweens) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider, ___m_InterpolationSpeed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider, ___m_MaxTransitionDuration) == 0x64, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
