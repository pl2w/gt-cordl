#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/ZoneLiquidEffectable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "GorillaTag/Rendering/zzzz__ZoneLiquidEffectable_def.hpp"
//  Writing Method size for method: ::GorillaTag::Rendering::ZoneLiquidEffectable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::ZoneLiquidEffectable::*)()>(&::GorillaTag::Rendering::ZoneLiquidEffectable::Awake)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d5a430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::ZoneLiquidEffectable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::ZoneLiquidEffectable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::ZoneLiquidEffectable::*)()>(&::GorillaTag::Rendering::ZoneLiquidEffectable::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d5a48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::ZoneLiquidEffectable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::ZoneLiquidEffectable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::ZoneLiquidEffectable::*)()>(&::GorillaTag::Rendering::ZoneLiquidEffectable::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d5a490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::ZoneLiquidEffectable*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::ZoneLiquidEffectable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::ZoneLiquidEffectable::*)()>(&::GorillaTag::Rendering::ZoneLiquidEffectable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d5a494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::ZoneLiquidEffectable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Rendering::ZoneLiquidEffectable::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& GorillaTag::Rendering::ZoneLiquidEffectable::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void GorillaTag::Rendering::ZoneLiquidEffectable::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr bool& GorillaTag::Rendering::ZoneLiquidEffectable::__cordl_internal_get_inLiquidVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inLiquidVolume;
}
constexpr bool const& GorillaTag::Rendering::ZoneLiquidEffectable::__cordl_internal_get_inLiquidVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inLiquidVolume;
}
constexpr void GorillaTag::Rendering::ZoneLiquidEffectable::__cordl_internal_set_inLiquidVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inLiquidVolume = value;
}
constexpr bool& GorillaTag::Rendering::ZoneLiquidEffectable::__cordl_internal_get_wasInLiquidVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInLiquidVolume;
}
constexpr bool const& GorillaTag::Rendering::ZoneLiquidEffectable::__cordl_internal_get_wasInLiquidVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasInLiquidVolume;
}
constexpr void GorillaTag::Rendering::ZoneLiquidEffectable::__cordl_internal_set_wasInLiquidVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasInLiquidVolume = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GorillaTag::Rendering::ZoneLiquidEffectable::__cordl_internal_get_childRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___childRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GorillaTag::Rendering::ZoneLiquidEffectable::__cordl_internal_get_childRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___childRenderers;
}
constexpr void GorillaTag::Rendering::ZoneLiquidEffectable::__cordl_internal_set_childRenderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___childRenderers = value;
}
inline void GorillaTag::Rendering::ZoneLiquidEffectable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::ZoneLiquidEffectable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::ZoneLiquidEffectable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::ZoneLiquidEffectable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::ZoneLiquidEffectable::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::ZoneLiquidEffectable*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::ZoneLiquidEffectable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::ZoneLiquidEffectable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Rendering::ZoneLiquidEffectable* GorillaTag::Rendering::ZoneLiquidEffectable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Rendering::ZoneLiquidEffectable*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Rendering::ZoneLiquidEffectable::ZoneLiquidEffectable()   {
}
