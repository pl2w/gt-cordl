#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticsProximityReactor.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_GorillaBodyPart_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_InteractionMode_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_ItemKind_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_TargetType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_GorillaBodyPart_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_InteractionMode_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_ItemKind_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_TargetType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.get_IsMatched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::get_IsMatched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d86218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"get_IsMatched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.set_IsMatched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)(bool)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::set_IsMatched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d86220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"set_IsMatched", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.get_MyRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::get_MyRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d86228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"get_MyRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.set_MyRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::set_MyRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d86230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"set_MyRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.GetOwnerRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::GetOwnerRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d86238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"GetOwnerRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d86240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)(bool)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d86248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d86250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d86258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.get_IsBelow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::get_IsBelow)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5d86260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"get_IsBelow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::OnSpawn)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d86390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d86420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::Start)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5d86424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::OnEnable)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5d86560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::OnDisable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5d866f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.GetTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::GetTypes)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x5d86828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"GetTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.IsGorillaBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::IsGorillaBody)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d86cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"IsGorillaBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.IsCosmeticItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::IsCosmeticItem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d86ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"IsCosmeticItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.AcceptsAnySource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::AcceptsAnySource)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5d86cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"AcceptsAnySource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.AcceptsThisSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)(::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::AcceptsThisSource)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5d86e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"AcceptsThisSource", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.GetCosmeticPairThresholdWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)(::GorillaTag::Cosmetics::CosmeticsProximityReactor*, ::by_ref<bool>)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::GetCosmeticPairThresholdWith)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5d86f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"GetCosmeticPairThresholdWith", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.GetSourceThresholdFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)(::GorillaTag::Cosmetics::CosmeticsProximityReactor*, ::by_ref<bool>)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::GetSourceThresholdFor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5d87270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"GetSourceThresholdFor", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.OnCosmeticBelowWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)(::GorillaTag::Cosmetics::CosmeticsProximityReactor*, ::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::OnCosmeticBelowWith)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5d8742c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnCosmeticBelowWith", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.WhileCosmeticBelowWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)(::GorillaTag::Cosmetics::CosmeticsProximityReactor*, ::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::WhileCosmeticBelowWith)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5d8775c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"WhileCosmeticBelowWith", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.OnCosmeticAboveAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::OnCosmeticAboveAll)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5d87a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnCosmeticAboveAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.OnSourceBelow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)(::UnityEngine::Vector3, ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart, ::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::OnSourceBelow)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5d87bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnSourceBelow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.WhileSourceBelow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)(::UnityEngine::Vector3, ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart, ::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::WhileSourceBelow)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5d87dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"WhileSourceBelow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.OnSourceAboveAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::OnSourceAboveAll)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5d87f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnSourceAboveAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.HasAnyCosmeticMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::HasAnyCosmeticMatch)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5d880e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"HasAnyCosmeticMatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.HasAnyGorillaBodyPartMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::HasAnyGorillaBodyPartMatch)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5d8821c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"HasAnyGorillaBodyPartMatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor.RefreshAggregateMatched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::RefreshAggregateMatched)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d87b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"RefreshAggregateMatched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d88358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CosmeticsProximityReactor_ItemKind& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get_itemKind()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemKind;
}
constexpr ::GlobalNamespace::CosmeticsProximityReactor_ItemKind const& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get_itemKind() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemKind;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_set_itemKind(::GlobalNamespace::CosmeticsProximityReactor_ItemKind  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemKind = value;
}
constexpr ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get_gorillaBodyParts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaBodyParts;
}
constexpr ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart const& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get_gorillaBodyParts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaBodyParts;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_set_gorillaBodyParts(::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaBodyParts = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>*& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get_blocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocks;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>* const& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get_blocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocks;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_set_blocks(::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blocks = value;
}
constexpr bool& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get_ignoreSameCosmeticInstances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreSameCosmeticInstances;
}
constexpr bool const& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get_ignoreSameCosmeticInstances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreSameCosmeticInstances;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_set_ignoreSameCosmeticInstances(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreSameCosmeticInstances = value;
}
constexpr ::StringW& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get_PlayFabID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabID;
}
constexpr ::StringW const& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get_PlayFabID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabID;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_set_PlayFabID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabID = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get_collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get_collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collider = value;
}
constexpr bool& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get__IsMatched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMatched_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get__IsMatched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMatched_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_set__IsMatched_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsMatched_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get__MyRig_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MyRig_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get__MyRig_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MyRig_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_set__MyRig_k__BackingField(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MyRig_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr bool& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor::get_IsMatched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"get_IsMatched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::set_IsMatched(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"set_IsMatched", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::VRRig> GorillaTag::Cosmetics::CosmeticsProximityReactor::get_MyRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"get_MyRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::set_MyRig(::GlobalNamespace::VRRig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"set_MyRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::VRRig> GorillaTag::Cosmetics::CosmeticsProximityReactor::GetOwnerRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"GetOwnerRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag::Cosmetics::CosmeticsProximityReactor::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor::get_IsBelow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"get_IsBelow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GorillaTag::Cosmetics::CosmeticsProximityReactor::GetTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"GetTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor::IsGorillaBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"IsGorillaBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor::IsCosmeticItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"IsCosmeticItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor::AcceptsAnySource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"AcceptsAnySource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor::AcceptsThisSource(::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  kind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"AcceptsThisSource", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, kind);
}
inline float_t GorillaTag::Cosmetics::CosmeticsProximityReactor::GetCosmeticPairThresholdWith(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  other, ::by_ref<bool>  any)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"GetCosmeticPairThresholdWith", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, other, any);
}
inline float_t GorillaTag::Cosmetics::CosmeticsProximityReactor::GetSourceThresholdFor(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  gorillaBody, ::by_ref<bool>  any)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"GetSourceThresholdFor", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, gorillaBody, any);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::OnCosmeticBelowWith(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  other, ::UnityEngine::Vector3  contact)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnCosmeticBelowWith", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, contact);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::WhileCosmeticBelowWith(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  other, ::UnityEngine::Vector3  contact)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"WhileCosmeticBelowWith", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, contact);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::OnCosmeticAboveAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnCosmeticAboveAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::OnSourceBelow(::UnityEngine::Vector3  contact, ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  kind, ::GlobalNamespace::VRRig*  sourceRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnSourceBelow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contact, kind, sourceRig);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::WhileSourceBelow(::UnityEngine::Vector3  contact, ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  kind, ::GlobalNamespace::VRRig*  sourceRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"WhileSourceBelow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contact, kind, sourceRig);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::OnSourceAboveAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"OnSourceAboveAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor::HasAnyCosmeticMatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"HasAnyCosmeticMatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor::HasAnyGorillaBodyPartMatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"HasAnyGorillaBodyPartMatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::RefreshAggregateMatched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {"RefreshAggregateMatched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::CosmeticsProximityReactor* GorillaTag::Cosmetics::CosmeticsProximityReactor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::CosmeticsProximityReactor*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GorillaTag::Cosmetics::CosmeticsProximityReactor::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GorillaTag::Cosmetics::CosmeticsProximityReactor::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::CosmeticsProximityReactor::CosmeticsProximityReactor()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting.IsCosmeticToCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::IsCosmeticToCosmetic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d88404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"IsCosmeticToCosmetic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting.IsCosmeticToEnvironment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::IsCosmeticToEnvironment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d88414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"IsCosmeticToEnvironment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting.IsGorillaBodyToCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::IsGorillaBodyToCosmetic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d88424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"IsGorillaBodyToCosmetic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting.AcceptsGorillaBodyPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::*)(::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::AcceptsGorillaBodyPart)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d88434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"AcceptsGorillaBodyPart", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting.CanTriggerFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::*)(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::CanTriggerFrom)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5d88458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"CanTriggerFrom", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting.CanPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::*)(float_t)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::CanPlay)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d886f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"CanPlay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting.FireBelow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::*)(::GlobalNamespace::VRRig*, ::UnityEngine::Vector3, float_t)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::FireBelow)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d88708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"FireBelow", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting.FireWhile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::*)(::GlobalNamespace::VRRig*, ::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::FireWhile)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d88824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"FireWhile", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting.FireAbove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::FireAbove)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d88928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"FireAbove", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting.AllowsRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::AllowsRig)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d889d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"AllowsRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::*)()>(&::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d88a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CosmeticsProximityReactor_InteractionMode& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::CosmeticsProximityReactor_InteractionMode const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_mode(::GlobalNamespace::CosmeticsProximityReactor_InteractionMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_interactionKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionKeys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_interactionKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionKeys;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_interactionKeys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactionKeys = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_ignoreKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreKeys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_ignoreKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreKeys;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_ignoreKeys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreKeys = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_listenerKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerKeys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_listenerKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerKeys;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_listenerKeys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenerKeys = value;
}
constexpr ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_gorillaBodyMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaBodyMask;
}
constexpr ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_gorillaBodyMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaBodyMask;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_gorillaBodyMask(::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaBodyMask = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_proximityThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_proximityThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proximityThreshold;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_proximityThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proximityThreshold = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_cooldownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTime;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_cooldownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTime;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_cooldownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownTime = value;
}
constexpr ::GlobalNamespace::CosmeticsProximityReactor_TargetType& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_targetType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetType;
}
constexpr ::GlobalNamespace::CosmeticsProximityReactor_TargetType const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_targetType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetType;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_targetType(::GlobalNamespace::CosmeticsProximityReactor_TargetType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetType = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_onBelowLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowLocal;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_onBelowLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowLocal;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_onBelowLocal(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBelowLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_onBelowShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowShared;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_onBelowShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBelowShared;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_onBelowShared(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBelowShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_whileBelowLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whileBelowLocal;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_whileBelowLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whileBelowLocal;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_whileBelowLocal(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whileBelowLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_whileBelowShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whileBelowShared;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_whileBelowShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whileBelowShared;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_whileBelowShared(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whileBelowShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_onAboveLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAboveLocal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_onAboveLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAboveLocal;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_onAboveLocal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onAboveLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_onAboveShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAboveShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_onAboveShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onAboveShared;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_onAboveShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onAboveShared = value;
}
constexpr bool& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_wasBelow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasBelow;
}
constexpr bool const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_wasBelow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasBelow;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_wasBelow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasBelow = value;
}
constexpr bool& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_isMatched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMatched;
}
constexpr bool const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_isMatched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMatched;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_isMatched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMatched = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_lastEffectTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastEffectTime;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_get_lastEffectTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastEffectTime;
}
constexpr void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::__cordl_internal_set_lastEffectTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastEffectTime = value;
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::IsCosmeticToCosmetic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"IsCosmeticToCosmetic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::IsCosmeticToEnvironment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"IsCosmeticToEnvironment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::IsGorillaBodyToCosmetic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"IsGorillaBodyToCosmetic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::AcceptsGorillaBodyPart(::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  kind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"AcceptsGorillaBodyPart", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, kind);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::CanTriggerFrom(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"CanTriggerFrom", {}, {::i2c::type_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::CanPlay(float_t  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"CanPlay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, now);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::FireBelow(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  contact, float_t  now)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"FireBelow", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, contact, now);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::FireWhile(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  contact)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"FireWhile", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, contact);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::FireAbove(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"FireAbove", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline bool GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::AllowsRig(::GlobalNamespace::VRRig*  myRig, ::GlobalNamespace::VRRig*  otherRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {"AllowsRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myRig, otherRig);
}
inline void GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting* GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting::CosmeticsProximityReactor_InteractionSetting()   {
}
