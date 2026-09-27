#pragma once
// IWYU pragma private; include "MathGeoLib/Matrix3X4.hpp"
#include "MathGeoLib/zzzz__Matrix3X4_def.hpp"
//  Writing Method size for method: ::MathGeoLib::Matrix3X4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MathGeoLib::Matrix3X4::*)(float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t)>(&::MathGeoLib::Matrix3X4::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x55e27cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::Matrix3X4>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::Matrix3X4.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MathGeoLib::Matrix3X4::*)()>(&::MathGeoLib::Matrix3X4::ToString)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x55e2800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MathGeoLib::Matrix3X4>(),
                    {::i2c::class_of<::MathGeoLib::Matrix3X4>(), 3}
                ));
    return ___internal_method;
  }
};
inline void MathGeoLib::Matrix3X4::_ctor(float_t  m00, float_t  m01, float_t  m02, float_t  m03, float_t  m10, float_t  m11, float_t  m12, float_t  m13, float_t  m20, float_t  m21, float_t  m22, float_t  m23)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::Matrix3X4>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23);
}
inline ::StringW MathGeoLib::Matrix3X4::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MathGeoLib::Matrix3X4>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "M00", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "M01", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "M02", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "M03", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "M10", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "M11", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "M12", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "M13", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "M20", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "M21", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "M22", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "M23", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::MathGeoLib::Matrix3X4::Matrix3X4(float_t  M00, float_t  M01, float_t  M02, float_t  M03, float_t  M10, float_t  M11, float_t  M12, float_t  M13, float_t  M20, float_t  M21, float_t  M22, float_t  M23) noexcept  {
this->M00 = M00;
this->M01 = M01;
this->M02 = M02;
this->M03 = M03;
this->M10 = M10;
this->M11 = M11;
this->M12 = M12;
this->M13 = M13;
this->M20 = M20;
this->M21 = M21;
this->M22 = M22;
this->M23 = M23;
}
// Ctor Parameters []
constexpr ::MathGeoLib::Matrix3X4::Matrix3X4()   {
}
