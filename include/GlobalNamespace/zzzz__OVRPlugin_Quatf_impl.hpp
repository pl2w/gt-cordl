#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Quatf.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Quatf_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_Quatf._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlugin_Quatf::*)(float_t, float_t, float_t, float_t)>(&::GlobalNamespace::OVRPlugin_Quatf::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa60e110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_Quatf>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_Quatf.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRPlugin_Quatf::*)()>(&::GlobalNamespace::OVRPlugin_Quatf::ToString)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa60e11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRPlugin_Quatf>(),
                    {::i2c::class_of<::GlobalNamespace::OVRPlugin_Quatf>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPlugin_Quatf::setStaticF_identity(::GlobalNamespace::OVRPlugin_Quatf  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_Quatf, "identity", ::GlobalNamespace::OVRPlugin_Quatf>(std::forward<::GlobalNamespace::OVRPlugin_Quatf>(value));
}
inline ::GlobalNamespace::OVRPlugin_Quatf GlobalNamespace::OVRPlugin_Quatf::getStaticF_identity()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_Quatf, "identity", ::GlobalNamespace::OVRPlugin_Quatf>();
}
inline void GlobalNamespace::OVRPlugin_Quatf::_ctor(float_t  x, float_t  y, float_t  z, float_t  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_Quatf>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z, w);
}
inline ::StringW GlobalNamespace::OVRPlugin_Quatf::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRPlugin_Quatf>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Quatf::OVRPlugin_Quatf(float_t  x, float_t  y, float_t  z, float_t  w) noexcept  {
this->x = x;
this->y = y;
this->z = z;
this->w = w;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Quatf::OVRPlugin_Quatf()   {
}
