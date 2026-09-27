#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderBumpGlow.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderBumpGlow_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderBumpGlow.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderBumpGlow::*)()>(&::GlobalNamespace::BuilderBumpGlow::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57b5e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderBumpGlow*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderBumpGlow.SetIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderBumpGlow::*)(float_t)>(&::GlobalNamespace::BuilderBumpGlow::SetIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b5e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderBumpGlow*>(),
                        {"SetIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderBumpGlow.SetBlendIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderBumpGlow::*)(float_t)>(&::GlobalNamespace::BuilderBumpGlow::SetBlendIn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b5e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderBumpGlow*>(),
                        {"SetBlendIn", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderBumpGlow.UpdateRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderBumpGlow::*)()>(&::GlobalNamespace::BuilderBumpGlow::UpdateRender)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b5e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderBumpGlow*>(),
                        {"UpdateRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderBumpGlow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderBumpGlow::*)()>(&::GlobalNamespace::BuilderBumpGlow::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b5e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderBumpGlow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::BuilderBumpGlow::__cordl_internal_get_glowRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glowRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::BuilderBumpGlow::__cordl_internal_get_glowRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glowRenderer;
}
constexpr void GlobalNamespace::BuilderBumpGlow::__cordl_internal_set_glowRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___glowRenderer = value;
}
constexpr float_t& GlobalNamespace::BuilderBumpGlow::__cordl_internal_get_blendIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendIn;
}
constexpr float_t const& GlobalNamespace::BuilderBumpGlow::__cordl_internal_get_blendIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendIn;
}
constexpr void GlobalNamespace::BuilderBumpGlow::__cordl_internal_set_blendIn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendIn = value;
}
constexpr float_t& GlobalNamespace::BuilderBumpGlow::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr float_t const& GlobalNamespace::BuilderBumpGlow::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void GlobalNamespace::BuilderBumpGlow::__cordl_internal_set_intensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
inline void GlobalNamespace::BuilderBumpGlow::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderBumpGlow*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderBumpGlow::SetIntensity(float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderBumpGlow*>(),
                        {"SetIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, intensity);
}
inline void GlobalNamespace::BuilderBumpGlow::SetBlendIn(float_t  blendIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderBumpGlow*>(),
                        {"SetBlendIn", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blendIn);
}
inline void GlobalNamespace::BuilderBumpGlow::UpdateRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderBumpGlow*>(),
                        {"UpdateRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderBumpGlow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderBumpGlow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderBumpGlow* GlobalNamespace::BuilderBumpGlow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderBumpGlow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderBumpGlow::BuilderBumpGlow()   {
}
