#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/LocomotionProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionPhase_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionProvider)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class ApplyBodyTransformationsEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IXRBodyTransformation;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionMediator;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
struct LocomotionState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRBodyTransformer;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct LocomotionPhase;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class LocomotionSystem;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "LocomotionProvider");
// [DefaultExecutionOrder(-210)]
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.XR.Interaction.Toolkit.LocomotionPhase
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionProvider
class CORDL_TYPE LocomotionProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <locomotionPhase>k__BackingField, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__locomotionPhase_k__BackingField, put=__cordl_internal_set__locomotionPhase_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase  _locomotionPhase_k__BackingField;

/// @brief Field <locomotionProviders>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__locomotionProviders_k__BackingField, put=setStaticF__locomotionProviders_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  _locomotionProviders_k__BackingField;

/// @brief Field afterStepLocomotion, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_afterStepLocomotion, put=__cordl_internal_set_afterStepLocomotion)) ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  afterStepLocomotion;

/// @brief Field beforeStepLocomotion, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_beforeStepLocomotion, put=__cordl_internal_set_beforeStepLocomotion)) ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  beforeStepLocomotion;

/// @brief Field beginLocomotion, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_beginLocomotion, put=__cordl_internal_set_beginLocomotion)) ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  beginLocomotion;

 __declspec(property(get=get_canStartMoving)) bool  canStartMoving;

/// @brief Field endLocomotion, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_endLocomotion, put=__cordl_internal_set_endLocomotion)) ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  endLocomotion;

 __declspec(property(get=get_isLocomotionActive)) bool  isLocomotionActive;

/// @brief Field locomotionEnded, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_locomotionEnded, put=__cordl_internal_set_locomotionEnded)) ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  locomotionEnded;

/// @brief [Obsolete("locomotionPhase is deprecated in XRI 3.0.0 and will be removed in a future release. Use locomotionState instead.", false)]
 __declspec(property(get=get_locomotionPhase, put=set_locomotionPhase)) ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase  locomotionPhase;

/// @brief Field locomotionProvidersChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_locomotionProvidersChanged, put=setStaticF_locomotionProvidersChanged)) ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  locomotionProvidersChanged;

/// @brief Field locomotionStarted, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_locomotionStarted, put=__cordl_internal_set_locomotionStarted)) ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  locomotionStarted;

 __declspec(property(get=get_locomotionState)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  locomotionState;

/// @brief Field locomotionStateChanged, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_locomotionStateChanged, put=__cordl_internal_set_locomotionStateChanged)) ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*  locomotionStateChanged;

/// @brief Field m_ActiveBodyTransformer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActiveBodyTransformer, put=__cordl_internal_set_m_ActiveBodyTransformer)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  m_ActiveBodyTransformer;

/// @brief Field m_AnyTransformationsQueued, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AnyTransformationsQueued, put=__cordl_internal_set_m_AnyTransformationsQueued)) bool  m_AnyTransformationsQueued;

/// @brief Field m_Mediator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Mediator, put=__cordl_internal_set_m_Mediator)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator>  m_Mediator;

/// @brief Field m_SubscribedTransformer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SubscribedTransformer, put=__cordl_internal_set_m_SubscribedTransformer)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  m_SubscribedTransformer;

/// @brief Field m_System, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_System, put=__cordl_internal_set_m_System)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>  m_System;

/// @brief Field m_TransformationPriority, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TransformationPriority, put=__cordl_internal_set_m_TransformationPriority)) int32_t  m_TransformationPriority;

 __declspec(property(get=get_mediator, put=set_mediator)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator>  mediator;

/// @brief Field startLocomotion, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_startLocomotion, put=__cordl_internal_set_startLocomotion)) ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  startLocomotion;

/// @brief [Obsolete("LocomotionSystem is deprecated in XRI 3.0.0 and will be removed in a future release. Use mediator instead.", false)]
 __declspec(property(get=get_system, put=set_system)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>  system;

 __declspec(property(get=get_transformationPriority, put=set_transformationPriority)) int32_t  transformationPriority;

/// @brief Method Awake, addr 0xb448580, size 0x388, virtual true, abstract: false, final false
inline void Awake() ;

/// [Obsolete("BeginLocomotion is deprecated in XRI 3.0.0 and will be removed in a future release. Instead, call TryPrepareLocomotion when locomotion start input occurs.", false)]
/// @brief Method BeginLocomotion, addr 0xb449428, size 0xac, virtual false, abstract: false, final false
inline bool BeginLocomotion() ;

/// [Obsolete("CanBeginLocomotion is deprecated in XRI 3.0.0 and will be removed in a future release. Instead, query isLocomotionActive to check if locomotion can start.", false)]
/// @brief Method CanBeginLocomotion, addr 0xb44939c, size 0x8c, virtual false, abstract: false, final false
inline bool CanBeginLocomotion() ;

/// @brief Method CanQueueTransformation, addr 0xb448d94, size 0xcc, virtual false, abstract: false, final false
inline bool CanQueueTransformation() ;

/// [Obsolete("EndLocomotion is deprecated in XRI 3.0.0 and will be removed in a future release. Instead, call TryEndLocomotion when locomotion end input has completed.", false)]
/// @brief Method EndLocomotion, addr 0xb4494d4, size 0xac, virtual false, abstract: false, final false
inline bool EndLocomotion() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider* New_ctor() ;

/// @brief Method OnAfterApplyTransformations, addr 0xb448ee4, size 0x78, virtual false, abstract: false, final false
inline void OnAfterApplyTransformations(::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*  args) ;

/// @brief Method OnBeforeApplyTransformations, addr 0xb448ebc, size 0x28, virtual false, abstract: false, final false
inline void OnBeforeApplyTransformations(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  transformer) ;

/// @brief Method OnLocomotionEnding, addr 0xb448aa4, size 0x4, virtual true, abstract: false, final false
inline void OnLocomotionEnding() ;

/// @brief Method OnLocomotionStarting, addr 0xb448aa0, size 0x4, virtual true, abstract: false, final false
inline void OnLocomotionStarting() ;

/// @brief Method OnLocomotionStateChanging, addr 0xb4478a8, size 0x1d4, virtual false, abstract: false, final false
inline void OnLocomotionStateChanging(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  oldState, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  state, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  transformer) ;

/// @brief Method OnLocomotionStateChanging, addr 0xb448aa8, size 0x4, virtual true, abstract: false, final false
inline void OnLocomotionStateChanging(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  state) ;

/// @brief Method Subscribe, addr 0xb448aac, size 0x14c, virtual false, abstract: false, final false
inline void Subscribe(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  transformer) ;

/// @brief Method TryEndLocomotion, addr 0xb448a18, size 0x88, virtual false, abstract: false, final false
inline bool TryEndLocomotion() ;

/// @brief Method TryPrepareLocomotion, addr 0xb448908, size 0x88, virtual false, abstract: false, final false
inline bool TryPrepareLocomotion() ;

/// @brief Method TryQueueTransformation, addr 0xb448d44, size 0x50, virtual false, abstract: false, final false
inline bool TryQueueTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*  bodyTransformation) ;

/// @brief Method TryQueueTransformation, addr 0xb448e60, size 0x5c, virtual false, abstract: false, final false
inline bool TryQueueTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*  bodyTransformation, int32_t  priority) ;

/// @brief Method TryStartLocomotionImmediately, addr 0xb448990, size 0x88, virtual false, abstract: false, final false
inline bool TryStartLocomotionImmediately() ;

/// @brief Method Unsubscribe, addr 0xb448bf8, size 0x14c, virtual false, abstract: false, final false
inline void Unsubscribe() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase const& __cordl_internal_get__locomotionPhase_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase& __cordl_internal_get__locomotionPhase_k__BackingField() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* const& __cordl_internal_get_afterStepLocomotion() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*& __cordl_internal_get_afterStepLocomotion() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* const& __cordl_internal_get_beforeStepLocomotion() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*& __cordl_internal_get_beforeStepLocomotion() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* const& __cordl_internal_get_beginLocomotion() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*& __cordl_internal_get_beginLocomotion() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* const& __cordl_internal_get_endLocomotion() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*& __cordl_internal_get_endLocomotion() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* const& __cordl_internal_get_locomotionEnded() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*& __cordl_internal_get_locomotionEnded() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* const& __cordl_internal_get_locomotionStarted() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*& __cordl_internal_get_locomotionStarted() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>* const& __cordl_internal_get_locomotionStateChanged() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*& __cordl_internal_get_locomotionStateChanged() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> const& __cordl_internal_get_m_ActiveBodyTransformer() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>& __cordl_internal_get_m_ActiveBodyTransformer() ;

constexpr bool const& __cordl_internal_get_m_AnyTransformationsQueued() const;

constexpr bool& __cordl_internal_get_m_AnyTransformationsQueued() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator> const& __cordl_internal_get_m_Mediator() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator>& __cordl_internal_get_m_Mediator() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> const& __cordl_internal_get_m_SubscribedTransformer() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>& __cordl_internal_get_m_SubscribedTransformer() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem> const& __cordl_internal_get_m_System() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>& __cordl_internal_get_m_System() ;

constexpr int32_t const& __cordl_internal_get_m_TransformationPriority() const;

constexpr int32_t& __cordl_internal_get_m_TransformationPriority() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* const& __cordl_internal_get_startLocomotion() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*& __cordl_internal_get_startLocomotion() ;

constexpr void __cordl_internal_set__locomotionPhase_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase  value) ;

constexpr void __cordl_internal_set_afterStepLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

constexpr void __cordl_internal_set_beforeStepLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

constexpr void __cordl_internal_set_beginLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value) ;

constexpr void __cordl_internal_set_endLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value) ;

constexpr void __cordl_internal_set_locomotionEnded(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

constexpr void __cordl_internal_set_locomotionStarted(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

constexpr void __cordl_internal_set_locomotionStateChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*  value) ;

constexpr void __cordl_internal_set_m_ActiveBodyTransformer(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  value) ;

constexpr void __cordl_internal_set_m_AnyTransformationsQueued(bool  value) ;

constexpr void __cordl_internal_set_m_Mediator(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator>  value) ;

constexpr void __cordl_internal_set_m_SubscribedTransformer(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  value) ;

constexpr void __cordl_internal_set_m_System(::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>  value) ;

constexpr void __cordl_internal_set_m_TransformationPriority(int32_t  value) ;

constexpr void __cordl_internal_set_startLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value) ;

/// @brief Method .ctor, addr 0xb449580, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_afterStepLocomotion, addr 0xb4481e0, size 0xb0, virtual false, abstract: false, final false
inline void add_afterStepLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_beforeStepLocomotion, addr 0xb448080, size 0xb0, virtual false, abstract: false, final false
inline void add_beforeStepLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_beginLocomotion, addr 0xb4490dc, size 0xb0, virtual false, abstract: false, final false
inline void add_beginLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_endLocomotion, addr 0xb44923c, size 0xb0, virtual false, abstract: false, final false
inline void add_endLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_locomotionEnded, addr 0xb447f20, size 0xb0, virtual false, abstract: false, final false
inline void add_locomotionEnded(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_locomotionProvidersChanged, addr 0xb448398, size 0xf4, virtual false, abstract: false, final false
static inline void add_locomotionProvidersChanged(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_locomotionStarted, addr 0xb447dc0, size 0xb0, virtual false, abstract: false, final false
inline void add_locomotionStarted(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_locomotionStateChanged, addr 0xb447c60, size 0xb0, virtual false, abstract: false, final false
inline void add_locomotionStateChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_startLocomotion, addr 0xb448f5c, size 0xb0, virtual false, abstract: false, final false
inline void add_startLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* getStaticF__locomotionProviders_k__BackingField() ;

static inline ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* getStaticF_locomotionProvidersChanged() ;

/// @brief Method get_canStartMoving, addr 0xb447c58, size 0x8, virtual true, abstract: false, final false
inline bool get_canStartMoving() ;

/// @brief Method get_isLocomotionActive, addr 0xb447c44, size 0x14, virtual false, abstract: false, final false
inline bool get_isLocomotionActive() ;

/// [CompilerGenerated]
/// @brief Method get_locomotionPhase, addr 0xb4490cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase get_locomotionPhase() ;

/// [CompilerGenerated]
/// @brief Method get_locomotionProviders, addr 0xb448340, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* get_locomotionProviders() ;

/// @brief Method get_locomotionState, addr 0xb447bbc, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState get_locomotionState() ;

/// @brief Method get_mediator, addr 0xb447b9c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator> get_mediator() ;

/// @brief Method get_system, addr 0xb4490bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem> get_system() ;

/// @brief Method get_transformationPriority, addr 0xb447bac, size 0x8, virtual false, abstract: false, final false
inline int32_t get_transformationPriority() ;

/// [CompilerGenerated]
/// @brief Method remove_afterStepLocomotion, addr 0xb448290, size 0xb0, virtual false, abstract: false, final false
inline void remove_afterStepLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_beforeStepLocomotion, addr 0xb448130, size 0xb0, virtual false, abstract: false, final false
inline void remove_beforeStepLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_beginLocomotion, addr 0xb44918c, size 0xb0, virtual false, abstract: false, final false
inline void remove_beginLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_endLocomotion, addr 0xb4492ec, size 0xb0, virtual false, abstract: false, final false
inline void remove_endLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_locomotionEnded, addr 0xb447fd0, size 0xb0, virtual false, abstract: false, final false
inline void remove_locomotionEnded(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_locomotionProvidersChanged, addr 0xb44848c, size 0xf4, virtual false, abstract: false, final false
static inline void remove_locomotionProvidersChanged(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_locomotionStarted, addr 0xb447e70, size 0xb0, virtual false, abstract: false, final false
inline void remove_locomotionStarted(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_locomotionStateChanged, addr 0xb447d10, size 0xb0, virtual false, abstract: false, final false
inline void remove_locomotionStateChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_startLocomotion, addr 0xb44900c, size 0xb0, virtual false, abstract: false, final false
inline void remove_startLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value) ;

static inline void setStaticF__locomotionProviders_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

static inline void setStaticF_locomotionProvidersChanged(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_locomotionPhase, addr 0xb4490d4, size 0x8, virtual false, abstract: false, final false
inline void set_locomotionPhase(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase  value) ;

/// @brief Method set_mediator, addr 0xb447ba4, size 0x8, virtual false, abstract: false, final false
inline void set_mediator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*  value) ;

/// @brief Method set_system, addr 0xb4490c4, size 0x8, virtual false, abstract: false, final false
inline void set_system(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*  value) ;

/// @brief Method set_transformationPriority, addr 0xb447bb4, size 0x8, virtual false, abstract: false, final false
inline void set_transformationPriority(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionProvider(LocomotionProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionProvider(LocomotionProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11334};

/// [SerializeField]
/// [Tooltip("The behavior that this provider communicates with for access to the mediator\'s XR Body Transformer. If one is not provided, this provider will attempt to locate one during its Awake call.")]
/// @brief Field m_Mediator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator>  ___m_Mediator;

/// [SerializeField]
/// [Tooltip("The queue order of this provider\'s transformations of the XR Origin. The lower the value, the earlier the transformations are applied.")]
/// @brief Field m_TransformationPriority, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_TransformationPriority;

/// [CompilerGenerated]
/// @brief Field locomotionStateChanged, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*  ___locomotionStateChanged;

/// [CompilerGenerated]
/// @brief Field locomotionStarted, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  ___locomotionStarted;

/// [CompilerGenerated]
/// @brief Field locomotionEnded, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  ___locomotionEnded;

/// [CompilerGenerated]
/// @brief Field beforeStepLocomotion, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  ___beforeStepLocomotion;

/// [CompilerGenerated]
/// @brief Field afterStepLocomotion, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  ___afterStepLocomotion;

/// @brief Field m_ActiveBodyTransformer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  ___m_ActiveBodyTransformer;

/// @brief Field m_SubscribedTransformer, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  ___m_SubscribedTransformer;

/// @brief Field m_AnyTransformationsQueued, offset: 0x68, size: 0x1, def value: None
 bool  ___m_AnyTransformationsQueued;

/// [CompilerGenerated]
/// @brief Field startLocomotion, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  ___startLocomotion;

/// [Tooltip("(Deprecated) The Locomotion System that this locomotion provider communicates with for exclusive access to an XR Origin. If one is not provided, the behavior will attempt to locate one during its Awake call.")]
/// [Obsolete("LocomotionSystem is deprecated in XRI 3.0.0 and will be removed in a future release. Use mediator instead.", false)]
/// @brief Field m_System, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>  ___m_System;

/// [CompilerGenerated]
/// @brief Field <locomotionPhase>k__BackingField, offset: 0x80, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase  ____locomotionPhase_k__BackingField;

/// [CompilerGenerated]
/// @brief Field beginLocomotion, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  ___beginLocomotion;

/// [CompilerGenerated]
/// @brief Field endLocomotion, offset: 0x90, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  ___endLocomotion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___m_Mediator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___m_TransformationPriority) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___locomotionStateChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___locomotionStarted) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___locomotionEnded) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___beforeStepLocomotion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___afterStepLocomotion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___m_ActiveBodyTransformer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___m_SubscribedTransformer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___m_AnyTransformationsQueued) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___startLocomotion) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___m_System) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ____locomotionPhase_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___beginLocomotion) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider, ___endLocomotion) == 0x90, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider) == 0x98, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
