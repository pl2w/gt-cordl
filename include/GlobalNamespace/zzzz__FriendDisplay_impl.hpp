#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendDisplay.hpp"
#include "GlobalNamespace/zzzz__FriendCard_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableDelayButton_impl.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FriendDisplay_def.hpp"
#include "GlobalNamespace/zzzz__FriendBackendController_def.hpp"
#include "GlobalNamespace/zzzz__FriendCard_def.hpp"
#include "GlobalNamespace/zzzz__FriendDisplay_ButtonState_def.hpp"
#include "GlobalNamespace/zzzz__TriggerEventNotifier_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.get_ConfiguredVimPageCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::FriendDisplay::get_ConfiguredVimPageCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5aa4254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_ConfiguredVimPageCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.set_ConfiguredVimPageCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::FriendDisplay::set_ConfiguredVimPageCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5aa42ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"set_ConfiguredVimPageCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.get_ConfiguredFreeExtraPageCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::FriendDisplay::get_ConfiguredFreeExtraPageCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5aa4308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_ConfiguredFreeExtraPageCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.set_ConfiguredFreeExtraPageCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::FriendDisplay::set_ConfiguredFreeExtraPageCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5aa4360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"set_ConfiguredFreeExtraPageCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.get_totalPages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::get_totalPages)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5aa43bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_totalPages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.get_TotalCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::get_TotalCapacity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5aa43cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_TotalCapacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.get_VIMTotalCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::get_VIMTotalCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5aa43e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_VIMTotalCapacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.get_FreeExtraTotalCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::get_FreeExtraTotalCapacity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5aa43ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_FreeExtraTotalCapacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.get_VimPageCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::get_VimPageCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa43f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_VimPageCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.get_InRemoveMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::get_InRemoveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa4400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_InRemoveMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5aa4408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::Start)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5aa44dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::OnDestroy)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5aa4b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.OnLocalSubscriptionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::OnLocalSubscriptionChanged)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5aa4de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"OnLocalSubscriptionChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.TriggerEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)(::GlobalNamespace::TriggerEventNotifier*, ::UnityEngine::Collider*)>(&::GlobalNamespace::FriendDisplay::TriggerEntered)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5aa4fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"TriggerEntered", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.TriggerExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)(::GlobalNamespace::TriggerEventNotifier*, ::UnityEngine::Collider*)>(&::GlobalNamespace::FriendDisplay::TriggerExited)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5aa57c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"TriggerExited", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aa5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::Refresh)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5aa5ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.LocalPlayerFullyVisiblePress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::LocalPlayerFullyVisiblePress)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5aa5b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"LocalPlayerFullyVisiblePress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.LocalPlayerPublicOnlyPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::LocalPlayerPublicOnlyPress)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5aa5c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"LocalPlayerPublicOnlyPress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.LocalPlayerFullyHiddenPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::LocalPlayerFullyHiddenPress)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5aa5ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"LocalPlayerFullyHiddenPress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.UpdateLocalPlayerPrivacyButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::UpdateLocalPlayerPrivacyButtons)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5aa4a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"UpdateLocalPlayerPrivacyButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.UpdatePageButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)(int32_t)>(&::GlobalNamespace::FriendDisplay::UpdatePageButtons)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5aa5d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"UpdatePageButtons", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.SetButtonAppearance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)(::UnityEngine::MeshRenderer*, bool)>(&::GlobalNamespace::FriendDisplay::SetButtonAppearance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5aa5d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"SetButtonAppearance", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.SetButtonAppearance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)(::UnityEngine::MeshRenderer*, ::GlobalNamespace::FriendDisplay_ButtonState)>(&::GlobalNamespace::FriendDisplay::SetButtonAppearance)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5aa6138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"SetButtonAppearance", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::GlobalNamespace::FriendDisplay_ButtonState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.ClearPageButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::ClearPageButtons)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5aa5a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"ClearPageButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.HidePageButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)(::UnityEngine::MeshRenderer*)>(&::GlobalNamespace::FriendDisplay::HidePageButton)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5aa6060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"HidePageButton", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.SetPageButtonAppearance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)(::UnityEngine::MeshRenderer*, ::GlobalNamespace::FriendDisplay_ButtonState)>(&::GlobalNamespace::FriendDisplay::SetPageButtonAppearance)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5aa5ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"SetPageButtonAppearance", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::GlobalNamespace::FriendDisplay_ButtonState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.ToggleRemoveFriendMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::ToggleRemoveFriendMode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5aa5734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"ToggleRemoveFriendMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.InitFriendCards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::InitFriendCards)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5aa4748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"InitFriendCards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.RandomizeFriendCards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::RandomizeFriendCards)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5aa61f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"RandomizeFriendCards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.ClearFriendCards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::ClearFriendCards)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5aa59fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"ClearFriendCards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.OnGetFriendsReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)(::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*)>(&::GlobalNamespace::FriendDisplay::OnGetFriendsReceived)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5aa6254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"OnGetFriendsReceived", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.GoToFriendPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)(int32_t)>(&::GlobalNamespace::FriendDisplay::GoToFriendPage)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5aa4df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"GoToFriendPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.InitLocalPlayerCard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::InitLocalPlayerCard)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5aa4a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"InitLocalPlayerCard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.PopulateLocalPlayerCard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::PopulateLocalPlayerCard)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x5aa527c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"PopulateLocalPlayerCard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.ClearLocalPlayerCard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::ClearLocalPlayerCard)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5aa5a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"ClearLocalPlayerCard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5aa6278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendDisplay::*)()>(&::GlobalNamespace::FriendDisplay::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5aa6580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FriendCard>>& GlobalNamespace::FriendDisplay::__cordl_internal_get_friendCards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendCards;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FriendCard>> const& GlobalNamespace::FriendDisplay::__cordl_internal_get_friendCards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendCards;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_friendCards(::ArrayW<::UnityW<::GlobalNamespace::FriendCard>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendCards = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FriendDisplay::__cordl_internal_get_gridRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FriendDisplay::__cordl_internal_get_gridRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridRoot;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_gridRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridRoot = value;
}
constexpr float_t& GlobalNamespace::FriendDisplay::__cordl_internal_get_gridWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridWidth;
}
constexpr float_t const& GlobalNamespace::FriendDisplay::__cordl_internal_get_gridWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridWidth;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_gridWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridWidth = value;
}
constexpr float_t& GlobalNamespace::FriendDisplay::__cordl_internal_get_gridHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridHeight;
}
constexpr float_t const& GlobalNamespace::FriendDisplay::__cordl_internal_get_gridHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridHeight;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_gridHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridHeight = value;
}
constexpr int32_t& GlobalNamespace::FriendDisplay::__cordl_internal_get_gridDimension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridDimension;
}
constexpr int32_t const& GlobalNamespace::FriendDisplay::__cordl_internal_get_gridDimension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridDimension;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_gridDimension(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridDimension = value;
}
constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier>& GlobalNamespace::FriendDisplay::__cordl_internal_get_triggerNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerNotifier;
}
constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier> const& GlobalNamespace::FriendDisplay::__cordl_internal_get_triggerNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerNotifier;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_triggerNotifier(::UnityW<::GlobalNamespace::TriggerEventNotifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerNotifier = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableDelayButton>>& GlobalNamespace::FriendDisplay::__cordl_internal_get__friendCardButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____friendCardButtons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableDelayButton>> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__friendCardButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____friendCardButtons;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__friendCardButtons(::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableDelayButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____friendCardButtons = value;
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>>& GlobalNamespace::FriendDisplay::__cordl_internal_get__friendCardButtonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____friendCardButtonText;
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__friendCardButtonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____friendCardButtonText;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__friendCardButtonText(::ArrayW<::UnityW<::TMPro::TextMeshProUGUI>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____friendCardButtonText = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::FriendDisplay::__cordl_internal_get__localPlayerFullyVisibleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPlayerFullyVisibleButton;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__localPlayerFullyVisibleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPlayerFullyVisibleButton;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__localPlayerFullyVisibleButton(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPlayerFullyVisibleButton = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::FriendDisplay::__cordl_internal_get__localPlayerPublicOnlyButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPlayerPublicOnlyButton;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__localPlayerPublicOnlyButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPlayerPublicOnlyButton;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__localPlayerPublicOnlyButton(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPlayerPublicOnlyButton = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::FriendDisplay::__cordl_internal_get__localPlayerFullyHiddenButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPlayerFullyHiddenButton;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__localPlayerFullyHiddenButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPlayerFullyHiddenButton;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__localPlayerFullyHiddenButton(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPlayerFullyHiddenButton = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::FriendDisplay::__cordl_internal_get__removeFriendButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____removeFriendButton;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__removeFriendButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____removeFriendButton;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__removeFriendButton(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____removeFriendButton = value;
}
constexpr ::UnityW<::GlobalNamespace::FriendCard>& GlobalNamespace::FriendDisplay::__cordl_internal_get__localPlayerCard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPlayerCard;
}
constexpr ::UnityW<::GlobalNamespace::FriendCard> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__localPlayerCard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPlayerCard;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__localPlayerCard(::UnityW<::GlobalNamespace::FriendCard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPlayerCard = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::FriendDisplay::__cordl_internal_get_PageButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageButtons;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::FriendDisplay::__cordl_internal_get_PageButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageButtons;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_PageButtons(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageButtons = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::FriendDisplay::__cordl_internal_get__buttonDefaultMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonDefaultMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__buttonDefaultMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonDefaultMaterials;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__buttonDefaultMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonDefaultMaterials = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::FriendDisplay::__cordl_internal_get__buttonActiveMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonActiveMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__buttonActiveMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonActiveMaterials;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__buttonActiveMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonActiveMaterials = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::FriendDisplay::__cordl_internal_get__buttonAlertMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonAlertMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__buttonAlertMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonAlertMaterials;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__buttonAlertMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonAlertMaterials = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::FriendDisplay::__cordl_internal_get__pageButtonDefaultMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageButtonDefaultMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__pageButtonDefaultMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageButtonDefaultMaterials;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__pageButtonDefaultMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pageButtonDefaultMaterials = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::FriendDisplay::__cordl_internal_get__pageButtonActiveMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageButtonActiveMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__pageButtonActiveMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageButtonActiveMaterials;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__pageButtonActiveMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pageButtonActiveMaterials = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::FriendDisplay::__cordl_internal_get__pageButtonAlerttMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageButtonAlerttMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__pageButtonAlerttMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageButtonAlerttMaterials;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__pageButtonAlerttMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pageButtonAlerttMaterials = value;
}
constexpr int32_t& GlobalNamespace::FriendDisplay::__cordl_internal_get_freeExtraPageCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeExtraPageCount;
}
constexpr int32_t const& GlobalNamespace::FriendDisplay::__cordl_internal_get_freeExtraPageCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeExtraPageCount;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_freeExtraPageCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freeExtraPageCount = value;
}
constexpr int32_t& GlobalNamespace::FriendDisplay::__cordl_internal_get_vimPageCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vimPageCount;
}
constexpr int32_t const& GlobalNamespace::FriendDisplay::__cordl_internal_get_vimPageCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vimPageCount;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_vimPageCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vimPageCount = value;
}
constexpr int32_t& GlobalNamespace::FriendDisplay::__cordl_internal_get_cardsPerPage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cardsPerPage;
}
constexpr int32_t const& GlobalNamespace::FriendDisplay::__cordl_internal_get_cardsPerPage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cardsPerPage;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_cardsPerPage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cardsPerPage = value;
}
constexpr float_t& GlobalNamespace::FriendDisplay::__cordl_internal_get_pageButtonInactiveZPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageButtonInactiveZPos;
}
constexpr float_t const& GlobalNamespace::FriendDisplay::__cordl_internal_get_pageButtonInactiveZPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageButtonInactiveZPos;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_pageButtonInactiveZPos(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageButtonInactiveZPos = value;
}
constexpr float_t& GlobalNamespace::FriendDisplay::__cordl_internal_get_pageButtonActiveZPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageButtonActiveZPos;
}
constexpr float_t const& GlobalNamespace::FriendDisplay::__cordl_internal_get_pageButtonActiveZPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageButtonActiveZPos;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_pageButtonActiveZPos(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageButtonActiveZPos = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::FriendDisplay::__cordl_internal_get__joinButtonRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinButtonRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::FriendDisplay::__cordl_internal_get__joinButtonRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinButtonRenderers;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__joinButtonRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joinButtonRenderers = value;
}
constexpr bool& GlobalNamespace::FriendDisplay::__cordl_internal_get_inRemoveMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inRemoveMode;
}
constexpr bool const& GlobalNamespace::FriendDisplay::__cordl_internal_get_inRemoveMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inRemoveMode;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_inRemoveMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inRemoveMode = value;
}
constexpr bool& GlobalNamespace::FriendDisplay::__cordl_internal_get_localPlayerAtDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerAtDisplay;
}
constexpr bool const& GlobalNamespace::FriendDisplay::__cordl_internal_get_localPlayerAtDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerAtDisplay;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set_localPlayerAtDisplay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerAtDisplay = value;
}
constexpr int32_t& GlobalNamespace::FriendDisplay::__cordl_internal_get__currentPage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPage;
}
constexpr int32_t const& GlobalNamespace::FriendDisplay::__cordl_internal_get__currentPage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPage;
}
constexpr void GlobalNamespace::FriendDisplay::__cordl_internal_set__currentPage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPage = value;
}
inline void GlobalNamespace::FriendDisplay::setStaticF__ConfiguredVimPageCount_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<ConfiguredVimPageCount>k__BackingField", ::GlobalNamespace::FriendDisplay*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::FriendDisplay::getStaticF__ConfiguredVimPageCount_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<ConfiguredVimPageCount>k__BackingField", ::GlobalNamespace::FriendDisplay*>();
}
inline void GlobalNamespace::FriendDisplay::setStaticF__ConfiguredFreeExtraPageCount_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<ConfiguredFreeExtraPageCount>k__BackingField", ::GlobalNamespace::FriendDisplay*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::FriendDisplay::getStaticF__ConfiguredFreeExtraPageCount_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<ConfiguredFreeExtraPageCount>k__BackingField", ::GlobalNamespace::FriendDisplay*>();
}
inline int32_t GlobalNamespace::FriendDisplay::get_ConfiguredVimPageCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_ConfiguredVimPageCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::set_ConfiguredVimPageCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"set_ConfiguredVimPageCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::FriendDisplay::get_ConfiguredFreeExtraPageCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_ConfiguredFreeExtraPageCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::set_ConfiguredFreeExtraPageCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"set_ConfiguredFreeExtraPageCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::FriendDisplay::get_totalPages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_totalPages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::FriendDisplay::get_TotalCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_TotalCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::FriendDisplay::get_VIMTotalCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_VIMTotalCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::FriendDisplay::get_FreeExtraTotalCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_FreeExtraTotalCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::FriendDisplay::get_VimPageCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_VimPageCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::FriendDisplay::get_InRemoveMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"get_InRemoveMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::OnLocalSubscriptionChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"OnLocalSubscriptionChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::TriggerEntered(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"TriggerEntered", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notifier, other);
}
inline void GlobalNamespace::FriendDisplay::TriggerExited(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"TriggerExited", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notifier, other);
}
inline void GlobalNamespace::FriendDisplay::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::LocalPlayerFullyVisiblePress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"LocalPlayerFullyVisiblePress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::LocalPlayerPublicOnlyPress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"LocalPlayerPublicOnlyPress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::LocalPlayerFullyHiddenPress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"LocalPlayerFullyHiddenPress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::UpdateLocalPlayerPrivacyButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"UpdateLocalPlayerPrivacyButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::UpdatePageButtons(int32_t  selectedPage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"UpdatePageButtons", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectedPage);
}
inline void GlobalNamespace::FriendDisplay::SetButtonAppearance(::UnityEngine::MeshRenderer*  buttonRenderer, bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"SetButtonAppearance", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonRenderer, active);
}
inline void GlobalNamespace::FriendDisplay::SetButtonAppearance(::UnityEngine::MeshRenderer*  buttonRenderer, ::GlobalNamespace::FriendDisplay_ButtonState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"SetButtonAppearance", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::GlobalNamespace::FriendDisplay_ButtonState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonRenderer, state);
}
inline void GlobalNamespace::FriendDisplay::ClearPageButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"ClearPageButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::HidePageButton(::UnityEngine::MeshRenderer*  buttonRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"HidePageButton", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonRenderer);
}
inline void GlobalNamespace::FriendDisplay::SetPageButtonAppearance(::UnityEngine::MeshRenderer*  buttonRenderer, ::GlobalNamespace::FriendDisplay_ButtonState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"SetPageButtonAppearance", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<::GlobalNamespace::FriendDisplay_ButtonState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonRenderer, state);
}
inline void GlobalNamespace::FriendDisplay::ToggleRemoveFriendMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"ToggleRemoveFriendMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::InitFriendCards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"InitFriendCards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::RandomizeFriendCards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"RandomizeFriendCards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::ClearFriendCards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"ClearFriendCards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::OnGetFriendsReceived(::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*  friendsList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"OnGetFriendsReceived", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FriendBackendController_Friend*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendsList);
}
inline void GlobalNamespace::FriendDisplay::GoToFriendPage(int32_t  currentPage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"GoToFriendPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentPage);
}
inline void GlobalNamespace::FriendDisplay::InitLocalPlayerCard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"InitLocalPlayerCard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::PopulateLocalPlayerCard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"PopulateLocalPlayerCard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::ClearLocalPlayerCard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"ClearLocalPlayerCard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendDisplay* GlobalNamespace::FriendDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendDisplay::FriendDisplay()   {
}
