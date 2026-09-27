#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionTurnSliderSetting.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TurnLocomotionBroadcaster_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TurnerEventBroadcaster_impl.hpp"
#include "UnityEngine/zzzz__AnimationCurve_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionTurnSliderSetting_def.hpp"
#include "UnityEngine/UI/zzzz__Slider_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa42e514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::OnEnable)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa42e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::OnDisable)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa42e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting.HandleValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::HandleValueChanged)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xa42e714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(),
                        {"HandleValueChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting.HandleSnapTurnChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::*)(bool)>(&::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::HandleSnapTurnChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa42e92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(),
                        {"HandleSnapTurnChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting.HandleSmoothTurnChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::*)(bool)>(&::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::HandleSmoothTurnChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa42e984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(),
                        {"HandleSmoothTurnChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa42eb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Slider>& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__slider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slider;
}
constexpr ::UnityW<::UnityEngine::UI::Slider> const& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__slider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slider;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_set__slider(::UnityW<::UnityEngine::UI::Slider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slider = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__snapTurnToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapTurnToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__snapTurnToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapTurnToggle;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_set__snapTurnToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapTurnToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__smoothTurnToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothTurnToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__smoothTurnToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothTurnToggle;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_set__smoothTurnToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothTurnToggle = value;
}
constexpr ::ArrayW<float_t>& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__snapTurnSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapTurnSteps;
}
constexpr ::ArrayW<float_t> const& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__snapTurnSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapTurnSteps;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_set__snapTurnSteps(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapTurnSteps = value;
}
constexpr ::ArrayW<::UnityEngine::AnimationCurve*>& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__smoothTurnSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothTurnSteps;
}
constexpr ::ArrayW<::UnityEngine::AnimationCurve*> const& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__smoothTurnSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothTurnSteps;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_set__smoothTurnSteps(::ArrayW<::UnityEngine::AnimationCurve*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothTurnSteps = value;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>>& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__controllerTurners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerTurners;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>> const& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__controllerTurners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerTurners;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_set__controllerTurners(::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerTurners = value;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>>& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__handTurners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handTurners;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>> const& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__handTurners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handTurners;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_set__handTurners(::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnerEventBroadcaster>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handTurners = value;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster>>& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__locomotionTurners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotionTurners;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster>> const& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__locomotionTurners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotionTurners;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_set__locomotionTurners(::ArrayW<::UnityW<::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locomotionTurners = value;
}
constexpr bool& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::HandleValueChanged(float_t  arg0)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(),
                        {"HandleValueChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::HandleSnapTurnChanged(bool  snapTurn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(),
                        {"HandleSnapTurnChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapTurn);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::HandleSmoothTurnChanged(bool  smoothTurn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(),
                        {"HandleSmoothTurnChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, smoothTurn);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting* Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionTurnSliderSetting::LocomotionTurnSliderSetting()   {
}
