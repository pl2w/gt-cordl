#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineDollyLookAtTargets_Item.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDollyLookAtTargets_Item_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item.get_WorldLookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item::*)()>(&::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item::get_WorldLookAt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaea7198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>(),
                        {"get_WorldLookAt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item.set_WorldLookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item::set_WorldLookAt)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaea72dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>(),
                        {"set_WorldLookAt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item::get_WorldLookAt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>(),
                        {"get_WorldLookAt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item::set_WorldLookAt(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>(),
                        {"set_WorldLookAt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "LookAt", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Offset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Easing", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item::CinemachineSplineDollyLookAtTargets_Item(::UnityW<::UnityEngine::Transform>  LookAt, ::UnityEngine::Vector3  Offset, float_t  Easing) noexcept  {
this->LookAt = LookAt;
this->Offset = Offset;
this->Easing = Easing;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item::CinemachineSplineDollyLookAtTargets_Item()   {
}
