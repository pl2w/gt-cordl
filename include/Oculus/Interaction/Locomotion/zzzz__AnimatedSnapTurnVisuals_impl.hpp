#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/AnimatedSnapTurnVisuals.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__AnimatedSnapTurnVisuals_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__AnimatedSnapTurnVisuals_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TurnArrowVisuals_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.get_LocomotionEventBroadcaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::get_LocomotionEventBroadcaster)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d1ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"get_LocomotionEventBroadcaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.set_LocomotionEventBroadcaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*)>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::set_LocomotionEventBroadcaster)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d1eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"set_LocomotionEventBroadcaster", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.get_Animation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::get_Animation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d1eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"get_Animation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.set_Animation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::set_Animation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d1ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"set_Animation", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.get_HighlightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::get_HighlightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d1ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"get_HighlightOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.set_HighlightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)(float_t)>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::set_HighlightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d1ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"set_HighlightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d1ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4d1ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4d1f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::OnEnable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4d1f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4d2098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.HandleLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::HandleLocomotionPerformed)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa4d2198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"HandleLocomotionPerformed", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.StopAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::StopAnimation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4d225c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"StopAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.AnimationRoutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)(float_t)>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::AnimationRoutine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4d22a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"AnimationRoutine", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.InjectAllAnimatedSnapTurnVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)(::Oculus::Interaction::Locomotion::TurnArrowVisuals*, ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*)>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::InjectAllAnimatedSnapTurnVisuals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4d2344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"InjectAllAnimatedSnapTurnVisuals", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TurnArrowVisuals*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.InjectVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)(::Oculus::Interaction::Locomotion::TurnArrowVisuals*)>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::InjectVisuals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d243c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"InjectVisuals", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TurnArrowVisuals*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals.InjectLocomotionEventBroadcaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*)>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::InjectLocomotionEventBroadcaster)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4d2370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"InjectLocomotionEventBroadcaster", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa4d2444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals>& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__visuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals> const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__visuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_set__visuals(::UnityW<::Oculus::Interaction::Locomotion::TurnArrowVisuals>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visuals = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__locomotionEventBroadcaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotionEventBroadcaster;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__locomotionEventBroadcaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotionEventBroadcaster;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_set__locomotionEventBroadcaster(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locomotionEventBroadcaster = value;
}
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__LocomotionEventBroadcaster_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocomotionEventBroadcaster_k__BackingField;
}
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__LocomotionEventBroadcaster_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocomotionEventBroadcaster_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_set__LocomotionEventBroadcaster_k__BackingField(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocomotionEventBroadcaster_k__BackingField = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__animation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animation;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__animation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animation;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_set__animation(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animation = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__highlightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightOffset;
}
constexpr float_t const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__highlightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightOffset;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_set__highlightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlightOffset = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__progressValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressValue;
}
constexpr float_t const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__progressValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressValue;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_set__progressValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressValue = value;
}
constexpr ::UnityEngine::Coroutine*& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__animationRoutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationRoutine;
}
constexpr ::UnityEngine::Coroutine* const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__animationRoutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationRoutine;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_set__animationRoutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationRoutine = value;
}
constexpr bool& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::get_LocomotionEventBroadcaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"get_LocomotionEventBroadcaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::set_LocomotionEventBroadcaster(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"set_LocomotionEventBroadcaster", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::get_Animation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"get_Animation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::set_Animation(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"set_Animation", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::get_HighlightOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"get_HighlightOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::set_HighlightOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"set_HighlightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::HandleLocomotionPerformed(::Oculus::Interaction::Locomotion::LocomotionEvent  ev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"HandleLocomotionPerformed", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ev);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::StopAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"StopAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::AnimationRoutine(float_t  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"AnimationRoutine", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, direction);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::InjectAllAnimatedSnapTurnVisuals(::Oculus::Interaction::Locomotion::TurnArrowVisuals*  visuals, ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  locomotionEventBroadcaster)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"InjectAllAnimatedSnapTurnVisuals", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TurnArrowVisuals*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visuals, locomotionEventBroadcaster);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::InjectVisuals(::Oculus::Interaction::Locomotion::TurnArrowVisuals*  visuals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"InjectVisuals", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TurnArrowVisuals*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visuals);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::InjectLocomotionEventBroadcaster(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  locomotionEventBroadcaster)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {"InjectLocomotionEventBroadcaster", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotionEventBroadcaster);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals::AnimatedSnapTurnVisuals()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::*)(int32_t)>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4d231c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4d25b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa4d25bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d2758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4d2760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d2798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals>& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals> const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get_direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr float_t const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get_direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_set_direction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___direction = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get__totalTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalTime_5__2;
}
constexpr float_t const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get__totalTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalTime_5__2;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_set__totalTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalTime_5__2 = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get__startTime_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__3;
}
constexpr float_t const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get__startTime_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__3;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_set__startTime_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__3 = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get__ellapsedTime_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ellapsedTime_5__4;
}
constexpr float_t const& Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_get__ellapsedTime_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ellapsedTime_5__4;
}
constexpr void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::__cordl_internal_set__ellapsedTime_5__4(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ellapsedTime_5__4 = value;
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals__AnimationRoutine_d__25::AnimatedSnapTurnVisuals__AnimationRoutine_d__25()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d25a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c.__ctor_b__29_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c::*)()>(&::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c::__ctor_b__29_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d25b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*>(),
                        {"<.ctor>b__29_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c::setStaticF___9(::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*, "<>9", ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*>(std::forward<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*, "<>9", ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*>();
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c::setStaticF___9__29_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__29_0", ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c::getStaticF___9__29_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__29_0", ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*>();
}
inline void Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c::__ctor_b__29_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*>(),
                        {"<.ctor>b__29_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c* Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::AnimatedSnapTurnVisuals___c::AnimatedSnapTurnVisuals___c()   {
}
