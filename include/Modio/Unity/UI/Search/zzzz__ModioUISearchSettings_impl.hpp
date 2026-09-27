#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/ModioUISearchSettings.hpp"
#include "Modio/Mods/zzzz__RevenueType_impl.hpp"
#include "Modio/Mods/zzzz__SortModsBy_impl.hpp"
#include "Modio/Unity/UI/Search/zzzz__SpecialSearchType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearchSettings_def.hpp"
#include "Modio/Mods/zzzz__ModSearchFilter_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearchSettings.GetSearchFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModSearchFilter* (::Modio::Unity::UI::Search::ModioUISearchSettings::*)(int32_t)>(&::Modio::Unity::UI::Search::ModioUISearchSettings::GetSearchFilter)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9f9fa2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>(),
                        {"GetSearchFilter", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearchSettings.Search
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearchSettings::*)(::Modio::Unity::UI::Search::ModioUISearch*)>(&::Modio::Unity::UI::Search::ModioUISearchSettings::Search)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f9f104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>(),
                        {"Search", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearchSettings.SetAsCustomSearchBase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearchSettings::*)(::Modio::Unity::UI::Search::ModioUISearch*)>(&::Modio::Unity::UI::Search::ModioUISearchSettings::SetAsCustomSearchBase)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9fa2e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>(),
                        {"SetAsCustomSearchBase", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearchSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearchSettings::*)()>(&::Modio::Unity::UI::Search::ModioUISearchSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fa2f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_DisplayAs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayAs;
}
constexpr ::StringW const& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_DisplayAs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayAs;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_set_DisplayAs(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayAs = value;
}
constexpr ::StringW& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_DisplayAsLocalisedKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayAsLocalisedKey;
}
constexpr ::StringW const& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_DisplayAsLocalisedKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayAsLocalisedKey;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_set_DisplayAsLocalisedKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayAsLocalisedKey = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_Icon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Icon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_Icon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Icon;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_set_Icon(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Icon = value;
}
constexpr bool& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_HiddenIfMonetizationDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HiddenIfMonetizationDisabled;
}
constexpr bool const& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_HiddenIfMonetizationDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HiddenIfMonetizationDisabled;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_set_HiddenIfMonetizationDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HiddenIfMonetizationDisabled = value;
}
constexpr ::Modio::Unity::UI::Search::SpecialSearchType& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_searchType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchType;
}
constexpr ::Modio::Unity::UI::Search::SpecialSearchType const& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_searchType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchType;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_set_searchType(::Modio::Unity::UI::Search::SpecialSearchType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchType = value;
}
constexpr ::StringW& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_searchPhrase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPhrase;
}
constexpr ::StringW const& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_searchPhrase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPhrase;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_set_searchPhrase(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchPhrase = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_searchTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchTags;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_searchTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchTags;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_set_searchTags(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchTags = value;
}
constexpr ::Modio::Mods::SortModsBy& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_sortModsBy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortModsBy;
}
constexpr ::Modio::Mods::SortModsBy const& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_sortModsBy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortModsBy;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_set_sortModsBy(::Modio::Mods::SortModsBy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortModsBy = value;
}
constexpr bool& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_showMatureContent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMatureContent;
}
constexpr bool const& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_showMatureContent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMatureContent;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_set_showMatureContent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showMatureContent = value;
}
constexpr bool& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_isAscending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAscending;
}
constexpr bool const& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_isAscending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAscending;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_set_isAscending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAscending = value;
}
constexpr ::Modio::Mods::RevenueType& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_filterRevenueType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterRevenueType;
}
constexpr ::Modio::Mods::RevenueType const& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_filterRevenueType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterRevenueType;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_set_filterRevenueType(::Modio::Mods::RevenueType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filterRevenueType = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_shareFilterSettingsWith()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shareFilterSettingsWith;
}
constexpr ::UnityW<::UnityEngine::Object> const& Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_get_shareFilterSettingsWith() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shareFilterSettingsWith;
}
constexpr void Modio::Unity::UI::Search::ModioUISearchSettings::__cordl_internal_set_shareFilterSettingsWith(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shareFilterSettingsWith = value;
}
inline ::Modio::Mods::ModSearchFilter* Modio::Unity::UI::Search::ModioUISearchSettings::GetSearchFilter(int32_t  paginationSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>(),
                        {"GetSearchFilter", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModSearchFilter*>(this, ___internal_method, paginationSize);
}
inline void Modio::Unity::UI::Search::ModioUISearchSettings::Search(::Modio::Unity::UI::Search::ModioUISearch*  searchWith)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>(),
                        {"Search", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, searchWith);
}
inline void Modio::Unity::UI::Search::ModioUISearchSettings::SetAsCustomSearchBase(::Modio::Unity::UI::Search::ModioUISearch*  searchWith)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>(),
                        {"SetAsCustomSearchBase", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, searchWith);
}
inline void Modio::Unity::UI::Search::ModioUISearchSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Search::ModioUISearchSettings* Modio::Unity::UI::Search::ModioUISearchSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Search::ModioUISearchSettings*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Search::ModioUISearchSettings::ModioUISearchSettings()   {
}
