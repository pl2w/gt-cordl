#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grabbable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PointableElement_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Grabbable)
namespace Oculus::Interaction::Throw {
class RANSACVelocity;
}
namespace Oculus::Interaction {
class Grabbable_ThrowWhenUnselected;
}
namespace Oculus::Interaction {
class Grabbable___c;
}
namespace Oculus::Interaction {
class IGrabbable;
}
namespace Oculus::Interaction {
class IPointable;
}
namespace Oculus::Interaction {
class ITimeConsumer;
}
namespace Oculus::Interaction {
class ITransformer;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace Oculus::Interaction {
class ThrowWhenUnselected_Grabbable___c;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Pool {
template<typename T>
class IObjectPool_1;
}
namespace UnityEngine {
class Object;
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
class Grabbable;
}
namespace Oculus::Interaction {
class Grabbable_ThrowWhenUnselected;
}
namespace Oculus::Interaction {
class Grabbable___c;
}
namespace Oculus::Interaction {
class ThrowWhenUnselected_Grabbable___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Grabbable*);
MARK_REF_T(::Oculus::Interaction::Grabbable_ThrowWhenUnselected*);
MARK_REF_T(::Oculus::Interaction::Grabbable___c*);
MARK_REF_T(::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grabbable*, "Oculus.Interaction", "Grabbable");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grabbable_ThrowWhenUnselected*, "Oculus.Interaction", "Grabbable/ThrowWhenUnselected");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grabbable___c*, "Oculus.Interaction", "Grabbable/<>c");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*, "Oculus.Interaction", "Grabbable/ThrowWhenUnselected/<>c");
// Dependencies Oculus.Interaction.PointableElement
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Grabbable
class CORDL_TYPE Grabbable : public ::Oculus::Interaction::PointableElement {
public:
// Declarations
using ThrowWhenUnselected = ::Oculus::Interaction::Grabbable_ThrowWhenUnselected;

using __c = ::Oculus::Interaction::Grabbable___c;

 __declspec(property(get=get_GrabPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  GrabPoints;

 __declspec(property(get=get_MaxGrabPoints, put=set_MaxGrabPoints)) int32_t  MaxGrabPoints;

/// @brief Field OneGrabTransformer, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OneGrabTransformer, put=__cordl_internal_set_OneGrabTransformer)) ::Oculus::Interaction::ITransformer*  OneGrabTransformer;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Field TwoGrabTransformer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_TwoGrabTransformer, put=__cordl_internal_set_TwoGrabTransformer)) ::Oculus::Interaction::ITransformer*  TwoGrabTransformer;

/// @brief Field _activeTransformer, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeTransformer, put=__cordl_internal_set__activeTransformer)) ::Oculus::Interaction::ITransformer*  _activeTransformer;

/// @brief Field _isKinematicLocked, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isKinematicLocked, put=__cordl_internal_set__isKinematicLocked)) bool  _isKinematicLocked;

/// @brief Field _kinematicWhileSelected, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__kinematicWhileSelected, put=__cordl_internal_set__kinematicWhileSelected)) bool  _kinematicWhileSelected;

/// @brief Field _maxGrabPoints, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxGrabPoints, put=__cordl_internal_set__maxGrabPoints)) int32_t  _maxGrabPoints;

/// @brief Field _oneGrabTransformer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__oneGrabTransformer, put=__cordl_internal_set__oneGrabTransformer)) ::UnityW<::UnityEngine::Object>  _oneGrabTransformer;

/// @brief Field _rigidbody, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _targetTransform, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetTransform, put=__cordl_internal_set__targetTransform)) ::UnityW<::UnityEngine::Transform>  _targetTransform;

/// @brief Field _throw, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__throw, put=__cordl_internal_set__throw)) ::Oculus::Interaction::Grabbable_ThrowWhenUnselected*  _throw;

/// @brief Field _throwWhenUnselected, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get__throwWhenUnselected, put=__cordl_internal_set__throwWhenUnselected)) bool  _throwWhenUnselected;

/// @brief Field _timeProvider, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Field _twoGrabTransformer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__twoGrabTransformer, put=__cordl_internal_set__twoGrabTransformer)) ::UnityW<::UnityEngine::Object>  _twoGrabTransformer;

/// @brief Convert operator to "::Oculus::Interaction::IGrabbable"
constexpr operator  ::Oculus::Interaction::IGrabbable*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Method Awake, addr 0xa444ed4, size 0xac, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BeginTransform, addr 0xa445a64, size 0x11c, virtual false, abstract: false, final false
inline void BeginTransform() ;

/// @brief Method EndTransform, addr 0xa445598, size 0xbc, virtual false, abstract: false, final false
inline void EndTransform() ;

/// @brief Method ForceMove, addr 0xa4459dc, size 0x88, virtual false, abstract: false, final false
inline void ForceMove(::Oculus::Interaction::PointerEvent  releaseEvent) ;

/// @brief Method GenerateTransformer, addr 0xa4452b8, size 0x7c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::ITransformer* GenerateTransformer() ;

/// @brief Method InjectOptionalKinematicWhileSelected, addr 0xa445d74, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalKinematicWhileSelected(bool  kinematicWhileSelected) ;

/// @brief Method InjectOptionalOneGrabTransformer, addr 0xa445778, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalOneGrabTransformer(::Oculus::Interaction::ITransformer*  transformer) ;

/// @brief Method InjectOptionalRigidbody, addr 0xa445d64, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRigidbody(::UnityEngine::Rigidbody*  rigidbody) ;

/// @brief Method InjectOptionalTargetTransform, addr 0xa445d5c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalTargetTransform(::UnityEngine::Transform*  targetTransform) ;

/// @brief Method InjectOptionalThrowWhenUnselected, addr 0xa445d6c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalThrowWhenUnselected(bool  throwWehenUnselected) ;

/// @brief Method InjectOptionalTwoGrabTransformer, addr 0xa445848, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalTwoGrabTransformer(::Oculus::Interaction::ITransformer*  transformer) ;

static inline ::Oculus::Interaction::Grabbable* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa445654, size 0x30, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa445570, size 0x28, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method PointableElementUpdated, addr 0xa445c2c, size 0x64, virtual true, abstract: false, final false
inline void PointableElementUpdated(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method ProcessPointerEvent, addr 0xa445918, size 0xc4, virtual true, abstract: false, final false
inline void ProcessPointerEvent(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method Reset, addr 0xa444e7c, size 0x58, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetTimeProvider, addr 0xa444e38, size 0x44, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa444f80, size 0x338, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateKinematicLock, addr 0xa445c90, size 0xcc, virtual false, abstract: false, final false
inline void UpdateKinematicLock(bool  isGrabbing) ;

/// @brief Method UpdateTransform, addr 0xa445b80, size 0xac, virtual false, abstract: false, final false
inline void UpdateTransform() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__23_0, addr 0xa445e7c, size 0x8, virtual false, abstract: false, final false
inline void _Start_b__23_0() ;

constexpr ::Oculus::Interaction::ITransformer* const& __cordl_internal_get_OneGrabTransformer() const;

constexpr ::Oculus::Interaction::ITransformer*& __cordl_internal_get_OneGrabTransformer() ;

constexpr ::Oculus::Interaction::ITransformer* const& __cordl_internal_get_TwoGrabTransformer() const;

constexpr ::Oculus::Interaction::ITransformer*& __cordl_internal_get_TwoGrabTransformer() ;

constexpr ::Oculus::Interaction::ITransformer* const& __cordl_internal_get__activeTransformer() const;

constexpr ::Oculus::Interaction::ITransformer*& __cordl_internal_get__activeTransformer() ;

constexpr bool const& __cordl_internal_get__isKinematicLocked() const;

constexpr bool& __cordl_internal_get__isKinematicLocked() ;

constexpr bool const& __cordl_internal_get__kinematicWhileSelected() const;

constexpr bool& __cordl_internal_get__kinematicWhileSelected() ;

constexpr int32_t const& __cordl_internal_get__maxGrabPoints() const;

constexpr int32_t& __cordl_internal_get__maxGrabPoints() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__oneGrabTransformer() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__oneGrabTransformer() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetTransform() ;

constexpr ::Oculus::Interaction::Grabbable_ThrowWhenUnselected* const& __cordl_internal_get__throw() const;

constexpr ::Oculus::Interaction::Grabbable_ThrowWhenUnselected*& __cordl_internal_get__throw() ;

constexpr bool const& __cordl_internal_get__throwWhenUnselected() const;

constexpr bool& __cordl_internal_get__throwWhenUnselected() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__twoGrabTransformer() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__twoGrabTransformer() ;

constexpr void __cordl_internal_set_OneGrabTransformer(::Oculus::Interaction::ITransformer*  value) ;

constexpr void __cordl_internal_set_TwoGrabTransformer(::Oculus::Interaction::ITransformer*  value) ;

constexpr void __cordl_internal_set__activeTransformer(::Oculus::Interaction::ITransformer*  value) ;

constexpr void __cordl_internal_set__isKinematicLocked(bool  value) ;

constexpr void __cordl_internal_set__kinematicWhileSelected(bool  value) ;

constexpr void __cordl_internal_set__maxGrabPoints(int32_t  value) ;

constexpr void __cordl_internal_set__oneGrabTransformer(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__targetTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__throw(::Oculus::Interaction::Grabbable_ThrowWhenUnselected*  value) ;

constexpr void __cordl_internal_set__throwWhenUnselected(bool  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__twoGrabTransformer(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa445d7c, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GrabPoints, addr 0xa444e30, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::UnityEngine::Pose>* get_GrabPoints() ;

/// @brief Method get_MaxGrabPoints, addr 0xa444e18, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxGrabPoints() ;

/// @brief Method get_Transform, addr 0xa444e28, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Convert to "::Oculus::Interaction::IGrabbable"
constexpr ::Oculus::Interaction::IGrabbable* i___Oculus__Interaction__IGrabbable() noexcept;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// @brief Method set_MaxGrabPoints, addr 0xa444e20, size 0x8, virtual false, abstract: false, final false
inline void set_MaxGrabPoints(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Grabbable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Grabbable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Grabbable(Grabbable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Grabbable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Grabbable(Grabbable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15812};

/// [Tooltip("A One Grab...Transformer component, which should be attached to the grabbable object. Defaults to One Grab Free Transformer. If you set the Two Grab Transformer property and still want to use one hand for grabs, you must set this property as well.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.ITransformer), new[] {  })]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)1)]
/// @brief Field _oneGrabTransformer, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____oneGrabTransformer;

/// [Tooltip("A Two Grab...Transformer component, which should be attached to the grabbable object. If you set this property but also want to use one hand for grabs, you must set the One Grab Transformer property.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.ITransformer), new[] {  })]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)1)]
/// @brief Field _twoGrabTransformer, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____twoGrabTransformer;

/// [Tooltip("The target transform of the Grabbable. If unassigned, the transform of this GameObject will be used.")]
/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)1)]
/// @brief Field _targetTransform, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____targetTransform;

/// [Tooltip("The maximum number of grab points. Can be either -1 (unlimited), 1, or 2.")]
/// [SerializeField]
/// [Min(-1)]
/// @brief Field _maxGrabPoints, offset: 0x80, size: 0x4, def value: None
 int32_t  ____maxGrabPoints;

/// [Header("Physics")]
/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)2)]
/// [Tooltip("Use this rigidbody to control its physics properties while grabbing.")]
/// @brief Field _rigidbody, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [SerializeField]
/// [Tooltip("Locks the referenced rigidbody to a kinematic while selected.")]
/// @brief Field _kinematicWhileSelected, offset: 0x90, size: 0x1, def value: None
 bool  ____kinematicWhileSelected;

/// [SerializeField]
/// [Tooltip("Applies throwing velocities to the rigidbody when fully released.")]
/// @brief Field _throwWhenUnselected, offset: 0x91, size: 0x1, def value: None
 bool  ____throwWhenUnselected;

/// @brief Field _timeProvider, offset: 0x98, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _activeTransformer, offset: 0xa0, size: 0x8, def value: None
 ::Oculus::Interaction::ITransformer*  ____activeTransformer;

/// @brief Field OneGrabTransformer, offset: 0xa8, size: 0x8, def value: None
 ::Oculus::Interaction::ITransformer*  ___OneGrabTransformer;

/// @brief Field TwoGrabTransformer, offset: 0xb0, size: 0x8, def value: None
 ::Oculus::Interaction::ITransformer*  ___TwoGrabTransformer;

/// @brief Field _throw, offset: 0xb8, size: 0x8, def value: None
 ::Oculus::Interaction::Grabbable_ThrowWhenUnselected*  ____throw;

/// @brief Field _isKinematicLocked, offset: 0xc0, size: 0x1, def value: None
 bool  ____isKinematicLocked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grabbable, ____oneGrabTransformer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable, ____twoGrabTransformer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable, ____targetTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable, ____maxGrabPoints) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable, ____rigidbody) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable, ____kinematicWhileSelected) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable, ____throwWhenUnselected) == 0x91, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable, ____timeProvider) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable, ____activeTransformer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable, ___OneGrabTransformer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable, ___TwoGrabTransformer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable, ____throw) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable, ____isKinematicLocked) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grabbable) == 0xc8, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Grabbable/<>c
class CORDL_TYPE Grabbable___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Grabbable___c*  __9;

/// @brief Field <>9__41_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__41_0, put=setStaticF___9__41_0)) ::System::Func_1<float_t>*  __9__41_0;

static inline ::Oculus::Interaction::Grabbable___c* New_ctor() ;

/// @brief Method <.ctor>b__41_0, addr 0xa4469c8, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__41_0() ;

/// @brief Method .ctor, addr 0xa4469c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Grabbable___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__41_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Grabbable___c*  value) ;

static inline void setStaticF___9__41_0(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Grabbable___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Grabbable___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Grabbable___c(Grabbable___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Grabbable___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Grabbable___c(Grabbable___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15811};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Grabbable___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Grabbable/ThrowWhenUnselected
class CORDL_TYPE Grabbable_ThrowWhenUnselected : public ::System::Object {
public:
// Declarations
using __c = ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c;

/// @brief Field _isHighConfidence, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHighConfidence, put=__cordl_internal_set__isHighConfidence)) bool  _isHighConfidence;

/// @brief Field _pointable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointable, put=__cordl_internal_set__pointable)) ::Oculus::Interaction::IPointable*  _pointable;

/// @brief Field _prevPose, offset 0x38, size 0x1c 
 __declspec(property(get=__cordl_internal_get__prevPose, put=__cordl_internal_set__prevPose)) ::UnityEngine::Pose  _prevPose;

/// @brief Field _prevTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevTime, put=__cordl_internal_set__prevTime)) float_t  _prevTime;

/// @brief Field _ransacVelocity, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ransacVelocity, put=__cordl_internal_set__ransacVelocity)) ::Oculus::Interaction::Throw::RANSACVelocity*  _ransacVelocity;

/// @brief Field _ransacVelocityPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ransacVelocityPool, put=setStaticF__ransacVelocityPool)) ::UnityEngine::Pool::IObjectPool_1<::Oculus::Interaction::Throw::RANSACVelocity*>*  _ransacVelocityPool;

/// @brief Field _rigidbody, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _selectors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectors, put=__cordl_internal_set__selectors)) ::System::Collections::Generic::HashSet_1<int32_t>*  _selectors;

/// @brief Field _selectorsPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__selectorsPool, put=setStaticF__selectorsPool)) ::UnityEngine::Pool::IObjectPool_1<::System::Collections::Generic::HashSet_1<int32_t>*>*  _selectorsPool;

/// @brief Field _timeProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddSelection, addr 0xa445e8c, size 0x68, virtual false, abstract: false, final false
inline void AddSelection(int32_t  selectorId) ;

/// @brief Method Dispose, addr 0xa445684, size 0xf4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method HandlePointerEventRaised, addr 0xa446438, size 0xf0, virtual false, abstract: false, final false
inline void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method Initialize, addr 0xa445ef4, size 0x178, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method LoadThrowVelocities, addr 0xa446238, size 0x74, virtual false, abstract: false, final false
inline void LoadThrowVelocities() ;

/// @brief Method MarkFrameConfidence, addr 0xa446528, size 0x48, virtual false, abstract: false, final false
inline void MarkFrameConfidence(int32_t  emitterKey) ;

static inline ::Oculus::Interaction::Grabbable_ThrowWhenUnselected* New_ctor(::UnityEngine::Rigidbody*  rigidbody, ::Oculus::Interaction::IPointable*  pointable) ;

/// @brief Method Process, addr 0xa44611c, size 0x11c, virtual false, abstract: false, final false
inline void Process(bool  saveAsPreviousFrame) ;

/// @brief Method RemoveSelection, addr 0xa44606c, size 0xb0, virtual false, abstract: false, final false
inline void RemoveSelection(int32_t  selectorId, bool  canThrow) ;

/// @brief Method SetTimeProvider, addr 0xa445e84, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Teardown, addr 0xa4462ac, size 0x18c, virtual false, abstract: false, final false
inline void Teardown() ;

constexpr bool const& __cordl_internal_get__isHighConfidence() const;

constexpr bool& __cordl_internal_get__isHighConfidence() ;

constexpr ::Oculus::Interaction::IPointable* const& __cordl_internal_get__pointable() const;

constexpr ::Oculus::Interaction::IPointable*& __cordl_internal_get__pointable() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__prevPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__prevPose() ;

constexpr float_t const& __cordl_internal_get__prevTime() const;

constexpr float_t& __cordl_internal_get__prevTime() ;

constexpr ::Oculus::Interaction::Throw::RANSACVelocity* const& __cordl_internal_get__ransacVelocity() const;

constexpr ::Oculus::Interaction::Throw::RANSACVelocity*& __cordl_internal_get__ransacVelocity() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__selectors() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__selectors() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr void __cordl_internal_set__isHighConfidence(bool  value) ;

constexpr void __cordl_internal_set__pointable(::Oculus::Interaction::IPointable*  value) ;

constexpr void __cordl_internal_set__prevPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__prevTime(float_t  value) ;

constexpr void __cordl_internal_set__ransacVelocity(::Oculus::Interaction::Throw::RANSACVelocity*  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__selectors(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa445334, size 0x23c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rigidbody*  rigidbody, ::Oculus::Interaction::IPointable*  pointable) ;

static inline ::UnityEngine::Pool::IObjectPool_1<::Oculus::Interaction::Throw::RANSACVelocity*>* getStaticF__ransacVelocityPool() ;

static inline ::UnityEngine::Pool::IObjectPool_1<::System::Collections::Generic::HashSet_1<int32_t>*>* getStaticF__selectorsPool() ;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF__ransacVelocityPool(::UnityEngine::Pool::IObjectPool_1<::Oculus::Interaction::Throw::RANSACVelocity*>*  value) ;

static inline void setStaticF__selectorsPool(::UnityEngine::Pool::IObjectPool_1<::System::Collections::Generic::HashSet_1<int32_t>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Grabbable_ThrowWhenUnselected() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Grabbable_ThrowWhenUnselected", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Grabbable_ThrowWhenUnselected(Grabbable_ThrowWhenUnselected && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Grabbable_ThrowWhenUnselected", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Grabbable_ThrowWhenUnselected(Grabbable_ThrowWhenUnselected const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15810};

/// @brief Field _rigidbody, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// @brief Field _pointable, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::IPointable*  ____pointable;

/// @brief Field _selectors, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ____selectors;

/// @brief Field _timeProvider, offset: 0x28, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _ransacVelocity, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Throw::RANSACVelocity*  ____ransacVelocity;

/// @brief Field _prevPose, offset: 0x38, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____prevPose;

/// @brief Field _prevTime, offset: 0x54, size: 0x4, def value: None
 float_t  ____prevTime;

/// @brief Field _isHighConfidence, offset: 0x58, size: 0x1, def value: None
 bool  ____isHighConfidence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grabbable_ThrowWhenUnselected, ____rigidbody) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable_ThrowWhenUnselected, ____pointable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable_ThrowWhenUnselected, ____selectors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable_ThrowWhenUnselected, ____timeProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable_ThrowWhenUnselected, ____ransacVelocity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable_ThrowWhenUnselected, ____prevPose) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable_ThrowWhenUnselected, ____prevTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grabbable_ThrowWhenUnselected, ____isHighConfidence) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grabbable_ThrowWhenUnselected) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Grabbable/ThrowWhenUnselected/<>c
class CORDL_TYPE ThrowWhenUnselected_Grabbable___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Func_1<float_t>*  __9__11_0;

static inline ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c* New_ctor() ;

/// @brief Method <.cctor>b__21_0, addr 0xa446844, size 0x5c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Throw::RANSACVelocity* __cctor_b__21_0() ;

/// @brief Method <.cctor>b__21_1, addr 0xa4468a0, size 0x68, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<int32_t>* __cctor_b__21_1() ;

/// @brief Method <.cctor>b__21_2, addr 0xa446908, size 0x50, virtual false, abstract: false, final false
inline void __cctor_b__21_2(::System::Collections::Generic::HashSet_1<int32_t>*  s) ;

/// @brief Method <.ctor>b__11_0, addr 0xa44683c, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__11_0() ;

/// @brief Method .ctor, addr 0xa446834, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__11_0() ;

static inline void setStaticF___9(::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c*  value) ;

static inline void setStaticF___9__11_0(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowWhenUnselected_Grabbable___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowWhenUnselected_Grabbable___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowWhenUnselected_Grabbable___c(ThrowWhenUnselected_Grabbable___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowWhenUnselected_Grabbable___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowWhenUnselected_Grabbable___c(ThrowWhenUnselected_Grabbable___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15809};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::ThrowWhenUnselected_Grabbable___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
