#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRRayInteractor_SamplePoint.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_SamplePoint_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRRayInteractor_SamplePoint.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::GlobalNamespace::XRRayInteractor_SamplePoint::*)()>(&::GlobalNamespace::XRRayInteractor_SamplePoint::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb480748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRRayInteractor_SamplePoint>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRRayInteractor_SamplePoint.set_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRRayInteractor_SamplePoint::*)(::Unity::Mathematics::float3)>(&::GlobalNamespace::XRRayInteractor_SamplePoint::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb480754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRRayInteractor_SamplePoint>(),
                        {"set_position", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRRayInteractor_SamplePoint.get_parameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::XRRayInteractor_SamplePoint::*)()>(&::GlobalNamespace::XRRayInteractor_SamplePoint::get_parameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb480760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRRayInteractor_SamplePoint>(),
                        {"get_parameter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRRayInteractor_SamplePoint.set_parameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRRayInteractor_SamplePoint::*)(float_t)>(&::GlobalNamespace::XRRayInteractor_SamplePoint::set_parameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb480768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRRayInteractor_SamplePoint>(),
                        {"set_parameter", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::float3 GlobalNamespace::XRRayInteractor_SamplePoint::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRRayInteractor_SamplePoint>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method);
}
inline void GlobalNamespace::XRRayInteractor_SamplePoint::set_position(::Unity::Mathematics::float3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRRayInteractor_SamplePoint>(),
                        {"set_position", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::XRRayInteractor_SamplePoint::get_parameter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRRayInteractor_SamplePoint>(),
                        {"get_parameter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::XRRayInteractor_SamplePoint::set_parameter(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRRayInteractor_SamplePoint>(),
                        {"set_parameter", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_position_k__BackingField", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_parameter_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRRayInteractor_SamplePoint::XRRayInteractor_SamplePoint(::Unity::Mathematics::float3  _position_k__BackingField, float_t  _parameter_k__BackingField) noexcept  {
this->_position_k__BackingField = _position_k__BackingField;
this->_parameter_k__BackingField = _parameter_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRRayInteractor_SamplePoint::XRRayInteractor_SamplePoint()   {
}
