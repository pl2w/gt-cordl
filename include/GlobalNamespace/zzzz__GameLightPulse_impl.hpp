#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLightPulse.hpp"
#include "GlobalNamespace/zzzz__GameLight_impl.hpp"
#include "GlobalNamespace/zzzz__GameLightPulse_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameLightPulse.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightPulse::*)()>(&::GlobalNamespace::GameLightPulse::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5837b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightPulse*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightPulse.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightPulse::*)()>(&::GlobalNamespace::GameLightPulse::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5837ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightPulse*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightPulse.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightPulse::*)()>(&::GlobalNamespace::GameLightPulse::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5837bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightPulse*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightPulse.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightPulse::*)()>(&::GlobalNamespace::GameLightPulse::SliceUpdate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5837bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightPulse*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightPulse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightPulse::*)()>(&::GlobalNamespace::GameLightPulse::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5837c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightPulse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GameLightPulse::__cordl_internal_get_startingIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingIntensity;
}
constexpr float_t const& GlobalNamespace::GameLightPulse::__cordl_internal_get_startingIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingIntensity;
}
constexpr void GlobalNamespace::GameLightPulse::__cordl_internal_set_startingIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingIntensity = value;
}
constexpr float_t& GlobalNamespace::GameLightPulse::__cordl_internal_get_frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frequency;
}
constexpr float_t const& GlobalNamespace::GameLightPulse::__cordl_internal_get_frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frequency;
}
constexpr void GlobalNamespace::GameLightPulse::__cordl_internal_set_frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frequency = value;
}
constexpr float_t& GlobalNamespace::GameLightPulse::__cordl_internal_get_offsetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetTime;
}
constexpr float_t const& GlobalNamespace::GameLightPulse::__cordl_internal_get_offsetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetTime;
}
constexpr void GlobalNamespace::GameLightPulse::__cordl_internal_set_offsetTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetTime = value;
}
inline void GlobalNamespace::GameLightPulse::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightPulse*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightPulse::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightPulse*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightPulse::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightPulse*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightPulse::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightPulse*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightPulse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightPulse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameLightPulse* GlobalNamespace::GameLightPulse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameLightPulse*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::GameLightPulse::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::GameLightPulse::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLightPulse::GameLightPulse()   {
}
