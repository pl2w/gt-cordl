#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Vector4s.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector4s_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_Vector4s.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRPlugin_Vector4s::*)()>(&::GlobalNamespace::OVRPlugin_Vector4s::ToString)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa60dec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRPlugin_Vector4s>(),
                    {::i2c::class_of<::GlobalNamespace::OVRPlugin_Vector4s>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPlugin_Vector4s::setStaticF_zero(::GlobalNamespace::OVRPlugin_Vector4s  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_Vector4s, "zero", ::GlobalNamespace::OVRPlugin_Vector4s>(std::forward<::GlobalNamespace::OVRPlugin_Vector4s>(value));
}
inline ::GlobalNamespace::OVRPlugin_Vector4s GlobalNamespace::OVRPlugin_Vector4s::getStaticF_zero()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_Vector4s, "zero", ::GlobalNamespace::OVRPlugin_Vector4s>();
}
inline ::StringW GlobalNamespace::OVRPlugin_Vector4s::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRPlugin_Vector4s>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "x", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "z", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "w", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Vector4s::OVRPlugin_Vector4s(int16_t  x, int16_t  y, int16_t  z, int16_t  w) noexcept  {
this->x = x;
this->y = y;
this->z = z;
this->w = w;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Vector4s::OVRPlugin_Vector4s()   {
}
