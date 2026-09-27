#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/BundleManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/Store/zzzz__BundleManager_def.hpp"
#include "Cosmetics/zzzz__ICreatorCodeProvider_def.hpp"
#include "GlobalNamespace/zzzz__TryOnBundleButton_def.hpp"
#include "GlobalNamespace/zzzz__TryOnBundlesStand_def.hpp"
#include "GorillaNetworking/Store/zzzz__BundleManager_def.hpp"
#include "GorillaNetworking/Store/zzzz__BundleStand_def.hpp"
#include "GorillaNetworking/Store/zzzz__EndCapSpawnPoint_def.hpp"
#include "GorillaNetworking/Store/zzzz__SpawnedBundle_def.hpp"
#include "GorillaNetworking/Store/zzzz__StoreBundleData_def.hpp"
#include "GorillaNetworking/Store/zzzz__StoreBundle_def.hpp"
#include "Sirenix/OdinInspector/zzzz__ValueDropdownItem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.GetStoreBundles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::GetStoreBundles)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5ca3c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"GetStoreBundles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::Awake)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5ca3d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ca3e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::OnDestroy)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5ca41a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::Initialize)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5ca407c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.ValidateBundleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::ValidateBundleData)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5ca4520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"ValidateBundleData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.SpawnBundleStands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::SpawnBundleStands)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x5ca4a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"SpawnBundleStands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.ClearEverything
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::ClearEverything)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x5ca5120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"ClearEverything", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.GenerateAllStoreBundleReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::GenerateAllStoreBundleReferences)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca511c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"GenerateAllStoreBundleReferences", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.AddNewBundleStand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)(::GorillaNetworking::Store::BundleStand*)>(&::GorillaNetworking::Store::BundleManager::AddNewBundleStand)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5ca55f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"AddNewBundleStand", {}, {::i2c::type_of<::GorillaNetworking::Store::BundleStand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.GenerateBundleDictionaries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::GenerateBundleDictionaries)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5ca3e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"GenerateBundleDictionaries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.BundlePurchaseButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)(::StringW, ::Cosmetics::ICreatorCodeProvider*)>(&::GorillaNetworking::Store::BundleManager::BundlePurchaseButtonPressed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ca5b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"BundlePurchaseButtonPressed", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Cosmetics::ICreatorCodeProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.FixBundles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::FixBundles)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x5ca5c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"FixBundles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.GetTryOnButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GorillaNetworking::Store::StoreBundleData>> (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::GetTryOnButtons)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ca6078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"GetTryOnButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.NotifyBundleOfErrorByPlayFabID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)(::StringW)>(&::GorillaNetworking::Store::BundleManager::NotifyBundleOfErrorByPlayFabID)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5ca61f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"NotifyBundleOfErrorByPlayFabID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.NotifyBundleOfErrorBySKU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)(::StringW)>(&::GorillaNetworking::Store::BundleManager::NotifyBundleOfErrorBySKU)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5ca638c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"NotifyBundleOfErrorBySKU", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.MarkBundleOwnedByPlayFabID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)(::StringW)>(&::GorillaNetworking::Store::BundleManager::MarkBundleOwnedByPlayFabID)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5ca6508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"MarkBundleOwnedByPlayFabID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.MarkBundleOwnedBySKU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)(::StringW)>(&::GorillaNetworking::Store::BundleManager::MarkBundleOwnedBySKU)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5ca66e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"MarkBundleOwnedBySKU", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.CheckIfBundlesOwned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::CheckIfBundlesOwned)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5ca68a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"CheckIfBundlesOwned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.PressTryOnBundleButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)(::GlobalNamespace::TryOnBundleButton*, bool)>(&::GorillaNetworking::Store::BundleManager::PressTryOnBundleButton)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ca6b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"PressTryOnBundleButton", {}, {::i2c::type_of<::GlobalNamespace::TryOnBundleButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.PressPurchaseTryOnBundleButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::PressPurchaseTryOnBundleButton)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ca6bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"PressPurchaseTryOnBundleButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.UpdateBundlePrice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)(::StringW, ::StringW)>(&::GorillaNetworking::Store::BundleManager::UpdateBundlePrice)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ca6bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"UpdateBundlePrice", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.UpdateGtfcBundlePrice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)(::StringW, ::StringW)>(&::GorillaNetworking::Store::BundleManager::UpdateGtfcBundlePrice)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ca6d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"UpdateGtfcBundlePrice", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager.CheckForNoPriceBundlesAndDefaultPrice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::CheckForNoPriceBundlesAndDefaultPrice)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5ca6e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"CheckForNoPriceBundlesAndDefaultPrice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager::*)()>(&::GorillaNetworking::Store::BundleManager::_ctor)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5ca7094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TryOnBundlesStand>& GorillaNetworking::Store::BundleManager::__cordl_internal_get__tryOnBundlesStand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tryOnBundlesStand;
}
constexpr ::UnityW<::GlobalNamespace::TryOnBundlesStand> const& GorillaNetworking::Store::BundleManager::__cordl_internal_get__tryOnBundlesStand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tryOnBundlesStand;
}
constexpr void GorillaNetworking::Store::BundleManager::__cordl_internal_set__tryOnBundlesStand(::UnityW<::GlobalNamespace::TryOnBundlesStand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tryOnBundlesStand = value;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& GorillaNetworking::Store::BundleManager::__cordl_internal_get_nullBundleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullBundleData;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& GorillaNetworking::Store::BundleManager::__cordl_internal_get_nullBundleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nullBundleData;
}
constexpr void GorillaNetworking::Store::BundleManager::__cordl_internal_set_nullBundleData(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nullBundleData = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreBundleData>>*& GorillaNetworking::Store::BundleManager::__cordl_internal_get__bundleScriptableObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bundleScriptableObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreBundleData>>* const& GorillaNetworking::Store::BundleManager::__cordl_internal_get__bundleScriptableObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bundleScriptableObjects;
}
constexpr void GorillaNetworking::Store::BundleManager::__cordl_internal_set__bundleScriptableObjects(::System::Collections::Generic::List_1<::UnityW<::GorillaNetworking::Store::StoreBundleData>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bundleScriptableObjects = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>*& GorillaNetworking::Store::BundleManager::__cordl_internal_get__storeBundles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storeBundles;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>* const& GorillaNetworking::Store::BundleManager::__cordl_internal_get__storeBundles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storeBundles;
}
constexpr void GorillaNetworking::Store::BundleManager::__cordl_internal_set__storeBundles(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreBundle*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____storeBundles = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::SpawnedBundle*>*& GorillaNetworking::Store::BundleManager::__cordl_internal_get__spawnedBundleStands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnedBundleStands;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::SpawnedBundle*>* const& GorillaNetworking::Store::BundleManager::__cordl_internal_get__spawnedBundleStands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnedBundleStands;
}
constexpr void GorillaNetworking::Store::BundleManager::__cordl_internal_set__spawnedBundleStands(::System::Collections::Generic::List_1<::GorillaNetworking::Store::SpawnedBundle*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnedBundleStands = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>*& GorillaNetworking::Store::BundleManager::__cordl_internal_get_storeBundlesById()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeBundlesById;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>* const& GorillaNetworking::Store::BundleManager::__cordl_internal_get_storeBundlesById() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeBundlesById;
}
constexpr void GorillaNetworking::Store::BundleManager::__cordl_internal_set_storeBundlesById(::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storeBundlesById = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>*& GorillaNetworking::Store::BundleManager::__cordl_internal_get_storeBundlesBySKU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeBundlesBySKU;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>* const& GorillaNetworking::Store::BundleManager::__cordl_internal_get_storeBundlesBySKU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeBundlesBySKU;
}
constexpr void GorillaNetworking::Store::BundleManager::__cordl_internal_set_storeBundlesBySKU(::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StoreBundle*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storeBundlesBySKU = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::BundleManager_BundleStandSpawn*>*& GorillaNetworking::Store::BundleManager::__cordl_internal_get_BundleStands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundleStands;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::BundleManager_BundleStandSpawn*>* const& GorillaNetworking::Store::BundleManager::__cordl_internal_get_BundleStands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundleStands;
}
constexpr void GorillaNetworking::Store::BundleManager::__cordl_internal_set_BundleStands(::System::Collections::Generic::List_1<::GorillaNetworking::Store::BundleManager_BundleStandSpawn*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BundleStands = value;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& GorillaNetworking::Store::BundleManager::__cordl_internal_get_tryOnBundleButton1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnBundleButton1;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& GorillaNetworking::Store::BundleManager::__cordl_internal_get_tryOnBundleButton1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnBundleButton1;
}
constexpr void GorillaNetworking::Store::BundleManager::__cordl_internal_set_tryOnBundleButton1(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryOnBundleButton1 = value;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& GorillaNetworking::Store::BundleManager::__cordl_internal_get_tryOnBundleButton2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnBundleButton2;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& GorillaNetworking::Store::BundleManager::__cordl_internal_get_tryOnBundleButton2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnBundleButton2;
}
constexpr void GorillaNetworking::Store::BundleManager::__cordl_internal_set_tryOnBundleButton2(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryOnBundleButton2 = value;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& GorillaNetworking::Store::BundleManager::__cordl_internal_get_tryOnBundleButton3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnBundleButton3;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& GorillaNetworking::Store::BundleManager::__cordl_internal_get_tryOnBundleButton3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnBundleButton3;
}
constexpr void GorillaNetworking::Store::BundleManager::__cordl_internal_set_tryOnBundleButton3(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryOnBundleButton3 = value;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& GorillaNetworking::Store::BundleManager::__cordl_internal_get_tryOnBundleButton4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnBundleButton4;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& GorillaNetworking::Store::BundleManager::__cordl_internal_get_tryOnBundleButton4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnBundleButton4;
}
constexpr void GorillaNetworking::Store::BundleManager::__cordl_internal_set_tryOnBundleButton4(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryOnBundleButton4 = value;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData>& GorillaNetworking::Store::BundleManager::__cordl_internal_get_tryOnBundleButton5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnBundleButton5;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreBundleData> const& GorillaNetworking::Store::BundleManager::__cordl_internal_get_tryOnBundleButton5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryOnBundleButton5;
}
constexpr void GorillaNetworking::Store::BundleManager::__cordl_internal_set_tryOnBundleButton5(::UnityW<::GorillaNetworking::Store::StoreBundleData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryOnBundleButton5 = value;
}
inline void GorillaNetworking::Store::BundleManager::setStaticF_instance(::UnityW<::GorillaNetworking::Store::BundleManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::Store::BundleManager>, "instance", ::GorillaNetworking::Store::BundleManager*>(std::forward<::UnityW<::GorillaNetworking::Store::BundleManager>>(value));
}
inline ::UnityW<::GorillaNetworking::Store::BundleManager> GorillaNetworking::Store::BundleManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::Store::BundleManager>, "instance", ::GorillaNetworking::Store::BundleManager*>();
}
inline ::System::Collections::IEnumerable* GorillaNetworking::Store::BundleManager::GetStoreBundles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"GetStoreBundles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::ValidateBundleData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"ValidateBundleData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::SpawnBundleStands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"SpawnBundleStands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::ClearEverything()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"ClearEverything", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::GenerateAllStoreBundleReferences()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"GenerateAllStoreBundleReferences", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::AddNewBundleStand(::GorillaNetworking::Store::BundleStand*  bundleStand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"AddNewBundleStand", {}, {::i2c::type_of<::GorillaNetworking::Store::BundleStand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bundleStand);
}
inline void GorillaNetworking::Store::BundleManager::GenerateBundleDictionaries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"GenerateBundleDictionaries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::BundlePurchaseButtonPressed(::StringW  playFabItemName, ::Cosmetics::ICreatorCodeProvider*  ccp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"BundlePurchaseButtonPressed", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Cosmetics::ICreatorCodeProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playFabItemName, ccp);
}
inline void GorillaNetworking::Store::BundleManager::FixBundles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"FixBundles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GorillaNetworking::Store::StoreBundleData>> GorillaNetworking::Store::BundleManager::GetTryOnButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"GetTryOnButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GorillaNetworking::Store::StoreBundleData>>>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::NotifyBundleOfErrorByPlayFabID(::StringW  ItemId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"NotifyBundleOfErrorByPlayFabID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ItemId);
}
inline void GorillaNetworking::Store::BundleManager::NotifyBundleOfErrorBySKU(::StringW  ItemSKU)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"NotifyBundleOfErrorBySKU", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ItemSKU);
}
inline void GorillaNetworking::Store::BundleManager::MarkBundleOwnedByPlayFabID(::StringW  ItemId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"MarkBundleOwnedByPlayFabID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ItemId);
}
inline void GorillaNetworking::Store::BundleManager::MarkBundleOwnedBySKU(::StringW  SKU)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"MarkBundleOwnedBySKU", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, SKU);
}
inline void GorillaNetworking::Store::BundleManager::CheckIfBundlesOwned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"CheckIfBundlesOwned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::PressTryOnBundleButton(::GlobalNamespace::TryOnBundleButton*  pressedTryOnBundleButton, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"PressTryOnBundleButton", {}, {::i2c::type_of<::GlobalNamespace::TryOnBundleButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pressedTryOnBundleButton, isLeftHand);
}
inline void GorillaNetworking::Store::BundleManager::PressPurchaseTryOnBundleButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"PressPurchaseTryOnBundleButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::UpdateBundlePrice(::StringW  productSku, ::StringW  productFormattedPrice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"UpdateBundlePrice", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, productSku, productFormattedPrice);
}
inline void GorillaNetworking::Store::BundleManager::UpdateGtfcBundlePrice(::StringW  productSku, ::StringW  productFormattedPrice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"UpdateGtfcBundlePrice", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, productSku, productFormattedPrice);
}
inline void GorillaNetworking::Store::BundleManager::CheckForNoPriceBundlesAndDefaultPrice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {"CheckForNoPriceBundlesAndDefaultPrice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::BundleManager* GorillaNetworking::Store::BundleManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::BundleManager*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::BundleManager::BundleManager()   {
}
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::*)()>(&::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca6070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0._FixBundles_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::*)(::GorillaNetworking::Store::SpawnedBundle*)>(&::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::_FixBundles_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ca75e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0*>(),
                        {"<FixBundles>b__0", {}, {::i2c::type_of<::GorillaNetworking::Store::SpawnedBundle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0._FixBundles_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::*)(::GorillaNetworking::Store::SpawnedBundle*)>(&::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::_FixBundles_b__1)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ca7690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0*>(),
                        {"<FixBundles>b__1", {}, {::i2c::type_of<::GorillaNetworking::Store::SpawnedBundle*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaNetworking::Store::BundleStand>& GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::__cordl_internal_get_bundle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundle;
}
constexpr ::UnityW<::GorillaNetworking::Store::BundleStand> const& GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::__cordl_internal_get_bundle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundle;
}
constexpr void GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::__cordl_internal_set_bundle(::UnityW<::GorillaNetworking::Store::BundleStand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bundle = value;
}
inline void GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::_FixBundles_b__0(::GorillaNetworking::Store::SpawnedBundle*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0*>(),
                        {"<FixBundles>b__0", {}, {::i2c::type_of<::GorillaNetworking::Store::SpawnedBundle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::_FixBundles_b__1(::GorillaNetworking::Store::SpawnedBundle*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0*>(),
                        {"<FixBundles>b__1", {}, {::i2c::type_of<::GorillaNetworking::Store::SpawnedBundle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0* GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::BundleManager___c__DisplayClass27_0::BundleManager___c__DisplayClass27_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager_BundleStandSpawn.GetEndCapSpawnPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (*)()>(&::GorillaNetworking::Store::BundleManager_BundleStandSpawn::GetEndCapSpawnPoints)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5ca7288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager_BundleStandSpawn*>(),
                        {"GetEndCapSpawnPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleManager_BundleStandSpawn._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleManager_BundleStandSpawn::*)()>(&::GorillaNetworking::Store::BundleManager_BundleStandSpawn::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca73cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager_BundleStandSpawn*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>& GorillaNetworking::Store::BundleManager_BundleStandSpawn::__cordl_internal_get_spawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocation;
}
constexpr ::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint> const& GorillaNetworking::Store::BundleManager_BundleStandSpawn::__cordl_internal_get_spawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocation;
}
constexpr void GorillaNetworking::Store::BundleManager_BundleStandSpawn::__cordl_internal_set_spawnLocation(::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnLocation = value;
}
constexpr ::UnityW<::GorillaNetworking::Store::BundleStand>& GorillaNetworking::Store::BundleManager_BundleStandSpawn::__cordl_internal_get_bundleStand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleStand;
}
constexpr ::UnityW<::GorillaNetworking::Store::BundleStand> const& GorillaNetworking::Store::BundleManager_BundleStandSpawn::__cordl_internal_get_bundleStand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleStand;
}
constexpr void GorillaNetworking::Store::BundleManager_BundleStandSpawn::__cordl_internal_set_bundleStand(::UnityW<::GorillaNetworking::Store::BundleStand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bundleStand = value;
}
inline ::System::Collections::IEnumerable* GorillaNetworking::Store::BundleManager_BundleStandSpawn::GetEndCapSpawnPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager_BundleStandSpawn*>(),
                        {"GetEndCapSpawnPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(nullptr, ___internal_method);
}
inline void GorillaNetworking::Store::BundleManager_BundleStandSpawn::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleManager_BundleStandSpawn*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::BundleManager_BundleStandSpawn* GorillaNetworking::Store::BundleManager_BundleStandSpawn::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::BundleManager_BundleStandSpawn*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::BundleManager_BundleStandSpawn::BundleManager_BundleStandSpawn()   {
}
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c::*)()>(&::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca743c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c._GetEndCapSpawnPoints_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Sirenix::OdinInspector::ValueDropdownItem (::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c::*)(::GorillaNetworking::Store::EndCapSpawnPoint*)>(&::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c::_GetEndCapSpawnPoints_b__2_0)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5ca7444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*>(),
                        {"<GetEndCapSpawnPoints>b__2_0", {}, {::i2c::type_of<::GorillaNetworking::Store::EndCapSpawnPoint*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::Store::BundleStandSpawn_BundleManager___c::setStaticF___9(::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*  value)  {
::cordl_internals::setStaticField<::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*, "<>9", ::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*>(std::forward<::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*>(value));
}
inline ::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c* GorillaNetworking::Store::BundleStandSpawn_BundleManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*, "<>9", ::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*>();
}
inline void GorillaNetworking::Store::BundleStandSpawn_BundleManager___c::setStaticF___9__2_0(::System::Func_2<::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>,::Sirenix::OdinInspector::ValueDropdownItem>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>,::Sirenix::OdinInspector::ValueDropdownItem>*, "<>9__2_0", ::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*>(std::forward<::System::Func_2<::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>,::Sirenix::OdinInspector::ValueDropdownItem>*>(value));
}
inline ::System::Func_2<::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>,::Sirenix::OdinInspector::ValueDropdownItem>* GorillaNetworking::Store::BundleStandSpawn_BundleManager___c::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GorillaNetworking::Store::EndCapSpawnPoint>,::Sirenix::OdinInspector::ValueDropdownItem>*, "<>9__2_0", ::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*>();
}
inline void GorillaNetworking::Store::BundleStandSpawn_BundleManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Sirenix::OdinInspector::ValueDropdownItem GorillaNetworking::Store::BundleStandSpawn_BundleManager___c::_GetEndCapSpawnPoints_b__2_0(::GorillaNetworking::Store::EndCapSpawnPoint*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*>(),
                        {"<GetEndCapSpawnPoints>b__2_0", {}, {::i2c::type_of<::GorillaNetworking::Store::EndCapSpawnPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Sirenix::OdinInspector::ValueDropdownItem>(this, ___internal_method, x);
}
inline ::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c* GorillaNetworking::Store::BundleStandSpawn_BundleManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::BundleStandSpawn_BundleManager___c::BundleStandSpawn_BundleManager___c()   {
}
