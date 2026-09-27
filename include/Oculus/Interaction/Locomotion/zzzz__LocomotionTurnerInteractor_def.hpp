#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionTurnerInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__Interactor_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocomotionTurnerInteractor)
namespace Oculus::Interaction::Input {
class IAxis1D;
}
namespace Oculus::Interaction::Input {
class ITrackingToWorldTransformer;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionTurnerInteractable;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionTurnerInteractor___c;
}
namespace Oculus::Interaction {
class ISelector;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionTurnerInteractor;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionTurnerInteractor___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*);
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*, "Oculus.Interaction.Locomotion", "LocomotionTurnerInteractor");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*, "Oculus.Interaction.Locomotion", "LocomotionTurnerInteractor/<>c");
// Dependencies Oculus.Interaction.Interactor`2<TInteractor, TInteractable>, UnityEngine.Pose
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionTurnerInteractor
class CORDL_TYPE LocomotionTurnerInteractor : public ::Oculus::Interaction::Interactor_2<::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor>,::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractable>> {
public:
// Declarations
using __c = ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c;

 __declspec(property(get=get_DragThresold, put=set_DragThresold)) float_t  DragThresold;

 __declspec(property(get=get_MidPoint)) ::UnityEngine::Pose  MidPoint;

 __declspec(property(get=get_Origin)) ::UnityEngine::Pose  Origin;

 __declspec(property(get=get_ShouldHover)) bool  ShouldHover;

 __declspec(property(get=get_ShouldUnhover)) bool  ShouldUnhover;

/// @brief Field Transformer, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_Transformer, put=__cordl_internal_set_Transformer)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  Transformer;

/// @brief Field _axisValue, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get__axisValue, put=__cordl_internal_set__axisValue)) float_t  _axisValue;

/// @brief Field _dragThresold, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get__dragThresold, put=__cordl_internal_set__dragThresold)) float_t  _dragThresold;

/// @brief Field _midPoint, offset 0x144, size 0x1c 
 __declspec(property(get=__cordl_internal_get__midPoint, put=__cordl_internal_set__midPoint)) ::UnityEngine::Pose  _midPoint;

/// @brief Field _origin, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__origin, put=__cordl_internal_set__origin)) ::UnityW<::UnityEngine::Transform>  _origin;

/// @brief Field _selector, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__selector, put=__cordl_internal_set__selector)) ::UnityW<::UnityEngine::Object>  _selector;

/// @brief Field _stabilizationPoint, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__stabilizationPoint, put=__cordl_internal_set__stabilizationPoint)) ::UnityW<::UnityEngine::Transform>  _stabilizationPoint;

/// @brief Field _transformer, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformer, put=__cordl_internal_set__transformer)) ::UnityW<::UnityEngine::Object>  _transformer;

/// @brief Field _whenTurnDirectionChanged, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenTurnDirectionChanged, put=__cordl_internal_set__whenTurnDirectionChanged)) ::System::Action_1<float_t>*  _whenTurnDirectionChanged;

/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr operator  ::Oculus::Interaction::Input::IAxis1D*() noexcept;

/// @brief Method Awake, addr 0xa4d2f14, size 0xdc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeCandidate, addr 0xa4d3f04, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractable> ComputeCandidate() ;

/// @brief Method DoHoverUpdate, addr 0xa4d3438, size 0x50, virtual true, abstract: false, final false
inline void DoHoverUpdate() ;

/// @brief Method DoSelectUpdate, addr 0xa4d3528, size 0x50, virtual true, abstract: false, final false
inline void DoSelectUpdate() ;

/// @brief Method DragMidPoint, addr 0xa4d3854, size 0x400, virtual false, abstract: false, final false
inline void DragMidPoint(::UnityEngine::Pose  worldMidPoint) ;

/// @brief Method HandleEnabled, addr 0xa4d3088, size 0x84, virtual true, abstract: false, final false
inline void HandleEnabled() ;

/// @brief Method InitializeMidPoint, addr 0xa4d310c, size 0x32c, virtual false, abstract: false, final false
inline void InitializeMidPoint(::UnityEngine::Pose  pointer) ;

/// @brief Method InjectAllLocomotionTurnerInteractor, addr 0xa4d3f0c, size 0x5c, virtual false, abstract: false, final false
inline void InjectAllLocomotionTurnerInteractor(::UnityEngine::Transform*  origin, ::Oculus::Interaction::ISelector*  selector, ::UnityEngine::Transform*  stabilizationPoint, ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  transformer) ;

/// @brief Method InjectOrigin, addr 0xa4d411c, size 0x10, virtual false, abstract: false, final false
inline void InjectOrigin(::UnityEngine::Transform*  origin) ;

/// @brief Method InjectSelector, addr 0xa4d3f68, size 0xe4, virtual false, abstract: false, final false
inline void InjectSelector(::Oculus::Interaction::ISelector*  selector) ;

/// @brief Method InjectStabilizationPoint, addr 0xa4d412c, size 0x10, virtual false, abstract: false, final false
inline void InjectStabilizationPoint(::UnityEngine::Transform*  stabilizationPoint) ;

/// @brief Method InjectTransformer, addr 0xa4d404c, size 0xd0, virtual false, abstract: false, final false
inline void InjectTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  transformer) ;

static inline ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor* New_ctor() ;

/// @brief Method Start, addr 0xa4d2ff0, size 0x98, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateAxisValue, addr 0xa4d3c54, size 0x25c, virtual false, abstract: false, final false
inline void UpdateAxisValue(::UnityEngine::Pose  pointer, ::UnityEngine::Pose  origin) ;

/// @brief Method UpdateMidPoint, addr 0xa4d3578, size 0x2dc, virtual false, abstract: false, final false
inline void UpdateMidPoint(::UnityEngine::Pose  pointer, ::UnityEngine::Pose  midPoint) ;

/// @brief Method UpdatePointers, addr 0xa4d3488, size 0xa0, virtual false, abstract: false, final false
inline void UpdatePointers() ;

/// @brief Method Value, addr 0xa4d3eb0, size 0x54, virtual true, abstract: false, final true
inline float_t Value() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__24_0, addr 0xa4d429c, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__24_0() ;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& __cordl_internal_get_Transformer() const;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& __cordl_internal_get_Transformer() ;

constexpr float_t const& __cordl_internal_get__axisValue() const;

constexpr float_t& __cordl_internal_get__axisValue() ;

constexpr float_t const& __cordl_internal_get__dragThresold() const;

constexpr float_t& __cordl_internal_get__dragThresold() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__midPoint() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__midPoint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__origin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__origin() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__selector() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__selector() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__stabilizationPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__stabilizationPoint() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__transformer() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__transformer() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get__whenTurnDirectionChanged() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get__whenTurnDirectionChanged() ;

constexpr void __cordl_internal_set_Transformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

constexpr void __cordl_internal_set__axisValue(float_t  value) ;

constexpr void __cordl_internal_set__dragThresold(float_t  value) ;

constexpr void __cordl_internal_set__midPoint(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__origin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__selector(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__stabilizationPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__transformer(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__whenTurnDirectionChanged(::System::Action_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa4d413c, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenTurnDirectionChanged, addr 0xa4d2d78, size 0xa8, virtual false, abstract: false, final false
inline void add_WhenTurnDirectionChanged(::System::Action_1<float_t>*  value) ;

/// @brief Method get_DragThresold, addr 0xa4d2c38, size 0x8, virtual false, abstract: false, final false
inline float_t get_DragThresold() ;

/// @brief Method get_MidPoint, addr 0xa4d2c48, size 0xf4, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_MidPoint() ;

/// @brief Method get_Origin, addr 0xa4d2d3c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_Origin() ;

/// @brief Method get_ShouldHover, addr 0xa4d2ec8, size 0x44, virtual true, abstract: false, final false
inline bool get_ShouldHover() ;

/// @brief Method get_ShouldUnhover, addr 0xa4d2f0c, size 0x8, virtual true, abstract: false, final false
inline bool get_ShouldUnhover() ;

/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* i___Oculus__Interaction__Input__IAxis1D() noexcept;

/// @brief Method remove_WhenTurnDirectionChanged, addr 0xa4d2e20, size 0xa8, virtual false, abstract: false, final false
inline void remove_WhenTurnDirectionChanged(::System::Action_1<float_t>*  value) ;

/// @brief Method set_DragThresold, addr 0xa4d2c40, size 0x8, virtual false, abstract: false, final false
inline void set_DragThresold(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionTurnerInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTurnerInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionTurnerInteractor(LocomotionTurnerInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTurnerInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionTurnerInteractor(LocomotionTurnerInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16298};

/// [SerializeField]
/// [Tooltip("Point in space used to drive the axis.")]
/// @brief Field _origin, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____origin;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.ISelector), new[] {  })]
/// [Tooltip("Selector for the interactor.")]
/// @brief Field _selector, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____selector;

/// [SerializeField]
/// [Tooltip("Point used to stabilize the rotation of the point")]
/// @brief Field _stabilizationPoint, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____stabilizationPoint;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.ITrackingToWorldTransformer), new[] {  })]
/// [Tooltip("Transformer is required so calculations can be done in Tracking space")]
/// @brief Field _transformer, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____transformer;

/// @brief Field Transformer, offset: 0x138, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  ___Transformer;

/// [SerializeField]
/// [Tooltip("Offset from the center point at which the pointer will be dragged")]
/// @brief Field _dragThresold, offset: 0x140, size: 0x4, def value: None
 float_t  ____dragThresold;

/// @brief Field _midPoint, offset: 0x144, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____midPoint;

/// @brief Field _axisValue, offset: 0x160, size: 0x4, def value: None
 float_t  ____axisValue;

/// @brief Field _whenTurnDirectionChanged, offset: 0x168, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ____whenTurnDirectionChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor, ____origin) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor, ____selector) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor, ____stabilizationPoint) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor, ____transformer) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor, ___Transformer) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor, ____dragThresold) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor, ____midPoint) == 0x144, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor, ____axisValue) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor, ____whenTurnDirectionChanged) == 0x168, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor) == 0x170, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c
class CORDL_TYPE LocomotionTurnerInteractor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*  __9;

/// @brief Field <>9__40_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__40_0, put=setStaticF___9__40_0)) ::System::Action_1<float_t>*  __9__40_0;

static inline ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c* New_ctor() ;

/// @brief Method <.ctor>b__40_0, addr 0xa4d4354, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__40_0(float_t  _p0_) ;

/// @brief Method .ctor, addr 0xa4d434c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c* getStaticF___9() ;

static inline ::System::Action_1<float_t>* getStaticF___9__40_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*  value) ;

static inline void setStaticF___9__40_0(::System::Action_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionTurnerInteractor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTurnerInteractor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionTurnerInteractor___c(LocomotionTurnerInteractor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTurnerInteractor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionTurnerInteractor___c(LocomotionTurnerInteractor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16297};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
