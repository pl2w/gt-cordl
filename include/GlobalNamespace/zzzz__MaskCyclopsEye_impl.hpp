#pragma once
// IWYU pragma private; include "GlobalNamespace/MaskCyclopsEye.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MaskCyclopsEye_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaskCyclopsEye.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaskCyclopsEye::*)()>(&::GlobalNamespace::MaskCyclopsEye::OnEnable)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57f0468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaskCyclopsEye*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaskCyclopsEye.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaskCyclopsEye::*)()>(&::GlobalNamespace::MaskCyclopsEye::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57f04d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaskCyclopsEye*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaskCyclopsEye.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaskCyclopsEye::*)()>(&::GlobalNamespace::MaskCyclopsEye::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57f04dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaskCyclopsEye*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaskCyclopsEye.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaskCyclopsEye::*)()>(&::GlobalNamespace::MaskCyclopsEye::Tick)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57f0538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaskCyclopsEye*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaskCyclopsEye.ScheduleNextBlink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaskCyclopsEye::*)()>(&::GlobalNamespace::MaskCyclopsEye::ScheduleNextBlink)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57f04a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaskCyclopsEye*>(),
                        {"ScheduleNextBlink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaskCyclopsEye._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaskCyclopsEye::*)()>(&::GlobalNamespace::MaskCyclopsEye::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57f0594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaskCyclopsEye*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::MaskCyclopsEye::__cordl_internal_get_OnBlink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBlink;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::MaskCyclopsEye::__cordl_internal_get_OnBlink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBlink;
}
constexpr void GlobalNamespace::MaskCyclopsEye::__cordl_internal_set_OnBlink(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnBlink = value;
}
constexpr float_t& GlobalNamespace::MaskCyclopsEye::__cordl_internal_get_minWaitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minWaitTime;
}
constexpr float_t const& GlobalNamespace::MaskCyclopsEye::__cordl_internal_get_minWaitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minWaitTime;
}
constexpr void GlobalNamespace::MaskCyclopsEye::__cordl_internal_set_minWaitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minWaitTime = value;
}
constexpr float_t& GlobalNamespace::MaskCyclopsEye::__cordl_internal_get_maxWaitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxWaitTime;
}
constexpr float_t const& GlobalNamespace::MaskCyclopsEye::__cordl_internal_get_maxWaitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxWaitTime;
}
constexpr void GlobalNamespace::MaskCyclopsEye::__cordl_internal_set_maxWaitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxWaitTime = value;
}
constexpr float_t& GlobalNamespace::MaskCyclopsEye::__cordl_internal_get_nextBlinkTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextBlinkTime;
}
constexpr float_t const& GlobalNamespace::MaskCyclopsEye::__cordl_internal_get_nextBlinkTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextBlinkTime;
}
constexpr void GlobalNamespace::MaskCyclopsEye::__cordl_internal_set_nextBlinkTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextBlinkTime = value;
}
inline void GlobalNamespace::MaskCyclopsEye::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaskCyclopsEye*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaskCyclopsEye::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaskCyclopsEye*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaskCyclopsEye::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaskCyclopsEye*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaskCyclopsEye::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaskCyclopsEye*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaskCyclopsEye::ScheduleNextBlink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaskCyclopsEye*>(),
                        {"ScheduleNextBlink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaskCyclopsEye::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaskCyclopsEye*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaskCyclopsEye* GlobalNamespace::MaskCyclopsEye::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaskCyclopsEye*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaskCyclopsEye::MaskCyclopsEye()   {
}
