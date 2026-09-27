#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/TeleportReticleDrawer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/DistanceReticles/zzzz__InteractorReticle_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TeleportReticleDrawer)
namespace Oculus::Interaction::DistanceReticles {
class ReticleDataTeleport;
}
namespace Oculus::Interaction::DistanceReticles {
class TeleportReticleDrawer__SelectionAnimation_d__58;
}
namespace Oculus::Interaction::Input {
class IAxis1D;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
class TeleportReticleDrawer;
}
namespace Oculus::Interaction::DistanceReticles {
class TeleportReticleDrawer__SelectionAnimation_d__58;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*);
MARK_REF_T(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer*, "Oculus.Interaction.DistanceReticles", "TeleportReticleDrawer");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58*, "Oculus.Interaction.DistanceReticles", "TeleportReticleDrawer/<SelectionAnimation>d__58");
// Dependencies Oculus.Interaction.DistanceReticles.InteractorReticle`1<TReticleData>, UnityEngine.Color
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.TeleportReticleDrawer
class CORDL_TYPE TeleportReticleDrawer : public ::Oculus::Interaction::DistanceReticles::InteractorReticle_1<::UnityW<::Oculus::Interaction::DistanceReticles::ReticleDataTeleport>> {
public:
// Declarations
using _SelectionAnimation_d__58 = ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58;

 __declspec(property(get=get_AcceptAnimation, put=set_AcceptAnimation)) ::UnityEngine::AnimationCurve*  AcceptAnimation;

 __declspec(property(get=get_AcceptColor, put=set_AcceptColor)) ::UnityEngine::Color  AcceptColor;

 __declspec(property(get=get_HighlightState, put=set_HighlightState)) ::Oculus::Interaction::IActiveState*  HighlightState;

 __declspec(property(get=get_InteractableComponent)) ::UnityW<::UnityEngine::Component>  InteractableComponent;

 __declspec(property(get=get_Interactor, put=set_Interactor)) ::Oculus::Interaction::IInteractorView*  Interactor;

 __declspec(property(get=get_ProgressState, put=set_ProgressState)) ::Oculus::Interaction::Input::IAxis1D*  ProgressState;

 __declspec(property(get=get_RejectAnimation, put=set_RejectAnimation)) ::UnityEngine::AnimationCurve*  RejectAnimation;

 __declspec(property(get=get_RejectColor, put=set_RejectColor)) ::UnityEngine::Color  RejectColor;

 __declspec(property(get=get_TransitionSpeed, put=set_TransitionSpeed)) float_t  TransitionSpeed;

/// @brief Field <HighlightState>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__HighlightState_k__BackingField, put=__cordl_internal_set__HighlightState_k__BackingField)) ::Oculus::Interaction::IActiveState*  _HighlightState_k__BackingField;

/// @brief Field <Interactor>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Interactor_k__BackingField, put=__cordl_internal_set__Interactor_k__BackingField)) ::Oculus::Interaction::IInteractorView*  _Interactor_k__BackingField;

/// @brief Field <ProgressState>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__ProgressState_k__BackingField, put=__cordl_internal_set__ProgressState_k__BackingField)) ::Oculus::Interaction::Input::IAxis1D*  _ProgressState_k__BackingField;

/// @brief Field _acceptAnimation, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__acceptAnimation, put=__cordl_internal_set__acceptAnimation)) ::UnityEngine::AnimationCurve*  _acceptAnimation;

/// @brief Field _acceptColor, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get__acceptColor, put=__cordl_internal_set__acceptColor)) ::UnityEngine::Color  _acceptColor;

/// @brief Field _acceptMode, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__acceptMode, put=__cordl_internal_set__acceptMode)) bool  _acceptMode;

/// @brief Field _animatedProgress, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__animatedProgress, put=__cordl_internal_set__animatedProgress)) float_t  _animatedProgress;

/// @brief Field _colorKey, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__colorKey, put=setStaticF__colorKey)) int32_t  _colorKey;

/// @brief Field _currentProgress, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentProgress, put=__cordl_internal_set__currentProgress)) float_t  _currentProgress;

/// @brief Field _highlightColorKey, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__highlightColorKey, put=setStaticF__highlightColorKey)) int32_t  _highlightColorKey;

/// @brief Field _highlightKey, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__highlightKey, put=setStaticF__highlightKey)) int32_t  _highlightKey;

/// @brief Field _highlightState, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__highlightState, put=__cordl_internal_set__highlightState)) ::UnityW<::UnityEngine::Object>  _highlightState;

/// @brief Field _interactor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactor, put=__cordl_internal_set__interactor)) ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  _interactor;

/// @brief Field _invalidTargetRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__invalidTargetRenderer, put=__cordl_internal_set__invalidTargetRenderer)) ::UnityW<::UnityEngine::Renderer>  _invalidTargetRenderer;

/// @brief Field _progressKey, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__progressKey, put=setStaticF__progressKey)) int32_t  _progressKey;

/// @brief Field _progressState, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressState, put=__cordl_internal_set__progressState)) ::UnityW<::UnityEngine::Object>  _progressState;

/// @brief Field _rejectAnimation, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__rejectAnimation, put=__cordl_internal_set__rejectAnimation)) ::UnityEngine::AnimationCurve*  _rejectAnimation;

/// @brief Field _rejectColor, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get__rejectColor, put=__cordl_internal_set__rejectColor)) ::UnityEngine::Color  _rejectColor;

/// @brief Field _selectionAnimation, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get__selectionAnimation, put=__cordl_internal_set__selectionAnimation)) bool  _selectionAnimation;

/// @brief Field _targetRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetRenderer, put=__cordl_internal_set__targetRenderer)) ::UnityW<::UnityEngine::Renderer>  _targetRenderer;

/// @brief Field _transitionSpeed, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__transitionSpeed, put=__cordl_internal_set__transitionSpeed)) float_t  _transitionSpeed;

/// @brief Method Align, addr 0xa4f2e74, size 0x2a4, virtual true, abstract: false, final false
inline void Align(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport*  data) ;

/// @brief Method Awake, addr 0xa4f2aa8, size 0xa4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Draw, addr 0xa4f31b0, size 0x94, virtual true, abstract: false, final false
inline void Draw(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport*  data) ;

/// @brief Method HandleStateChanged, addr 0xa4f33f0, size 0x48, virtual false, abstract: false, final false
inline void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  obj) ;

/// @brief Method Hide, addr 0xa4f3330, size 0xc0, virtual true, abstract: false, final false
inline void Hide() ;

/// @brief Method InjectAllTeleportReticleDrawer, addr 0xa4f34cc, size 0x30, virtual false, abstract: false, final false
inline void InjectAllTeleportReticleDrawer(::Oculus::Interaction::Locomotion::TeleportInteractor*  interactor, ::UnityEngine::Renderer*  targetRenderer) ;

/// @brief Method InjectInteractor, addr 0xa4f34fc, size 0x8, virtual false, abstract: false, final false
inline void InjectInteractor(::Oculus::Interaction::Locomotion::TeleportInteractor*  interactor) ;

/// @brief Method InjectOptionalHighlightState, addr 0xa4f35ec, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalHighlightState(::Oculus::Interaction::IActiveState*  highlightState) ;

/// [Obsolete("Not in use")]
/// @brief Method InjectOptionalInalidTargetRenderer, addr 0xa4f3514, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalInalidTargetRenderer(::UnityEngine::Renderer*  invalidTargetRenderer) ;

/// @brief Method InjectOptionalProgress, addr 0xa4f351c, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalProgress(::Oculus::Interaction::Input::IAxis1D*  progressState) ;

/// [Obsolete("Use InjectTargetRenderer instead")]
/// @brief Method InjectOptionalValidTargetRenderer, addr 0xa4f350c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalValidTargetRenderer(::UnityEngine::Renderer*  validTargetRenderer) ;

/// @brief Method InjectTargetRenderer, addr 0xa4f3504, size 0x8, virtual false, abstract: false, final false
inline void InjectTargetRenderer(::UnityEngine::Renderer*  targetRenderer) ;

static inline ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4f2db0, size 0xc4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4f2be4, size 0xf0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// [IteratorStateMachine(typeof(Oculus.Interaction.DistanceReticles.TeleportReticleDrawer::<SelectionAnimation>d__58))]
/// @brief Method SelectionAnimation, addr 0xa4f3438, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SelectionAnimation() ;

/// @brief Method SetReticleColor, addr 0xa4f3244, size 0xec, virtual false, abstract: false, final false
inline void SetReticleColor(::UnityEngine::Color  color) ;

/// @brief Method SetReticleHighlight, addr 0xa4f3118, size 0x98, virtual false, abstract: false, final false
inline void SetReticleHighlight(bool  highlight) ;

/// @brief Method SetReticleProgress, addr 0xa4f2cd4, size 0xdc, virtual false, abstract: false, final false
inline void SetReticleProgress(float_t  progress) ;

/// @brief Method Start, addr 0xa4f2b4c, size 0x98, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__48_0, addr 0xa4f3880, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__48_0() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get__HighlightState_k__BackingField() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get__HighlightState_k__BackingField() ;

constexpr ::Oculus::Interaction::IInteractorView* const& __cordl_internal_get__Interactor_k__BackingField() const;

constexpr ::Oculus::Interaction::IInteractorView*& __cordl_internal_get__Interactor_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IAxis1D* const& __cordl_internal_get__ProgressState_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IAxis1D*& __cordl_internal_get__ProgressState_k__BackingField() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__acceptAnimation() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__acceptAnimation() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__acceptColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__acceptColor() ;

constexpr bool const& __cordl_internal_get__acceptMode() const;

constexpr bool& __cordl_internal_get__acceptMode() ;

constexpr float_t const& __cordl_internal_get__animatedProgress() const;

constexpr float_t& __cordl_internal_get__animatedProgress() ;

constexpr float_t const& __cordl_internal_get__currentProgress() const;

constexpr float_t& __cordl_internal_get__currentProgress() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__highlightState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__highlightState() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor> const& __cordl_internal_get__interactor() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>& __cordl_internal_get__interactor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__invalidTargetRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__invalidTargetRenderer() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__progressState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__progressState() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__rejectAnimation() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__rejectAnimation() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__rejectColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__rejectColor() ;

constexpr bool const& __cordl_internal_get__selectionAnimation() const;

constexpr bool& __cordl_internal_get__selectionAnimation() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__targetRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__targetRenderer() ;

constexpr float_t const& __cordl_internal_get__transitionSpeed() const;

constexpr float_t& __cordl_internal_get__transitionSpeed() ;

constexpr void __cordl_internal_set__HighlightState_k__BackingField(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set__Interactor_k__BackingField(::Oculus::Interaction::IInteractorView*  value) ;

constexpr void __cordl_internal_set__ProgressState_k__BackingField(::Oculus::Interaction::Input::IAxis1D*  value) ;

constexpr void __cordl_internal_set__acceptAnimation(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__acceptColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__acceptMode(bool  value) ;

constexpr void __cordl_internal_set__animatedProgress(float_t  value) ;

constexpr void __cordl_internal_set__currentProgress(float_t  value) ;

constexpr void __cordl_internal_set__highlightState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__interactor(::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  value) ;

constexpr void __cordl_internal_set__invalidTargetRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__progressState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__rejectAnimation(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__rejectColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__selectionAnimation(bool  value) ;

constexpr void __cordl_internal_set__targetRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__transitionSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0xa4f36bc, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__colorKey() ;

static inline int32_t getStaticF__highlightColorKey() ;

static inline int32_t getStaticF__highlightKey() ;

static inline int32_t getStaticF__progressKey() ;

/// @brief Method get_AcceptAnimation, addr 0xa4f2a20, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_AcceptAnimation() ;

/// @brief Method get_AcceptColor, addr 0xa4f29f0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_AcceptColor() ;

/// [CompilerGenerated]
/// @brief Method get_HighlightState, addr 0xa4f29e0, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IActiveState* get_HighlightState() ;

/// @brief Method get_InteractableComponent, addr 0xa4f2a60, size 0x48, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> get_InteractableComponent() ;

/// [CompilerGenerated]
/// @brief Method get_Interactor, addr 0xa4f2a50, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Interaction::IInteractorView* get_Interactor() ;

/// [CompilerGenerated]
/// @brief Method get_ProgressState, addr 0xa4f29d0, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IAxis1D* get_ProgressState() ;

/// @brief Method get_RejectAnimation, addr 0xa4f2a30, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_RejectAnimation() ;

/// @brief Method get_RejectColor, addr 0xa4f2a08, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_RejectColor() ;

/// @brief Method get_TransitionSpeed, addr 0xa4f2a40, size 0x8, virtual false, abstract: false, final false
inline float_t get_TransitionSpeed() ;

static inline void setStaticF__colorKey(int32_t  value) ;

static inline void setStaticF__highlightColorKey(int32_t  value) ;

static inline void setStaticF__highlightKey(int32_t  value) ;

static inline void setStaticF__progressKey(int32_t  value) ;

/// @brief Method set_AcceptAnimation, addr 0xa4f2a28, size 0x8, virtual false, abstract: false, final false
inline void set_AcceptAnimation(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_AcceptColor, addr 0xa4f29fc, size 0xc, virtual false, abstract: false, final false
inline void set_AcceptColor(::UnityEngine::Color  value) ;

/// [CompilerGenerated]
/// @brief Method set_HighlightState, addr 0xa4f29e8, size 0x8, virtual false, abstract: false, final false
inline void set_HighlightState(::Oculus::Interaction::IActiveState*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Interactor, addr 0xa4f2a58, size 0x8, virtual true, abstract: false, final false
inline void set_Interactor(::Oculus::Interaction::IInteractorView*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ProgressState, addr 0xa4f29d8, size 0x8, virtual false, abstract: false, final false
inline void set_ProgressState(::Oculus::Interaction::Input::IAxis1D*  value) ;

/// @brief Method set_RejectAnimation, addr 0xa4f2a38, size 0x8, virtual false, abstract: false, final false
inline void set_RejectAnimation(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_RejectColor, addr 0xa4f2a14, size 0xc, virtual false, abstract: false, final false
inline void set_RejectColor(::UnityEngine::Color  value) ;

/// @brief Method set_TransitionSpeed, addr 0xa4f2a48, size 0x8, virtual false, abstract: false, final false
inline void set_TransitionSpeed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportReticleDrawer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportReticleDrawer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportReticleDrawer(TeleportReticleDrawer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportReticleDrawer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportReticleDrawer(TeleportReticleDrawer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16380};

/// [SerializeField]
/// @brief Field _interactor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  ____interactor;

/// [SerializeField]
/// [FormerlySerializedAs("_validTargetRenderer")]
/// @brief Field _targetRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____targetRenderer;

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)4)]
/// [Obsolete("This renderer is not in use")]
/// @brief Field _invalidTargetRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____invalidTargetRenderer;

/// [SerializeField]
/// [Optional]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis1D), new[] {  })]
/// [FormerlySerializedAs("_progress")]
/// @brief Field _progressState, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____progressState;

/// [CompilerGenerated]
/// @brief Field <ProgressState>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis1D*  ____ProgressState_k__BackingField;

/// [SerializeField]
/// [Optional]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _highlightState, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____highlightState;

/// [CompilerGenerated]
/// @brief Field <HighlightState>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ____HighlightState_k__BackingField;

/// [SerializeField]
/// @brief Field _acceptColor, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ____acceptColor;

/// [SerializeField]
/// @brief Field _rejectColor, offset: 0x80, size: 0x10, def value: None
 ::UnityEngine::Color  ____rejectColor;

/// [SerializeField]
/// @brief Field _acceptAnimation, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____acceptAnimation;

/// [SerializeField]
/// @brief Field _rejectAnimation, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____rejectAnimation;

/// [SerializeField]
/// @brief Field _transitionSpeed, offset: 0xa0, size: 0x4, def value: None
 float_t  ____transitionSpeed;

/// @brief Field _selectionAnimation, offset: 0xa4, size: 0x1, def value: None
 bool  ____selectionAnimation;

/// @brief Field _animatedProgress, offset: 0xa8, size: 0x4, def value: None
 float_t  ____animatedProgress;

/// @brief Field _currentProgress, offset: 0xac, size: 0x4, def value: None
 float_t  ____currentProgress;

/// @brief Field _acceptMode, offset: 0xb0, size: 0x1, def value: None
 bool  ____acceptMode;

/// [CompilerGenerated]
/// @brief Field <Interactor>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractorView*  ____Interactor_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____interactor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____targetRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____invalidTargetRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____progressState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____ProgressState_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____highlightState) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____HighlightState_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____acceptColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____rejectColor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____acceptAnimation) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____rejectAnimation) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____transitionSpeed) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____selectionAnimation) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____animatedProgress) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____currentProgress) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____acceptMode) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer, ____Interactor_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer) == 0xc0, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.TeleportReticleDrawer/<SelectionAnimation>d__58
class CORDL_TYPE TeleportReticleDrawer__SelectionAnimation_d__58 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer>  __4__this;

/// @brief Field <targetProgress>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetProgress_5__2, put=__cordl_internal_set__targetProgress_5__2)) float_t  _targetProgress_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa4f38cc, size 0x154, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa4f3a20, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa4f3a28, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa4f3a60, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa4f38c8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__targetProgress_5__2() const;

constexpr float_t& __cordl_internal_get__targetProgress_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer>  value) ;

constexpr void __cordl_internal_set__targetProgress_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa4f34a4, size 0x28, virtual false, abstract: false, final false
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
constexpr TeleportReticleDrawer__SelectionAnimation_d__58() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportReticleDrawer__SelectionAnimation_d__58", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportReticleDrawer__SelectionAnimation_d__58(TeleportReticleDrawer__SelectionAnimation_d__58 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportReticleDrawer__SelectionAnimation_d__58", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportReticleDrawer__SelectionAnimation_d__58(TeleportReticleDrawer__SelectionAnimation_d__58 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16379};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer>  _____4__this;

/// @brief Field <targetProgress>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____targetProgress_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58, ____targetProgress_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::TeleportReticleDrawer__SelectionAnimation_d__58) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
