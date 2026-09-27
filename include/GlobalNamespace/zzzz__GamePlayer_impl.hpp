#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePlayer.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_impl.hpp"
#include "GlobalNamespace/zzzz__GamePlayer_SlotData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__GamePlayer_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayer_SlotData_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionSnapPointManager_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.get_DidJoinWithItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer::*)()>(&::GlobalNamespace::GamePlayer::get_DidJoinWithItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5838314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"get_DidJoinWithItems", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.set_DidJoinWithItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(bool)>(&::GlobalNamespace::GamePlayer::set_DidJoinWithItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x583831c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"set_DidJoinWithItems", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.get_AdditionalDataInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer::*)()>(&::GlobalNamespace::GamePlayer::get_AdditionalDataInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5838324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"get_AdditionalDataInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.set_AdditionalDataInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(bool)>(&::GlobalNamespace::GamePlayer::set_AdditionalDataInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x583832c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"set_AdditionalDataInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.get_IsSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer::*)()>(&::GlobalNamespace::GamePlayer::get_IsSubscribed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5838334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"get_IsSubscribed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)()>(&::GlobalNamespace::GamePlayer::Awake)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x58383c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)()>(&::GlobalNamespace::GamePlayer::Clear)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5838720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.ResetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)()>(&::GlobalNamespace::GamePlayer::ResetData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5838c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"ResetData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)()>(&::GlobalNamespace::GamePlayer::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5838cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)()>(&::GlobalNamespace::GamePlayer::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5838cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.MigrateHeldActorNumbers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)()>(&::GlobalNamespace::GamePlayer::MigrateHeldActorNumbers)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5838dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"MigrateHeldActorNumbers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.SetGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityId, int32_t, ::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::SetGrabbed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5838f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"SetGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.SetSnapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityId, int32_t, ::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::SetSnapped)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5839048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"SetSnapped", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.SetSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(int32_t, ::GlobalNamespace::GameEntityId, ::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::SetSlot)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5838f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"SetSlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.ClearZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::ClearZone)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x583931c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"ClearZone", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.ClearGrabbedIfHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityId, ::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::ClearGrabbedIfHeld)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5839208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"ClearGrabbedIfHeld", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.ClearSnappedIfSnapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityId, ::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::ClearSnappedIfSnapped)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58390f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"ClearSnappedIfSnapped", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.ClearGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(int32_t)>(&::GlobalNamespace::GamePlayer::ClearGrabbed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5838b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"ClearGrabbed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.ClearSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(int32_t)>(&::GlobalNamespace::GamePlayer::ClearSlot)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5838bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"ClearSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.IsGrabbingDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer::*)()>(&::GlobalNamespace::GamePlayer::IsGrabbingDisabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58394cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsGrabbingDisabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.DisableGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(bool)>(&::GlobalNamespace::GamePlayer::DisableGrabbing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58394d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"DisableGrabbing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.IsSlotOccupied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer::*)(int32_t)>(&::GlobalNamespace::GamePlayer::IsSlotOccupied)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58394dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsSlotOccupied", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.IsHoldingEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityId, bool)>(&::GlobalNamespace::GamePlayer::IsHoldingEntity)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5839514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsHoldingEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.IsHoldingEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityManager*, bool)>(&::GlobalNamespace::GamePlayer::IsHoldingEntity)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5839624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsHoldingEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.IsHoldingEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GamePlayer::IsHoldingEntity)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58396c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsHoldingEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.RequestDropAllSnapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)()>(&::GlobalNamespace::GamePlayer::RequestDropAllSnapped)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x583976c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"RequestDropAllSnapped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.HeldAndSnappedItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>* (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::HeldAndSnappedItems)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58399a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"HeldAndSnappedItems", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.IterateHeldAndSnappedItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>* (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::IterateHeldAndSnappedItems)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5839a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IterateHeldAndSnappedItems", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.HeldAndSnappedEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::HeldAndSnappedEntities)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5839ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"HeldAndSnappedEntities", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.IterateHeldAndSnappedEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::IterateHeldAndSnappedEntities)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5839b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IterateHeldAndSnappedEntities", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.DeleteGrabbedEntityLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(int32_t)>(&::GlobalNamespace::GamePlayer::DeleteGrabbedEntityLocal)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5839c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"DeleteGrabbedEntityLocal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.AuthorityMigrateToEntityManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::AuthorityMigrateToEntityManager)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5839db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"AuthorityMigrateToEntityManager", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.IsInSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer::*)(int32_t, int32_t, ::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::IsInSlot)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5839fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsInSlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.TryGetSlotData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer::*)(int32_t, ::by_ref<::GlobalNamespace::GamePlayer_SlotData>)>(&::GlobalNamespace::GamePlayer::TryGetSlotData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x583a0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"TryGetSlotData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GamePlayer_SlotData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.TryGetSlotEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer::*)(int32_t, ::by_ref<::GlobalNamespace::GameEntity*>)>(&::GlobalNamespace::GamePlayer::TryGetSlotEntity)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x583a0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"TryGetSlotEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntity*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.GetGameEntityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GamePlayer::*)(bool)>(&::GlobalNamespace::GamePlayer::GetGameEntityId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x583a1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGameEntityId", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.GetGrabbedGameEntityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GamePlayer::*)(int32_t)>(&::GlobalNamespace::GamePlayer::GetGrabbedGameEntityId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5839594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGrabbedGameEntityId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.GetGrabbedGameEntityIdAndManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GamePlayer::*)(int32_t, ::by_ref<::GlobalNamespace::GameEntityManager*>)>(&::GlobalNamespace::GamePlayer::GetGrabbedGameEntityIdAndManager)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x583a1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGrabbedGameEntityIdAndManager", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntityManager*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.GetGrabbedGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntity> (::GlobalNamespace::GamePlayer::*)(int32_t)>(&::GlobalNamespace::GamePlayer::GetGrabbedGameEntity)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x583a2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGrabbedGameEntity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.FindSlotIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GamePlayer::FindSlotIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x583a3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"FindSlotIndex", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.FindHandIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GamePlayer::FindHandIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5834ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"FindHandIndex", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.FindSnapIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GamePlayer::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GamePlayer::FindSnapIndex)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x583a454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"FindSnapIndex", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.IsLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::GamePlayer::IsLeftHand)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x583a500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsLeftHand", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.GetHandIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool)>(&::GlobalNamespace::GamePlayer::GetHandIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x583a50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetHandIndex", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.GetRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (*)(int32_t)>(&::GlobalNamespace::GamePlayer::GetRig)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x583a518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetRig", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.GetGamePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GamePlayer> (*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GamePlayer::GetGamePlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x583a678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGamePlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.TryGetGamePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::Player*, ::by_ref<::GlobalNamespace::GamePlayer*>)>(&::GlobalNamespace::GamePlayer::TryGetGamePlayer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x583a690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"TryGetGamePlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GamePlayer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.GetGamePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GamePlayer> (*)(int32_t)>(&::GlobalNamespace::GamePlayer::GetGamePlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5834ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGamePlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.TryGetGamePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::GlobalNamespace::GamePlayer*>)>(&::GlobalNamespace::GamePlayer::TryGetGamePlayer)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x583a6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"TryGetGamePlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GamePlayer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.TryGetGamePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::VRRig*, ::by_ref<::GlobalNamespace::GamePlayer*>)>(&::GlobalNamespace::GamePlayer::TryGetGamePlayer)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x583a880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"TryGetGamePlayer", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GamePlayer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.GetGamePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GamePlayer> (*)(::UnityEngine::Collider*, bool)>(&::GlobalNamespace::GamePlayer::GetGamePlayer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x583a958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGamePlayer", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.GetHandTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::GamePlayer::*)(int32_t)>(&::GlobalNamespace::GamePlayer::GetHandTransform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x583aa54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetHandTransform", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.TryGetSlotXform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer::*)(int32_t, ::by_ref<::UnityEngine::Transform*>)>(&::GlobalNamespace::GamePlayer::TryGetSlotXform)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5833624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"TryGetSlotXform", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.IsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer::*)()>(&::GlobalNamespace::GamePlayer::IsLocal)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x583ab2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.SerializeNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(::System::IO::BinaryWriter*, ::GlobalNamespace::NetPlayer*, ::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::SerializeNetworkState)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x583ac28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"SerializeNetworkState", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.DeserializeNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryReader*, ::GlobalNamespace::GamePlayer*, ::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayer::DeserializeNetworkState)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x583af4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"DeserializeNetworkState", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::GlobalNamespace::GamePlayer*>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.IsSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::GamePlayer::IsSlot)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x583b1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.IsGrabSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::GamePlayer::IsGrabSlot)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x583b200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsGrabSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.IsSnapSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::GamePlayer::IsSnapSlot)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x583b20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsSnapSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.InitializeStaticLookupCaches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GamePlayer::InitializeStaticLookupCaches)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5838cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"InitializeStaticLookupCaches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.UpdateStaticLookupCaches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GamePlayer::UpdateStaticLookupCaches)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0x583b21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"UpdateStaticLookupCaches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer.SetInitializePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)(bool)>(&::GlobalNamespace::GamePlayer::SetInitializePlayer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5838c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"SetInitializePlayer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer::*)()>(&::GlobalNamespace::GamePlayer::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x583ba54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GamePlayer::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GamePlayer::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GamePlayer::__cordl_internal_get_leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GamePlayer::__cordl_internal_get_leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GamePlayer::__cordl_internal_get_rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GamePlayer::__cordl_internal_get_rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHand = value;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfectionSnapPointManager>& GlobalNamespace::GamePlayer::__cordl_internal_get_snapPointManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapPointManager;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfectionSnapPointManager> const& GlobalNamespace::GamePlayer::__cordl_internal_get_snapPointManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapPointManager;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_snapPointManager(::UnityW<::GlobalNamespace::SuperInfectionSnapPointManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapPointManager = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::GamePlayer::__cordl_internal_get_handTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::GamePlayer::__cordl_internal_get_handTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTransforms;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_handTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTransforms = value;
}
constexpr ::ArrayW<::GlobalNamespace::GamePlayer_SlotData>& GlobalNamespace::GamePlayer::__cordl_internal_get_slots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slots;
}
constexpr ::ArrayW<::GlobalNamespace::GamePlayer_SlotData> const& GlobalNamespace::GamePlayer::__cordl_internal_get_slots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slots;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_slots(::ArrayW<::GlobalNamespace::GamePlayer_SlotData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slots = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GamePlayer::__cordl_internal_get_newJoinZoneLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newJoinZoneLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GamePlayer::__cordl_internal_get_newJoinZoneLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newJoinZoneLimiter;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_newJoinZoneLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newJoinZoneLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GamePlayer::__cordl_internal_get_netImpulseLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netImpulseLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GamePlayer::__cordl_internal_get_netImpulseLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netImpulseLimiter;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_netImpulseLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netImpulseLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GamePlayer::__cordl_internal_get_netGrabLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netGrabLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GamePlayer::__cordl_internal_get_netGrabLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netGrabLimiter;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_netGrabLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netGrabLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GamePlayer::__cordl_internal_get_netThrowLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netThrowLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GamePlayer::__cordl_internal_get_netThrowLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netThrowLimiter;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_netThrowLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netThrowLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GamePlayer::__cordl_internal_get_netStateLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GamePlayer::__cordl_internal_get_netStateLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateLimiter;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_netStateLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netStateLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GamePlayer::__cordl_internal_get_netSnapLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netSnapLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GamePlayer::__cordl_internal_get_netSnapLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netSnapLimiter;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_netSnapLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netSnapLimiter = value;
}
constexpr bool& GlobalNamespace::GamePlayer::__cordl_internal_get__DidJoinWithItems_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DidJoinWithItems_k__BackingField;
}
constexpr bool const& GlobalNamespace::GamePlayer::__cordl_internal_get__DidJoinWithItems_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DidJoinWithItems_k__BackingField;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set__DidJoinWithItems_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DidJoinWithItems_k__BackingField = value;
}
constexpr bool& GlobalNamespace::GamePlayer::__cordl_internal_get__AdditionalDataInitialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdditionalDataInitialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::GamePlayer::__cordl_internal_get__AdditionalDataInitialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdditionalDataInitialized_k__BackingField;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set__AdditionalDataInitialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AdditionalDataInitialized_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::GamePlayer::__cordl_internal_get__lastSubscriptionCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSubscriptionCheck;
}
constexpr int32_t const& GlobalNamespace::GamePlayer::__cordl_internal_get__lastSubscriptionCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSubscriptionCheck;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set__lastSubscriptionCheck(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSubscriptionCheck = value;
}
constexpr bool& GlobalNamespace::GamePlayer::__cordl_internal_get__isSubscribed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSubscribed;
}
constexpr bool const& GlobalNamespace::GamePlayer::__cordl_internal_get__isSubscribed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSubscribed;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set__isSubscribed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSubscribed = value;
}
constexpr ::System::Action*& GlobalNamespace::GamePlayer::__cordl_internal_get_OnPlayerInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerInitialized;
}
constexpr ::System::Action* const& GlobalNamespace::GamePlayer::__cordl_internal_get_OnPlayerInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerInitialized;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_OnPlayerInitialized(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerInitialized = value;
}
constexpr ::System::Action*& GlobalNamespace::GamePlayer::__cordl_internal_get_OnPlayerLeftZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerLeftZone;
}
constexpr ::System::Action* const& GlobalNamespace::GamePlayer::__cordl_internal_get_OnPlayerLeftZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerLeftZone;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_OnPlayerLeftZone(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerLeftZone = value;
}
constexpr bool& GlobalNamespace::GamePlayer::__cordl_internal_get_grabbingDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbingDisabled;
}
constexpr bool const& GlobalNamespace::GamePlayer::__cordl_internal_get_grabbingDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbingDisabled;
}
constexpr void GlobalNamespace::GamePlayer::__cordl_internal_set_grabbingDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbingDisabled = value;
}
inline void GlobalNamespace::GamePlayer::setStaticF_lookupCache_actorNum_to_gamePlayer(::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>>, "lookupCache_actorNum_to_gamePlayer", ::GlobalNamespace::GamePlayer*>(std::forward<::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>>>(value));
}
inline ::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>> GlobalNamespace::GamePlayer::getStaticF_lookupCache_actorNum_to_gamePlayer()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>>, "lookupCache_actorNum_to_gamePlayer", ::GlobalNamespace::GamePlayer*>();
}
inline void GlobalNamespace::GamePlayer::setStaticF_lookupCache_rigInstanceId_to_gamePlayer(::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>>, "lookupCache_rigInstanceId_to_gamePlayer", ::GlobalNamespace::GamePlayer*>(std::forward<::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>>>(value));
}
inline ::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>> GlobalNamespace::GamePlayer::getStaticF_lookupCache_rigInstanceId_to_gamePlayer()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>>, "lookupCache_rigInstanceId_to_gamePlayer", ::GlobalNamespace::GamePlayer*>();
}
inline void GlobalNamespace::GamePlayer::setStaticF_staticLookupCachesCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "staticLookupCachesCount", ::GlobalNamespace::GamePlayer*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GamePlayer::getStaticF_staticLookupCachesCount()  {
return ::cordl_internals::getStaticField<int32_t, "staticLookupCachesCount", ::GlobalNamespace::GamePlayer*>();
}
inline bool GlobalNamespace::GamePlayer::get_DidJoinWithItems()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"get_DidJoinWithItems", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayer::set_DidJoinWithItems(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"set_DidJoinWithItems", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GamePlayer::get_AdditionalDataInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"get_AdditionalDataInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayer::set_AdditionalDataInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"set_AdditionalDataInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GamePlayer::get_IsSubscribed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"get_IsSubscribed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayer::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayer::ResetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"ResetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayer::MigrateHeldActorNumbers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"MigrateHeldActorNumbers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayer::SetGrabbed(::GlobalNamespace::GameEntityId  gameBallId, int32_t  handIndex, ::GlobalNamespace::GameEntityManager*  gameEntityManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"SetGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, handIndex, gameEntityManager);
}
inline void GlobalNamespace::GamePlayer::SetSnapped(::GlobalNamespace::GameEntityId  entityId, int32_t  slotIndex, ::GlobalNamespace::GameEntityManager*  gameEntityManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"SetSnapped", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, slotIndex, gameEntityManager);
}
inline void GlobalNamespace::GamePlayer::SetSlot(int32_t  slotIndex, ::GlobalNamespace::GameEntityId  entityId, ::GlobalNamespace::GameEntityManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"SetSlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slotIndex, entityId, manager);
}
inline void GlobalNamespace::GamePlayer::ClearZone(::GlobalNamespace::GameEntityManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"ClearZone", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager);
}
inline void GlobalNamespace::GamePlayer::ClearGrabbedIfHeld(::GlobalNamespace::GameEntityId  gameBallId, ::GlobalNamespace::GameEntityManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"ClearGrabbedIfHeld", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, manager);
}
inline void GlobalNamespace::GamePlayer::ClearSnappedIfSnapped(::GlobalNamespace::GameEntityId  gameBallId, ::GlobalNamespace::GameEntityManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"ClearSnappedIfSnapped", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, manager);
}
inline void GlobalNamespace::GamePlayer::ClearGrabbed(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"ClearGrabbed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex);
}
inline void GlobalNamespace::GamePlayer::ClearSlot(int32_t  slotIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"ClearSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slotIndex);
}
inline bool GlobalNamespace::GamePlayer::IsGrabbingDisabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsGrabbingDisabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayer::DisableGrabbing(bool  disable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"DisableGrabbing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disable);
}
inline bool GlobalNamespace::GamePlayer::IsSlotOccupied(int32_t  slotIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsSlotOccupied", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, slotIndex);
}
inline bool GlobalNamespace::GamePlayer::IsHoldingEntity(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsHoldingEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameEntityId, isLeftHand);
}
inline bool GlobalNamespace::GamePlayer::IsHoldingEntity(::GlobalNamespace::GameEntityManager*  gameEntityManager, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsHoldingEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameEntityManager, isLeftHand);
}
inline bool GlobalNamespace::GamePlayer::IsHoldingEntity(::GlobalNamespace::GameEntityId  gameEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsHoldingEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameEntityId);
}
inline void GlobalNamespace::GamePlayer::RequestDropAllSnapped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"RequestDropAllSnapped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>* GlobalNamespace::GamePlayer::HeldAndSnappedItems(::GlobalNamespace::GameEntityManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"HeldAndSnappedItems", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*>(this, ___internal_method, manager);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>* GlobalNamespace::GamePlayer::IterateHeldAndSnappedItems(::GlobalNamespace::GameEntityManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IterateHeldAndSnappedItems", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>*>(this, ___internal_method, manager);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* GlobalNamespace::GamePlayer::HeldAndSnappedEntities(::GlobalNamespace::GameEntityManager*  ignoreEntitiesInManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"HeldAndSnappedEntities", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>(this, ___internal_method, ignoreEntitiesInManager);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* GlobalNamespace::GamePlayer::IterateHeldAndSnappedEntities(::GlobalNamespace::GameEntityManager*  ignoreEntitiesInManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IterateHeldAndSnappedEntities", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*>(this, ___internal_method, ignoreEntitiesInManager);
}
inline void GlobalNamespace::GamePlayer::DeleteGrabbedEntityLocal(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"DeleteGrabbedEntityLocal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex);
}
inline int32_t GlobalNamespace::GamePlayer::AuthorityMigrateToEntityManager(::GlobalNamespace::GameEntityManager*  newEntityManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"AuthorityMigrateToEntityManager", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, newEntityManager);
}
inline bool GlobalNamespace::GamePlayer::IsInSlot(int32_t  slotIndex, int32_t  entityIndex, ::GlobalNamespace::GameEntityManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsInSlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, slotIndex, entityIndex, manager);
}
inline bool GlobalNamespace::GamePlayer::TryGetSlotData(int32_t  slotIndex, ::by_ref<::GlobalNamespace::GamePlayer_SlotData>  out_slotData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"TryGetSlotData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GamePlayer_SlotData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, slotIndex, out_slotData);
}
inline bool GlobalNamespace::GamePlayer::TryGetSlotEntity(int32_t  slotIndex, ::by_ref<::GlobalNamespace::GameEntity*>  out_entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"TryGetSlotEntity", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntity*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, slotIndex, out_entity);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GamePlayer::GetGameEntityId(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGameEntityId", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, isLeftHand);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GamePlayer::GetGrabbedGameEntityId(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGrabbedGameEntityId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, handIndex);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GamePlayer::GetGrabbedGameEntityIdAndManager(int32_t  handIndex, ::by_ref<::GlobalNamespace::GameEntityManager*>  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGrabbedGameEntityIdAndManager", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntityManager*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, handIndex, manager);
}
inline ::UnityW<::GlobalNamespace::GameEntity> GlobalNamespace::GamePlayer::GetGrabbedGameEntity(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGrabbedGameEntity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntity>>(this, ___internal_method, handIndex);
}
inline int32_t GlobalNamespace::GamePlayer::FindSlotIndex(::GlobalNamespace::GameEntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"FindSlotIndex", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entityId);
}
inline int32_t GlobalNamespace::GamePlayer::FindHandIndex(::GlobalNamespace::GameEntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"FindHandIndex", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entityId);
}
inline int32_t GlobalNamespace::GamePlayer::FindSnapIndex(::GlobalNamespace::GameEntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"FindSnapIndex", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entityId);
}
inline bool GlobalNamespace::GamePlayer::IsLeftHand(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsLeftHand", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handIndex);
}
inline int32_t GlobalNamespace::GamePlayer::GetHandIndex(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetHandIndex", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, leftHand);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::GamePlayer::GetRig(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetRig", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(nullptr, ___internal_method, actorNumber);
}
inline ::UnityW<::GlobalNamespace::GamePlayer> GlobalNamespace::GamePlayer::GetGamePlayer(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGamePlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GamePlayer>>(nullptr, ___internal_method, player);
}
inline bool GlobalNamespace::GamePlayer::TryGetGamePlayer(::Photon::Realtime::Player*  player, ::by_ref<::GlobalNamespace::GamePlayer*>  gamePlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"TryGetGamePlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GamePlayer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player, gamePlayer);
}
inline ::UnityW<::GlobalNamespace::GamePlayer> GlobalNamespace::GamePlayer::GetGamePlayer(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGamePlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GamePlayer>>(nullptr, ___internal_method, actorNumber);
}
inline bool GlobalNamespace::GamePlayer::TryGetGamePlayer(int32_t  actorNumber, ::by_ref<::GlobalNamespace::GamePlayer*>  out_gamePlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"TryGetGamePlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GamePlayer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, actorNumber, out_gamePlayer);
}
inline bool GlobalNamespace::GamePlayer::TryGetGamePlayer(::GlobalNamespace::VRRig*  rig, ::by_ref<::GlobalNamespace::GamePlayer*>  out_gamePlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"TryGetGamePlayer", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GamePlayer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rig, out_gamePlayer);
}
inline ::UnityW<::GlobalNamespace::GamePlayer> GlobalNamespace::GamePlayer::GetGamePlayer(::UnityEngine::Collider*  collider, bool  bodyOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetGamePlayer", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GamePlayer>>(nullptr, ___internal_method, collider, bodyOnly);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GamePlayer::GetHandTransform(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"GetHandTransform", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, handIndex);
}
inline bool GlobalNamespace::GamePlayer::TryGetSlotXform(int32_t  slotIndex, ::by_ref<::UnityEngine::Transform*>  slotXform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"TryGetSlotXform", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, slotIndex, slotXform);
}
inline bool GlobalNamespace::GamePlayer::IsLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayer::SerializeNetworkState(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::GameEntityManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"SerializeNetworkState", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, player, manager);
}
inline void GlobalNamespace::GamePlayer::DeserializeNetworkState(::System::IO::BinaryReader*  reader, ::GlobalNamespace::GamePlayer*  gamePlayer, ::GlobalNamespace::GameEntityManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"DeserializeNetworkState", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::GlobalNamespace::GamePlayer*>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reader, gamePlayer, manager);
}
inline bool GlobalNamespace::GamePlayer::IsSlot(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
inline bool GlobalNamespace::GamePlayer::IsGrabSlot(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsGrabSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
inline bool GlobalNamespace::GamePlayer::IsSnapSlot(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"IsSnapSlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
inline void GlobalNamespace::GamePlayer::InitializeStaticLookupCaches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"InitializeStaticLookupCaches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GamePlayer::UpdateStaticLookupCaches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"UpdateStaticLookupCaches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GamePlayer::SetInitializePlayer(bool  initialized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {"SetInitializePlayer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialized);
}
inline void GlobalNamespace::GamePlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GamePlayer* GlobalNamespace::GamePlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GamePlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GamePlayer::GamePlayer()   {
}
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::*)(int32_t)>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5839aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x583be00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::MoveNext)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x583be04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63.System_Collections_Generic_IEnumerator_GameEntityId__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::System_Collections_Generic_IEnumerator_GameEntityId__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x583bf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"System.Collections.Generic.IEnumerator<GameEntityId>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x583bf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x583bfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63.System_Collections_Generic_IEnumerable_GameEntityId__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>* (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::System_Collections_Generic_IEnumerable_GameEntityId__GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x583c00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"System.Collections.Generic.IEnumerable<GameEntityId>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x583c0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::GlobalNamespace::GameEntityId& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::GlobalNamespace::GameEntityId const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_set___2__current(::GlobalNamespace::GameEntityId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::GlobalNamespace::GamePlayer>& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GamePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get_manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get_manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_set_manager(::UnityW<::GlobalNamespace::GameEntityManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manager = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get___3__manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__manager;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get___3__manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__manager;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_set___3__manager(::UnityW<::GlobalNamespace::GameEntityManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__manager = value;
}
constexpr int32_t& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
inline void GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::System_Collections_Generic_IEnumerator_GameEntityId__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"System.Collections.Generic.IEnumerator<GameEntityId>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>* GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::System_Collections_Generic_IEnumerable_GameEntityId__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"System.Collections.Generic.IEnumerable<GameEntityId>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63* GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>"
constexpr  GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>* GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__GameEntityId_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>"
constexpr  GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>* GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__GameEntityId_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63::GamePlayer__IterateHeldAndSnappedItems_d__63()   {
}
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::*)(int32_t)>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5839bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x583baf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x583baf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65.System_Collections_Generic_IEnumerator_GameEntity__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntity> (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::System_Collections_Generic_IEnumerator_GameEntity__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x583bd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"System.Collections.Generic.IEnumerator<GameEntity>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x583bd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x583bd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65.System_Collections_Generic_IEnumerable_GameEntity__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>* (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::System_Collections_Generic_IEnumerable_GameEntity__GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x583bd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"System.Collections.Generic.IEnumerable<GameEntity>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::*)()>(&::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x583bdfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_set___2__current(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::GlobalNamespace::GamePlayer>& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GamePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get_ignoreEntitiesInManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreEntitiesInManager;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get_ignoreEntitiesInManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreEntitiesInManager;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_set_ignoreEntitiesInManager(::UnityW<::GlobalNamespace::GameEntityManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreEntitiesInManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get___3__ignoreEntitiesInManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__ignoreEntitiesInManager;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get___3__ignoreEntitiesInManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__ignoreEntitiesInManager;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_set___3__ignoreEntitiesInManager(::UnityW<::GlobalNamespace::GameEntityManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__ignoreEntitiesInManager = value;
}
constexpr int32_t& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
inline void GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GameEntity> GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::System_Collections_Generic_IEnumerator_GameEntity__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"System.Collections.Generic.IEnumerator<GameEntity>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntity>>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>* GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::System_Collections_Generic_IEnumerable_GameEntity__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"System.Collections.Generic.IEnumerable<GameEntity>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65* GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>"
constexpr  GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__GameEntity__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>"
constexpr  GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>* GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__GameEntity__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65::GamePlayer__IterateHeldAndSnappedEntities_d__65()   {
}
