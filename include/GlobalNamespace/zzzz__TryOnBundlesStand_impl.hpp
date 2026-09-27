#pragma once
// IWYU pragma private; include "GlobalNamespace/TryOnBundlesStand.hpp"
#include "GlobalNamespace/zzzz__TryOnBundleButton_impl.hpp"
#include "UnityEngine/UI/zzzz__Image_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TryOnBundlesStand_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__TryOnBundleButton_def.hpp"
#include "GlobalNamespace/zzzz__TryOnBundlesStand__LoadBundle_d__35_def.hpp"
#include "GlobalNamespace/zzzz__TryOnPurchaseButton_def.hpp"
#include "GorillaNetworking/Store/zzzz__StoreBundleData_def.hpp"
#include "GorillaNetworking/Store/zzzz__StoreBundle_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.get_SelectedBundlePlayFabID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TryOnBundlesStand::*)()>(&::GlobalNamespace::TryOnBundlesStand::get_SelectedBundlePlayFabID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5780470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"get_SelectedBundlePlayFabID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.CleanUpTitleDataValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::TryOnBundlesStand::CleanUpTitleDataValues)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x57804ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"CleanUpTitleDataValues", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.InitalizeButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)()>(&::GlobalNamespace::TryOnBundlesStand::InitalizeButtons)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x57805bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"InitalizeButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)()>(&::GlobalNamespace::TryOnBundlesStand::OnEnable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5780948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)()>(&::GlobalNamespace::TryOnBundlesStand::Start)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x57809ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.OnComputerDefaultTextTitleDataSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)(::StringW)>(&::GlobalNamespace::TryOnBundlesStand::OnComputerDefaultTextTitleDataSuccess)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5780ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnComputerDefaultTextTitleDataSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.OnComputerDefaultTextTitleDataFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::TryOnBundlesStand::OnComputerDefaultTextTitleDataFailure)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5780d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnComputerDefaultTextTitleDataFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.OnComputerAlreadyOwnTextTitleDataSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)(::StringW)>(&::GlobalNamespace::TryOnBundlesStand::OnComputerAlreadyOwnTextTitleDataSuccess)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5780e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnComputerAlreadyOwnTextTitleDataSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.OnComputerAlreadyOwnTextTitleDataFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::TryOnBundlesStand::OnComputerAlreadyOwnTextTitleDataFailure)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5780e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnComputerAlreadyOwnTextTitleDataFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.OnPurchaseButtonDefaultTextTitleDataSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)(::StringW)>(&::GlobalNamespace::TryOnBundlesStand::OnPurchaseButtonDefaultTextTitleDataSuccess)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5780efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnPurchaseButtonDefaultTextTitleDataSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.OnPurchaseButtonDefaultTextTitleDataFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::TryOnBundlesStand::OnPurchaseButtonDefaultTextTitleDataFailure)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5780f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnPurchaseButtonDefaultTextTitleDataFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.OnPurchaseButtonAlreadyOwnTextTitleDataSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)(::StringW)>(&::GlobalNamespace::TryOnBundlesStand::OnPurchaseButtonAlreadyOwnTextTitleDataSuccess)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x578104c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnPurchaseButtonAlreadyOwnTextTitleDataSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.OnPurchaseButtonAlreadyOwnTextTitleDataFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::TryOnBundlesStand::OnPurchaseButtonAlreadyOwnTextTitleDataFailure)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5781088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnPurchaseButtonAlreadyOwnTextTitleDataFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.ClearSelectedBundle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)()>(&::GlobalNamespace::TryOnBundlesStand::ClearSelectedBundle)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5781164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"ClearSelectedBundle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.RemoveBundle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)(::StringW)>(&::GlobalNamespace::TryOnBundlesStand::RemoveBundle)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x57812e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"RemoveBundle", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.TryOnBundle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)(::StringW)>(&::GlobalNamespace::TryOnBundlesStand::TryOnBundle)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x57814c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"TryOnBundle", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.LoadBundle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)(::GlobalNamespace::TryOnBundleButton*, bool)>(&::GlobalNamespace::TryOnBundlesStand::LoadBundle)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x578175c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"LoadBundle", {}, {::i2c::type_of<::GlobalNamespace::TryOnBundleButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.PressTryOnBundleButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)(::GlobalNamespace::TryOnBundleButton*, bool)>(&::GlobalNamespace::TryOnBundlesStand::PressTryOnBundleButton)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x5781834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"PressTryOnBundleButton", {}, {::i2c::type_of<::GlobalNamespace::TryOnBundleButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.GetComputerScreenText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TryOnBundlesStand::*)(::StringW)>(&::GlobalNamespace::TryOnBundlesStand::GetComputerScreenText)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5781de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"GetComputerScreenText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.GetPurchaseButtonText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TryOnBundlesStand::*)(::StringW)>(&::GlobalNamespace::TryOnBundlesStand::GetPurchaseButtonText)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5781d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"GetPurchaseButtonText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.PurchaseButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)()>(&::GlobalNamespace::TryOnBundlesStand::PurchaseButtonPressed)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5781fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"PurchaseButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.AlreadyOwnCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)()>(&::GlobalNamespace::TryOnBundlesStand::AlreadyOwnCheck)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5781e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"AlreadyOwnCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.GetTryOnButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)()>(&::GlobalNamespace::TryOnBundlesStand::GetTryOnButtons)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x57806d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"GetTryOnButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.UpdateBundles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)(::ArrayW<::GorillaNetworking::Store::StoreBundleData*>)>(&::GlobalNamespace::TryOnBundlesStand::UpdateBundles)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5782228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"UpdateBundles", {}, {::i2c::type_of<::ArrayW<::GorillaNetworking::Store::StoreBundleData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.GetBundleComputerText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TryOnBundlesStand::*)(::StringW)>(&::GlobalNamespace::TryOnBundlesStand::GetBundleComputerText)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5782168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"GetBundleComputerText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.ErrorCompleting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)()>(&::GlobalNamespace::TryOnBundlesStand::ErrorCompleting)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5782290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"ErrorCompleting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand.IBuildValidation_BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TryOnBundlesStand::*)()>(&::GlobalNamespace::TryOnBundlesStand::IBuildValidation_BuildValidationCheck)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5782330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundlesStand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundlesStand::*)()>(&::GlobalNamespace::TryOnBundlesStand::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5782444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TryOnBundleButton>>& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_TryOnBundleButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TryOnBundleButtons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TryOnBundleButton>> const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_TryOnBundleButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TryOnBundleButtons;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_TryOnBundleButtons(::ArrayW<::UnityW<::GlobalNamespace::TryOnBundleButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TryOnBundleButtons = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_BundleIcons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundleIcons;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_BundleIcons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundleIcons;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_BundleIcons(::ArrayW<::UnityW<::UnityEngine::UI::Image>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BundleIcons = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_creatorCodeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeProvider;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_creatorCodeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creatorCodeProvider;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_creatorCodeProvider(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creatorCodeProvider = value;
}
constexpr int32_t& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_SelectedButtonIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedButtonIndex;
}
constexpr int32_t const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_SelectedButtonIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedButtonIndex;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_SelectedButtonIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedButtonIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::TryOnPurchaseButton>& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_purchaseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseButton;
}
constexpr ::UnityW<::GlobalNamespace::TryOnPurchaseButton> const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_purchaseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseButton;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_purchaseButton(::UnityW<::GlobalNamespace::TryOnPurchaseButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_selectedBundleImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedBundleImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_selectedBundleImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedBundleImage;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_selectedBundleImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedBundleImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_computerScreenText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computerScreenText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_computerScreenText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computerScreenText;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_computerScreenText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___computerScreenText = value;
}
constexpr ::StringW& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_ComputerDefaultTextTitleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComputerDefaultTextTitleDataKey;
}
constexpr ::StringW const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_ComputerDefaultTextTitleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComputerDefaultTextTitleDataKey;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_ComputerDefaultTextTitleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ComputerDefaultTextTitleDataKey = value;
}
constexpr ::StringW& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_ComputerDefaultTextTitleDataValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComputerDefaultTextTitleDataValue;
}
constexpr ::StringW const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_ComputerDefaultTextTitleDataValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComputerDefaultTextTitleDataValue;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_ComputerDefaultTextTitleDataValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ComputerDefaultTextTitleDataValue = value;
}
constexpr ::StringW& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_ComputerAlreadyOwnTextTitleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComputerAlreadyOwnTextTitleDataKey;
}
constexpr ::StringW const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_ComputerAlreadyOwnTextTitleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComputerAlreadyOwnTextTitleDataKey;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_ComputerAlreadyOwnTextTitleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ComputerAlreadyOwnTextTitleDataKey = value;
}
constexpr ::StringW& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_ComputerAlreadyOwnTextTitleDataValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComputerAlreadyOwnTextTitleDataValue;
}
constexpr ::StringW const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_ComputerAlreadyOwnTextTitleDataValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComputerAlreadyOwnTextTitleDataValue;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_ComputerAlreadyOwnTextTitleDataValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ComputerAlreadyOwnTextTitleDataValue = value;
}
constexpr ::StringW& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_PurchaseButtonDefaultTextTitleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseButtonDefaultTextTitleDataKey;
}
constexpr ::StringW const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_PurchaseButtonDefaultTextTitleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseButtonDefaultTextTitleDataKey;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_PurchaseButtonDefaultTextTitleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseButtonDefaultTextTitleDataKey = value;
}
constexpr ::StringW& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_PurchaseButtonDefaultTextTitleDataValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseButtonDefaultTextTitleDataValue;
}
constexpr ::StringW const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_PurchaseButtonDefaultTextTitleDataValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseButtonDefaultTextTitleDataValue;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_PurchaseButtonDefaultTextTitleDataValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseButtonDefaultTextTitleDataValue = value;
}
constexpr ::StringW& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_PurchaseButtonAlreadyOwnTextTitleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseButtonAlreadyOwnTextTitleDataKey;
}
constexpr ::StringW const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_PurchaseButtonAlreadyOwnTextTitleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseButtonAlreadyOwnTextTitleDataKey;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_PurchaseButtonAlreadyOwnTextTitleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseButtonAlreadyOwnTextTitleDataKey = value;
}
constexpr ::StringW& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_PurchaseButtonAlreadyOwnTextTitleDataValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseButtonAlreadyOwnTextTitleDataValue;
}
constexpr ::StringW const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_PurchaseButtonAlreadyOwnTextTitleDataValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseButtonAlreadyOwnTextTitleDataValue;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_PurchaseButtonAlreadyOwnTextTitleDataValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseButtonAlreadyOwnTextTitleDataValue = value;
}
constexpr bool& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_bError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bError;
}
constexpr bool const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_bError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bError;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_bError(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bError = value;
}
constexpr ::StringW& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_computerScreeErrorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computerScreeErrorText;
}
constexpr ::StringW const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_computerScreeErrorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computerScreeErrorText;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_computerScreeErrorText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___computerScreeErrorText = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>*& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_storeBundles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeBundles;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>* const& GlobalNamespace::TryOnBundlesStand::__cordl_internal_get_storeBundles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeBundles;
}
constexpr void GlobalNamespace::TryOnBundlesStand::__cordl_internal_set_storeBundles(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storeBundles = value;
}
inline ::StringW GlobalNamespace::TryOnBundlesStand::get_SelectedBundlePlayFabID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"get_SelectedBundlePlayFabID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::TryOnBundlesStand::CleanUpTitleDataValues(::StringW  titleDataResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"CleanUpTitleDataValues", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, titleDataResult);
}
inline void GlobalNamespace::TryOnBundlesStand::InitalizeButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"InitalizeButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnBundlesStand::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnBundlesStand::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnBundlesStand::OnComputerDefaultTextTitleDataSuccess(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnComputerDefaultTextTitleDataSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::TryOnBundlesStand::OnComputerDefaultTextTitleDataFailure(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnComputerDefaultTextTitleDataFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::TryOnBundlesStand::OnComputerAlreadyOwnTextTitleDataSuccess(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnComputerAlreadyOwnTextTitleDataSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::TryOnBundlesStand::OnComputerAlreadyOwnTextTitleDataFailure(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnComputerAlreadyOwnTextTitleDataFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::TryOnBundlesStand::OnPurchaseButtonDefaultTextTitleDataSuccess(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnPurchaseButtonDefaultTextTitleDataSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::TryOnBundlesStand::OnPurchaseButtonDefaultTextTitleDataFailure(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnPurchaseButtonDefaultTextTitleDataFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::TryOnBundlesStand::OnPurchaseButtonAlreadyOwnTextTitleDataSuccess(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnPurchaseButtonAlreadyOwnTextTitleDataSuccess", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::TryOnBundlesStand::OnPurchaseButtonAlreadyOwnTextTitleDataFailure(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"OnPurchaseButtonAlreadyOwnTextTitleDataFailure", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::TryOnBundlesStand::ClearSelectedBundle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"ClearSelectedBundle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnBundlesStand::RemoveBundle(::StringW  BundleID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"RemoveBundle", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, BundleID);
}
inline void GlobalNamespace::TryOnBundlesStand::TryOnBundle(::StringW  BundleID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"TryOnBundle", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, BundleID);
}
inline void GlobalNamespace::TryOnBundlesStand::LoadBundle(::GlobalNamespace::TryOnBundleButton*  pressedTryOnBundleButton, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"LoadBundle", {}, {::i2c::type_of<::GlobalNamespace::TryOnBundleButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pressedTryOnBundleButton, isLeftHand);
}
inline void GlobalNamespace::TryOnBundlesStand::PressTryOnBundleButton(::GlobalNamespace::TryOnBundleButton*  pressedTryOnBundleButton, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"PressTryOnBundleButton", {}, {::i2c::type_of<::GlobalNamespace::TryOnBundleButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pressedTryOnBundleButton, isLeftHand);
}
inline ::StringW GlobalNamespace::TryOnBundlesStand::GetComputerScreenText(::StringW  playfabBundleID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"GetComputerScreenText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, playfabBundleID);
}
inline ::StringW GlobalNamespace::TryOnBundlesStand::GetPurchaseButtonText(::StringW  playfabBundleID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"GetPurchaseButtonText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, playfabBundleID);
}
inline void GlobalNamespace::TryOnBundlesStand::PurchaseButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"PurchaseButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnBundlesStand::AlreadyOwnCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"AlreadyOwnCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnBundlesStand::GetTryOnButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"GetTryOnButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnBundlesStand::UpdateBundles(::ArrayW<::GorillaNetworking::Store::StoreBundleData*>  Bundles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"UpdateBundles", {}, {::i2c::type_of<::ArrayW<::GorillaNetworking::Store::StoreBundleData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Bundles);
}
inline ::StringW GlobalNamespace::TryOnBundlesStand::GetBundleComputerText(::StringW  PlayFabID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"GetBundleComputerText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, PlayFabID);
}
inline void GlobalNamespace::TryOnBundlesStand::ErrorCompleting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"ErrorCompleting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TryOnBundlesStand::IBuildValidation_BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnBundlesStand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundlesStand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TryOnBundlesStand* GlobalNamespace::TryOnBundlesStand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TryOnBundlesStand*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::TryOnBundlesStand::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::TryOnBundlesStand::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TryOnBundlesStand::TryOnBundlesStand()   {
}
