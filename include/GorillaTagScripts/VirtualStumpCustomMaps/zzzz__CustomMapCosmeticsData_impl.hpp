#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CustomMapCosmeticsData.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapCosmeticItem_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapCosmeticsData_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__GTObjectPlaceholder_ECustomMapCosmeticItem_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapCosmeticItem_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapCosmeticsData_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bdee70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::OnDestroy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5bdee78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData.TryGetItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::*)(::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem, ::by_ref<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::TryGetItem)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5bdefc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"TryGetItem", {}, {::i2c::type_of<::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData.UpdateFromTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::UpdateFromTitleData)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5bdf128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"UpdateFromTitleData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData.OnTitleDataUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::*)(::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::OnTitleDataUpdated)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bdf46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"OnTitleDataUpdated", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData.OnGetCosmeticsDataFromTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::*)(::StringW)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::OnGetCosmeticsDataFromTitleData)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5bdf4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"OnGetCosmeticsDataFromTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData.OnPlayFabError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::*)(::PlayFab::PlayFabError*)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::OnPlayFabError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5bdf6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"OnPlayFabError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bdf764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>*& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::__cordl_internal_get_fallbackItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackItems;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>* const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::__cordl_internal_get_fallbackItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackItems;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::__cordl_internal_set_fallbackItems(::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallbackItems = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>*& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::__cordl_internal_get_customMapCosmeticItemList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapCosmeticItemList;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>* const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::__cordl_internal_get_customMapCosmeticItemList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapCosmeticItemList;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::__cordl_internal_set_customMapCosmeticItemList(::System::Collections::Generic::List_1<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customMapCosmeticItemList = value;
}
constexpr ::StringW& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::__cordl_internal_get_titleDataKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr ::StringW const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::__cordl_internal_get_titleDataKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleDataKey;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::__cordl_internal_set_titleDataKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleDataKey = value;
}
constexpr bool& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::__cordl_internal_get_initializedFromTitleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializedFromTitleData;
}
constexpr bool const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::__cordl_internal_get_initializedFromTitleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializedFromTitleData;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::__cordl_internal_set_initializedFromTitleData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initializedFromTitleData = value;
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::TryGetItem(::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem  customMapItemSlot, ::by_ref<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>  foundItem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"TryGetItem", {}, {::i2c::type_of<::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, customMapItemSlot, foundItem);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::UpdateFromTitleData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"UpdateFromTitleData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::OnTitleDataUpdated(::StringW  updatedKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"OnTitleDataUpdated", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatedKey);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::OnGetCosmeticsDataFromTitleData(::StringW  cosmeticsData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"OnGetCosmeticsDataFromTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmeticsData);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::OnPlayFabError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {"OnPlayFabError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData::CustomMapCosmeticsData()   {
}
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bdf6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0._OnGetCosmeticsDataFromTitleData_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0::*)(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem)>(&::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0::_OnGetCosmeticsDataFromTitleData_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bdf7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0*>(),
                        {"<OnGetCosmeticsDataFromTitleData>b__0", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0::__cordl_internal_get_itemFromJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemFromJson;
}
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem const& GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0::__cordl_internal_get_itemFromJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemFromJson;
}
constexpr void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0::__cordl_internal_set_itemFromJson(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemFromJson = value;
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0::_OnGetCosmeticsDataFromTitleData_b__0(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0*>(),
                        {"<OnGetCosmeticsDataFromTitleData>b__0", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0* GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticsData___c__DisplayClass9_0::CustomMapCosmeticsData___c__DisplayClass9_0()   {
}
