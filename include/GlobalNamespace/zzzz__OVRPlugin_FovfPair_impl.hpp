#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FovfPair.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Fovf_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FovfPair_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Fovf_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_FovfPair.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Fovf (::GlobalNamespace::OVRPlugin_FovfPair::*)(int32_t)>(&::GlobalNamespace::OVRPlugin_FovfPair::get_Item)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa60f13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_FovfPair>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_FovfPair.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlugin_FovfPair::*)(int32_t, ::GlobalNamespace::OVRPlugin_Fovf)>(&::GlobalNamespace::OVRPlugin_FovfPair::set_Item)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa60f1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_FovfPair>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Fovf>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRPlugin_Fovf GlobalNamespace::OVRPlugin_FovfPair::get_Item(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_FovfPair>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Fovf>(*this, ___internal_method, i);
}
inline void GlobalNamespace::OVRPlugin_FovfPair::set_Item(int32_t  i, ::GlobalNamespace::OVRPlugin_Fovf  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_FovfPair>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Fovf>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, value);
}
// Ctor Parameters [CppParam { name: "Fov0", ty: "::GlobalNamespace::OVRPlugin_Fovf", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Fov1", ty: "::GlobalNamespace::OVRPlugin_Fovf", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_FovfPair::OVRPlugin_FovfPair(::GlobalNamespace::OVRPlugin_Fovf  Fov0, ::GlobalNamespace::OVRPlugin_Fovf  Fov1) noexcept  {
this->Fov0 = Fov0;
this->Fov1 = Fov1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_FovfPair::OVRPlugin_FovfPair()   {
}
