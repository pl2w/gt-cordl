#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/ModioUISearch.hpp"
#include "Modio/Unity/UI/Search/zzzz__SpecialSearchType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
#include "Modio/Mods/zzzz__ModSearchFilter_def.hpp"
#include "Modio/Mods/zzzz__ModTag_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Mods/zzzz__SortModsBy_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__IModioUIPropertiesOwner_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearchSettings_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_<>c__DisplayClass89_0___SetSearchForDependencies_g__GetModsViaDependencies|0_d_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch__GetCurrentUserCreationsQuery_d__85_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch__GetModsViaLocalQuery_d__86_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch__GetModsViaStandardQuery_d__84_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch__SetSearch_d__83_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__ModioUISearch_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__SpecialSearchType_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
#include "Modio/Users/zzzz__User_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Modio::Unity::UI::Search::ModioUISearch> (*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_Default)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9f9e708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.set_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Unity::UI::Search::ModioUISearch*)>(&::Modio::Unity::UI::Search::ModioUISearch::set_Default)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f9e750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_Default", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_LastSearchFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModSearchFilter* (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_LastSearchFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.set_LastSearchFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::Modio::Mods::ModSearchFilter*)>(&::Modio::Unity::UI::Search::ModioUISearch::set_LastSearchFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_LastSearchFilter", {}, {::i2c::type_of<::Modio::Mods::ModSearchFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_LastSearchPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Unity::UI::Search::SpecialSearchType (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_LastSearchPreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchPreset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_IsSearching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_IsSearching)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_IsSearching", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.set_IsSearching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(bool)>(&::Modio::Unity::UI::Search::ModioUISearch::set_IsSearching)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_IsSearching", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_IsAdditiveSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_IsAdditiveSearch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_IsAdditiveSearch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.set_IsAdditiveSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(bool)>(&::Modio::Unity::UI::Search::ModioUISearch::set_IsAdditiveSearch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_IsAdditiveSearch", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_LastSearchResultMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>* (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_LastSearchResultMods)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchResultMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.set_LastSearchResultMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*)>(&::Modio::Unity::UI::Search::ModioUISearch::set_LastSearchResultMods)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_LastSearchResultMods", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_LastSearchResultModCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_LastSearchResultModCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchResultModCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.set_LastSearchResultModCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(int32_t)>(&::Modio::Unity::UI::Search::ModioUISearch::set_LastSearchResultModCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_LastSearchResultModCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_LastSearchResultPageCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_LastSearchResultPageCount)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9f9e800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchResultPageCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_CanGetMoreMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_CanGetMoreMods)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f9e928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_CanGetMoreMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_LastSearchError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_LastSearchError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.set_LastSearchError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::Modio::Error*)>(&::Modio::Unity::UI::Search::ModioUISearch::set_LastSearchError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_LastSearchError", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_LastSearchSelectionIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_LastSearchSelectionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchSelectionIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.set_LastSearchSelectionIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(int32_t)>(&::Modio::Unity::UI::Search::ModioUISearch::set_LastSearchSelectionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_LastSearchSelectionIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_LastSearchSettingsFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_LastSearchSettingsFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9e9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchSettingsFrom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.set_LastSearchSettingsFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::Modio::Unity::UI::Search::ModioUISearchSettings*)>(&::Modio::Unity::UI::Search::ModioUISearch::set_LastSearchSettingsFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9ea04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_LastSearchSettingsFrom", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_SortByOverriden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_SortByOverriden)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9ea0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_SortByOverriden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.set_SortByOverriden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(bool)>(&::Modio::Unity::UI::Search::ModioUISearch::set_SortByOverriden)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9ea14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_SortByOverriden", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.get_DefaultPageSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::get_DefaultPageSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9ea1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_DefaultPageSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.add_AppliedSearchPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::System::Action*)>(&::Modio::Unity::UI::Search::ModioUISearch::add_AppliedSearchPreset)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f9ea24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"add_AppliedSearchPreset", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.remove_AppliedSearchPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::System::Action*)>(&::Modio::Unity::UI::Search::ModioUISearch::remove_AppliedSearchPreset)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f9eac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"remove_AppliedSearchPreset", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::Awake)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9f9eb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::OnDestroy)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x9f9ec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f9edb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.PluginReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::Modio::Users::User*)>(&::Modio::Unity::UI::Search::ModioUISearch::PluginReady)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f9ee38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"PluginReady", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.PluginReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::PluginReady)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9f9ee3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"PluginReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.AddUpdatePropertiesListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::UnityEngine::Events::UnityAction*)>(&::Modio::Unity::UI::Search::ModioUISearch::AddUpdatePropertiesListener)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f9f1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"AddUpdatePropertiesListener", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.RemoveUpdatePropertiesListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::UnityEngine::Events::UnityAction*)>(&::Modio::Unity::UI::Search::ModioUISearch::RemoveUpdatePropertiesListener)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f9f1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"RemoveUpdatePropertiesListener", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.ApplySortBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::Modio::Mods::SortModsBy, bool)>(&::Modio::Unity::UI::Search::ModioUISearch::ApplySortBy)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9f9f204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"ApplySortBy", {}, {::i2c::type_of<::Modio::Mods::SortModsBy>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.ApplySearchPhrase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::StringW)>(&::Modio::Unity::UI::Search::ModioUISearch::ApplySearchPhrase)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f9f340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"ApplySearchPhrase", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.ApplyTagsToSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::Modio::Unity::UI::Search::ModioUISearch::ApplyTagsToSearch)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9f9f3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"ApplyTagsToSearch", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.HasCustomSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::HasCustomSearch)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9f9f4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"HasCustomSearch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.ClearSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::ClearSearch)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9f9f040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"ClearSearch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.SetSearchForUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::Modio::Users::UserProfile*)>(&::Modio::Unity::UI::Search::ModioUISearch::SetSearchForUser)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9f9f920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetSearchForUser", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.SetSearchForTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::Modio::Mods::ModTag*)>(&::Modio::Unity::UI::Search::ModioUISearch::SetSearchForTag)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9f9fae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetSearchForTag", {}, {::i2c::type_of<::Modio::Mods::ModTag*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.GetNextPageAdditivelyForLastSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::GetNextPageAdditivelyForLastSearch)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9f9fbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"GetNextPageAdditivelyForLastSearch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.SetPageForCurrentSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(int32_t)>(&::Modio::Unity::UI::Search::ModioUISearch::SetPageForCurrentSearch)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9f9fdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetPageForCurrentSearch", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.SetSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::Modio::Mods::ModSearchFilter*, ::Modio::Unity::UI::Search::SpecialSearchType, bool, ::System::Object*, ::Modio::Unity::UI::Search::ModioUISearchSettings*)>(&::Modio::Unity::UI::Search::ModioUISearch::SetSearch)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x9f9f608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetSearch", {}, {::i2c::type_of<::Modio::Mods::ModSearchFilter*>(), ::i2c::type_of<::Modio::Unity::UI::Search::SpecialSearchType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.SetCustomSearchBase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::Modio::Mods::ModSearchFilter*, ::Modio::Unity::UI::Search::SpecialSearchType)>(&::Modio::Unity::UI::Search::ModioUISearch::SetCustomSearchBase)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9f9fe04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetCustomSearchBase", {}, {::i2c::type_of<::Modio::Mods::ModSearchFilter*>(), ::i2c::type_of<::Modio::Unity::UI::Search::SpecialSearchType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.SetSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::Modio::Mods::ModSearchFilter*, bool, ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*)>(&::Modio::Unity::UI::Search::ModioUISearch::SetSearch)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9f9f250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetSearch", {}, {::i2c::type_of<::Modio::Mods::ModSearchFilter*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.GetModsViaStandardQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>* (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::GetModsViaStandardQuery)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9f9fe88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"GetModsViaStandardQuery", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.GetCurrentUserCreationsQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>* (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::GetCurrentUserCreationsQuery)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9f9ff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"GetCurrentUserCreationsQuery", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.GetModsViaLocalQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>* (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::GetModsViaLocalQuery)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9fa0098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"GetModsViaLocalQuery", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.MatchesFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Search::ModioUISearch::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Search::ModioUISearch::MatchesFilter)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x9fa01a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"MatchesFilter", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.SortModComparer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Modio::Unity::UI::Search::ModioUISearch::*)(::Modio::Mods::Mod*, ::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Search::ModioUISearch::SortModComparer)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9fa07bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SortModComparer", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch.SetSearchForDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Search::ModioUISearch::SetSearchForDependencies)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9fa09d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetSearchForDependencies", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch::*)()>(&::Modio::Unity::UI::Search::ModioUISearch::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9fa0ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__isDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDefault;
}
constexpr bool const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__isDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDefault;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__isDefault(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDefault = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__searchOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchOnStart;
}
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__searchOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchOnStart;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__searchOnStart(::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____searchOnStart = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__searchForUser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchForUser;
}
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__searchForUser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchForUser;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__searchForUser(::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____searchForUser = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__searchForTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchForTag;
}
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__searchForTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchForTag;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__searchForTag(::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____searchForTag = value;
}
constexpr int32_t& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__defaultPageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultPageSize;
}
constexpr int32_t const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__defaultPageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultPageSize;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__defaultPageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultPageSize = value;
}
constexpr bool& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__allowSearchWithoutUser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowSearchWithoutUser;
}
constexpr bool const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__allowSearchWithoutUser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowSearchWithoutUser;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__allowSearchWithoutUser(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowSearchWithoutUser = value;
}
constexpr ::Modio::Unity::UI::Search::SpecialSearchType& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__searchPreset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchPreset;
}
constexpr ::Modio::Unity::UI::Search::SpecialSearchType const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__searchPreset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchPreset;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__searchPreset(::Modio::Unity::UI::Search::SpecialSearchType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____searchPreset = value;
}
constexpr ::Modio::Mods::ModSearchFilter*& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__LastSearchFilter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSearchFilter_k__BackingField;
}
constexpr ::Modio::Mods::ModSearchFilter* const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__LastSearchFilter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSearchFilter_k__BackingField;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__LastSearchFilter_k__BackingField(::Modio::Mods::ModSearchFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastSearchFilter_k__BackingField = value;
}
constexpr bool& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__IsSearching_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSearching_k__BackingField;
}
constexpr bool const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__IsSearching_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSearching_k__BackingField;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__IsSearching_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSearching_k__BackingField = value;
}
constexpr bool& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__IsAdditiveSearch_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsAdditiveSearch_k__BackingField;
}
constexpr bool const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__IsAdditiveSearch_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsAdditiveSearch_k__BackingField;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__IsAdditiveSearch_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsAdditiveSearch_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__LastSearchResultMods_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSearchResultMods_k__BackingField;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>* const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__LastSearchResultMods_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSearchResultMods_k__BackingField;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__LastSearchResultMods_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastSearchResultMods_k__BackingField = value;
}
constexpr int32_t& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__LastSearchResultModCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSearchResultModCount_k__BackingField;
}
constexpr int32_t const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__LastSearchResultModCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSearchResultModCount_k__BackingField;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__LastSearchResultModCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastSearchResultModCount_k__BackingField = value;
}
constexpr ::Modio::Error*& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__LastSearchError_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSearchError_k__BackingField;
}
constexpr ::Modio::Error* const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__LastSearchError_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSearchError_k__BackingField;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__LastSearchError_k__BackingField(::Modio::Error*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastSearchError_k__BackingField = value;
}
constexpr int32_t& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__LastSearchSelectionIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSearchSelectionIndex_k__BackingField;
}
constexpr int32_t const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__LastSearchSelectionIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSearchSelectionIndex_k__BackingField;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__LastSearchSelectionIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastSearchSelectionIndex_k__BackingField = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__LastSearchSettingsFrom_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSearchSettingsFrom_k__BackingField;
}
constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__LastSearchSettingsFrom_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSearchSettingsFrom_k__BackingField;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__LastSearchSettingsFrom_k__BackingField(::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastSearchSettingsFrom_k__BackingField = value;
}
constexpr bool& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__SortByOverriden_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SortByOverriden_k__BackingField;
}
constexpr bool const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__SortByOverriden_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SortByOverriden_k__BackingField;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__SortByOverriden_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SortByOverriden_k__BackingField = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get_OnSearchUpdatedUnityEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSearchUpdatedUnityEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get_OnSearchUpdatedUnityEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSearchUpdatedUnityEvent;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set_OnSearchUpdatedUnityEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSearchUpdatedUnityEvent = value;
}
constexpr ::System::ValueTuple_3<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType,::System::Object*>& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__resetToSearch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetToSearch;
}
constexpr ::System::ValueTuple_3<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType,::System::Object*> const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__resetToSearch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetToSearch;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__resetToSearch(::System::ValueTuple_3<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType,::System::Object*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetToSearch = value;
}
constexpr ::System::ValueTuple_2<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType>& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__baseForCustomSearch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseForCustomSearch;
}
constexpr ::System::ValueTuple_2<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType> const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__baseForCustomSearch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseForCustomSearch;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__baseForCustomSearch(::System::ValueTuple_2<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseForCustomSearch = value;
}
constexpr int32_t& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__lastPageIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPageIndex;
}
constexpr int32_t const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__lastPageIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPageIndex;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__lastPageIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastPageIndex = value;
}
constexpr int32_t& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__asyncSearchIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncSearchIndex;
}
constexpr int32_t const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__asyncSearchIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncSearchIndex;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__asyncSearchIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asyncSearchIndex = value;
}
constexpr ::System::Object*& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__shareFiltersWith()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shareFiltersWith;
}
constexpr ::System::Object* const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__shareFiltersWith() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shareFiltersWith;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__shareFiltersWith(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shareFiltersWith = value;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__lastLocalQueryInFull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastLocalQueryInFull;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get__lastLocalQueryInFull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastLocalQueryInFull;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set__lastLocalQueryInFull(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastLocalQueryInFull = value;
}
constexpr ::System::Action*& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get_AppliedSearchPreset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppliedSearchPreset;
}
constexpr ::System::Action* const& Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_get_AppliedSearchPreset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppliedSearchPreset;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch::__cordl_internal_set_AppliedSearchPreset(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppliedSearchPreset = value;
}
inline void Modio::Unity::UI::Search::ModioUISearch::setStaticF__Default_k__BackingField(::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  value)  {
::cordl_internals::setStaticField<::UnityW<::Modio::Unity::UI::Search::ModioUISearch>, "<Default>k__BackingField", ::Modio::Unity::UI::Search::ModioUISearch*>(std::forward<::UnityW<::Modio::Unity::UI::Search::ModioUISearch>>(value));
}
inline ::UnityW<::Modio::Unity::UI::Search::ModioUISearch> Modio::Unity::UI::Search::ModioUISearch::getStaticF__Default_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::Modio::Unity::UI::Search::ModioUISearch>, "<Default>k__BackingField", ::Modio::Unity::UI::Search::ModioUISearch*>();
}
inline ::UnityW<::Modio::Unity::UI::Search::ModioUISearch> Modio::Unity::UI::Search::ModioUISearch::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Modio::Unity::UI::Search::ModioUISearch>>(nullptr, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::set_Default(::Modio::Unity::UI::Search::ModioUISearch*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_Default", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Modio::Mods::ModSearchFilter* Modio::Unity::UI::Search::ModioUISearch::get_LastSearchFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModSearchFilter*>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::set_LastSearchFilter(::Modio::Mods::ModSearchFilter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_LastSearchFilter", {}, {::i2c::type_of<::Modio::Mods::ModSearchFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Unity::UI::Search::SpecialSearchType Modio::Unity::UI::Search::ModioUISearch::get_LastSearchPreset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchPreset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Unity::UI::Search::SpecialSearchType>(this, ___internal_method);
}
inline bool Modio::Unity::UI::Search::ModioUISearch::get_IsSearching()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_IsSearching", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::set_IsSearching(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_IsSearching", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Unity::UI::Search::ModioUISearch::get_IsAdditiveSearch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_IsAdditiveSearch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::set_IsAdditiveSearch(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_IsAdditiveSearch", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>* Modio::Unity::UI::Search::ModioUISearch::get_LastSearchResultMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchResultMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::set_LastSearchResultMods(::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_LastSearchResultMods", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Modio::Unity::UI::Search::ModioUISearch::get_LastSearchResultModCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchResultModCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::set_LastSearchResultModCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_LastSearchResultModCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Modio::Unity::UI::Search::ModioUISearch::get_LastSearchResultPageCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchResultPageCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Modio::Unity::UI::Search::ModioUISearch::get_CanGetMoreMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_CanGetMoreMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Modio::Error* Modio::Unity::UI::Search::ModioUISearch::get_LastSearchError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::set_LastSearchError(::Modio::Error*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_LastSearchError", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Modio::Unity::UI::Search::ModioUISearch::get_LastSearchSelectionIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchSelectionIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::set_LastSearchSelectionIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_LastSearchSelectionIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> Modio::Unity::UI::Search::ModioUISearch::get_LastSearchSettingsFrom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_LastSearchSettingsFrom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::set_LastSearchSettingsFrom(::Modio::Unity::UI::Search::ModioUISearchSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_LastSearchSettingsFrom", {}, {::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Unity::UI::Search::ModioUISearch::get_SortByOverriden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_SortByOverriden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::set_SortByOverriden(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"set_SortByOverriden", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Modio::Unity::UI::Search::ModioUISearch::get_DefaultPageSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"get_DefaultPageSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::add_AppliedSearchPreset(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"add_AppliedSearchPreset", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Search::ModioUISearch::remove_AppliedSearchPreset(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"remove_AppliedSearchPreset", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::UI::Search::ModioUISearch::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::PluginReady(::Modio::Users::User*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"PluginReady", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void Modio::Unity::UI::Search::ModioUISearch::PluginReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"PluginReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::AddUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"AddUpdatePropertiesListener", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Modio::Unity::UI::Search::ModioUISearch::RemoveUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"RemoveUpdatePropertiesListener", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Modio::Unity::UI::Search::ModioUISearch::ApplySortBy(::Modio::Mods::SortModsBy  sortModsBy, bool  ascending)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"ApplySortBy", {}, {::i2c::type_of<::Modio::Mods::SortModsBy>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sortModsBy, ascending);
}
inline void Modio::Unity::UI::Search::ModioUISearch::ApplySearchPhrase(::StringW  query)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"ApplySearchPhrase", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, query);
}
inline void Modio::Unity::UI::Search::ModioUISearch::ApplyTagsToSearch(::System::Collections::Generic::IEnumerable_1<::StringW>*  tags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"ApplyTagsToSearch", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tags);
}
inline bool Modio::Unity::UI::Search::ModioUISearch::HasCustomSearch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"HasCustomSearch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::ClearSearch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"ClearSearch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::SetSearchForUser(::Modio::Users::UserProfile*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetSearchForUser", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline void Modio::Unity::UI::Search::ModioUISearch::SetSearchForTag(::Modio::Mods::ModTag*  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetSearchForTag", {}, {::i2c::type_of<::Modio::Mods::ModTag*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag);
}
inline void Modio::Unity::UI::Search::ModioUISearch::GetNextPageAdditivelyForLastSearch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"GetNextPageAdditivelyForLastSearch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Search::ModioUISearch::SetPageForCurrentSearch(int32_t  page)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetPageForCurrentSearch", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, page);
}
inline void Modio::Unity::UI::Search::ModioUISearch::SetSearch(::Modio::Mods::ModSearchFilter*  searchFilter, ::Modio::Unity::UI::Search::SpecialSearchType  specialSearchType, bool  resetToThis, ::System::Object*  shareFiltersWith, ::Modio::Unity::UI::Search::ModioUISearchSettings*  settingsFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetSearch", {}, {::i2c::type_of<::Modio::Mods::ModSearchFilter*>(), ::i2c::type_of<::Modio::Unity::UI::Search::SpecialSearchType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Modio::Unity::UI::Search::ModioUISearchSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, searchFilter, specialSearchType, resetToThis, shareFiltersWith, settingsFrom);
}
inline void Modio::Unity::UI::Search::ModioUISearch::SetCustomSearchBase(::Modio::Mods::ModSearchFilter*  searchFilter, ::Modio::Unity::UI::Search::SpecialSearchType  searchType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetCustomSearchBase", {}, {::i2c::type_of<::Modio::Mods::ModSearchFilter*>(), ::i2c::type_of<::Modio::Unity::UI::Search::SpecialSearchType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, searchFilter, searchType);
}
inline void Modio::Unity::UI::Search::ModioUISearch::SetSearch(::Modio::Mods::ModSearchFilter*  searchFilter, bool  isAdditiveSearch, /* [TupleElementNames(new[] { "error", "mods", "totalCount" })] */ ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*  customResultProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetSearch", {}, {::i2c::type_of<::Modio::Mods::ModSearchFilter*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, searchFilter, isAdditiveSearch, customResultProvider);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>* Modio::Unity::UI::Search::ModioUISearch::GetModsViaStandardQuery()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"GetModsViaStandardQuery", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>* Modio::Unity::UI::Search::ModioUISearch::GetCurrentUserCreationsQuery()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"GetCurrentUserCreationsQuery", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>* Modio::Unity::UI::Search::ModioUISearch::GetModsViaLocalQuery()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"GetModsViaLocalQuery", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*>(this, ___internal_method);
}
inline bool Modio::Unity::UI::Search::ModioUISearch::MatchesFilter(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"MatchesFilter", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mod);
}
inline int32_t Modio::Unity::UI::Search::ModioUISearch::SortModComparer(::Modio::Mods::Mod*  x, ::Modio::Mods::Mod*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SortModComparer", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void Modio::Unity::UI::Search::ModioUISearch::SetSearchForDependencies(::Modio::Mods::Mod*  dependant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {"SetSearchForDependencies", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dependant);
}
inline void Modio::Unity::UI::Search::ModioUISearch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Search::ModioUISearch* Modio::Unity::UI::Search::ModioUISearch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Search::ModioUISearch*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::IModioUIPropertiesOwner"
constexpr  Modio::Unity::UI::Search::ModioUISearch::operator ::Modio::Unity::UI::Components::IModioUIPropertiesOwner*() noexcept {
return static_cast<::Modio::Unity::UI::Components::IModioUIPropertiesOwner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::IModioUIPropertiesOwner"
constexpr ::Modio::Unity::UI::Components::IModioUIPropertiesOwner* Modio::Unity::UI::Search::ModioUISearch::i___Modio__Unity__UI__Components__IModioUIPropertiesOwner() noexcept {
return static_cast<::Modio::Unity::UI::Components::IModioUIPropertiesOwner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Search::ModioUISearch::ModioUISearch()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0::*)()>(&::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa0a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0._SetSearchForDependencies_g__GetModsViaDependencies_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>* (::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0::*)()>(&::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0::_SetSearchForDependencies_g__GetModsViaDependencies_0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9fa0a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0*>(),
                        {"<SetSearchForDependencies>g__GetModsViaDependencies|0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::Mods::Mod*& Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0::__cordl_internal_get_dependant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dependant;
}
constexpr ::Modio::Mods::Mod* const& Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0::__cordl_internal_get_dependant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dependant;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0::__cordl_internal_set_dependant(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dependant = value;
}
inline void Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>* Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0::_SetSearchForDependencies_g__GetModsViaDependencies_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0*>(),
                        {"<SetSearchForDependencies>g__GetModsViaDependencies|0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0* Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0::ModioUISearch___c__DisplayClass89_0()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0::*)()>(&::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa07b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0._MatchesFilter_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0::*)(::Modio::Mods::ModTag*)>(&::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0::_MatchesFilter_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9fa0cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0*>(),
                        {"<MatchesFilter>b__0", {}, {::i2c::type_of<::Modio::Mods::ModTag*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0::__cordl_internal_get_tag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tag;
}
constexpr ::StringW const& Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0::__cordl_internal_get_tag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tag;
}
constexpr void Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0::__cordl_internal_set_tag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tag = value;
}
inline void Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0::_MatchesFilter_b__0(::Modio::Mods::ModTag*  modTag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0*>(),
                        {"<MatchesFilter>b__0", {}, {::i2c::type_of<::Modio::Mods::ModTag*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, modTag);
}
inline ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0* Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0::ModioUISearch___c__DisplayClass87_0()   {
}
