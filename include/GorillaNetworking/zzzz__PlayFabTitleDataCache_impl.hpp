#pragma once
// IWYU pragma private; include "GorillaNetworking/PlayFabTitleDataCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/zzzz__PlayFabTitleDataCache_def.hpp"
#include "GlobalNamespace/zzzz__ListClientMothershipTitleDataResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GorillaNetworking/zzzz__CacheImport_def.hpp"
#include "GorillaNetworking/zzzz__PlayFabTitleDataCache_def.hpp"
#include "GorillaUtil/zzzz__StringTable_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaNetworking::PlayFabTitleDataCache> (*)()>(&::GorillaNetworking::PlayFabTitleDataCache::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c9bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaNetworking::PlayFabTitleDataCache*)>(&::GorillaNetworking::PlayFabTitleDataCache::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c9bb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaNetworking::PlayFabTitleDataCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.get_FilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GorillaNetworking::PlayFabTitleDataCache::get_FilePath)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c9bbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"get_FilePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.GetTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache::*)(::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::PlayFab::PlayFabError*>*, bool)>(&::GorillaNetworking::PlayFabTitleDataCache::GetTitleData)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5c90460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"GetTitleData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache::*)()>(&::GorillaNetworking::PlayFabTitleDataCache::Awake)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c9bc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache::*)()>(&::GorillaNetworking::PlayFabTitleDataCache::Start)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c9bdc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache::*)()>(&::GorillaNetworking::PlayFabTitleDataCache::OnDestroy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c9bea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.TryUpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache::*)()>(&::GorillaNetworking::PlayFabTitleDataCache::TryUpdateData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c9bc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"TryUpdateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.LoadDataFromFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaNetworking::CacheImport* (::GorillaNetworking::PlayFabTitleDataCache::*)()>(&::GorillaNetworking::PlayFabTitleDataCache::LoadDataFromFile)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5c9bf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"LoadDataFromFile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.SaveDataToFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*)>(&::GorillaNetworking::PlayFabTitleDataCache::SaveDataToFile)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c9c154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"SaveDataToFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache::*)()>(&::GorillaNetworking::PlayFabTitleDataCache::UpdateData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c9be70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"UpdateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.UpdateDataCo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::PlayFabTitleDataCache::*)()>(&::GorillaNetworking::PlayFabTitleDataCache::UpdateDataCo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c9c318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"UpdateDataCo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.ClearRequestWithError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache::*)(::PlayFab::PlayFabError*)>(&::GorillaNetworking::PlayFabTitleDataCache::ClearRequestWithError)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5c9c3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"ClearRequestWithError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache.RegisterOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*)>(&::GorillaNetworking::PlayFabTitleDataCache::RegisterOnLoad)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5c9c598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"RegisterOnLoad", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache::*)()>(&::GorillaNetworking::PlayFabTitleDataCache::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c9c724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaNetworking::PlayFabTitleDataCache_DataUpdate*& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_OnTitleDataUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTitleDataUpdate;
}
constexpr ::GorillaNetworking::PlayFabTitleDataCache_DataUpdate* const& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_OnTitleDataUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTitleDataUpdate;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_set_OnTitleDataUpdate(::GorillaNetworking::PlayFabTitleDataCache_DataUpdate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTitleDataUpdate = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>*& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_requests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requests;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>* const& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_requests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requests;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_set_requests(::System::Collections::Generic::List_1<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requests = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_localizedTitleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizedTitleData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* const& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_localizedTitleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizedTitleData;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_set_localizedTitleData(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localizedTitleData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>*& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_localesUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localesUpdated;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>* const& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_localesUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localesUpdated;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_set_localesUpdated(::System::Collections::Generic::Dictionary_2<::StringW,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localesUpdated = value;
}
constexpr bool& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_isFirstLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFirstLoad;
}
constexpr bool const& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_isFirstLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFirstLoad;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_set_isFirstLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFirstLoad = value;
}
constexpr ::UnityEngine::Coroutine*& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_updateDataCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDataCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_updateDataCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDataCoroutine;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_set_updateDataCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateDataCoroutine = value;
}
constexpr ::UnityW<::GorillaUtil::StringTable>& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_betaTitleDataOveride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaTitleDataOveride;
}
constexpr ::UnityW<::GorillaUtil::StringTable> const& GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_get_betaTitleDataOveride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betaTitleDataOveride;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache::__cordl_internal_set_betaTitleDataOveride(::UnityW<::GorillaUtil::StringTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___betaTitleDataOveride = value;
}
inline void GorillaNetworking::PlayFabTitleDataCache::setStaticF__Instance_k__BackingField(::UnityW<::GorillaNetworking::PlayFabTitleDataCache>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>, "<Instance>k__BackingField", ::GorillaNetworking::PlayFabTitleDataCache*>(std::forward<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>(value));
}
inline ::UnityW<::GorillaNetworking::PlayFabTitleDataCache> GorillaNetworking::PlayFabTitleDataCache::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>, "<Instance>k__BackingField", ::GorillaNetworking::PlayFabTitleDataCache*>();
}
inline void GorillaNetworking::PlayFabTitleDataCache::setStaticF_k_onnLoaded(::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*, "k_onnLoaded", ::GorillaNetworking::PlayFabTitleDataCache*>(std::forward<::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*>(value));
}
inline ::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>* GorillaNetworking::PlayFabTitleDataCache::getStaticF_k_onnLoaded()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*, "k_onnLoaded", ::GorillaNetworking::PlayFabTitleDataCache*>();
}
inline void GorillaNetworking::PlayFabTitleDataCache::setStaticF_OnValueRetieved(::System::Action_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::StringW>*, "OnValueRetieved", ::GorillaNetworking::PlayFabTitleDataCache*>(std::forward<::System::Action_2<::StringW,::StringW>*>(value));
}
inline ::System::Action_2<::StringW,::StringW>* GorillaNetworking::PlayFabTitleDataCache::getStaticF_OnValueRetieved()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::StringW>*, "OnValueRetieved", ::GorillaNetworking::PlayFabTitleDataCache*>();
}
inline void GorillaNetworking::PlayFabTitleDataCache::setStaticF_OnCachedValueRetieved(::System::Action_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::StringW>*, "OnCachedValueRetieved", ::GorillaNetworking::PlayFabTitleDataCache*>(std::forward<::System::Action_2<::StringW,::StringW>*>(value));
}
inline ::System::Action_2<::StringW,::StringW>* GorillaNetworking::PlayFabTitleDataCache::getStaticF_OnCachedValueRetieved()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::StringW>*, "OnCachedValueRetieved", ::GorillaNetworking::PlayFabTitleDataCache*>();
}
inline ::UnityW<::GorillaNetworking::PlayFabTitleDataCache> GorillaNetworking::PlayFabTitleDataCache::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>(nullptr, ___internal_method);
}
inline void GorillaNetworking::PlayFabTitleDataCache::set_Instance(::GorillaNetworking::PlayFabTitleDataCache*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaNetworking::PlayFabTitleDataCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW GorillaNetworking::PlayFabTitleDataCache::get_FilePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"get_FilePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GorillaNetworking::PlayFabTitleDataCache::GetTitleData(::StringW  name, ::System::Action_1<::StringW>*  callback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, bool  ignoreCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"GetTitleData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::StringW>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, callback, errorCallback, ignoreCache);
}
inline void GorillaNetworking::PlayFabTitleDataCache::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabTitleDataCache::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabTitleDataCache::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabTitleDataCache::TryUpdateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"TryUpdateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::CacheImport* GorillaNetworking::PlayFabTitleDataCache::LoadDataFromFile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"LoadDataFromFile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaNetworking::CacheImport*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabTitleDataCache::SaveDataToFile(::StringW  filepath, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  titleData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"SaveDataToFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, filepath, titleData);
}
inline void GorillaNetworking::PlayFabTitleDataCache::UpdateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"UpdateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::PlayFabTitleDataCache::UpdateDataCo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"UpdateDataCo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabTitleDataCache::ClearRequestWithError(::PlayFab::PlayFabError*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"ClearRequestWithError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void GorillaNetworking::PlayFabTitleDataCache::RegisterOnLoad(::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {"RegisterOnLoad", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GorillaNetworking::PlayFabTitleDataCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::PlayFabTitleDataCache* GorillaNetworking::PlayFabTitleDataCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabTitleDataCache*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabTitleDataCache::PlayFabTitleDataCache()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::*)(int32_t)>(&::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c9c384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::*)()>(&::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c9ceac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::*)()>(&::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x1014;
  constexpr static std::size_t addrs = 0x5c9ced8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::*)()>(&::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__m__Finally1)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c9deec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::*)()>(&::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9df28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::*)()>(&::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c9df30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::*)()>(&::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9df68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabTitleDataCache>& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::PlayFabTitleDataCache> const& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabTitleDataCache>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0* const& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_set___8__1(::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
constexpr ::GorillaNetworking::CacheImport*& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get__oldCache_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oldCache_5__2;
}
constexpr ::GorillaNetworking::CacheImport* const& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get__oldCache_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oldCache_5__2;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_set__oldCache_5__2(::GorillaNetworking::CacheImport*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oldCache_5__2 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get__titleData_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleData_5__3;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get__titleData_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleData_5__3;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_set__titleData_5__3(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____titleData_5__3 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get__oldLocalizedCache_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oldLocalizedCache_5__4;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get__oldLocalizedCache_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oldLocalizedCache_5__4;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_set__oldLocalizedCache_5__4(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oldLocalizedCache_5__4 = value;
}
constexpr bool& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get__wipeOldData_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wipeOldData_5__5;
}
constexpr bool const& GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_get__wipeOldData_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wipeOldData_5__5;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__cordl_internal_set__wipeOldData_5__5(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wipeOldData_5__5 = value;
}
inline void GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27* GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27::PlayFabTitleDataCache__UpdateDataCo_d__27()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::*)()>(&::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9c994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0._UpdateDataCo_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::*)(::GlobalNamespace::ListClientMothershipTitleDataResponse*)>(&::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::_UpdateDataCo_b__1)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5c9c99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*>(),
                        {"<UpdateDataCo>b__1", {}, {::i2c::type_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0._UpdateDataCo_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::_UpdateDataCo_b__2)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c9cd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*>(),
                        {"<UpdateDataCo>b__2", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0._UpdateDataCo_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::*)()>(&::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::_UpdateDataCo_b__3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9cea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*>(),
                        {"<UpdateDataCo>b__3", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::__cordl_internal_get_newTitleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newTitleData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::__cordl_internal_get_newTitleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newTitleData;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::__cordl_internal_set_newTitleData(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newTitleData = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::__cordl_internal_get_currentLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLocale;
}
constexpr ::StringW const& GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::__cordl_internal_get_currentLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLocale;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::__cordl_internal_set_currentLocale(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLocale = value;
}
constexpr ::StringW& GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::__cordl_internal_get_mothershipError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipError;
}
constexpr ::StringW const& GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::__cordl_internal_get_mothershipError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipError;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::__cordl_internal_set_mothershipError(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipError = value;
}
constexpr bool& GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::__cordl_internal_get_finished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finished;
}
constexpr bool const& GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::__cordl_internal_get_finished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finished;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::__cordl_internal_set_finished(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finished = value;
}
inline void GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::_UpdateDataCo_b__1(::GlobalNamespace::ListClientMothershipTitleDataResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*>(),
                        {"<UpdateDataCo>b__1", {}, {::i2c::type_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::_UpdateDataCo_b__2(::GlobalNamespace::MothershipError*  error, int32_t  statusCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*>(),
                        {"<UpdateDataCo>b__2", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, statusCode);
}
inline bool GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::_UpdateDataCo_b__3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*>(),
                        {"<UpdateDataCo>b__3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0* GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0::PlayFabTitleDataCache___c__DisplayClass27_0()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache___c::*)()>(&::GorillaNetworking::PlayFabTitleDataCache___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9c93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache___c._UpdateDataCo_b__27_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::PlayFabTitleDataCache___c::*)()>(&::GorillaNetworking::PlayFabTitleDataCache___c::_UpdateDataCo_b__27_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c9c944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache___c*>(),
                        {"<UpdateDataCo>b__27_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::PlayFabTitleDataCache___c::setStaticF___9(::GorillaNetworking::PlayFabTitleDataCache___c*  value)  {
::cordl_internals::setStaticField<::GorillaNetworking::PlayFabTitleDataCache___c*, "<>9", ::GorillaNetworking::PlayFabTitleDataCache___c*>(std::forward<::GorillaNetworking::PlayFabTitleDataCache___c*>(value));
}
inline ::GorillaNetworking::PlayFabTitleDataCache___c* GorillaNetworking::PlayFabTitleDataCache___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaNetworking::PlayFabTitleDataCache___c*, "<>9", ::GorillaNetworking::PlayFabTitleDataCache___c*>();
}
inline void GorillaNetworking::PlayFabTitleDataCache___c::setStaticF___9__27_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_0", ::GorillaNetworking::PlayFabTitleDataCache___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* GorillaNetworking::PlayFabTitleDataCache___c::getStaticF___9__27_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_0", ::GorillaNetworking::PlayFabTitleDataCache___c*>();
}
inline void GorillaNetworking::PlayFabTitleDataCache___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::PlayFabTitleDataCache___c::_UpdateDataCo_b__27_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache___c*>(),
                        {"<UpdateDataCo>b__27_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GorillaNetworking::PlayFabTitleDataCache___c* GorillaNetworking::PlayFabTitleDataCache___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabTitleDataCache___c*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabTitleDataCache___c::PlayFabTitleDataCache___c()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache_DataRequest.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::PlayFabTitleDataCache_DataRequest::*)()>(&::GorillaNetworking::PlayFabTitleDataCache_DataRequest::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9c8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache_DataRequest.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache_DataRequest::*)(::StringW)>(&::GorillaNetworking::PlayFabTitleDataCache_DataRequest::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9c8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache_DataRequest.get_Callback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::StringW>* (::GorillaNetworking::PlayFabTitleDataCache_DataRequest::*)()>(&::GorillaNetworking::PlayFabTitleDataCache_DataRequest::get_Callback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9c8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {"get_Callback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache_DataRequest.set_Callback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache_DataRequest::*)(::System::Action_1<::StringW>*)>(&::GorillaNetworking::PlayFabTitleDataCache_DataRequest::set_Callback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9c8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {"set_Callback", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache_DataRequest.get_ErrorCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::PlayFab::PlayFabError*>* (::GorillaNetworking::PlayFabTitleDataCache_DataRequest::*)()>(&::GorillaNetworking::PlayFabTitleDataCache_DataRequest::get_ErrorCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9c8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {"get_ErrorCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache_DataRequest.set_ErrorCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache_DataRequest::*)(::System::Action_1<::PlayFab::PlayFabError*>*)>(&::GorillaNetworking::PlayFabTitleDataCache_DataRequest::set_ErrorCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9c8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {"set_ErrorCallback", {}, {::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache_DataRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache_DataRequest::*)()>(&::GorillaNetworking::PlayFabTitleDataCache_DataRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9bc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::PlayFabTitleDataCache_DataRequest::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& GorillaNetworking::PlayFabTitleDataCache_DataRequest::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache_DataRequest::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr ::System::Action_1<::StringW>*& GorillaNetworking::PlayFabTitleDataCache_DataRequest::__cordl_internal_get__Callback_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Callback_k__BackingField;
}
constexpr ::System::Action_1<::StringW>* const& GorillaNetworking::PlayFabTitleDataCache_DataRequest::__cordl_internal_get__Callback_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Callback_k__BackingField;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache_DataRequest::__cordl_internal_set__Callback_k__BackingField(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Callback_k__BackingField = value;
}
constexpr ::System::Action_1<::PlayFab::PlayFabError*>*& GorillaNetworking::PlayFabTitleDataCache_DataRequest::__cordl_internal_get__ErrorCallback_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorCallback_k__BackingField;
}
constexpr ::System::Action_1<::PlayFab::PlayFabError*>* const& GorillaNetworking::PlayFabTitleDataCache_DataRequest::__cordl_internal_get__ErrorCallback_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorCallback_k__BackingField;
}
constexpr void GorillaNetworking::PlayFabTitleDataCache_DataRequest::__cordl_internal_set__ErrorCallback_k__BackingField(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ErrorCallback_k__BackingField = value;
}
inline ::StringW GorillaNetworking::PlayFabTitleDataCache_DataRequest::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabTitleDataCache_DataRequest::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::StringW>* GorillaNetworking::PlayFabTitleDataCache_DataRequest::get_Callback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {"get_Callback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::StringW>*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabTitleDataCache_DataRequest::set_Callback(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {"set_Callback", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GorillaNetworking::PlayFabTitleDataCache_DataRequest::get_ErrorCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {"get_ErrorCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::PlayFab::PlayFabError*>*>(this, ___internal_method);
}
inline void GorillaNetworking::PlayFabTitleDataCache_DataRequest::set_ErrorCallback(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {"set_ErrorCallback", {}, {::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::PlayFabTitleDataCache_DataRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::PlayFabTitleDataCache_DataRequest* GorillaNetworking::PlayFabTitleDataCache_DataRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabTitleDataCache_DataRequest::PlayFabTitleDataCache_DataRequest()   {
}
//  Writing Method size for method: ::GorillaNetworking::PlayFabTitleDataCache_DataUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::PlayFabTitleDataCache_DataUpdate::*)()>(&::GorillaNetworking::PlayFabTitleDataCache_DataUpdate::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c9c85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataUpdate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::PlayFabTitleDataCache_DataUpdate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::PlayFabTitleDataCache_DataUpdate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::PlayFabTitleDataCache_DataUpdate* GorillaNetworking::PlayFabTitleDataCache_DataUpdate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::PlayFabTitleDataCache_DataUpdate*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::PlayFabTitleDataCache_DataUpdate::PlayFabTitleDataCache_DataUpdate()   {
}
