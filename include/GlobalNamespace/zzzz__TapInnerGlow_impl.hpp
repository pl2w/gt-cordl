#pragma once
// IWYU pragma private; include "GlobalNamespace/TapInnerGlow.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TapInnerGlow_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TapInnerGlow.get_targetMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::TapInnerGlow::*)()>(&::GlobalNamespace::TapInnerGlow::get_targetMaterial)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x595f110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapInnerGlow*>(),
                        {"get_targetMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapInnerGlow.Tap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TapInnerGlow::*)()>(&::GlobalNamespace::TapInnerGlow::Tap)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x595f210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapInnerGlow*>(),
                        {"Tap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TapInnerGlow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TapInnerGlow::*)()>(&::GlobalNamespace::TapInnerGlow::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x595f37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapInnerGlow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::TapInnerGlow::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::TapInnerGlow::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void GlobalNamespace::TapInnerGlow::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr float_t& GlobalNamespace::TapInnerGlow::__cordl_internal_get_tapLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapLength;
}
constexpr float_t const& GlobalNamespace::TapInnerGlow::__cordl_internal_get_tapLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapLength;
}
constexpr void GlobalNamespace::TapInnerGlow::__cordl_internal_set_tapLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapLength = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::TapInnerGlow::__cordl_internal_get__instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::TapInnerGlow::__cordl_internal_get__instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance;
}
constexpr void GlobalNamespace::TapInnerGlow::__cordl_internal_set__instance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instance = value;
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::TapInnerGlow::get_targetMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapInnerGlow*>(),
                        {"get_targetMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void GlobalNamespace::TapInnerGlow::Tap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapInnerGlow*>(),
                        {"Tap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TapInnerGlow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TapInnerGlow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TapInnerGlow* GlobalNamespace::TapInnerGlow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TapInnerGlow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TapInnerGlow::TapInnerGlow()   {
}
