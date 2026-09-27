#pragma once
// IWYU pragma private; include "GlobalNamespace/ClackerCosmetic_PerArmData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ClackerCosmetic_PerArmData_def.hpp"
#include "GlobalNamespace/zzzz__ClackerCosmetic_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ClackerCosmetic_PerArmData.UpdateArm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClackerCosmetic_PerArmData::*)()>(&::GlobalNamespace::ClackerCosmetic_PerArmData::UpdateArm)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x5648014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClackerCosmetic_PerArmData>(),
                        {"UpdateArm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClackerCosmetic_PerArmData.SetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClackerCosmetic_PerArmData::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ClackerCosmetic_PerArmData::SetPosition)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5648474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClackerCosmetic_PerArmData>(),
                        {"SetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ClackerCosmetic_PerArmData::UpdateArm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClackerCosmetic_PerArmData>(),
                        {"UpdateArm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ClackerCosmetic_PerArmData::SetPosition(::UnityEngine::Vector3  newPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClackerCosmetic_PerArmData>(),
                        {"SetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newPosition);
}
// Ctor Parameters [CppParam { name: "parent", ty: "::UnityW<::GlobalNamespace::ClackerCosmetic>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastWorldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ClackerCosmetic_PerArmData::ClackerCosmetic_PerArmData(::UnityW<::GlobalNamespace::ClackerCosmetic>  parent, ::UnityW<::UnityEngine::Transform>  transform, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  lastWorldPosition) noexcept  {
this->parent = parent;
this->transform = transform;
this->velocity = velocity;
this->lastWorldPosition = lastWorldPosition;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ClackerCosmetic_PerArmData::ClackerCosmetic_PerArmData()   {
}
