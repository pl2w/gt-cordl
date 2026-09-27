#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_RectfPair.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Rectf_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_RectfPair_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Rectf_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_RectfPair.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Rectf (::GlobalNamespace::OVRPlugin_RectfPair::*)(int32_t)>(&::GlobalNamespace::OVRPlugin_RectfPair::get_Item)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa60edd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_RectfPair>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_RectfPair.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlugin_RectfPair::*)(int32_t, ::GlobalNamespace::OVRPlugin_Rectf)>(&::GlobalNamespace::OVRPlugin_RectfPair::set_Item)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa60ee8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_RectfPair>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Rectf>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRPlugin_Rectf GlobalNamespace::OVRPlugin_RectfPair::get_Item(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_RectfPair>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Rectf>(*this, ___internal_method, i);
}
inline void GlobalNamespace::OVRPlugin_RectfPair::set_Item(int32_t  i, ::GlobalNamespace::OVRPlugin_Rectf  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_RectfPair>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Rectf>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, value);
}
// Ctor Parameters [CppParam { name: "Rect0", ty: "::GlobalNamespace::OVRPlugin_Rectf", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Rect1", ty: "::GlobalNamespace::OVRPlugin_Rectf", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_RectfPair::OVRPlugin_RectfPair(::GlobalNamespace::OVRPlugin_Rectf  Rect0, ::GlobalNamespace::OVRPlugin_Rectf  Rect1) noexcept  {
this->Rect0 = Rect0;
this->Rect1 = Rect1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_RectfPair::OVRPlugin_RectfPair()   {
}
