#pragma once
// IWYU pragma private; include "GlobalNamespace/CameraShaker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__CameraShaker_def.hpp"
#include "GlobalNamespace/zzzz__CameraShaker_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_6_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CameraShaker.add_ShakeRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*)>(&::GlobalNamespace::CameraShaker::add_ShakeRequested)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55ec9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"add_ShakeRequested", {}, {::i2c::type_of<::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker.remove_ShakeRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*)>(&::GlobalNamespace::CameraShaker::remove_ShakeRequested)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55ecab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"remove_ShakeRequested", {}, {::i2c::type_of<::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker.add_HaltRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::CameraShaker::add_HaltRequested)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x55ecb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"add_HaltRequested", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker.remove_HaltRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::CameraShaker::remove_HaltRequested)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x55ecc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"remove_HaltRequested", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker.Shake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t)>(&::GlobalNamespace::CameraShaker::Shake)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55eccf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"Shake", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker.Shake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, ::UnityEngine::Vector2)>(&::GlobalNamespace::CameraShaker::Shake)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x55ecd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"Shake", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker.Shake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, ::UnityEngine::Vector2, bool)>(&::GlobalNamespace::CameraShaker::Shake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55ec7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"Shake", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker.ShakeInProximity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, ::UnityEngine::Vector2, bool, ::UnityEngine::Transform*, float_t)>(&::GlobalNamespace::CameraShaker::ShakeInProximity)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55ec890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"ShakeInProximity", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker.Halt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CameraShaker::Halt)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x55ec95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"Halt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShaker::*)()>(&::GlobalNamespace::CameraShaker::OnEnable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x55ece3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker._ShakeRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShaker::*)(float_t, float_t, ::UnityEngine::Vector2, bool, ::UnityEngine::Transform*, float_t)>(&::GlobalNamespace::CameraShaker::_ShakeRequested)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x55ecf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"_ShakeRequested", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker._HaltRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShaker::*)()>(&::GlobalNamespace::CameraShaker::_HaltRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x55ed0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"_HaltRequested", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShaker::*)()>(&::GlobalNamespace::CameraShaker::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x55ed0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShaker::*)()>(&::GlobalNamespace::CameraShaker::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x55ed1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker.crRumble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::CameraShaker::*)()>(&::GlobalNamespace::CameraShaker::crRumble)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x55ed070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"crRumble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShaker::*)()>(&::GlobalNamespace::CameraShaker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ed2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CameraShaker::__cordl_internal_get_rumbling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rumbling;
}
constexpr bool const& GlobalNamespace::CameraShaker::__cordl_internal_get_rumbling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rumbling;
}
constexpr void GlobalNamespace::CameraShaker::__cordl_internal_set_rumbling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rumbling = value;
}
constexpr float_t& GlobalNamespace::CameraShaker::__cordl_internal_get_stopTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopTime;
}
constexpr float_t const& GlobalNamespace::CameraShaker::__cordl_internal_get_stopTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopTime;
}
constexpr void GlobalNamespace::CameraShaker::__cordl_internal_set_stopTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopTime = value;
}
constexpr bool& GlobalNamespace::CameraShaker::__cordl_internal_get_rollOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollOff;
}
constexpr bool const& GlobalNamespace::CameraShaker::__cordl_internal_get_rollOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollOff;
}
constexpr void GlobalNamespace::CameraShaker::__cordl_internal_set_rollOff(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rollOff = value;
}
constexpr float_t& GlobalNamespace::CameraShaker::__cordl_internal_get_magnitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnitude;
}
constexpr float_t const& GlobalNamespace::CameraShaker::__cordl_internal_get_magnitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnitude;
}
constexpr void GlobalNamespace::CameraShaker::__cordl_internal_set_magnitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnitude = value;
}
constexpr float_t& GlobalNamespace::CameraShaker::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::CameraShaker::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::CameraShaker::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::CameraShaker::__cordl_internal_get_freqRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freqRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CameraShaker::__cordl_internal_get_freqRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freqRange;
}
constexpr void GlobalNamespace::CameraShaker::__cordl_internal_set_freqRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freqRange = value;
}
inline void GlobalNamespace::CameraShaker::setStaticF_ShakeRequested(::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*, "ShakeRequested", ::GlobalNamespace::CameraShaker*>(std::forward<::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*>(value));
}
inline ::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>* GlobalNamespace::CameraShaker::getStaticF_ShakeRequested()  {
return ::cordl_internals::getStaticField<::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*, "ShakeRequested", ::GlobalNamespace::CameraShaker*>();
}
inline void GlobalNamespace::CameraShaker::setStaticF_HaltRequested(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "HaltRequested", ::GlobalNamespace::CameraShaker*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::CameraShaker::getStaticF_HaltRequested()  {
return ::cordl_internals::getStaticField<::System::Action*, "HaltRequested", ::GlobalNamespace::CameraShaker*>();
}
inline void GlobalNamespace::CameraShaker::add_ShakeRequested(::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"add_ShakeRequested", {}, {::i2c::type_of<::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CameraShaker::remove_ShakeRequested(::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"remove_ShakeRequested", {}, {::i2c::type_of<::System::Action_6<float_t,float_t,::UnityEngine::Vector2,bool,::UnityW<::UnityEngine::Transform>,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CameraShaker::add_HaltRequested(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"add_HaltRequested", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CameraShaker::remove_HaltRequested(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"remove_HaltRequested", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CameraShaker::Shake(float_t  duration, float_t  magnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"Shake", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, duration, magnitude);
}
inline void GlobalNamespace::CameraShaker::Shake(float_t  duration, float_t  magnitude, ::UnityEngine::Vector2  freqRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"Shake", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, duration, magnitude, freqRange);
}
inline void GlobalNamespace::CameraShaker::Shake(float_t  duration, float_t  magnitude, ::UnityEngine::Vector2  freqRange, bool  rollOffOverDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"Shake", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, duration, magnitude, freqRange, rollOffOverDuration);
}
inline void GlobalNamespace::CameraShaker::ShakeInProximity(float_t  duration, float_t  magnitude, ::UnityEngine::Vector2  freqRange, bool  rollOffOverDuration, ::UnityEngine::Transform*  source, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"ShakeInProximity", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, duration, magnitude, freqRange, rollOffOverDuration, source, distance);
}
inline void GlobalNamespace::CameraShaker::Halt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"Halt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CameraShaker::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CameraShaker::_ShakeRequested(float_t  _duration, float_t  _magnitude, ::UnityEngine::Vector2  _freqRange, bool  _rollOff, ::UnityEngine::Transform*  source, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"_ShakeRequested", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _duration, _magnitude, _freqRange, _rollOff, source, distance);
}
inline void GlobalNamespace::CameraShaker::_HaltRequested()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"_HaltRequested", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CameraShaker::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CameraShaker::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CameraShaker::crRumble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {"crRumble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::CameraShaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CameraShaker* GlobalNamespace::CameraShaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CameraShaker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CameraShaker::CameraShaker()   {
}
//  Writing Method size for method: ::GlobalNamespace::CameraShaker__crRumble_d__22._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShaker__crRumble_d__22::*)(int32_t)>(&::GlobalNamespace::CameraShaker__crRumble_d__22::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55ed298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker__crRumble_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker__crRumble_d__22.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShaker__crRumble_d__22::*)()>(&::GlobalNamespace::CameraShaker__crRumble_d__22::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55ed2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker__crRumble_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker__crRumble_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CameraShaker__crRumble_d__22::*)()>(&::GlobalNamespace::CameraShaker__crRumble_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x55ed2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker__crRumble_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker__crRumble_d__22.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CameraShaker__crRumble_d__22::*)()>(&::GlobalNamespace::CameraShaker__crRumble_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ed438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker__crRumble_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker__crRumble_d__22.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraShaker__crRumble_d__22::*)()>(&::GlobalNamespace::CameraShaker__crRumble_d__22::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x55ed440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker__crRumble_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraShaker__crRumble_d__22.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CameraShaker__crRumble_d__22::*)()>(&::GlobalNamespace::CameraShaker__crRumble_d__22::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ed478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker__crRumble_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CameraShaker__crRumble_d__22::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CameraShaker__crRumble_d__22::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CameraShaker__crRumble_d__22::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CameraShaker__crRumble_d__22::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CameraShaker__crRumble_d__22::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CameraShaker__crRumble_d__22::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::CameraShaker>& GlobalNamespace::CameraShaker__crRumble_d__22::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::CameraShaker> const& GlobalNamespace::CameraShaker__crRumble_d__22::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::CameraShaker__crRumble_d__22::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CameraShaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::CameraShaker__crRumble_d__22::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker__crRumble_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CameraShaker__crRumble_d__22::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker__crRumble_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CameraShaker__crRumble_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker__crRumble_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CameraShaker__crRumble_d__22::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker__crRumble_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CameraShaker__crRumble_d__22::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker__crRumble_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CameraShaker__crRumble_d__22::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraShaker__crRumble_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CameraShaker__crRumble_d__22* GlobalNamespace::CameraShaker__crRumble_d__22::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CameraShaker__crRumble_d__22*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CameraShaker__crRumble_d__22::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CameraShaker__crRumble_d__22::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CameraShaker__crRumble_d__22::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CameraShaker__crRumble_d__22::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CameraShaker__crRumble_d__22::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CameraShaker__crRumble_d__22::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CameraShaker__crRumble_d__22::CameraShaker__crRumble_d__22()   {
}
