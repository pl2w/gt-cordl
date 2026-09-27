#pragma once
// IWYU pragma private; include "Modio/Mods/ModSearchFilter.hpp"
#include "Modio/Mods/zzzz__RevenueType_impl.hpp"
#include "Modio/Mods/zzzz__SearchFilterPlatformStatus_impl.hpp"
#include "Modio/Mods/zzzz__SortModsBy_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Mods/zzzz__ModSearchFilter_def.hpp"
#include "Modio/API/zzzz__Filtering_def.hpp"
#include "Modio/API/zzzz__ModioAPI_def.hpp"
#include "Modio/Mods/zzzz__ModSearchFilter_def.hpp"
#include "Modio/Mods/zzzz__RevenueType_def.hpp"
#include "Modio/Mods/zzzz__SearchFilterPlatformStatus_def.hpp"
#include "Modio/Mods/zzzz__SortModsBy_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.get_PageIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Mods::ModSearchFilter::*)()>(&::Modio::Mods::ModSearchFilter::get_PageIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_PageIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.set_PageIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(int32_t)>(&::Modio::Mods::ModSearchFilter::set_PageIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa030d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_PageIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.get_PageSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Mods::ModSearchFilter::*)()>(&::Modio::Mods::ModSearchFilter::get_PageSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_PageSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.set_PageSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(int32_t)>(&::Modio::Mods::ModSearchFilter::set_PageSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa030d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_PageSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.get_ShowMatureContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::ModSearchFilter::*)()>(&::Modio::Mods::ModSearchFilter::get_ShowMatureContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_ShowMatureContent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.set_ShowMatureContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(bool)>(&::Modio::Mods::ModSearchFilter::set_ShowMatureContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_ShowMatureContent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.get_PlatformStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::SearchFilterPlatformStatus (::Modio::Mods::ModSearchFilter::*)()>(&::Modio::Mods::ModSearchFilter::get_PlatformStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_PlatformStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.set_PlatformStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(::Modio::Mods::SearchFilterPlatformStatus)>(&::Modio::Mods::ModSearchFilter::set_PlatformStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_PlatformStatus", {}, {::i2c::type_of<::Modio::Mods::SearchFilterPlatformStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.get_SortBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::SortModsBy (::Modio::Mods::ModSearchFilter::*)()>(&::Modio::Mods::ModSearchFilter::get_SortBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_SortBy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.set_SortBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(::Modio::Mods::SortModsBy)>(&::Modio::Mods::ModSearchFilter::set_SortBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_SortBy", {}, {::i2c::type_of<::Modio::Mods::SortModsBy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.get_IsSortAscending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Mods::ModSearchFilter::*)()>(&::Modio::Mods::ModSearchFilter::get_IsSortAscending)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_IsSortAscending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.set_IsSortAscending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(bool)>(&::Modio::Mods::ModSearchFilter::set_IsSortAscending)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_IsSortAscending", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.get_RevenueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::RevenueType (::Modio::Mods::ModSearchFilter::*)()>(&::Modio::Mods::ModSearchFilter::get_RevenueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_RevenueType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.set_RevenueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(::Modio::Mods::RevenueType)>(&::Modio::Mods::ModSearchFilter::set_RevenueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa030de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_RevenueType", {}, {::i2c::type_of<::Modio::Mods::RevenueType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(int32_t, int32_t)>(&::Modio::Mods::ModSearchFilter::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa030dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.AddSearchPhrase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(::StringW, ::Modio::API::Filtering)>(&::Modio::Mods::ModSearchFilter::AddSearchPhrase)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xa030e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"AddSearchPhrase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::Filtering>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.AddSearchPhrases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(::System::Collections::Generic::ICollection_1<::StringW>*, ::Modio::API::Filtering)>(&::Modio::Mods::ModSearchFilter::AddSearchPhrases)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa030ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"AddSearchPhrases", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>(), ::i2c::type_of<::Modio::API::Filtering>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.ClearSearchPhrases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)()>(&::Modio::Mods::ModSearchFilter::ClearSearchPhrases)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa0311cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"ClearSearchPhrases", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.ClearSearchPhrases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(::Modio::API::Filtering)>(&::Modio::Mods::ModSearchFilter::ClearSearchPhrases)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa031224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"ClearSearchPhrases", {}, {::i2c::type_of<::Modio::API::Filtering>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.GetSearchPhrase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::StringW>* (::Modio::Mods::ModSearchFilter::*)(::Modio::API::Filtering)>(&::Modio::Mods::ModSearchFilter::GetSearchPhrase)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa031284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"GetSearchPhrase", {}, {::i2c::type_of<::Modio::API::Filtering>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.AddTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(::StringW)>(&::Modio::Mods::ModSearchFilter::AddTag)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa031360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"AddTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.AddTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::Modio::Mods::ModSearchFilter::AddTags)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa031460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"AddTags", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.ClearTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)()>(&::Modio::Mods::ModSearchFilter::ClearTags)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa03150c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"ClearTags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.GetTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::Modio::Mods::ModSearchFilter::*)()>(&::Modio::Mods::ModSearchFilter::GetTags)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa031578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"GetTags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.AddUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter::*)(::Modio::Users::UserProfile*)>(&::Modio::Mods::ModSearchFilter::AddUser)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa031618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"AddUser", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.GetUsers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Modio::Users::UserProfile*>* (::Modio::Mods::ModSearchFilter::*)()>(&::Modio::Mods::ModSearchFilter::GetUsers)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa031718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"GetUsers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter.GetModsFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::API::Mods_ModioAPI_GetModsFilter* (::Modio::Mods::ModSearchFilter::*)()>(&::Modio::Mods::ModSearchFilter::GetModsFilter)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0xa0294f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"GetModsFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::Modio::API::Filtering,::System::Collections::Generic::List_1<::StringW>*>*& Modio::Mods::ModSearchFilter::__cordl_internal_get__searchPhrases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchPhrases;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Modio::API::Filtering,::System::Collections::Generic::List_1<::StringW>*>* const& Modio::Mods::ModSearchFilter::__cordl_internal_get__searchPhrases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchPhrases;
}
constexpr void Modio::Mods::ModSearchFilter::__cordl_internal_set__searchPhrases(::System::Collections::Generic::Dictionary_2<::Modio::API::Filtering,::System::Collections::Generic::List_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____searchPhrases = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Modio::Mods::ModSearchFilter::__cordl_internal_get__tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tags;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Modio::Mods::ModSearchFilter::__cordl_internal_get__tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tags;
}
constexpr void Modio::Mods::ModSearchFilter::__cordl_internal_set__tags(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tags = value;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Users::UserProfile*>*& Modio::Mods::ModSearchFilter::__cordl_internal_get__users()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____users;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Users::UserProfile*>* const& Modio::Mods::ModSearchFilter::__cordl_internal_get__users() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____users;
}
constexpr void Modio::Mods::ModSearchFilter::__cordl_internal_set__users(::System::Collections::Generic::List_1<::Modio::Users::UserProfile*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____users = value;
}
constexpr bool& Modio::Mods::ModSearchFilter::__cordl_internal_get__ShowMatureContent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowMatureContent_k__BackingField;
}
constexpr bool const& Modio::Mods::ModSearchFilter::__cordl_internal_get__ShowMatureContent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowMatureContent_k__BackingField;
}
constexpr void Modio::Mods::ModSearchFilter::__cordl_internal_set__ShowMatureContent_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowMatureContent_k__BackingField = value;
}
constexpr ::Modio::Mods::SearchFilterPlatformStatus& Modio::Mods::ModSearchFilter::__cordl_internal_get__PlatformStatus_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlatformStatus_k__BackingField;
}
constexpr ::Modio::Mods::SearchFilterPlatformStatus const& Modio::Mods::ModSearchFilter::__cordl_internal_get__PlatformStatus_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlatformStatus_k__BackingField;
}
constexpr void Modio::Mods::ModSearchFilter::__cordl_internal_set__PlatformStatus_k__BackingField(::Modio::Mods::SearchFilterPlatformStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlatformStatus_k__BackingField = value;
}
constexpr ::Modio::Mods::SortModsBy& Modio::Mods::ModSearchFilter::__cordl_internal_get__SortBy_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SortBy_k__BackingField;
}
constexpr ::Modio::Mods::SortModsBy const& Modio::Mods::ModSearchFilter::__cordl_internal_get__SortBy_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SortBy_k__BackingField;
}
constexpr void Modio::Mods::ModSearchFilter::__cordl_internal_set__SortBy_k__BackingField(::Modio::Mods::SortModsBy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SortBy_k__BackingField = value;
}
constexpr bool& Modio::Mods::ModSearchFilter::__cordl_internal_get__IsSortAscending_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSortAscending_k__BackingField;
}
constexpr bool const& Modio::Mods::ModSearchFilter::__cordl_internal_get__IsSortAscending_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSortAscending_k__BackingField;
}
constexpr void Modio::Mods::ModSearchFilter::__cordl_internal_set__IsSortAscending_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSortAscending_k__BackingField = value;
}
constexpr ::Modio::Mods::RevenueType& Modio::Mods::ModSearchFilter::__cordl_internal_get__RevenueType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RevenueType_k__BackingField;
}
constexpr ::Modio::Mods::RevenueType const& Modio::Mods::ModSearchFilter::__cordl_internal_get__RevenueType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RevenueType_k__BackingField;
}
constexpr void Modio::Mods::ModSearchFilter::__cordl_internal_set__RevenueType_k__BackingField(::Modio::Mods::RevenueType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RevenueType_k__BackingField = value;
}
constexpr int32_t& Modio::Mods::ModSearchFilter::__cordl_internal_get__pageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageSize;
}
constexpr int32_t const& Modio::Mods::ModSearchFilter::__cordl_internal_get__pageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageSize;
}
constexpr void Modio::Mods::ModSearchFilter::__cordl_internal_set__pageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pageSize = value;
}
constexpr int32_t& Modio::Mods::ModSearchFilter::__cordl_internal_get__pageIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageIndex;
}
constexpr int32_t const& Modio::Mods::ModSearchFilter::__cordl_internal_get__pageIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageIndex;
}
constexpr void Modio::Mods::ModSearchFilter::__cordl_internal_set__pageIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pageIndex = value;
}
inline int32_t Modio::Mods::ModSearchFilter::get_PageIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_PageIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::Mods::ModSearchFilter::set_PageIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_PageIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Modio::Mods::ModSearchFilter::get_PageSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_PageSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::Mods::ModSearchFilter::set_PageSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_PageSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Mods::ModSearchFilter::get_ShowMatureContent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_ShowMatureContent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Mods::ModSearchFilter::set_ShowMatureContent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_ShowMatureContent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::SearchFilterPlatformStatus Modio::Mods::ModSearchFilter::get_PlatformStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_PlatformStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::SearchFilterPlatformStatus>(this, ___internal_method);
}
inline void Modio::Mods::ModSearchFilter::set_PlatformStatus(::Modio::Mods::SearchFilterPlatformStatus  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_PlatformStatus", {}, {::i2c::type_of<::Modio::Mods::SearchFilterPlatformStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::SortModsBy Modio::Mods::ModSearchFilter::get_SortBy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_SortBy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::SortModsBy>(this, ___internal_method);
}
inline void Modio::Mods::ModSearchFilter::set_SortBy(::Modio::Mods::SortModsBy  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_SortBy", {}, {::i2c::type_of<::Modio::Mods::SortModsBy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Mods::ModSearchFilter::get_IsSortAscending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_IsSortAscending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Mods::ModSearchFilter::set_IsSortAscending(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_IsSortAscending", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::RevenueType Modio::Mods::ModSearchFilter::get_RevenueType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"get_RevenueType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::RevenueType>(this, ___internal_method);
}
inline void Modio::Mods::ModSearchFilter::set_RevenueType(::Modio::Mods::RevenueType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"set_RevenueType", {}, {::i2c::type_of<::Modio::Mods::RevenueType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Mods::ModSearchFilter::_ctor(int32_t  pageIndex, int32_t  pageSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pageIndex, pageSize);
}
inline void Modio::Mods::ModSearchFilter::AddSearchPhrase(::StringW  phrase, ::Modio::API::Filtering  filtering)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"AddSearchPhrase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::Filtering>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phrase, filtering);
}
inline void Modio::Mods::ModSearchFilter::AddSearchPhrases(::System::Collections::Generic::ICollection_1<::StringW>*  phrase, ::Modio::API::Filtering  filtering)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"AddSearchPhrases", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>(), ::i2c::type_of<::Modio::API::Filtering>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phrase, filtering);
}
inline void Modio::Mods::ModSearchFilter::ClearSearchPhrases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"ClearSearchPhrases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Mods::ModSearchFilter::ClearSearchPhrases(::Modio::API::Filtering  filtering)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"ClearSearchPhrases", {}, {::i2c::type_of<::Modio::API::Filtering>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filtering);
}
inline ::System::Collections::Generic::IList_1<::StringW>* Modio::Mods::ModSearchFilter::GetSearchPhrase(::Modio::API::Filtering  filtering)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"GetSearchPhrase", {}, {::i2c::type_of<::Modio::API::Filtering>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::StringW>*>(this, ___internal_method, filtering);
}
inline void Modio::Mods::ModSearchFilter::AddTag(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"AddTag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag);
}
inline void Modio::Mods::ModSearchFilter::AddTags(::System::Collections::Generic::IEnumerable_1<::StringW>*  tags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"AddTags", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tags);
}
inline void Modio::Mods::ModSearchFilter::ClearTags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"ClearTags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* Modio::Mods::ModSearchFilter::GetTags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"GetTags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(this, ___internal_method);
}
inline void Modio::Mods::ModSearchFilter::AddUser(::Modio::Users::UserProfile*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"AddUser", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Modio::Users::UserProfile*>* Modio::Mods::ModSearchFilter::GetUsers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"GetUsers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Modio::Users::UserProfile*>*>(this, ___internal_method);
}
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* Modio::Mods::ModSearchFilter::GetModsFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter*>(),
                        {"GetModsFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::API::Mods_ModioAPI_GetModsFilter*>(this, ___internal_method);
}
inline ::Modio::Mods::ModSearchFilter* Modio::Mods::ModSearchFilter::New_ctor(int32_t  pageIndex, int32_t  pageSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::ModSearchFilter*>(pageIndex, pageSize));
}
// Ctor Parameters []
constexpr ::Modio::Mods::ModSearchFilter::ModSearchFilter()   {
}
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModSearchFilter___c::*)()>(&::Modio::Mods::ModSearchFilter___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModSearchFilter___c._GetModsFilter_b__43_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Mods::ModSearchFilter___c::*)(::Modio::Users::UserProfile*)>(&::Modio::Mods::ModSearchFilter___c::_GetModsFilter_b__43_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa031828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter___c*>(),
                        {"<GetModsFilter>b__43_0", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Mods::ModSearchFilter___c::setStaticF___9(::Modio::Mods::ModSearchFilter___c*  value)  {
::cordl_internals::setStaticField<::Modio::Mods::ModSearchFilter___c*, "<>9", ::Modio::Mods::ModSearchFilter___c*>(std::forward<::Modio::Mods::ModSearchFilter___c*>(value));
}
inline ::Modio::Mods::ModSearchFilter___c* Modio::Mods::ModSearchFilter___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Mods::ModSearchFilter___c*, "<>9", ::Modio::Mods::ModSearchFilter___c*>();
}
inline void Modio::Mods::ModSearchFilter___c::setStaticF___9__43_0(::System::Func_2<::Modio::Users::UserProfile*,int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Users::UserProfile*,int64_t>*, "<>9__43_0", ::Modio::Mods::ModSearchFilter___c*>(std::forward<::System::Func_2<::Modio::Users::UserProfile*,int64_t>*>(value));
}
inline ::System::Func_2<::Modio::Users::UserProfile*,int64_t>* Modio::Mods::ModSearchFilter___c::getStaticF___9__43_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Users::UserProfile*,int64_t>*, "<>9__43_0", ::Modio::Mods::ModSearchFilter___c*>();
}
inline void Modio::Mods::ModSearchFilter___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Modio::Mods::ModSearchFilter___c::_GetModsFilter_b__43_0(::Modio::Users::UserProfile*  u)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModSearchFilter___c*>(),
                        {"<GetModsFilter>b__43_0", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, u);
}
inline ::Modio::Mods::ModSearchFilter___c* Modio::Mods::ModSearchFilter___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::ModSearchFilter___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Mods::ModSearchFilter___c::ModSearchFilter___c()   {
}
