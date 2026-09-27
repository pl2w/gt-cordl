#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Posef.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Quatf_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_Posef.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRPlugin_Posef::*)()>(&::GlobalNamespace::OVRPlugin_Posef::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa60e374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRPlugin_Posef>(),
                    {::i2c::class_of<::GlobalNamespace::OVRPlugin_Posef>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPlugin_Posef::setStaticF_identity(::GlobalNamespace::OVRPlugin_Posef  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_Posef, "identity", ::GlobalNamespace::OVRPlugin_Posef>(std::forward<::GlobalNamespace::OVRPlugin_Posef>(value));
}
inline ::GlobalNamespace::OVRPlugin_Posef GlobalNamespace::OVRPlugin_Posef::getStaticF_identity()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_Posef, "identity", ::GlobalNamespace::OVRPlugin_Posef>();
}
inline ::StringW GlobalNamespace::OVRPlugin_Posef::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRPlugin_Posef>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Orientation", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Position", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Posef::OVRPlugin_Posef(::GlobalNamespace::OVRPlugin_Quatf  Orientation, ::GlobalNamespace::OVRPlugin_Vector3f  Position) noexcept  {
this->Orientation = Orientation;
this->Position = Position;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Posef::OVRPlugin_Posef()   {
}
