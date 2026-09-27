#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionTunneling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocomotionTunneling)
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventHandler;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionTunneling___c;
}
namespace Oculus::Interaction {
class IDeltaTimeConsumer;
}
namespace Oculus::Interaction {
class ITimeConsumer;
}
namespace Oculus::Interaction {
class TunnelingEffect;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionTunneling;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionTunneling___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionTunneling*);
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionTunneling___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionTunneling*, "Oculus.Interaction.Locomotion", "LocomotionTunneling");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionTunneling___c*, "Oculus.Interaction.Locomotion", "LocomotionTunneling/<>c");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionTunneling
class CORDL_TYPE LocomotionTunneling : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Locomotion::LocomotionTunneling___c;

 __declspec(property(get=get_AccelerationStrength, put=set_AccelerationStrength)) ::UnityEngine::AnimationCurve*  AccelerationStrength;

 __declspec(property(get=get_FadeOutTime, put=set_FadeOutTime)) float_t  FadeOutTime;

 __declspec(property(get=get_FadeOutWait, put=set_FadeOutWait)) float_t  FadeOutWait;

 __declspec(property(get=get_Locomotor, put=set_Locomotor)) ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  Locomotor;

 __declspec(property(get=get_MovementStrength, put=set_MovementStrength)) ::UnityEngine::AnimationCurve*  MovementStrength;

 __declspec(property(get=get_RotationStrength, put=set_RotationStrength)) ::UnityEngine::AnimationCurve*  RotationStrength;

/// @brief Field <Locomotor>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Locomotor_k__BackingField, put=__cordl_internal_set__Locomotor_k__BackingField)) ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  _Locomotor_k__BackingField;

/// @brief Field _accelerationStrength, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__accelerationStrength, put=__cordl_internal_set__accelerationStrength)) ::UnityEngine::AnimationCurve*  _accelerationStrength;

/// @brief Field _deltaTimeProvider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__deltaTimeProvider, put=__cordl_internal_set__deltaTimeProvider)) ::System::Func_1<float_t>*  _deltaTimeProvider;

/// @brief Field _fadeOutStart, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeOutStart, put=__cordl_internal_set__fadeOutStart)) float_t  _fadeOutStart;

/// @brief Field _fadeOutTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeOutTime, put=__cordl_internal_set__fadeOutTime)) float_t  _fadeOutTime;

/// @brief Field _fadeOutWait, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeOutWait, put=__cordl_internal_set__fadeOutWait)) float_t  _fadeOutWait;

/// @brief Field _lastVelocity, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastVelocity, put=__cordl_internal_set__lastVelocity)) ::UnityEngine::Vector3  _lastVelocity;

/// @brief Field _locomotor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__locomotor, put=__cordl_internal_set__locomotor)) ::UnityW<::UnityEngine::Object>  _locomotor;

/// @brief Field _movementStrength, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__movementStrength, put=__cordl_internal_set__movementStrength)) ::UnityEngine::AnimationCurve*  _movementStrength;

/// @brief Field _rotationStrength, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationStrength, put=__cordl_internal_set__rotationStrength)) ::UnityEngine::AnimationCurve*  _rotationStrength;

/// @brief Field _started, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _timeProvider, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Field _tunneling, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tunneling, put=__cordl_internal_set__tunneling)) ::UnityW<::Oculus::Interaction::TunnelingEffect>  _tunneling;

/// @brief Convert operator to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr operator  ::Oculus::Interaction::IDeltaTimeConsumer*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Method Awake, addr 0xa4d0e74, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleLocomotionEventHandled, addr 0xa4d1178, size 0x264, virtual false, abstract: false, final false
inline void HandleLocomotionEventHandled(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent, ::UnityEngine::Pose  pose) ;

/// @brief Method LateUpdate, addr 0xa4d14bc, size 0x94, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::Locomotion::LocomotionTunneling* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4d1058, size 0x120, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4d0ef8, size 0x160, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetDeltaTimeProvider, addr 0xa4d0e64, size 0x8, virtual true, abstract: false, final true
inline void SetDeltaTimeProvider(::System::Func_1<float_t>*  deltaTimeProvider) ;

/// @brief Method SetFOV, addr 0xa4d13dc, size 0xe0, virtual false, abstract: false, final false
inline void SetFOV(float_t  fov) ;

/// @brief Method SetTimeProvider, addr 0xa4d0e6c, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa4d0ecc, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* const& __cordl_internal_get__Locomotor_k__BackingField() const;

constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*& __cordl_internal_get__Locomotor_k__BackingField() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__accelerationStrength() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__accelerationStrength() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__deltaTimeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__deltaTimeProvider() ;

constexpr float_t const& __cordl_internal_get__fadeOutStart() const;

constexpr float_t& __cordl_internal_get__fadeOutStart() ;

constexpr float_t const& __cordl_internal_get__fadeOutTime() const;

constexpr float_t& __cordl_internal_get__fadeOutTime() ;

constexpr float_t const& __cordl_internal_get__fadeOutWait() const;

constexpr float_t& __cordl_internal_get__fadeOutWait() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastVelocity() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__locomotor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__locomotor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__movementStrength() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__movementStrength() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__rotationStrength() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__rotationStrength() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr ::UnityW<::Oculus::Interaction::TunnelingEffect> const& __cordl_internal_get__tunneling() const;

constexpr ::UnityW<::Oculus::Interaction::TunnelingEffect>& __cordl_internal_get__tunneling() ;

constexpr void __cordl_internal_set__Locomotor_k__BackingField(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  value) ;

constexpr void __cordl_internal_set__accelerationStrength(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__deltaTimeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__fadeOutStart(float_t  value) ;

constexpr void __cordl_internal_set__fadeOutTime(float_t  value) ;

constexpr void __cordl_internal_set__fadeOutWait(float_t  value) ;

constexpr void __cordl_internal_set__lastVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__locomotor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__movementStrength(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__rotationStrength(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__tunneling(::UnityW<::Oculus::Interaction::TunnelingEffect>  value) ;

/// @brief Method .ctor, addr 0xa4d1550, size 0x1d4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AccelerationStrength, addr 0xa4d0e24, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_AccelerationStrength() ;

/// @brief Method get_FadeOutTime, addr 0xa4d0e44, size 0x8, virtual false, abstract: false, final false
inline float_t get_FadeOutTime() ;

/// @brief Method get_FadeOutWait, addr 0xa4d0e54, size 0x8, virtual false, abstract: false, final false
inline float_t get_FadeOutWait() ;

/// [CompilerGenerated]
/// @brief Method get_Locomotor, addr 0xa4d0e04, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* get_Locomotor() ;

/// @brief Method get_MovementStrength, addr 0xa4d0e34, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_MovementStrength() ;

/// @brief Method get_RotationStrength, addr 0xa4d0e14, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_RotationStrength() ;

/// @brief Convert to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr ::Oculus::Interaction::IDeltaTimeConsumer* i___Oculus__Interaction__IDeltaTimeConsumer() noexcept;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// @brief Method set_AccelerationStrength, addr 0xa4d0e2c, size 0x8, virtual false, abstract: false, final false
inline void set_AccelerationStrength(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_FadeOutTime, addr 0xa4d0e4c, size 0x8, virtual false, abstract: false, final false
inline void set_FadeOutTime(float_t  value) ;

/// @brief Method set_FadeOutWait, addr 0xa4d0e5c, size 0x8, virtual false, abstract: false, final false
inline void set_FadeOutWait(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Locomotor, addr 0xa4d0e0c, size 0x8, virtual false, abstract: false, final false
inline void set_Locomotor(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  value) ;

/// @brief Method set_MovementStrength, addr 0xa4d0e3c, size 0x8, virtual false, abstract: false, final false
inline void set_MovementStrength(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_RotationStrength, addr 0xa4d0e1c, size 0x8, virtual false, abstract: false, final false
inline void set_RotationStrength(::UnityEngine::AnimationCurve*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionTunneling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTunneling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionTunneling(LocomotionTunneling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTunneling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionTunneling(LocomotionTunneling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16290};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Locomotion.ILocomotionEventHandler), new[] {  })]
/// @brief Field _locomotor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____locomotor;

/// [CompilerGenerated]
/// @brief Field <Locomotor>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  ____Locomotor_k__BackingField;

/// [SerializeField]
/// @brief Field _tunneling, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::TunnelingEffect>  ____tunneling;

/// [SerializeField]
/// @brief Field _rotationStrength, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____rotationStrength;

/// [SerializeField]
/// @brief Field _accelerationStrength, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____accelerationStrength;

/// [SerializeField]
/// @brief Field _movementStrength, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____movementStrength;

/// [SerializeField]
/// @brief Field _fadeOutTime, offset: 0x50, size: 0x4, def value: None
 float_t  ____fadeOutTime;

/// [SerializeField]
/// @brief Field _fadeOutWait, offset: 0x54, size: 0x4, def value: None
 float_t  ____fadeOutWait;

/// @brief Field _deltaTimeProvider, offset: 0x58, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____deltaTimeProvider;

/// @brief Field _timeProvider, offset: 0x60, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _started, offset: 0x68, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _lastVelocity, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastVelocity;

/// @brief Field _fadeOutStart, offset: 0x78, size: 0x4, def value: None
 float_t  ____fadeOutStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTunneling, ____locomotor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTunneling, ____Locomotor_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTunneling, ____tunneling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTunneling, ____rotationStrength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTunneling, ____accelerationStrength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTunneling, ____movementStrength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTunneling, ____fadeOutTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTunneling, ____fadeOutWait) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTunneling, ____deltaTimeProvider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTunneling, ____timeProvider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTunneling, ____started) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTunneling, ____lastVelocity) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTunneling, ____fadeOutStart) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionTunneling) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionTunneling/<>c
class CORDL_TYPE LocomotionTunneling___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::LocomotionTunneling___c*  __9;

/// @brief Field <>9__40_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__40_0, put=setStaticF___9__40_0)) ::System::Func_1<float_t>*  __9__40_0;

/// @brief Field <>9__40_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__40_1, put=setStaticF___9__40_1)) ::System::Func_1<float_t>*  __9__40_1;

static inline ::Oculus::Interaction::Locomotion::LocomotionTunneling___c* New_ctor() ;

/// @brief Method <.ctor>b__40_0, addr 0xa4d1794, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__40_0() ;

/// @brief Method <.ctor>b__40_1, addr 0xa4d179c, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__40_1() ;

/// @brief Method .ctor, addr 0xa4d178c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::LocomotionTunneling___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__40_0() ;

static inline ::System::Func_1<float_t>* getStaticF___9__40_1() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::LocomotionTunneling___c*  value) ;

static inline void setStaticF___9__40_0(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__40_1(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionTunneling___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTunneling___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionTunneling___c(LocomotionTunneling___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTunneling___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionTunneling___c(LocomotionTunneling___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16289};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionTunneling___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
