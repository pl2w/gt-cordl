#pragma once
// IWYU pragma private; include "GlobalNamespace/GRFadeAndDestroyLight.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRFadeAndDestroyLight_def.hpp"
#include "GlobalNamespace/zzzz__GameLight_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRFadeAndDestroyLight.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRFadeAndDestroyLight::*)()>(&::GlobalNamespace::GRFadeAndDestroyLight::Start)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x589a864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFadeAndDestroyLight*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRFadeAndDestroyLight.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRFadeAndDestroyLight::*)()>(&::GlobalNamespace::GRFadeAndDestroyLight::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589a900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFadeAndDestroyLight*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRFadeAndDestroyLight.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRFadeAndDestroyLight::*)()>(&::GlobalNamespace::GRFadeAndDestroyLight::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589a904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFadeAndDestroyLight*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRFadeAndDestroyLight.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRFadeAndDestroyLight::*)()>(&::GlobalNamespace::GRFadeAndDestroyLight::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x589a908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFadeAndDestroyLight*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRFadeAndDestroyLight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRFadeAndDestroyLight::*)()>(&::GlobalNamespace::GRFadeAndDestroyLight::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x589a9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFadeAndDestroyLight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_get_TimeToFade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeToFade;
}
constexpr float_t const& GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_get_TimeToFade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeToFade;
}
constexpr void GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_set_TimeToFade(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TimeToFade = value;
}
constexpr float_t& GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_get_fadeRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeRate;
}
constexpr float_t const& GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_get_fadeRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeRate;
}
constexpr void GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_set_fadeRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeRate = value;
}
constexpr ::UnityW<::GlobalNamespace::GameLight>& GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_get_gameLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameLight;
}
constexpr ::UnityW<::GlobalNamespace::GameLight> const& GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_get_gameLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameLight;
}
constexpr void GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_set_gameLight(::UnityW<::GlobalNamespace::GameLight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameLight = value;
}
constexpr float_t& GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_get_timeSlice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSlice;
}
constexpr float_t const& GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_get_timeSlice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSlice;
}
constexpr void GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_set_timeSlice(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSlice = value;
}
constexpr float_t& GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_get_timeSinceLastUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceLastUpdate;
}
constexpr float_t const& GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_get_timeSinceLastUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSinceLastUpdate;
}
constexpr void GlobalNamespace::GRFadeAndDestroyLight::__cordl_internal_set_timeSinceLastUpdate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSinceLastUpdate = value;
}
inline void GlobalNamespace::GRFadeAndDestroyLight::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFadeAndDestroyLight*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRFadeAndDestroyLight::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFadeAndDestroyLight*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRFadeAndDestroyLight::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFadeAndDestroyLight*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRFadeAndDestroyLight::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFadeAndDestroyLight*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRFadeAndDestroyLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRFadeAndDestroyLight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRFadeAndDestroyLight* GlobalNamespace::GRFadeAndDestroyLight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRFadeAndDestroyLight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRFadeAndDestroyLight::GRFadeAndDestroyLight()   {
}
