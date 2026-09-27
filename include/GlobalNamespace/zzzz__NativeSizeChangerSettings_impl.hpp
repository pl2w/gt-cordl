#pragma once
// IWYU pragma private; include "GlobalNamespace/NativeSizeChangerSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__NativeSizeChangerSettings_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NativeSizeChangerSettings.get_WorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::NativeSizeChangerSettings::*)()>(&::GlobalNamespace::NativeSizeChangerSettings::get_WorldPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56d39f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChangerSettings*>(),
                        {"get_WorldPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NativeSizeChangerSettings.set_WorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeSizeChangerSettings::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::NativeSizeChangerSettings::set_WorldPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56d3a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChangerSettings*>(),
                        {"set_WorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NativeSizeChangerSettings.get_ActivationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NativeSizeChangerSettings::*)()>(&::GlobalNamespace::NativeSizeChangerSettings::get_ActivationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d3a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChangerSettings*>(),
                        {"get_ActivationTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NativeSizeChangerSettings.set_ActivationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeSizeChangerSettings::*)(float_t)>(&::GlobalNamespace::NativeSizeChangerSettings::set_ActivationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d3a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChangerSettings*>(),
                        {"set_ActivationTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NativeSizeChangerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeSizeChangerSettings::*)()>(&::GlobalNamespace::NativeSizeChangerSettings::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56d3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChangerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_worldPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_worldPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldPosition;
}
constexpr void GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_set_worldPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldPosition = value;
}
constexpr float_t& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_activationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationTime;
}
constexpr float_t const& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_activationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationTime;
}
constexpr void GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_set_activationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationTime = value;
}
constexpr float_t& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_playerSizeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerSizeScale;
}
constexpr float_t const& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_playerSizeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerSizeScale;
}
constexpr void GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_set_playerSizeScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerSizeScale = value;
}
constexpr bool& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_ExpireOnRoomJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpireOnRoomJoin;
}
constexpr bool const& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_ExpireOnRoomJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpireOnRoomJoin;
}
constexpr void GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_set_ExpireOnRoomJoin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpireOnRoomJoin = value;
}
constexpr bool& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_ExpireInWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpireInWater;
}
constexpr bool const& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_ExpireInWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpireInWater;
}
constexpr void GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_set_ExpireInWater(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpireInWater = value;
}
constexpr float_t& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_ExpireAfterSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpireAfterSeconds;
}
constexpr float_t const& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_ExpireAfterSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpireAfterSeconds;
}
constexpr void GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_set_ExpireAfterSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpireAfterSeconds = value;
}
constexpr float_t& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_ExpireOnDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpireOnDistance;
}
constexpr float_t const& GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_get_ExpireOnDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpireOnDistance;
}
constexpr void GlobalNamespace::NativeSizeChangerSettings::__cordl_internal_set_ExpireOnDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpireOnDistance = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::NativeSizeChangerSettings::get_WorldPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChangerSettings*>(),
                        {"get_WorldPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::NativeSizeChangerSettings::set_WorldPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChangerSettings*>(),
                        {"set_WorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NativeSizeChangerSettings::get_ActivationTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChangerSettings*>(),
                        {"get_ActivationTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NativeSizeChangerSettings::set_ActivationTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChangerSettings*>(),
                        {"set_ActivationTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NativeSizeChangerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChangerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NativeSizeChangerSettings* GlobalNamespace::NativeSizeChangerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NativeSizeChangerSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeSizeChangerSettings::NativeSizeChangerSettings()   {
}
