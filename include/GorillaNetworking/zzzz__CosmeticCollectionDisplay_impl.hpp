#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticCollectionDisplay.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticCollectionDisplay_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticCollectionDisplay_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticInfoV2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.get_ParentPlayFabID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::get_ParentPlayFabID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_ParentPlayFabID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.set_ParentPlayFabID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)(::StringW)>(&::GorillaNetworking::CosmeticCollectionDisplay::set_ParentPlayFabID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"set_ParentPlayFabID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.get_ActiveIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::get_ActiveIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_ActiveIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::get_Count)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c4f944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.get_VisibleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::get_VisibleMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_VisibleMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.get_IsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::get_IsLocal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_IsLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*, ::StringW, ::GorillaNetworking::CosmeticCollectionDisplay*, bool)>(&::GorillaNetworking::CosmeticCollectionDisplay::Register)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5c4f99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::CosmeticCollectionDisplay*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.FindForRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay> (*)(::GlobalNamespace::VRRig*, ::StringW)>(&::GorillaNetworking::CosmeticCollectionDisplay::FindForRig)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c4fc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"FindForRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.GetAllForParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*, ::StringW, ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*)>(&::GorillaNetworking::CosmeticCollectionDisplay::GetAllForParent)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5c4fd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"GetAllForParent", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.DestroyAllForParentExcept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*, ::StringW, ::UnityEngine::GameObject*)>(&::GorillaNetworking::CosmeticCollectionDisplay::DestroyAllForParentExcept)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5c4ff4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"DestroyAllForParentExcept", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.GetDisplaysForRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*, ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*)>(&::GorillaNetworking::CosmeticCollectionDisplay::GetDisplaysForRig)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5c50154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"GetDisplaysForRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.get_ActiveCollectable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem> (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::get_ActiveCollectable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5c503c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_ActiveCollectable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.GetCollectableAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem> (::GorillaNetworking::CosmeticCollectionDisplay::*)(int32_t)>(&::GorillaNetworking::CosmeticCollectionDisplay::GetCollectableAt)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c504b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"GetCollectableAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.ContentMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticCollectionDisplay::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*)>(&::GorillaNetworking::CosmeticCollectionDisplay::ContentMatches)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c505a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"ContentMatches", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.Populate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*, ::GorillaTag::CosmeticSystem::CosmeticInfoV2, ::UnityEngine::Transform*)>(&::GorillaNetworking::CosmeticCollectionDisplay::Populate)> {
  constexpr static std::size_t size = 0xdd0;
  constexpr static std::size_t addrs = 0x5c50768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"Populate", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticInfoV2>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.ResolveCanonicalIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::GorillaNetworking::CosmeticCollectionDisplay::ResolveCanonicalIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c517ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"ResolveCanonicalIndex", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.SetActiveIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)(int32_t)>(&::GorillaNetworking::CosmeticCollectionDisplay::SetActiveIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c51c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"SetActiveIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.SetVisibleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)(int32_t)>(&::GorillaNetworking::CosmeticCollectionDisplay::SetVisibleMask)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c51fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"SetVisibleMask", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.SetEquippedAtCanonical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticCollectionDisplay::*)(int32_t, bool)>(&::GorillaNetworking::CosmeticCollectionDisplay::SetEquippedAtCanonical)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c51fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"SetEquippedAtCanonical", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.IsEquippedAtCanonical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::CosmeticCollectionDisplay::*)(int32_t)>(&::GorillaNetworking::CosmeticCollectionDisplay::IsEquippedAtCanonical)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c52040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"IsEquippedAtCanonical", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.get_ActiveCanonicalIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::get_ActiveCanonicalIndex)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c52060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_ActiveCanonicalIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.PersistLocalState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::PersistLocalState)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c51e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"PersistLocalState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.CycleActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)(int32_t)>(&::GorillaNetworking::CosmeticCollectionDisplay::CycleActive)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c520fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"CycleActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.SetVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)(bool)>(&::GorillaNetworking::CosmeticCollectionDisplay::SetVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5217c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"SetVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.InstantiateIntoAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)(::GlobalNamespace::CosmeticsController_CosmeticItem, ::UnityEngine::Transform*)>(&::GorillaNetworking::CosmeticCollectionDisplay::InstantiateIntoAnchor)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5c518cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"InstantiateIntoAnchor", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.ApplyCyclingVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::ApplyCyclingVisibility)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c51b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"ApplyCyclingVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.RefreshAnchorVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::RefreshAnchorVisibility)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5c51d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"RefreshAnchorVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.ClearSpawnedAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::ClearSpawnedAnchors)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5c51538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"ClearSpawnedAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.UnregisterIfOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::UnregisterIfOwner)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5c521f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"UnregisterIfOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c52344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::OnEnable)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5c52348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c525c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5c52650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_isCycling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCycling;
}
constexpr bool const& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_isCycling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCycling;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_set_isCycling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCycling = value;
}
constexpr bool& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_isVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isVisible;
}
constexpr bool const& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_isVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isVisible;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_set_isVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isVisible = value;
}
constexpr bool& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_isLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr bool const& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_isLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_set_isLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLocal = value;
}
constexpr int32_t& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_activeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeIndex;
}
constexpr int32_t const& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_activeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeIndex;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_set_activeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeIndex = value;
}
constexpr int32_t& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_visibleMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleMask;
}
constexpr int32_t const& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_visibleMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleMask;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_set_visibleMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibleMask = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_registeredRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registeredRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_registeredRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registeredRig;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_set_registeredRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registeredRig = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_registeredParentID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registeredParentID;
}
constexpr ::StringW const& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_registeredParentID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registeredParentID;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_set_registeredParentID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registeredParentID = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_spawnedAnchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedAnchors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_spawnedAnchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedAnchors;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_set_spawnedAnchors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnedAnchors = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_loadOps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadOps;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>* const& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_loadOps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadOps;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_set_loadOps(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadOps = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_placedCollectables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placedCollectables;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>* const& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_placedCollectables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placedCollectables;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_set_placedCollectables(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placedCollectables = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_canonicalIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canonicalIndices;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get_canonicalIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canonicalIndices;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_set_canonicalIndices(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canonicalIndices = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get__ParentPlayFabID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParentPlayFabID_k__BackingField;
}
constexpr ::StringW const& GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_get__ParentPlayFabID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParentPlayFabID_k__BackingField;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay::__cordl_internal_set__ParentPlayFabID_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParentPlayFabID_k__BackingField = value;
}
inline void GorillaNetworking::CosmeticCollectionDisplay::setStaticF_Registered(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*, "Registered", ::GorillaNetworking::CosmeticCollectionDisplay*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>* GorillaNetworking::CosmeticCollectionDisplay::getStaticF_Registered()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::VRRig>,::StringW>,::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*, "Registered", ::GorillaNetworking::CosmeticCollectionDisplay*>();
}
inline void GorillaNetworking::CosmeticCollectionDisplay::setStaticF_AllDisplays(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*, "AllDisplays", ::GorillaNetworking::CosmeticCollectionDisplay*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>* GorillaNetworking::CosmeticCollectionDisplay::getStaticF_AllDisplays()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*, "AllDisplays", ::GorillaNetworking::CosmeticCollectionDisplay*>();
}
inline ::StringW GorillaNetworking::CosmeticCollectionDisplay::get_ParentPlayFabID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_ParentPlayFabID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::set_ParentPlayFabID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"set_ParentPlayFabID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GorillaNetworking::CosmeticCollectionDisplay::get_ActiveIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_ActiveIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GorillaNetworking::CosmeticCollectionDisplay::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GorillaNetworking::CosmeticCollectionDisplay::get_VisibleMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_VisibleMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GorillaNetworking::CosmeticCollectionDisplay::get_IsLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_IsLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::Register(::GlobalNamespace::VRRig*  rig, ::StringW  parentID, ::GorillaNetworking::CosmeticCollectionDisplay*  display, bool  isLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GorillaNetworking::CosmeticCollectionDisplay*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig, parentID, display, isLocal);
}
inline ::UnityW<::GorillaNetworking::CosmeticCollectionDisplay> GorillaNetworking::CosmeticCollectionDisplay::FindForRig(::GlobalNamespace::VRRig*  rig, ::StringW  parentID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"FindForRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>(nullptr, ___internal_method, rig, parentID);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::GetAllForParent(::GlobalNamespace::VRRig*  rig, ::StringW  parentID, ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"GetAllForParent", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig, parentID, result);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::DestroyAllForParentExcept(::GlobalNamespace::VRRig*  rig, ::StringW  parentID, ::UnityEngine::GameObject*  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"DestroyAllForParentExcept", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig, parentID, host);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::GetDisplaysForRig(::GlobalNamespace::VRRig*  rig, ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"GetDisplaysForRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig, result);
}
inline ::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem> GorillaNetworking::CosmeticCollectionDisplay::get_ActiveCollectable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_ActiveCollectable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem>>(this, ___internal_method);
}
inline ::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem> GorillaNetworking::CosmeticCollectionDisplay::GetCollectableAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"GetCollectableAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem>>(this, ___internal_method, index);
}
inline bool GorillaNetworking::CosmeticCollectionDisplay::ContentMatches(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"ContentMatches", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, items);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::Populate(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  ownedCollectables, ::GorillaTag::CosmeticSystem::CosmeticInfoV2  parentInfo, ::UnityEngine::Transform*  rootXform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"Populate", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*>(), ::i2c::type_of<::GorillaTag::CosmeticSystem::CosmeticInfoV2>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ownedCollectables, parentInfo, rootXform);
}
inline int32_t GorillaNetworking::CosmeticCollectionDisplay::ResolveCanonicalIndex(::StringW  parentPlayFabID, ::StringW  itemName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"ResolveCanonicalIndex", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, parentPlayFabID, itemName);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::SetActiveIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"SetActiveIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::SetVisibleMask(int32_t  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"SetVisibleMask", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mask);
}
inline bool GorillaNetworking::CosmeticCollectionDisplay::SetEquippedAtCanonical(int32_t  canonicalIndex, bool  equipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"SetEquippedAtCanonical", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, canonicalIndex, equipped);
}
inline bool GorillaNetworking::CosmeticCollectionDisplay::IsEquippedAtCanonical(int32_t  canonicalIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"IsEquippedAtCanonical", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, canonicalIndex);
}
inline int32_t GorillaNetworking::CosmeticCollectionDisplay::get_ActiveCanonicalIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"get_ActiveCanonicalIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::PersistLocalState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"PersistLocalState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::CycleActive(int32_t  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"CycleActive", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::SetVisible(bool  visible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"SetVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::InstantiateIntoAnchor(::GlobalNamespace::CosmeticsController_CosmeticItem  collectable, ::UnityEngine::Transform*  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"InstantiateIntoAnchor", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectable, anchor);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::ApplyCyclingVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"ApplyCyclingVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::RefreshAnchorVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"RefreshAnchorVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::ClearSpawnedAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"ClearSpawnedAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::UnregisterIfOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"UnregisterIfOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticCollectionDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::CosmeticCollectionDisplay* GorillaNetworking::CosmeticCollectionDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticCollectionDisplay*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticCollectionDisplay::CosmeticCollectionDisplay()   {
}
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::*)()>(&::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c52184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0._InstantiateIntoAnchor_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>)>(&::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::_InstantiateIntoAnchor_b__0)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5c528cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0*>(),
                        {"<InstantiateIntoAnchor>b__0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::__cordl_internal_get_anchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::__cordl_internal_get_anchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::__cordl_internal_set_anchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchor = value;
}
constexpr ::UnityEngine::Vector3& GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::__cordl_internal_get_attachScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachScale;
}
constexpr ::UnityEngine::Vector3 const& GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::__cordl_internal_get_attachScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachScale;
}
constexpr void GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::__cordl_internal_set_attachScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachScale = value;
}
inline void GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::_InstantiateIntoAnchor_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0*>(),
                        {"<InstantiateIntoAnchor>b__0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0* GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticCollectionDisplay___c__DisplayClass45_0::CosmeticCollectionDisplay___c__DisplayClass45_0()   {
}
