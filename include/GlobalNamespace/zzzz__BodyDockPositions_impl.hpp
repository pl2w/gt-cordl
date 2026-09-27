#pragma once
// IWYU pragma private; include "GlobalNamespace/BodyDockPositions.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_def.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_DropPositions_def.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__WorldShareableItem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.get_allObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::TransferrableObject>> (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::get_allObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5751b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"get_allObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.set_allObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)(::ArrayW<::GlobalNamespace::TransferrableObject*>)>(&::GlobalNamespace::BodyDockPositions::set_allObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5751b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"set_allObjects", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::TransferrableObject*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::Awake)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5751b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::BodyDockPositions::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5751ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::OnLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5751e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.AllocateSharableInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::WorldShareableItem> (::GlobalNamespace::BodyDockPositions::*)(::GlobalNamespace::BodyDockPositions_DropPositions, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::BodyDockPositions::AllocateSharableInstance)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5751e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"AllocateSharableInstance", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.DeallocateSharableInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)(::GlobalNamespace::WorldShareableItem*)>(&::GlobalNamespace::BodyDockPositions::DeallocateSharableInstance)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x57520ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"DeallocateSharableInstance", {}, {::i2c::type_of<::GlobalNamespace::WorldShareableItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.DeallocateSharableInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::DeallocateSharableInstances)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5751cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"DeallocateSharableInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.IsPositionLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BodyDockPositions_DropPositions)>(&::GlobalNamespace::BodyDockPositions::IsPositionLeft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5752264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"IsPositionLeft", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.DropZoneStorageUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BodyDockPositions::*)(::GlobalNamespace::BodyDockPositions_DropPositions)>(&::GlobalNamespace::BodyDockPositions::DropZoneStorageUsed)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5752274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"DropZoneStorageUsed", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.ItemPositionInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::TransferrableObject> (::GlobalNamespace::BodyDockPositions::*)(::GlobalNamespace::BodyDockPositions_DropPositions)>(&::GlobalNamespace::BodyDockPositions::ItemPositionInUse)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5752520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"ItemPositionInUse", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.EnableTransferrableItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BodyDockPositions::*)(int32_t, ::GlobalNamespace::BodyDockPositions_DropPositions, ::GlobalNamespace::TransferrableObject_PositionState)>(&::GlobalNamespace::BodyDockPositions::EnableTransferrableItem)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5752808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"EnableTransferrableItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>(), ::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.ItemActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BodyDockPositions_DropPositions (::GlobalNamespace::BodyDockPositions::*)(int32_t)>(&::GlobalNamespace::BodyDockPositions::ItemActive)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5752d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"ItemActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.OfflineItemActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BodyDockPositions_DropPositions (*)(int32_t)>(&::GlobalNamespace::BodyDockPositions::OfflineItemActive)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5752e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"OfflineItemActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.DisableTransferrableItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)(int32_t)>(&::GlobalNamespace::BodyDockPositions::DisableTransferrableItem)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5752a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"DisableTransferrableItem", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.DisableAllTransferableItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::DisableAllTransferableItems)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x57530a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"DisableAllTransferableItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.AllItemsIndexValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BodyDockPositions::*)(int32_t)>(&::GlobalNamespace::BodyDockPositions::AllItemsIndexValid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5753210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"AllItemsIndexValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.PositionAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BodyDockPositions::*)(int32_t, ::GlobalNamespace::BodyDockPositions_DropPositions)>(&::GlobalNamespace::BodyDockPositions::PositionAvailable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5753240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"PositionAvailable", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.FirstAvailablePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BodyDockPositions_DropPositions (::GlobalNamespace::BodyDockPositions::*)(int32_t)>(&::GlobalNamespace::BodyDockPositions::FirstAvailablePosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5753280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"FirstAvailablePosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.TransferrableItemDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BodyDockPositions::*)(int32_t)>(&::GlobalNamespace::BodyDockPositions::TransferrableItemDisable)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57532dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemDisable", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.TransferrableItemDisableAtPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)(::GlobalNamespace::BodyDockPositions_DropPositions)>(&::GlobalNamespace::BodyDockPositions::TransferrableItemDisableAtPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5753314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemDisableAtPosition", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.TransferrableItemEnableAtPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)(::StringW, ::GlobalNamespace::BodyDockPositions_DropPositions)>(&::GlobalNamespace::BodyDockPositions::TransferrableItemEnableAtPosition)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x575333c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemEnableAtPosition", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.TransferrableItemActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BodyDockPositions::*)(::StringW)>(&::GlobalNamespace::BodyDockPositions::TransferrableItemActive)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x57535ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemActive", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.TransferrableItemActiveAtPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BodyDockPositions::*)(::StringW, ::GlobalNamespace::BodyDockPositions_DropPositions)>(&::GlobalNamespace::BodyDockPositions::TransferrableItemActiveAtPos)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5753760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemActiveAtPos", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.TransferrableItemActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BodyDockPositions::*)(int32_t)>(&::GlobalNamespace::BodyDockPositions::TransferrableItemActive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5753748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.TransferrableItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::TransferrableObject> (::GlobalNamespace::BodyDockPositions::*)(int32_t)>(&::GlobalNamespace::BodyDockPositions::TransferrableItem)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x57538cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItem", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.TransferrableItemPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BodyDockPositions_DropPositions (::GlobalNamespace::BodyDockPositions::*)(int32_t)>(&::GlobalNamespace::BodyDockPositions::TransferrableItemPosition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57538c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.DisableTransferrableItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BodyDockPositions::*)(::StringW)>(&::GlobalNamespace::BodyDockPositions::DisableTransferrableItem)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x57538fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"DisableTransferrableItem", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.OppositePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BodyDockPositions_DropPositions (::GlobalNamespace::BodyDockPositions::*)(::GlobalNamespace::BodyDockPositions_DropPositions)>(&::GlobalNamespace::BodyDockPositions::OppositePosition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5753a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"OppositePosition", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.ToggleWithHandedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BodyDockPositions_DockingResult* (::GlobalNamespace::BodyDockPositions::*)(::StringW, bool, bool)>(&::GlobalNamespace::BodyDockPositions::ToggleWithHandedness)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5753a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"ToggleWithHandedness", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.ToggleTransferrableItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BodyDockPositions_DockingResult* (::GlobalNamespace::BodyDockPositions::*)(::StringW, ::GlobalNamespace::BodyDockPositions_DropPositions, bool)>(&::GlobalNamespace::BodyDockPositions::ToggleTransferrableItem)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x5753cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"ToggleTransferrableItem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.MoveTransferableItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)(int32_t, ::GlobalNamespace::BodyDockPositions_DropPositions, ::GlobalNamespace::TransferrableObject_PositionState)>(&::GlobalNamespace::BodyDockPositions::MoveTransferableItem)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x57540ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"MoveTransferableItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>(), ::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.EnableTransferrableGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)(int32_t, ::GlobalNamespace::BodyDockPositions_DropPositions, ::GlobalNamespace::TransferrableObject_PositionState)>(&::GlobalNamespace::BodyDockPositions::EnableTransferrableGameObject)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5752b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"EnableTransferrableGameObject", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>(), ::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.RefreshTransferrableItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::RefreshTransferrableItems)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0x574b000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"RefreshTransferrableItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.ReturnTransferrableItemIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BodyDockPositions::*)(int32_t)>(&::GlobalNamespace::BodyDockPositions::ReturnTransferrableItemIndex)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x575436c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"ReturnTransferrableItemIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.TransferrableObjectIndexFromName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::GlobalNamespace::BodyDockPositions::*)(::StringW)>(&::GlobalNamespace::BodyDockPositions::TransferrableObjectIndexFromName)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5753448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableObjectIndexFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.MapDropPositionToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TransferrableObject_PositionState (::GlobalNamespace::BodyDockPositions::*)(::GlobalNamespace::BodyDockPositions_DropPositions)>(&::GlobalNamespace::BodyDockPositions::MapDropPositionToState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x57527c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"MapDropPositionToState", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.get_PreviousLeftHandThrowableIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::get_PreviousLeftHandThrowableIndex)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57543d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"get_PreviousLeftHandThrowableIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.get_PreviousRightHandThrowableIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::get_PreviousRightHandThrowableIndex)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5754400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"get_PreviousRightHandThrowableIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.get_PreviousLeftHandThrowableDisabledTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::get_PreviousLeftHandThrowableDisabledTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x575442c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"get_PreviousLeftHandThrowableDisabledTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.get_PreviousRightHandThrowableDisabledTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::get_PreviousRightHandThrowableDisabledTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5754454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"get_PreviousRightHandThrowableDisabledTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.UpdateHandState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::UpdateHandState)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5754134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"UpdateHandState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.GetLeftHandThrowable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::GetLeftHandThrowable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5754480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"GetLeftHandThrowable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.GetLeftHandThrowable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::BodyDockPositions::*)(int32_t)>(&::GlobalNamespace::BodyDockPositions::GetLeftHandThrowable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57544ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"GetLeftHandThrowable", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.GetRightHandThrowable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::GetRightHandThrowable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5754558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"GetRightHandThrowable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions.GetRightHandThrowable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::BodyDockPositions::*)(int32_t)>(&::GlobalNamespace::BodyDockPositions::GetRightHandThrowable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5754584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"GetRightHandThrowable", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions::*)()>(&::GlobalNamespace::BodyDockPositions::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5754630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_leftHandThrowables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandThrowables;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_leftHandThrowables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandThrowables;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_leftHandThrowables(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandThrowables = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_rightHandThrowables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandThrowables;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_rightHandThrowables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandThrowables;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_rightHandThrowables(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandThrowables = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObject>>& GlobalNamespace::BodyDockPositions::__cordl_internal_get__allObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allObjects;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObject>> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get__allObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allObjects;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set__allObjects(::ArrayW<::UnityW<::GlobalNamespace::TransferrableObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allObjects = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::BodyDockPositions::__cordl_internal_get_objectsToEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToEnable;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_objectsToEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToEnable;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_objectsToEnable(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsToEnable = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::BodyDockPositions::__cordl_internal_get_objectsToDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToDisable;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_objectsToDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToDisable;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_objectsToDisable(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsToDisable = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_leftHandTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_leftHandTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTransform;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_leftHandTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_rightHandTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_rightHandTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTransform;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_rightHandTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_chestTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_chestTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chestTransform;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_chestTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chestTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_leftArmTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_leftArmTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmTransform;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_leftArmTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArmTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_rightArmTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_rightArmTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmTransform;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_rightArmTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArmTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_leftBackTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftBackTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_leftBackTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftBackTransform;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_leftBackTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftBackTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_rightBackTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightBackTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_rightBackTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightBackTransform;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_rightBackTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightBackTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::WorldShareableItem>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_leftBackSharableItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftBackSharableItem;
}
constexpr ::UnityW<::GlobalNamespace::WorldShareableItem> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_leftBackSharableItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftBackSharableItem;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_leftBackSharableItem(::UnityW<::GlobalNamespace::WorldShareableItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftBackSharableItem = value;
}
constexpr ::UnityW<::GlobalNamespace::WorldShareableItem>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_rightBackShareableItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightBackShareableItem;
}
constexpr ::UnityW<::GlobalNamespace::WorldShareableItem> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_rightBackShareableItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightBackShareableItem;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_rightBackShareableItem(::UnityW<::GlobalNamespace::WorldShareableItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightBackShareableItem = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_SharableItemInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharableItemInstance;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_SharableItemInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharableItemInstance;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_SharableItemInstance(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SharableItemInstance = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_throwableDisabledIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwableDisabledIndex;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_throwableDisabledIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwableDisabledIndex;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_throwableDisabledIndex(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwableDisabledIndex = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::BodyDockPositions::__cordl_internal_get_throwableDisabledTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwableDisabledTime;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::BodyDockPositions::__cordl_internal_get_throwableDisabledTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwableDisabledTime;
}
constexpr void GlobalNamespace::BodyDockPositions::__cordl_internal_set_throwableDisabledTime(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwableDisabledTime = value;
}
inline ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObject>> GlobalNamespace::BodyDockPositions::get_allObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"get_allObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::TransferrableObject>>>(this, ___internal_method);
}
inline void GlobalNamespace::BodyDockPositions::set_allObjects(::ArrayW<::GlobalNamespace::TransferrableObject*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"set_allObjects", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::TransferrableObject*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BodyDockPositions::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BodyDockPositions::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::BodyDockPositions::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::WorldShareableItem> GlobalNamespace::BodyDockPositions::AllocateSharableInstance(::GlobalNamespace::BodyDockPositions_DropPositions  position, ::GlobalNamespace::NetPlayer*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"AllocateSharableInstance", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::WorldShareableItem>>(this, ___internal_method, position, owner);
}
inline void GlobalNamespace::BodyDockPositions::DeallocateSharableInstance(::GlobalNamespace::WorldShareableItem*  worldShareable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"DeallocateSharableInstance", {}, {::i2c::type_of<::GlobalNamespace::WorldShareableItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldShareable);
}
inline void GlobalNamespace::BodyDockPositions::DeallocateSharableInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"DeallocateSharableInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BodyDockPositions::IsPositionLeft(::GlobalNamespace::BodyDockPositions_DropPositions  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"IsPositionLeft", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pos);
}
inline int32_t GlobalNamespace::BodyDockPositions::DropZoneStorageUsed(::GlobalNamespace::BodyDockPositions_DropPositions  dropPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"DropZoneStorageUsed", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dropPosition);
}
inline ::UnityW<::GlobalNamespace::TransferrableObject> GlobalNamespace::BodyDockPositions::ItemPositionInUse(::GlobalNamespace::BodyDockPositions_DropPositions  dropPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"ItemPositionInUse", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::TransferrableObject>>(this, ___internal_method, dropPosition);
}
inline int32_t GlobalNamespace::BodyDockPositions::EnableTransferrableItem(int32_t  allItemsIndex, ::GlobalNamespace::BodyDockPositions_DropPositions  startingPosition, ::GlobalNamespace::TransferrableObject_PositionState  startingState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"EnableTransferrableItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>(), ::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, allItemsIndex, startingPosition, startingState);
}
inline ::GlobalNamespace::BodyDockPositions_DropPositions GlobalNamespace::BodyDockPositions::ItemActive(int32_t  allItemsIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"ItemActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BodyDockPositions_DropPositions>(this, ___internal_method, allItemsIndex);
}
inline ::GlobalNamespace::BodyDockPositions_DropPositions GlobalNamespace::BodyDockPositions::OfflineItemActive(int32_t  allItemsIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"OfflineItemActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BodyDockPositions_DropPositions>(nullptr, ___internal_method, allItemsIndex);
}
inline void GlobalNamespace::BodyDockPositions::DisableTransferrableItem(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"DisableTransferrableItem", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::BodyDockPositions::DisableAllTransferableItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"DisableAllTransferableItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BodyDockPositions::AllItemsIndexValid(int32_t  allItemsIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"AllItemsIndexValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, allItemsIndex);
}
inline bool GlobalNamespace::BodyDockPositions::PositionAvailable(int32_t  allItemIndex, ::GlobalNamespace::BodyDockPositions_DropPositions  startPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"PositionAvailable", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, allItemIndex, startPos);
}
inline ::GlobalNamespace::BodyDockPositions_DropPositions GlobalNamespace::BodyDockPositions::FirstAvailablePosition(int32_t  allItemIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"FirstAvailablePosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BodyDockPositions_DropPositions>(this, ___internal_method, allItemIndex);
}
inline int32_t GlobalNamespace::BodyDockPositions::TransferrableItemDisable(int32_t  allItemsIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemDisable", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, allItemsIndex);
}
inline void GlobalNamespace::BodyDockPositions::TransferrableItemDisableAtPosition(::GlobalNamespace::BodyDockPositions_DropPositions  dropPositions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemDisableAtPosition", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropPositions);
}
inline void GlobalNamespace::BodyDockPositions::TransferrableItemEnableAtPosition(::StringW  itemName, ::GlobalNamespace::BodyDockPositions_DropPositions  dropPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemEnableAtPosition", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemName, dropPosition);
}
inline bool GlobalNamespace::BodyDockPositions::TransferrableItemActive(::StringW  transferrableItemName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemActive", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, transferrableItemName);
}
inline bool GlobalNamespace::BodyDockPositions::TransferrableItemActiveAtPos(::StringW  transferrableItemName, ::GlobalNamespace::BodyDockPositions_DropPositions  dropPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemActiveAtPos", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, transferrableItemName, dropPosition);
}
inline bool GlobalNamespace::BodyDockPositions::TransferrableItemActive(int32_t  allItemsIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, allItemsIndex);
}
inline ::UnityW<::GlobalNamespace::TransferrableObject> GlobalNamespace::BodyDockPositions::TransferrableItem(int32_t  allItemsIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItem", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::TransferrableObject>>(this, ___internal_method, allItemsIndex);
}
inline ::GlobalNamespace::BodyDockPositions_DropPositions GlobalNamespace::BodyDockPositions::TransferrableItemPosition(int32_t  allItemsIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableItemPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BodyDockPositions_DropPositions>(this, ___internal_method, allItemsIndex);
}
inline bool GlobalNamespace::BodyDockPositions::DisableTransferrableItem(::StringW  transferrableItemName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"DisableTransferrableItem", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, transferrableItemName);
}
inline ::GlobalNamespace::BodyDockPositions_DropPositions GlobalNamespace::BodyDockPositions::OppositePosition(::GlobalNamespace::BodyDockPositions_DropPositions  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"OppositePosition", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BodyDockPositions_DropPositions>(this, ___internal_method, pos);
}
inline ::GlobalNamespace::BodyDockPositions_DockingResult* GlobalNamespace::BodyDockPositions::ToggleWithHandedness(::StringW  transferrableItemName, bool  isLeftHand, bool  bothHands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"ToggleWithHandedness", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BodyDockPositions_DockingResult*>(this, ___internal_method, transferrableItemName, isLeftHand, bothHands);
}
inline ::GlobalNamespace::BodyDockPositions_DockingResult* GlobalNamespace::BodyDockPositions::ToggleTransferrableItem(::StringW  transferrableItemName, ::GlobalNamespace::BodyDockPositions_DropPositions  startingPos, bool  bothHands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"ToggleTransferrableItem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BodyDockPositions_DockingResult*>(this, ___internal_method, transferrableItemName, startingPos, bothHands);
}
inline void GlobalNamespace::BodyDockPositions::MoveTransferableItem(int32_t  allItemsIndex, ::GlobalNamespace::BodyDockPositions_DropPositions  newPosition, ::GlobalNamespace::TransferrableObject_PositionState  newPositionState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"MoveTransferableItem", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>(), ::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allItemsIndex, newPosition, newPositionState);
}
inline void GlobalNamespace::BodyDockPositions::EnableTransferrableGameObject(int32_t  allItemsIndex, ::GlobalNamespace::BodyDockPositions_DropPositions  dropZone, ::GlobalNamespace::TransferrableObject_PositionState  startingPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"EnableTransferrableGameObject", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>(), ::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allItemsIndex, dropZone, startingPosition);
}
inline void GlobalNamespace::BodyDockPositions::RefreshTransferrableItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"RefreshTransferrableItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BodyDockPositions::ReturnTransferrableItemIndex(int32_t  allItemsIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"ReturnTransferrableItemIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, allItemsIndex);
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::BodyDockPositions::TransferrableObjectIndexFromName(::StringW  transObjectName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"TransferrableObjectIndexFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*>(this, ___internal_method, transObjectName);
}
inline ::GlobalNamespace::TransferrableObject_PositionState GlobalNamespace::BodyDockPositions::MapDropPositionToState(::GlobalNamespace::BodyDockPositions_DropPositions  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"MapDropPositionToState", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TransferrableObject_PositionState>(this, ___internal_method, pos);
}
inline int32_t GlobalNamespace::BodyDockPositions::get_PreviousLeftHandThrowableIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"get_PreviousLeftHandThrowableIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BodyDockPositions::get_PreviousRightHandThrowableIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"get_PreviousRightHandThrowableIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BodyDockPositions::get_PreviousLeftHandThrowableDisabledTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"get_PreviousLeftHandThrowableDisabledTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BodyDockPositions::get_PreviousRightHandThrowableDisabledTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"get_PreviousRightHandThrowableDisabledTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BodyDockPositions::UpdateHandState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"UpdateHandState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::BodyDockPositions::GetLeftHandThrowable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"GetLeftHandThrowable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::BodyDockPositions::GetLeftHandThrowable(int32_t  throwableIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"GetLeftHandThrowable", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, throwableIndex);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::BodyDockPositions::GetRightHandThrowable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"GetRightHandThrowable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::BodyDockPositions::GetRightHandThrowable(int32_t  throwableIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {"GetRightHandThrowable", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, throwableIndex);
}
inline void GlobalNamespace::BodyDockPositions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BodyDockPositions* GlobalNamespace::BodyDockPositions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BodyDockPositions*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BodyDockPositions::BodyDockPositions()   {
}
//  Writing Method size for method: ::GlobalNamespace::BodyDockPositions_DockingResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BodyDockPositions_DockingResult::*)()>(&::GlobalNamespace::BodyDockPositions_DockingResult::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5753c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions_DockingResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>*& GlobalNamespace::BodyDockPositions_DockingResult::__cordl_internal_get_positionsDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionsDisabled;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>* const& GlobalNamespace::BodyDockPositions_DockingResult::__cordl_internal_get_positionsDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionsDisabled;
}
constexpr void GlobalNamespace::BodyDockPositions_DockingResult::__cordl_internal_set_positionsDisabled(::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionsDisabled = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>*& GlobalNamespace::BodyDockPositions_DockingResult::__cordl_internal_get_dockedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockedPosition;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>* const& GlobalNamespace::BodyDockPositions_DockingResult::__cordl_internal_get_dockedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockedPosition;
}
constexpr void GlobalNamespace::BodyDockPositions_DockingResult::__cordl_internal_set_dockedPosition(::System::Collections::Generic::List_1<::GlobalNamespace::BodyDockPositions_DropPositions>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dockedPosition = value;
}
inline void GlobalNamespace::BodyDockPositions_DockingResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BodyDockPositions_DockingResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BodyDockPositions_DockingResult* GlobalNamespace::BodyDockPositions_DockingResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BodyDockPositions_DockingResult*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BodyDockPositions_DockingResult::BodyDockPositions_DockingResult()   {
}
