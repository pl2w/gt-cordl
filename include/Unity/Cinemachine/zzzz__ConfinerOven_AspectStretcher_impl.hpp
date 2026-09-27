#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ConfinerOven_AspectStretcher.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_AspectStretcher_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConfinerOven_AspectStretcher.get_Aspect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ConfinerOven_AspectStretcher::*)()>(&::GlobalNamespace::ConfinerOven_AspectStretcher::get_Aspect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb7354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfinerOven_AspectStretcher>(),
                        {"get_Aspect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConfinerOven_AspectStretcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConfinerOven_AspectStretcher::*)(float_t, float_t)>(&::GlobalNamespace::ConfinerOven_AspectStretcher::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeb51c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfinerOven_AspectStretcher>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConfinerOven_AspectStretcher.Stretch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::ConfinerOven_AspectStretcher::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::ConfinerOven_AspectStretcher::Stretch)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeb5ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfinerOven_AspectStretcher>(),
                        {"Stretch", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConfinerOven_AspectStretcher.Unstretch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::ConfinerOven_AspectStretcher::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::ConfinerOven_AspectStretcher::Unstretch)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeb71c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfinerOven_AspectStretcher>(),
                        {"Unstretch", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::ConfinerOven_AspectStretcher::get_Aspect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfinerOven_AspectStretcher>(),
                        {"get_Aspect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ConfinerOven_AspectStretcher::_ctor(float_t  aspect, float_t  centerX)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfinerOven_AspectStretcher>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aspect, centerX);
}
inline ::UnityEngine::Vector2 GlobalNamespace::ConfinerOven_AspectStretcher::Stretch(::UnityEngine::Vector2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfinerOven_AspectStretcher>(),
                        {"Stretch", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, p);
}
inline ::UnityEngine::Vector2 GlobalNamespace::ConfinerOven_AspectStretcher::Unstretch(::UnityEngine::Vector2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfinerOven_AspectStretcher>(),
                        {"Unstretch", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, p);
}
// Ctor Parameters [CppParam { name: "_Aspect_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InverseAspect", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CenterX", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ConfinerOven_AspectStretcher::ConfinerOven_AspectStretcher(float_t  _Aspect_k__BackingField, float_t  m_InverseAspect, float_t  m_CenterX) noexcept  {
this->_Aspect_k__BackingField = _Aspect_k__BackingField;
this->m_InverseAspect = m_InverseAspect;
this->m_CenterX = m_CenterX;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConfinerOven_AspectStretcher::ConfinerOven_AspectStretcher()   {
}
