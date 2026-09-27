#pragma once
// IWYU pragma private; include "Oculus/Interaction/SnapInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__Interactor_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SnapInteractor)
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
class IPointableElement;
}
namespace Oculus::Interaction {
class IRigidbodyRef;
}
namespace Oculus::Interaction {
class PointableElement;
}
namespace Oculus::Interaction {
struct PointerEventType;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace Oculus::Interaction {
class SnapInteractable;
}
namespace Oculus::Interaction {
class SnapInteractor___c;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class SnapInteractor;
}
namespace Oculus::Interaction {
class SnapInteractor___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::SnapInteractor*);
MARK_REF_T(::Oculus::Interaction::SnapInteractor___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SnapInteractor*, "Oculus.Interaction", "SnapInteractor");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SnapInteractor___c*, "Oculus.Interaction", "SnapInteractor/<>c");
// Dependencies Oculus.Interaction.Interactor`2<TInteractor, TInteractable>
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SnapInteractor
class CORDL_TYPE SnapInteractor : public ::Oculus::Interaction::Interactor_2<::UnityW<::Oculus::Interaction::SnapInteractor>,::UnityW<::Oculus::Interaction::SnapInteractable>> {
public:
// Declarations
using __c = ::Oculus::Interaction::SnapInteractor___c;

 __declspec(property(get=get_DistanceThreshold, put=set_DistanceThreshold)) float_t  DistanceThreshold;

 __declspec(property(get=get_PointableElement)) ::Oculus::Interaction::IPointableElement*  PointableElement;

 __declspec(property(get=get_Rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  Rigidbody;

 __declspec(property(get=get_SnapPose)) ::UnityEngine::Pose  SnapPose;

/// @brief Field _defaultInteractable, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultInteractable, put=__cordl_internal_set__defaultInteractable)) ::UnityW<::Oculus::Interaction::SnapInteractable>  _defaultInteractable;

/// @brief Field _distanceThreshold, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__distanceThreshold, put=__cordl_internal_set__distanceThreshold)) float_t  _distanceThreshold;

/// @brief Field _idleStarted, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get__idleStarted, put=__cordl_internal_set__idleStarted)) float_t  _idleStarted;

/// @brief Field _movement, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__movement, put=__cordl_internal_set__movement)) ::Oculus::Interaction::IMovement*  _movement;

/// @brief Field _pointableElement, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointableElement, put=__cordl_internal_set__pointableElement)) ::UnityW<::Oculus::Interaction::PointableElement>  _pointableElement;

/// @brief Field _rigidbody, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _shouldSelect, offset 0x158, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldSelect, put=__cordl_internal_set__shouldSelect)) bool  _shouldSelect;

/// @brief Field _shouldUnselect, offset 0x159, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldUnselect, put=__cordl_internal_set__shouldUnselect)) bool  _shouldUnselect;

/// @brief Field _snapPoseTransform, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapPoseTransform, put=__cordl_internal_set__snapPoseTransform)) ::UnityW<::UnityEngine::Transform>  _snapPoseTransform;

/// @brief Field _timeOut, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeOut, put=__cordl_internal_set__timeOut)) float_t  _timeOut;

/// @brief Field _timeOutInteractable, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeOutInteractable, put=__cordl_internal_set__timeOutInteractable)) ::UnityW<::Oculus::Interaction::SnapInteractable>  _timeOutInteractable;

/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr operator  ::Oculus::Interaction::IRigidbodyRef*() noexcept;

/// @brief Method Awake, addr 0xa4629f8, size 0x60, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeCandidate, addr 0xa463b40, size 0x3d4, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::SnapInteractable> ComputeCandidate() ;

/// @brief Method ComputePointerPose, addr 0xa4638b0, size 0xd8, virtual false, abstract: false, final false
inline ::UnityEngine::Pose ComputePointerPose() ;

/// @brief Method ComputeShouldSelect, addr 0xa462f54, size 0x8, virtual true, abstract: false, final false
inline bool ComputeShouldSelect() ;

/// @brief Method ComputeShouldUnselect, addr 0xa462f5c, size 0x8, virtual true, abstract: false, final false
inline bool ComputeShouldUnselect() ;

/// @brief Method DoHoverUpdate, addr 0xa462f64, size 0xcc, virtual true, abstract: false, final false
inline void DoHoverUpdate() ;

/// @brief Method DoPreprocess, addr 0xa463a2c, size 0x70, virtual true, abstract: false, final false
inline void DoPreprocess() ;

/// @brief Method DoSelectUpdate, addr 0xa46310c, size 0x1e8, virtual true, abstract: false, final false
inline void DoSelectUpdate() ;

/// @brief Method GeneratePointerEvent, addr 0xa463030, size 0xdc, virtual false, abstract: false, final false
inline void GeneratePointerEvent(::Oculus::Interaction::PointerEventType  pointerEventType) ;

/// @brief Method HandlePointerEventRaised, addr 0xa4636fc, size 0x16c, virtual true, abstract: false, final false
inline void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method InjectAllSnapInteractor, addr 0xa463f14, size 0x34, virtual false, abstract: false, final false
inline void InjectAllSnapInteractor(::Oculus::Interaction::PointableElement*  pointableElement, ::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method InjectOptionaTimeOut, addr 0xa463f88, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionaTimeOut(float_t  timeOut) ;

/// @brief Method InjectOptionalSnapPoseTransform, addr 0xa463f68, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalSnapPoseTransform(::UnityEngine::Transform*  snapPoint) ;

/// @brief Method InjectOptionalTimeOutInteractable, addr 0xa463f78, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalTimeOutInteractable(::Oculus::Interaction::SnapInteractable*  interactable) ;

/// @brief Method InjectPointableElement, addr 0xa463f48, size 0x10, virtual false, abstract: false, final false
inline void InjectPointableElement(::Oculus::Interaction::PointableElement*  pointableElement) ;

/// @brief Method InjectRigidbody, addr 0xa463f58, size 0x10, virtual false, abstract: false, final false
inline void InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method InteractableSelected, addr 0xa46343c, size 0x10c, virtual true, abstract: false, final false
inline void InteractableSelected(::Oculus::Interaction::SnapInteractable*  interactable) ;

/// @brief Method InteractableSet, addr 0xa4632f4, size 0xac, virtual true, abstract: false, final false
inline void InteractableSet(::Oculus::Interaction::SnapInteractable*  interactable) ;

/// @brief Method InteractableUnselected, addr 0xa463548, size 0x1b4, virtual true, abstract: false, final false
inline void InteractableUnselected(::Oculus::Interaction::SnapInteractable*  interactable) ;

/// @brief Method InteractableUnset, addr 0xa4633a0, size 0x9c, virtual true, abstract: false, final false
inline void InteractableUnset(::Oculus::Interaction::SnapInteractable*  interactable) ;

static inline ::Oculus::Interaction::SnapInteractor* New_ctor() ;

/// @brief Method OnDisable, addr 0xa462e08, size 0x9c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa462b48, size 0x210, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Reset, addr 0xa462958, size 0x90, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xa462a58, size 0xf0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TimedOut, addr 0xa463a9c, size 0xa4, virtual false, abstract: false, final false
inline bool TimedOut() ;

/// [CompilerGenerated]
/// @brief Method <OnEnable>b__21_0, addr 0xa464034, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::SnapInteractable> _OnEnable_b__21_0() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__20_0, addr 0xa463fec, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__20_0() ;

constexpr ::UnityW<::Oculus::Interaction::SnapInteractable> const& __cordl_internal_get__defaultInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::SnapInteractable>& __cordl_internal_get__defaultInteractable() ;

constexpr float_t const& __cordl_internal_get__distanceThreshold() const;

constexpr float_t& __cordl_internal_get__distanceThreshold() ;

constexpr float_t const& __cordl_internal_get__idleStarted() const;

constexpr float_t& __cordl_internal_get__idleStarted() ;

constexpr ::Oculus::Interaction::IMovement* const& __cordl_internal_get__movement() const;

constexpr ::Oculus::Interaction::IMovement*& __cordl_internal_get__movement() ;

constexpr ::UnityW<::Oculus::Interaction::PointableElement> const& __cordl_internal_get__pointableElement() const;

constexpr ::UnityW<::Oculus::Interaction::PointableElement>& __cordl_internal_get__pointableElement() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr bool const& __cordl_internal_get__shouldSelect() const;

constexpr bool& __cordl_internal_get__shouldSelect() ;

constexpr bool const& __cordl_internal_get__shouldUnselect() const;

constexpr bool& __cordl_internal_get__shouldUnselect() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__snapPoseTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__snapPoseTransform() ;

constexpr float_t const& __cordl_internal_get__timeOut() const;

constexpr float_t& __cordl_internal_get__timeOut() ;

constexpr ::UnityW<::Oculus::Interaction::SnapInteractable> const& __cordl_internal_get__timeOutInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::SnapInteractable>& __cordl_internal_get__timeOutInteractable() ;

constexpr void __cordl_internal_set__defaultInteractable(::UnityW<::Oculus::Interaction::SnapInteractable>  value) ;

constexpr void __cordl_internal_set__distanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set__idleStarted(float_t  value) ;

constexpr void __cordl_internal_set__movement(::Oculus::Interaction::IMovement*  value) ;

constexpr void __cordl_internal_set__pointableElement(::UnityW<::Oculus::Interaction::PointableElement>  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__shouldSelect(bool  value) ;

constexpr void __cordl_internal_set__shouldUnselect(bool  value) ;

constexpr void __cordl_internal_set__snapPoseTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__timeOut(float_t  value) ;

constexpr void __cordl_internal_set__timeOutInteractable(::UnityW<::Oculus::Interaction::SnapInteractable>  value) ;

/// @brief Method .ctor, addr 0xa463f90, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DistanceThreshold, addr 0xa4629e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_DistanceThreshold() ;

/// @brief Method get_PointableElement, addr 0xa462948, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IPointableElement* get_PointableElement() ;

/// @brief Method get_Rigidbody, addr 0xa462950, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Rigidbody> get_Rigidbody() ;

/// @brief Method get_SnapPose, addr 0xa461eac, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_SnapPose() ;

/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* i___Oculus__Interaction__IRigidbodyRef() noexcept;

/// @brief Method set_DistanceThreshold, addr 0xa4629f0, size 0x8, virtual false, abstract: false, final false
inline void set_DistanceThreshold(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapInteractor(SnapInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapInteractor(SnapInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15882};

/// [Tooltip("The object\'s Grabbable component.")]
/// [SerializeField]
/// @brief Field _pointableElement, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PointableElement>  ____pointableElement;

/// [Tooltip("The object\'s RigidBody component.")]
/// [SerializeField]
/// @brief Field _rigidbody, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [Tooltip("Used to determine which object should snap to your hand when there are multiple to choose from. Objects with a lower threshold have a higher priority.")]
/// [SerializeField]
/// @brief Field _distanceThreshold, offset: 0x128, size: 0x4, def value: None
 float_t  ____distanceThreshold;

/// [SerializeField]
/// [Optional]
/// [FormerlySerializedAs("_snapPoint")]
/// [FormerlySerializedAs("_dropPoint")]
/// @brief Field _snapPoseTransform, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____snapPoseTransform;

/// [Tooltip("The default Interactable to snap to until you interact with the object.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _defaultInteractable, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::SnapInteractable>  ____defaultInteractable;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Interactable to automatically snap to when the associated Pointable is not being pointed at for Time-Out seconds")]
/// @brief Field _timeOutInteractable, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::SnapInteractable>  ____timeOutInteractable;

/// [SerializeField]
/// [Optional]
/// [Tooltip("When the associated Pointable is not being pointed at for Time-Out seconds the SnapInteractor will snap to the TimeOutInteractable, unless it is null.")]
/// @brief Field _timeOut, offset: 0x148, size: 0x4, def value: None
 float_t  ____timeOut;

/// @brief Field _idleStarted, offset: 0x14c, size: 0x4, def value: None
 float_t  ____idleStarted;

/// @brief Field _movement, offset: 0x150, size: 0x8, def value: None
 ::Oculus::Interaction::IMovement*  ____movement;

/// @brief Field _shouldSelect, offset: 0x158, size: 0x1, def value: None
 bool  ____shouldSelect;

/// @brief Field _shouldUnselect, offset: 0x159, size: 0x1, def value: None
 bool  ____shouldUnselect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::SnapInteractor, ____pointableElement) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractor, ____rigidbody) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractor, ____distanceThreshold) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractor, ____snapPoseTransform) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractor, ____defaultInteractable) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractor, ____timeOutInteractable) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractor, ____timeOut) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractor, ____idleStarted) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractor, ____movement) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractor, ____shouldSelect) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractor, ____shouldUnselect) == 0x159, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::SnapInteractor) == 0x160, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SnapInteractor/<>c
class CORDL_TYPE SnapInteractor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::SnapInteractor___c*  __9;

/// @brief Field <>9__21_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_1, put=setStaticF___9__21_1)) ::System::Func_1<bool>*  __9__21_1;

static inline ::Oculus::Interaction::SnapInteractor___c* New_ctor() ;

/// @brief Method <OnEnable>b__21_1, addr 0xa4640ac, size 0x8, virtual false, abstract: false, final false
inline bool _OnEnable_b__21_1() ;

/// @brief Method .ctor, addr 0xa4640a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::SnapInteractor___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__21_1() ;

static inline void setStaticF___9(::Oculus::Interaction::SnapInteractor___c*  value) ;

static inline void setStaticF___9__21_1(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapInteractor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapInteractor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapInteractor___c(SnapInteractor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapInteractor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapInteractor___c(SnapInteractor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15881};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::SnapInteractor___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
