#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionActiveState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionActiveState_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionActiveState_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState.get_LocomotionBroadcaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::get_LocomotionBroadcaster)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"get_LocomotionBroadcaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState.set_LocomotionBroadcaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*)>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::set_LocomotionBroadcaster)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"set_LocomotionBroadcaster", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState.get_IdleTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::get_IdleTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"get_IdleTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState.set_IdleTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::set_IdleTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"set_IdleTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::get_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState.set_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)(bool)>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::set_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c5f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4c5f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4c6000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::OnEnable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa4c602c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::OnDisable)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa4c6128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::Update)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa4c622c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState.HandleLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::HandleLocomotionPerformed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4c6278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"HandleLocomotionPerformed", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActiveState::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActiveState::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa4c62c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__locomotionBroadcaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotionBroadcaster;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__locomotionBroadcaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotionBroadcaster;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_set__locomotionBroadcaster(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locomotionBroadcaster = value;
}
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__LocomotionBroadcaster_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocomotionBroadcaster_k__BackingField;
}
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* const& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__LocomotionBroadcaster_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocomotionBroadcaster_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_set__LocomotionBroadcaster_k__BackingField(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocomotionBroadcaster_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__idleTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idleTime;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__idleTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idleTime;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_set__idleTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____idleTime = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr bool& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__Active_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr bool const& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__Active_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_set__Active_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Active_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__lastEventTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastEventTime;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__lastEventTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastEventTime;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_set__lastEventTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastEventTime = value;
}
constexpr bool& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionActiveState::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* Oculus::Interaction::Locomotion::LocomotionActiveState::get_LocomotionBroadcaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"get_LocomotionBroadcaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActiveState::set_LocomotionBroadcaster(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"set_LocomotionBroadcaster", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::LocomotionActiveState::get_IdleTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"get_IdleTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActiveState::set_IdleTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"set_IdleTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionActiveState::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline bool Oculus::Interaction::Locomotion::LocomotionActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActiveState::set_Active(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionActiveState::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActiveState::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActiveState::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActiveState::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActiveState::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionActiveState::HandleLocomotionPerformed(::Oculus::Interaction::Locomotion::LocomotionEvent  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {"HandleLocomotionPerformed", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Oculus::Interaction::Locomotion::LocomotionActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionActiveState* Oculus::Interaction::Locomotion::LocomotionActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::Locomotion::LocomotionActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::Locomotion::LocomotionActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::Locomotion::LocomotionActiveState::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::Locomotion::LocomotionActiveState::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionActiveState::LocomotionActiveState()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionActiveState___c::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActiveState___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c6424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionActiveState___c.__ctor_b__23_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionActiveState___c::*)()>(&::Oculus::Interaction::Locomotion::LocomotionActiveState___c::__ctor_b__23_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c642c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState___c*>(),
                        {"<.ctor>b__23_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::LocomotionActiveState___c::setStaticF___9(::Oculus::Interaction::Locomotion::LocomotionActiveState___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::LocomotionActiveState___c*, "<>9", ::Oculus::Interaction::Locomotion::LocomotionActiveState___c*>(std::forward<::Oculus::Interaction::Locomotion::LocomotionActiveState___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::LocomotionActiveState___c* Oculus::Interaction::Locomotion::LocomotionActiveState___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::LocomotionActiveState___c*, "<>9", ::Oculus::Interaction::Locomotion::LocomotionActiveState___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionActiveState___c::setStaticF___9__23_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__23_0", ::Oculus::Interaction::Locomotion::LocomotionActiveState___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::Locomotion::LocomotionActiveState___c::getStaticF___9__23_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__23_0", ::Oculus::Interaction::Locomotion::LocomotionActiveState___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionActiveState___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::LocomotionActiveState___c::__ctor_b__23_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionActiveState___c*>(),
                        {"<.ctor>b__23_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionActiveState___c* Oculus::Interaction::Locomotion::LocomotionActiveState___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionActiveState___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionActiveState___c::LocomotionActiveState___c()   {
}
