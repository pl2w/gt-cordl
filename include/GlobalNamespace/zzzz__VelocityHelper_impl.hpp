#pragma once
// IWYU pragma private; include "GlobalNamespace/VelocityHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VelocityHelper_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VelocityHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityHelper::*)(int32_t)>(&::GlobalNamespace::VelocityHelper::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a22378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelper*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VelocityHelper.SamplePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityHelper::*)(::UnityEngine::Transform*, float_t)>(&::GlobalNamespace::VelocityHelper::SamplePosition)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a223ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelper*>(),
                        {"SamplePosition", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VelocityHelper._InitSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityHelper::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::VelocityHelper::_InitSamples)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a224b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelper*>(),
                        {"_InitSamples", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VelocityHelper._SetSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VelocityHelper::*)(int32_t, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::VelocityHelper::_SetSample)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a22530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelper*>(),
                        {"_SetSample", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& GlobalNamespace::VelocityHelper::__cordl_internal_get__samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::VelocityHelper::__cordl_internal_get__samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples;
}
constexpr void GlobalNamespace::VelocityHelper::__cordl_internal_set__samples(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____samples = value;
}
constexpr int32_t& GlobalNamespace::VelocityHelper::__cordl_internal_get__latest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latest;
}
constexpr int32_t const& GlobalNamespace::VelocityHelper::__cordl_internal_get__latest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latest;
}
constexpr void GlobalNamespace::VelocityHelper::__cordl_internal_set__latest(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____latest = value;
}
constexpr int32_t& GlobalNamespace::VelocityHelper::__cordl_internal_get__size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr int32_t const& GlobalNamespace::VelocityHelper::__cordl_internal_get__size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr void GlobalNamespace::VelocityHelper::__cordl_internal_set__size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size = value;
}
constexpr bool& GlobalNamespace::VelocityHelper::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::VelocityHelper::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::VelocityHelper::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
inline void GlobalNamespace::VelocityHelper::_ctor(int32_t  historySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelper*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, historySize);
}
inline void GlobalNamespace::VelocityHelper::SamplePosition(::UnityEngine::Transform*  target, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelper*>(),
                        {"SamplePosition", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, dt);
}
inline void GlobalNamespace::VelocityHelper::_InitSamples(::UnityEngine::Vector3  position, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelper*>(),
                        {"_InitSamples", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, dt);
}
inline void GlobalNamespace::VelocityHelper::_SetSample(int32_t  i, ::UnityEngine::Vector3  position, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VelocityHelper*>(),
                        {"_SetSample", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, position, dt);
}
inline ::GlobalNamespace::VelocityHelper* GlobalNamespace::VelocityHelper::New_ctor(int32_t  historySize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VelocityHelper*>(historySize));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VelocityHelper::VelocityHelper()   {
}
