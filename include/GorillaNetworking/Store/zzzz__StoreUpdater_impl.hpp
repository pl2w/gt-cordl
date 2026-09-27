#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreUpdater.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/Store/zzzz__StoreUpdater_def.hpp"
#include "FXP/zzzz__CosmeticItemPrefab_def.hpp"
#include "GorillaNetworking/Store/zzzz__StoreUpdateEvent_def.hpp"
#include "GorillaNetworking/Store/zzzz__StoreUpdater_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.get_DateTimeNowServerAdjusted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GorillaNetworking::Store::StoreUpdater::*)()>(&::GorillaNetworking::Store::StoreUpdater::get_DateTimeNowServerAdjusted)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5cb389c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"get_DateTimeNowServerAdjusted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)()>(&::GorillaNetworking::Store::StoreUpdater::Awake)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5cb3908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)(bool)>(&::GorillaNetworking::Store::StoreUpdater::OnApplicationFocus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cb3a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)()>(&::GorillaNetworking::Store::StoreUpdater::Initialize)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5cb4064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)()>(&::GorillaNetworking::Store::StoreUpdater::OnDestroy)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5cb4638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.HandleHMDUnmounted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)()>(&::GorillaNetworking::Store::StoreUpdater::HandleHMDUnmounted)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5cb3cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"HandleHMDUnmounted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.HandleHMDMounted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)()>(&::GorillaNetworking::Store::StoreUpdater::HandleHMDMounted)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5cb3a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"HandleHMDMounted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.FindAllCosmeticItemPrefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)()>(&::GorillaNetworking::Store::StoreUpdater::FindAllCosmeticItemPrefabs)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5cb4250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"FindAllCosmeticItemPrefabs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.HandlePedestalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::Store::StoreUpdater::*)(::GorillaNetworking::Store::StoreUpdateEvent*, bool)>(&::GorillaNetworking::Store::StoreUpdater::HandlePedestalUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cb4f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"HandlePedestalUpdate", {}, {::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.HandleClearCart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::Store::StoreUpdater::*)(::GorillaNetworking::Store::StoreUpdateEvent*)>(&::GorillaNetworking::Store::StoreUpdater::HandleClearCart)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cb5008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"HandleClearCart", {}, {::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.StartNextEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)(::StringW, bool)>(&::GorillaNetworking::Store::StoreUpdater::StartNextEvent)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5cb4d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"StartNextEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.GetStoreUpdateEventsPlaceHolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)(::StringW)>(&::GorillaNetworking::Store::StoreUpdater::GetStoreUpdateEventsPlaceHolder)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5cb50b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"GetStoreUpdateEventsPlaceHolder", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.CheckEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*)>(&::GorillaNetworking::Store::StoreUpdater::CheckEvents)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5cb575c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"CheckEvents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.CheckEventsOnResume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*)>(&::GorillaNetworking::Store::StoreUpdater::CheckEventsOnResume)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x5cb480c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"CheckEventsOnResume", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.GetEventsFromTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)()>(&::GorillaNetworking::Store::StoreUpdater::GetEventsFromTitleData)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5cb43d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"GetEventsFromTitleData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.HandleRecievingEventsFromTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*)>(&::GorillaNetworking::Store::StoreUpdater::HandleRecievingEventsFromTitleData)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x5cb5dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"HandleRecievingEventsFromTitleData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.PrintJSONEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)()>(&::GorillaNetworking::Store::StoreUpdater::PrintJSONEvents)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5cb6478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"PrintJSONEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.CreateTempEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>* (::GorillaNetworking::Store::StoreUpdater::*)(::StringW, int32_t, int32_t)>(&::GorillaNetworking::Store::StoreUpdater::CreateTempEvents)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x5cb51f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"CreateTempEvents", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.CreateTempEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>* (::GorillaNetworking::Store::StoreUpdater::*)(::StringW, int32_t, int32_t, ::System::DateTime)>(&::GorillaNetworking::Store::StoreUpdater::CreateTempEvents)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x5cb586c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"CreateTempEvents", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.PedestalAsleep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)(::FXP::CosmeticItemPrefab*)>(&::GorillaNetworking::Store::StoreUpdater::PedestalAsleep)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5cb65ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"PedestalAsleep", {}, {::i2c::type_of<::FXP::CosmeticItemPrefab*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater.PedestalAwakened
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)(::FXP::CosmeticItemPrefab*)>(&::GorillaNetworking::Store::StoreUpdater::PedestalAwakened)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cb66a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"PedestalAwakened", {}, {::i2c::type_of<::FXP::CosmeticItemPrefab*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)()>(&::GorillaNetworking::Store::StoreUpdater::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5cb67b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater._GetEventsFromTitleData_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater::*)(::StringW)>(&::GorillaNetworking::Store::StoreUpdater::_GetEventsFromTitleData_b__24_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cb690c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"<GetEventsFromTitleData>b__24_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_StoreItemsChangeTimeUTC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StoreItemsChangeTimeUTC;
}
constexpr ::System::DateTime const& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_StoreItemsChangeTimeUTC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StoreItemsChangeTimeUTC;
}
constexpr void GorillaNetworking::Store::StoreUpdater::__cordl_internal_set_StoreItemsChangeTimeUTC(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StoreItemsChangeTimeUTC = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::FXP::CosmeticItemPrefab>>*& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_cosmeticItemPrefabsDictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticItemPrefabsDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::FXP::CosmeticItemPrefab>>* const& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_cosmeticItemPrefabsDictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticItemPrefabsDictionary;
}
constexpr void GorillaNetworking::Store::StoreUpdater::__cordl_internal_set_cosmeticItemPrefabsDictionary(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::FXP::CosmeticItemPrefab>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticItemPrefabsDictionary = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>*& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_pedestalUpdateEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pedestalUpdateEvents;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>* const& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_pedestalUpdateEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pedestalUpdateEvents;
}
constexpr void GorillaNetworking::Store::StoreUpdater::__cordl_internal_set_pedestalUpdateEvents(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pedestalUpdateEvents = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_pedestalUpdateCoroutines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pedestalUpdateCoroutines;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>* const& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_pedestalUpdateCoroutines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pedestalUpdateCoroutines;
}
constexpr void GorillaNetworking::Store::StoreUpdater::__cordl_internal_set_pedestalUpdateCoroutines(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pedestalUpdateCoroutines = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_pedestalClearCartCoroutines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pedestalClearCartCoroutines;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>* const& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_pedestalClearCartCoroutines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pedestalClearCartCoroutines;
}
constexpr void GorillaNetworking::Store::StoreUpdater::__cordl_internal_set_pedestalClearCartCoroutines(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pedestalClearCartCoroutines = value;
}
constexpr ::StringW& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_tempJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempJson;
}
constexpr ::StringW const& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_tempJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempJson;
}
constexpr void GorillaNetworking::Store::StoreUpdater::__cordl_internal_set_tempJson(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempJson = value;
}
constexpr bool& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_bLoadFromJSON()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bLoadFromJSON;
}
constexpr bool const& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_bLoadFromJSON() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bLoadFromJSON;
}
constexpr void GorillaNetworking::Store::StoreUpdater::__cordl_internal_set_bLoadFromJSON(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bLoadFromJSON = value;
}
constexpr bool& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_bUsePlaceHolderJSON()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bUsePlaceHolderJSON;
}
constexpr bool const& GorillaNetworking::Store::StoreUpdater::__cordl_internal_get_bUsePlaceHolderJSON() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bUsePlaceHolderJSON;
}
constexpr void GorillaNetworking::Store::StoreUpdater::__cordl_internal_set_bUsePlaceHolderJSON(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bUsePlaceHolderJSON = value;
}
inline void GorillaNetworking::Store::StoreUpdater::setStaticF_instance(::UnityW<::GorillaNetworking::Store::StoreUpdater>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::Store::StoreUpdater>, "instance", ::GorillaNetworking::Store::StoreUpdater*>(std::forward<::UnityW<::GorillaNetworking::Store::StoreUpdater>>(value));
}
inline ::UnityW<::GorillaNetworking::Store::StoreUpdater> GorillaNetworking::Store::StoreUpdater::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::Store::StoreUpdater>, "instance", ::GorillaNetworking::Store::StoreUpdater*>();
}
inline ::System::DateTime GorillaNetworking::Store::StoreUpdater::get_DateTimeNowServerAdjusted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"get_DateTimeNowServerAdjusted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreUpdater::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreUpdater::OnApplicationFocus(bool  hasFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline void GorillaNetworking::Store::StoreUpdater::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreUpdater::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreUpdater::HandleHMDUnmounted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"HandleHMDUnmounted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreUpdater::HandleHMDMounted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"HandleHMDMounted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreUpdater::FindAllCosmeticItemPrefabs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"FindAllCosmeticItemPrefabs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::Store::StoreUpdater::HandlePedestalUpdate(::GorillaNetworking::Store::StoreUpdateEvent*  updateEvent, bool  playFX)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"HandlePedestalUpdate", {}, {::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, updateEvent, playFX);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::Store::StoreUpdater::HandleClearCart(::GorillaNetworking::Store::StoreUpdateEvent*  updateEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"HandleClearCart", {}, {::i2c::type_of<::GorillaNetworking::Store::StoreUpdateEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, updateEvent);
}
inline void GorillaNetworking::Store::StoreUpdater::StartNextEvent(::StringW  pedestalID, bool  playFX)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"StartNextEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pedestalID, playFX);
}
inline void GorillaNetworking::Store::StoreUpdater::GetStoreUpdateEventsPlaceHolder(::StringW  PedestalID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"GetStoreUpdateEventsPlaceHolder", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, PedestalID);
}
inline void GorillaNetworking::Store::StoreUpdater::CheckEvents(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*  updateEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"CheckEvents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateEvents);
}
inline void GorillaNetworking::Store::StoreUpdater::CheckEventsOnResume(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*  updateEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"CheckEventsOnResume", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateEvents);
}
inline void GorillaNetworking::Store::StoreUpdater::GetEventsFromTitleData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"GetEventsFromTitleData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreUpdater::HandleRecievingEventsFromTitleData(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*  updateEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"HandleRecievingEventsFromTitleData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateEvents);
}
inline void GorillaNetworking::Store::StoreUpdater::PrintJSONEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"PrintJSONEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>* GorillaNetworking::Store::StoreUpdater::CreateTempEvents(::StringW  PedestalID, int32_t  minuteDelay, int32_t  totalEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"CreateTempEvents", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>(this, ___internal_method, PedestalID, minuteDelay, totalEvents);
}
inline ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>* GorillaNetworking::Store::StoreUpdater::CreateTempEvents(::StringW  PedestalID, int32_t  minuteDelay, int32_t  totalEvents, ::System::DateTime  startTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"CreateTempEvents", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>(this, ___internal_method, PedestalID, minuteDelay, totalEvents, startTime);
}
inline void GorillaNetworking::Store::StoreUpdater::PedestalAsleep(::FXP::CosmeticItemPrefab*  pedestal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"PedestalAsleep", {}, {::i2c::type_of<::FXP::CosmeticItemPrefab*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pedestal);
}
inline void GorillaNetworking::Store::StoreUpdater::PedestalAwakened(::FXP::CosmeticItemPrefab*  pedestal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"PedestalAwakened", {}, {::i2c::type_of<::FXP::CosmeticItemPrefab*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pedestal);
}
inline void GorillaNetworking::Store::StoreUpdater::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreUpdater::_GetEventsFromTitleData_b__24_0(::StringW  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater*>(),
                        {"<GetEventsFromTitleData>b__24_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaNetworking::Store::StoreUpdater* GorillaNetworking::Store::StoreUpdater::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StoreUpdater*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StoreUpdater::StoreUpdater()   {
}
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::*)(int32_t)>(&::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cb4fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::*)()>(&::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb6d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::*)()>(&::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5cb6d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::*)()>(&::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb70c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::*)()>(&::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cb70d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::*)()>(&::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb7108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreUpdater>& GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreUpdater> const& GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::Store::StoreUpdater>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GorillaNetworking::Store::StoreUpdateEvent*& GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_get_updateEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateEvent;
}
constexpr ::GorillaNetworking::Store::StoreUpdateEvent* const& GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_get_updateEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateEvent;
}
constexpr void GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_set_updateEvent(::GorillaNetworking::Store::StoreUpdateEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateEvent = value;
}
constexpr bool& GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_get_playFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFX;
}
constexpr bool const& GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_get_playFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFX;
}
constexpr void GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::__cordl_internal_set_playFX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFX = value;
}
inline void GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18* GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18::StoreUpdater__HandlePedestalUpdate_d__18()   {
}
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::*)(int32_t)>(&::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cb5090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::*)()>(&::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb6a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::*)()>(&::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5cb6a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::*)()>(&::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb6d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::*)()>(&::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cb6d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::*)()>(&::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb6d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GorillaNetworking::Store::StoreUpdateEvent*& GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::__cordl_internal_get_updateEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateEvent;
}
constexpr ::GorillaNetworking::Store::StoreUpdateEvent* const& GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::__cordl_internal_get_updateEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateEvent;
}
constexpr void GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::__cordl_internal_set_updateEvent(::GorillaNetworking::Store::StoreUpdateEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateEvent = value;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreUpdater>& GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::Store::StoreUpdater> const& GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::Store::StoreUpdater>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19* GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19::StoreUpdater__HandleClearCart_d__19()   {
}
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater___c::*)()>(&::GorillaNetworking::Store::StoreUpdater___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb6994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StoreUpdater___c._GetEventsFromTitleData_b__24_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StoreUpdater___c::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::Store::StoreUpdater___c::_GetEventsFromTitleData_b__24_1)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cb699c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater___c*>(),
                        {"<GetEventsFromTitleData>b__24_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::Store::StoreUpdater___c::setStaticF___9(::GorillaNetworking::Store::StoreUpdater___c*  value)  {
::cordl_internals::setStaticField<::GorillaNetworking::Store::StoreUpdater___c*, "<>9", ::GorillaNetworking::Store::StoreUpdater___c*>(std::forward<::GorillaNetworking::Store::StoreUpdater___c*>(value));
}
inline ::GorillaNetworking::Store::StoreUpdater___c* GorillaNetworking::Store::StoreUpdater___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaNetworking::Store::StoreUpdater___c*, "<>9", ::GorillaNetworking::Store::StoreUpdater___c*>();
}
inline void GorillaNetworking::Store::StoreUpdater___c::setStaticF___9__24_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__24_1", ::GorillaNetworking::Store::StoreUpdater___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GorillaNetworking::Store::StoreUpdater___c::getStaticF___9__24_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__24_1", ::GorillaNetworking::Store::StoreUpdater___c*>();
}
inline void GorillaNetworking::Store::StoreUpdater___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::Store::StoreUpdater___c::_GetEventsFromTitleData_b__24_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StoreUpdater___c*>(),
                        {"<GetEventsFromTitleData>b__24_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GorillaNetworking::Store::StoreUpdater___c* GorillaNetworking::Store::StoreUpdater___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StoreUpdater___c*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StoreUpdater___c::StoreUpdater___c()   {
}
