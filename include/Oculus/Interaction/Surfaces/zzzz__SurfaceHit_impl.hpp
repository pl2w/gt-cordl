#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/SurfaceHit.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::SurfaceHit.get_Point
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Surfaces::SurfaceHit::*)()>(&::Oculus::Interaction::Surfaces::SurfaceHit::get_Point)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4b6da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::SurfaceHit>(),
                        {"get_Point", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::SurfaceHit.set_Point
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::SurfaceHit::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Surfaces::SurfaceHit::set_Point)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4b6db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::SurfaceHit>(),
                        {"set_Point", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::SurfaceHit.get_Normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Surfaces::SurfaceHit::*)()>(&::Oculus::Interaction::Surfaces::SurfaceHit::get_Normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4b6dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::SurfaceHit>(),
                        {"get_Normal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::SurfaceHit.set_Normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::SurfaceHit::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Surfaces::SurfaceHit::set_Normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4b6dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::SurfaceHit>(),
                        {"set_Normal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::SurfaceHit.get_Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Surfaces::SurfaceHit::*)()>(&::Oculus::Interaction::Surfaces::SurfaceHit::get_Distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b6dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::SurfaceHit>(),
                        {"get_Distance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::SurfaceHit.set_Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::SurfaceHit::*)(float_t)>(&::Oculus::Interaction::Surfaces::SurfaceHit::set_Distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b6de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::SurfaceHit>(),
                        {"set_Distance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Oculus::Interaction::Surfaces::SurfaceHit::get_Point()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::SurfaceHit>(),
                        {"get_Point", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::SurfaceHit::set_Point(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::SurfaceHit>(),
                        {"set_Point", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Surfaces::SurfaceHit::get_Normal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::SurfaceHit>(),
                        {"get_Normal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::SurfaceHit::set_Normal(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::SurfaceHit>(),
                        {"set_Normal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Surfaces::SurfaceHit::get_Distance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::SurfaceHit>(),
                        {"get_Distance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::SurfaceHit::set_Distance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::SurfaceHit>(),
                        {"set_Distance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Point_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Normal_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Distance_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Surfaces::SurfaceHit::SurfaceHit(::UnityEngine::Vector3  _Point_k__BackingField, ::UnityEngine::Vector3  _Normal_k__BackingField, float_t  _Distance_k__BackingField) noexcept  {
this->_Point_k__BackingField = _Point_k__BackingField;
this->_Normal_k__BackingField = _Normal_k__BackingField;
this->_Distance_k__BackingField = _Distance_k__BackingField;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Surfaces::SurfaceHit::SurfaceHit()   {
}
