#pragma once
// IWYU pragma private; include "MathGeoLib/Line3.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "MathGeoLib/zzzz__Line3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::MathGeoLib::Line3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MathGeoLib::Line3::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::MathGeoLib::Line3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55e25d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::Line3>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::Line3.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MathGeoLib::Line3::*)()>(&::MathGeoLib::Line3::ToString)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x55e25e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MathGeoLib::Line3>(),
                    {::i2c::class_of<::MathGeoLib::Line3>(), 3}
                ));
    return ___internal_method;
  }
};
inline void MathGeoLib::Line3::_ctor(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::Line3>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, point1, point2);
}
inline ::StringW MathGeoLib::Line3::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MathGeoLib::Line3>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Point1", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Point2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::MathGeoLib::Line3::Line3(::UnityEngine::Vector3  Point1, ::UnityEngine::Vector3  Point2) noexcept  {
this->Point1 = Point1;
this->Point2 = Point2;
}
// Ctor Parameters []
constexpr ::MathGeoLib::Line3::Line3()   {
}
