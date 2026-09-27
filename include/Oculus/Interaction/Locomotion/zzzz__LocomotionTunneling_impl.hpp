#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionTunneling.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionTunneling_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventHandler_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionTunneling_def.hpp"
#include "Oculus/Interaction/zzzz__IDeltaTimeConsumer_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "Oculus/Interaction/zzzz__TunnelingEffect_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.get_Locomotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler* (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::get_Locomotor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"get_Locomotor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.set_Locomotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*)>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::set_Locomotor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"set_Locomotor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.get_RotationStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::get_RotationStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"get_RotationStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.set_RotationStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::set_RotationStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"set_RotationStrength", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.get_AccelerationStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::get_AccelerationStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"get_AccelerationStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.set_AccelerationStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::set_AccelerationStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"set_AccelerationStrength", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.get_MovementStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::get_MovementStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"get_MovementStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.set_MovementStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::set_MovementStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"set_MovementStrength", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.get_FadeOutTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::get_FadeOutTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"get_FadeOutTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.set_FadeOutTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::set_FadeOutTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"set_FadeOutTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.get_FadeOutWait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::get_FadeOutWait)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"get_FadeOutWait", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.set_FadeOutWait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::set_FadeOutWait)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"set_FadeOutWait", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.SetDeltaTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::SetDeltaTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"SetDeltaTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d0e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4d0e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4d0ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::OnEnable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa4d0ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::OnDisable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa4d1058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.HandleLocomotionEventHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)(::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::HandleLocomotionEventHandled)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xa4d1178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"HandleLocomotionEventHandled", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.SetFOV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::SetFOV)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa4d13dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"SetFOV", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::LateUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4d14bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa4d1550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__locomotor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotor;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__locomotor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotor;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_set__locomotor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locomotor = value;
}
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__Locomotor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locomotor_k__BackingField;
}
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* const& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__Locomotor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locomotor_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_set__Locomotor_k__BackingField(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Locomotor_k__BackingField = value;
}
constexpr ::UnityW<::Oculus::Interaction::TunnelingEffect>& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__tunneling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tunneling;
}
constexpr ::UnityW<::Oculus::Interaction::TunnelingEffect> const& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__tunneling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tunneling;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_set__tunneling(::UnityW<::Oculus::Interaction::TunnelingEffect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tunneling = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__rotationStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationStrength;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__rotationStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationStrength;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_set__rotationStrength(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationStrength = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__accelerationStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accelerationStrength;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__accelerationStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accelerationStrength;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_set__accelerationStrength(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____accelerationStrength = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__movementStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementStrength;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__movementStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementStrength;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_set__movementStrength(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movementStrength = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__fadeOutTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutTime;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__fadeOutTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutTime;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_set__fadeOutTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeOutTime = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__fadeOutWait()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutWait;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__fadeOutWait() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutWait;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_set__fadeOutWait(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeOutWait = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__deltaTimeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaTimeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__deltaTimeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaTimeProvider;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_set__deltaTimeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deltaTimeProvider = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr bool& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__lastVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastVelocity;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__lastVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastVelocity;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_set__lastVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastVelocity = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__fadeOutStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutStart;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_get__fadeOutStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeOutStart;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTunneling::__cordl_internal_set__fadeOutStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeOutStart = value;
}
inline ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* Oculus::Interaction::Locomotion::LocomotionTunneling::get_Locomotor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"get_Locomotor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::set_Locomotor(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"set_Locomotor", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::Locomotion::LocomotionTunneling::get_RotationStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"get_RotationStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::set_RotationStrength(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"set_RotationStrength", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::Locomotion::LocomotionTunneling::get_AccelerationStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"get_AccelerationStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::set_AccelerationStrength(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"set_AccelerationStrength", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::Locomotion::LocomotionTunneling::get_MovementStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"get_MovementStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::set_MovementStrength(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"set_MovementStrength", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::LocomotionTunneling::get_FadeOutTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"get_FadeOutTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::set_FadeOutTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"set_FadeOutTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::LocomotionTunneling::get_FadeOutWait()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"get_FadeOutWait", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::set_FadeOutWait(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"set_FadeOutWait", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::SetDeltaTimeProvider(::System::Func_1<float_t>*  deltaTimeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"SetDeltaTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTimeProvider);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::HandleLocomotionEventHandled(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"HandleLocomotionEventHandled", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotionEvent, pose);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::SetFOV(float_t  fov)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {"SetFOV", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fov);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionTunneling* Oculus::Interaction::Locomotion::LocomotionTunneling::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionTunneling*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::Locomotion::LocomotionTunneling::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::Locomotion::LocomotionTunneling::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr  Oculus::Interaction::Locomotion::LocomotionTunneling::operator ::Oculus::Interaction::IDeltaTimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::IDeltaTimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IDeltaTimeConsumer"
constexpr ::Oculus::Interaction::IDeltaTimeConsumer* Oculus::Interaction::Locomotion::LocomotionTunneling::i___Oculus__Interaction__IDeltaTimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::IDeltaTimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionTunneling::LocomotionTunneling()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTunneling___c::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d178c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling___c.__ctor_b__40_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionTunneling___c::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling___c::__ctor_b__40_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d1794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>(),
                        {"<.ctor>b__40_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTunneling___c.__ctor_b__40_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionTunneling___c::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTunneling___c::__ctor_b__40_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d179c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>(),
                        {"<.ctor>b__40_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::LocomotionTunneling___c::setStaticF___9(::Oculus::Interaction::Locomotion::LocomotionTunneling___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::LocomotionTunneling___c*, "<>9", ::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>(std::forward<::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::LocomotionTunneling___c* Oculus::Interaction::Locomotion::LocomotionTunneling___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::LocomotionTunneling___c*, "<>9", ::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling___c::setStaticF___9__40_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__40_0", ::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::Locomotion::LocomotionTunneling___c::getStaticF___9__40_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__40_0", ::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling___c::setStaticF___9__40_1(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__40_1", ::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::Locomotion::LocomotionTunneling___c::getStaticF___9__40_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__40_1", ::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionTunneling___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::LocomotionTunneling___c::__ctor_b__40_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>(),
                        {"<.ctor>b__40_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::LocomotionTunneling___c::__ctor_b__40_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>(),
                        {"<.ctor>b__40_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionTunneling___c* Oculus::Interaction::Locomotion::LocomotionTunneling___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionTunneling___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionTunneling___c::LocomotionTunneling___c()   {
}
