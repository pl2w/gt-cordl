#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_RectiPair.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Recti_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_RectiPair_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Recti_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_RectiPair.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Recti (::GlobalNamespace::OVRPlugin_RectiPair::*)(int32_t)>(&::GlobalNamespace::OVRPlugin_RectiPair::get_Item)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa60ec90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_RectiPair>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_RectiPair.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlugin_RectiPair::*)(int32_t, ::GlobalNamespace::OVRPlugin_Recti)>(&::GlobalNamespace::OVRPlugin_RectiPair::set_Item)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa60ed34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_RectiPair>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Recti>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRPlugin_Recti GlobalNamespace::OVRPlugin_RectiPair::get_Item(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_RectiPair>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Recti>(*this, ___internal_method, i);
}
inline void GlobalNamespace::OVRPlugin_RectiPair::set_Item(int32_t  i, ::GlobalNamespace::OVRPlugin_Recti  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_RectiPair>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Recti>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, value);
}
// Ctor Parameters [CppParam { name: "Rect0", ty: "::GlobalNamespace::OVRPlugin_Recti", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Rect1", ty: "::GlobalNamespace::OVRPlugin_Recti", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_RectiPair::OVRPlugin_RectiPair(::GlobalNamespace::OVRPlugin_Recti  Rect0, ::GlobalNamespace::OVRPlugin_Recti  Rect1) noexcept  {
this->Rect0 = Rect0;
this->Rect1 = Rect1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_RectiPair::OVRPlugin_RectiPair()   {
}
