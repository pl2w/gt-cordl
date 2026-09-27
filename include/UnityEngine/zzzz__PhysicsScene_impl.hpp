#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsScene.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::PhysicsScene.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::PhysicsScene::*)()>(&::UnityEngine::PhysicsScene::ToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb68dbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                    {::i2c::class_of<::UnityEngine::PhysicsScene>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::PhysicsScene)>(&::UnityEngine::PhysicsScene::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb68dc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::PhysicsScene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::PhysicsScene)>(&::UnityEngine::PhysicsScene::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb68dc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::PhysicsScene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene::*)()>(&::UnityEngine::PhysicsScene::GetHashCode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb68dc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                    {::i2c::class_of<::UnityEngine::PhysicsScene>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene::*)(::System::Object*)>(&::UnityEngine::PhysicsScene::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb68dd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                    {::i2c::class_of<::UnityEngine::PhysicsScene>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene::*)(::UnityEngine::PhysicsScene)>(&::UnityEngine::PhysicsScene::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb68dd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene::*)()>(&::UnityEngine::PhysicsScene::IsValid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb68dd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.IsValid_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene)>(&::UnityEngine::PhysicsScene::IsValid_Internal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb68dddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"IsValid_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.GetDefaultScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PhysicsScene (*)()>(&::UnityEngine::PhysicsScene::GetDefaultScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb68de5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"GetDefaultScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Simulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::PhysicsScene::*)(float_t)>(&::UnityEngine::PhysicsScene::Simulate)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb68de64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Raycast)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb685524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_RaycastTest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_RaycastTest)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb68dfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_RaycastTest", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Raycast)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xb685a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, float_t, ::by_ref<::UnityEngine::RaycastHit>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_Raycast)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb68e0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_Raycast", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Raycast)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xb687624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_RaycastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb68e1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Query_CapsuleCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::RaycastHit>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Query_CapsuleCast)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb68e344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Query_CapsuleCast", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_CapsuleCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_CapsuleCast)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb68e48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_CapsuleCast", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.CapsuleCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::CapsuleCast)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb686834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"CapsuleCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_CapsuleCastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_CapsuleCastNonAlloc)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb68e5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_CapsuleCastNonAlloc", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.CapsuleCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::CapsuleCast)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb6891b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"CapsuleCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.OverlapCapsuleNonAlloc_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::OverlapCapsuleNonAlloc_Internal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb68e7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapCapsuleNonAlloc_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.OverlapCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::OverlapCapsule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb689df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Query_SphereCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::RaycastHit>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Query_SphereCast)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb68e8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Query_SphereCast", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_SphereCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_SphereCast)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb68e9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_SphereCast", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.SphereCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::SphereCast)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb686924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"SphereCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_SphereCastNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_SphereCastNonAlloc)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb68eb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_SphereCastNonAlloc", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.SphereCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::SphereCast)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb6893d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"SphereCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.OverlapSphereNonAlloc_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::OverlapSphereNonAlloc_Internal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb68eca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapSphereNonAlloc_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.OverlapSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, float_t, ::ArrayW<::UnityEngine::Collider*>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::OverlapSphere)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb688d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.OverlapBoxNonAlloc_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Collider*>, ::UnityEngine::Quaternion, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb68eda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapBoxNonAlloc_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.OverlapBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::PhysicsScene::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Collider*>, ::UnityEngine::Quaternion, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::OverlapBox)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb689b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.IsValid_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::PhysicsScene>)>(&::UnityEngine::PhysicsScene::IsValid_Internal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb68de20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"IsValid_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_RaycastTest_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Ray>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_RaycastTest_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb68e060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_RaycastTest_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_Raycast_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Ray>, float_t, ::by_ref<::UnityEngine::RaycastHit>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_Raycast_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb68e148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_Raycast_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_RaycastNonAlloc_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Ray>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_RaycastNonAlloc_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb68e2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_RaycastNonAlloc_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Query_CapsuleCast_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, ::by_ref<::UnityEngine::Vector3>, float_t, ::by_ref<::UnityEngine::RaycastHit>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Query_CapsuleCast_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb68e3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Query_CapsuleCast_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_CapsuleCastNonAlloc_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_CapsuleCastNonAlloc_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb68e704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_CapsuleCastNonAlloc_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.OverlapCapsuleNonAlloc_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, ::ArrayW<::UnityEngine::Collider*>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::OverlapCapsuleNonAlloc_Internal_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb68e830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapCapsuleNonAlloc_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Query_SphereCast_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, float_t, ::by_ref<::UnityEngine::Vector3>, float_t, ::by_ref<::UnityEngine::RaycastHit>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Query_SphereCast_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb68e94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Query_SphereCast_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.Internal_SphereCastNonAlloc_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::Internal_SphereCastNonAlloc_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb68ec1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_SphereCastNonAlloc_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.OverlapSphereNonAlloc_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, float_t, ::ArrayW<::UnityEngine::Collider*>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::OverlapSphereNonAlloc_Internal_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb68ed2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapSphereNonAlloc_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::PhysicsScene.OverlapBoxNonAlloc_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::PhysicsScene>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Collider*>, ::by_ref<::UnityEngine::Quaternion>, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb68ee30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapBoxNonAlloc_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::PhysicsScene::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::PhysicsScene>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::PhysicsScene::op_Equality(::UnityEngine::PhysicsScene  lhs, ::UnityEngine::PhysicsScene  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::PhysicsScene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::PhysicsScene::op_Inequality(::UnityEngine::PhysicsScene  lhs, ::UnityEngine::PhysicsScene  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::PhysicsScene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t UnityEngine::PhysicsScene::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::PhysicsScene>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::PhysicsScene::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::PhysicsScene>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::PhysicsScene::Equals(::UnityEngine::PhysicsScene  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::PhysicsScene::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::PhysicsScene::IsValid_Internal(::UnityEngine::PhysicsScene  physicsScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"IsValid_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene);
}
inline ::UnityEngine::PhysicsScene UnityEngine::PhysicsScene::GetDefaultScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"GetDefaultScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PhysicsScene>(nullptr, ___internal_method);
}
inline void UnityEngine::PhysicsScene::Simulate(float_t  step)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Simulate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, step);
}
inline bool UnityEngine::PhysicsScene::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("Physics.DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, origin, direction, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Internal_RaycastTest(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_RaycastTest", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("Physics.DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Internal_Raycast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_Raycast", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("Physics.DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Raycast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, origin, direction, raycastHits, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_RaycastNonAlloc", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Query_CapsuleCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Query_CapsuleCast", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, point1, point2, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Internal_CapsuleCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_CapsuleCast", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"CapsuleCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::Internal_CapsuleCastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_CapsuleCastNonAlloc", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, p0, p1, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"CapsuleCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, point1, point2, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::OverlapCapsuleNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, /* [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapCapsuleNonAlloc_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, point0, point1, radius, results, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::OverlapCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, /* [DefaultValue("AllLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, point0, point1, radius, results, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Query_SphereCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Query_SphereCast", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, origin, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Internal_SphereCast(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_SphereCast", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"SphereCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::Internal_SphereCastNonAlloc(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_SphereCastNonAlloc", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  results, /* [DefaultValue("Mathf.Infinity")] */ float_t  maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"SphereCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, origin, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::OverlapSphereNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, /* [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapSphereNonAlloc_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, position, radius, results, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, /* [DefaultValue("AllLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, position, radius, results, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, /* [Unmarshalled] */ ::ArrayW<::UnityEngine::Collider*>  results, ::UnityEngine::Quaternion  orientation, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapBoxNonAlloc_Internal", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*>  results, /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion  orientation, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t  layerMask, /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, center, halfExtents, results, orientation, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::IsValid_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"IsValid_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene);
}
inline bool UnityEngine::PhysicsScene::Internal_RaycastTest_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Ray>  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_RaycastTest_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Internal_Raycast_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Ray>  ray, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hit, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_Raycast_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::Internal_RaycastNonAlloc_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_RaycastNonAlloc_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Query_CapsuleCast_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  point1, ::by_ref<::UnityEngine::Vector3>  point2, float_t  radius, ::by_ref<::UnityEngine::Vector3>  direction, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Query_CapsuleCast_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, point1, point2, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::Internal_CapsuleCastNonAlloc_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  p0, ::by_ref<::UnityEngine::Vector3>  p1, float_t  radius, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_CapsuleCastNonAlloc_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, p0, p1, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::OverlapCapsuleNonAlloc_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  point0, ::by_ref<::UnityEngine::Vector3>  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapCapsuleNonAlloc_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, point0, point1, radius, results, layerMask, queryTriggerInteraction);
}
inline bool UnityEngine::PhysicsScene::Query_SphereCast_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, float_t  radius, ::by_ref<::UnityEngine::Vector3>  direction, float_t  maxDistance, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Query_SphereCast_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, physicsScene, origin, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::Internal_SphereCastNonAlloc_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  origin, float_t  radius, ::by_ref<::UnityEngine::Vector3>  direction, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  raycastHits, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"Internal_SphereCastNonAlloc_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, origin, radius, direction, raycastHits, maxDistance, mask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::OverlapSphereNonAlloc_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapSphereNonAlloc_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, position, radius, results, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene>  physicsScene, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  halfExtents, ::ArrayW<::UnityEngine::Collider*>  results, ::by_ref<::UnityEngine::Quaternion>  orientation, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::PhysicsScene>(),
                        {"OverlapBoxNonAlloc_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::PhysicsScene>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
constexpr  UnityEngine::PhysicsScene::operator ::System::IEquatable_1<::UnityEngine::PhysicsScene>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::PhysicsScene>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
constexpr ::System::IEquatable_1<::UnityEngine::PhysicsScene>* UnityEngine::PhysicsScene::i___System__IEquatable_1___UnityEngine__PhysicsScene_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::PhysicsScene>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_version", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::PhysicsScene::PhysicsScene(int32_t  m_index, int32_t  m_version) noexcept  {
this->m_index = m_index;
this->m_version = m_version;
}
// Ctor Parameters []
constexpr ::UnityEngine::PhysicsScene::PhysicsScene()   {
}
