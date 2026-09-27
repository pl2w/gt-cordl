#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Colorf.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Colorf_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_Colorf.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRPlugin_Colorf::*)()>(&::GlobalNamespace::OVRPlugin_Colorf::ToString)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa60ef34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRPlugin_Colorf>(),
                    {::i2c::class_of<::GlobalNamespace::OVRPlugin_Colorf>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::OVRPlugin_Colorf::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRPlugin_Colorf>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "r", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "g", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "a", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Colorf::OVRPlugin_Colorf(float_t  r, float_t  g, float_t  b, float_t  a) noexcept  {
this->r = r;
this->g = g;
this->b = b;
this->a = a;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Colorf::OVRPlugin_Colorf()   {
}
