#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Vector4f.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector4f_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_Vector4f.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRPlugin_Vector4f::*)()>(&::GlobalNamespace::OVRPlugin_Vector4f::ToString)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa60dc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRPlugin_Vector4f>(),
                    {::i2c::class_of<::GlobalNamespace::OVRPlugin_Vector4f>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPlugin_Vector4f::setStaticF_zero(::GlobalNamespace::OVRPlugin_Vector4f  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_Vector4f, "zero", ::GlobalNamespace::OVRPlugin_Vector4f>(std::forward<::GlobalNamespace::OVRPlugin_Vector4f>(value));
}
inline ::GlobalNamespace::OVRPlugin_Vector4f GlobalNamespace::OVRPlugin_Vector4f::getStaticF_zero()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_Vector4f, "zero", ::GlobalNamespace::OVRPlugin_Vector4f>();
}
inline ::StringW GlobalNamespace::OVRPlugin_Vector4f::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRPlugin_Vector4f>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Vector4f::OVRPlugin_Vector4f(float_t  x, float_t  y, float_t  z, float_t  w) noexcept  {
this->x = x;
this->y = y;
this->z = z;
this->w = w;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Vector4f::OVRPlugin_Vector4f()   {
}
