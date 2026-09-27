#pragma once
// IWYU pragma private; include "MathGeoLib/Plane.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "MathGeoLib/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::MathGeoLib::Plane._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MathGeoLib::Plane::*)(::UnityEngine::Vector3, float_t)>(&::MathGeoLib::Plane::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55e3ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::Plane>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::Plane.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MathGeoLib::Plane::*)()>(&::MathGeoLib::Plane::ToString)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x55e3ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MathGeoLib::Plane>(),
                    {::i2c::class_of<::MathGeoLib::Plane>(), 3}
                ));
    return ___internal_method;
  }
};
inline void MathGeoLib::Plane::_ctor(::UnityEngine::Vector3  normal, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::Plane>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, normal, distance);
}
inline ::StringW MathGeoLib::Plane::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MathGeoLib::Plane>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Distance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::MathGeoLib::Plane::Plane(::UnityEngine::Vector3  Normal, float_t  Distance) noexcept  {
this->Normal = Normal;
this->Distance = Distance;
}
// Ctor Parameters []
constexpr ::MathGeoLib::Plane::Plane()   {
}
