#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetPositionCache_CacheCurve_Item.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__TargetPositionCache_CacheCurve_Item_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CacheCurve_TargetPositionCache_Item.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CacheCurve_TargetPositionCache_Item (*)(::GlobalNamespace::CacheCurve_TargetPositionCache_Item, ::GlobalNamespace::CacheCurve_TargetPositionCache_Item, float_t)>(&::GlobalNamespace::CacheCurve_TargetPositionCache_Item::Lerp)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xaebfee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>(),
                        {"Lerp", {}, {::i2c::type_of<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>(), ::i2c::type_of<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CacheCurve_TargetPositionCache_Item.get_Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CacheCurve_TargetPositionCache_Item (*)()>(&::GlobalNamespace::CacheCurve_TargetPositionCache_Item::get_Empty)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaebff5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>(),
                        {"get_Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::CacheCurve_TargetPositionCache_Item GlobalNamespace::CacheCurve_TargetPositionCache_Item::Lerp(::GlobalNamespace::CacheCurve_TargetPositionCache_Item  a, ::GlobalNamespace::CacheCurve_TargetPositionCache_Item  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>(),
                        {"Lerp", {}, {::i2c::type_of<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>(), ::i2c::type_of<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>(nullptr, ___internal_method, a, b, t);
}
inline ::GlobalNamespace::CacheCurve_TargetPositionCache_Item GlobalNamespace::CacheCurve_TargetPositionCache_Item::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>(),
                        {"get_Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Rot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CacheCurve_TargetPositionCache_Item::CacheCurve_TargetPositionCache_Item(::UnityEngine::Vector3  Pos, ::UnityEngine::Quaternion  Rot) noexcept  {
this->Pos = Pos;
this->Rot = Rot;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CacheCurve_TargetPositionCache_Item::CacheCurve_TargetPositionCache_Item()   {
}
