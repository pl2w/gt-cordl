#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsListScreen.hpp"
#include "GlobalNamespace/zzzz__CustomMapsListScreen_ListScreenState_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsTerminalScreen_impl.hpp"
#include "Modio/Mods/zzzz__Mod_impl.hpp"
#include "Modio/Mods/zzzz__SortModsBy_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsListScreen_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsGalleryView_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsListScreen_ListScreenState_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsListScreen__RetrieveAvailableMods_d__103_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsListScreen__RetrieveFavoriteMods_d__109_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsListScreen__RetrieveInstalledMods_d__107_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsListScreen__RetrieveSubscribedMods_d__105_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsScreenButton_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapKeyboardBinding_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Mods/zzzz__SortModsBy_def.hpp"
#include "Modio/Users/zzzz__User_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.get_CommunityMapsOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::get_CommunityMapsOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59feb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"get_CommunityMapsOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.get_CurrentModPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::get_CurrentModPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59feb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"get_CurrentModPage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.get_ModsPerPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::get_ModsPerPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59feb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"get_ModsPerPage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.get_SortType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::SortModsBy (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::get_SortType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59feb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"get_SortType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.set_SortType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)(::Modio::Mods::SortModsBy)>(&::GlobalNamespace::CustomMapsListScreen::set_SortType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59feb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"set_SortType", {}, {::i2c::type_of<::Modio::Mods::SortModsBy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59feb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.Show
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::Show)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x59fec04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::Hide)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x59ff750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.OnModIOLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::OnModIOLoggedIn)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59ff988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"OnModIOLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.OnModIOLoggedOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::OnModIOLoggedOut)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59ffa58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"OnModIOLoggedOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.OnModIOUserChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)(::Modio::Users::User*)>(&::GlobalNamespace::CustomMapsListScreen::OnModIOUserChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ffaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"OnModIOUserChanged", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.OnModCacheRefreshing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::OnModCacheRefreshing)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ffaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"OnModCacheRefreshing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.OnModCacheRefreshed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::OnModCacheRefreshed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59ffafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"OnModCacheRefreshed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.PressButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding)>(&::GlobalNamespace::CustomMapsListScreen::PressButton)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x59ffb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.SetSortType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::SetSortType)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5a002a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"SetSortType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.SwapListDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)(::GlobalNamespace::CustomMapsListScreen_ListScreenState, bool)>(&::GlobalNamespace::CustomMapsListScreen::SwapListDisplay)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5a00008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"SwapListDisplay", {}, {::i2c::type_of<::GlobalNamespace::CustomMapsListScreen_ListScreenState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.RefreshModSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::RefreshModSearch)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59fff64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RefreshModSearch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::Refresh)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5a003cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.RetrieveFeaturedMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::RetrieveFeaturedMods)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x59ff018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RetrieveFeaturedMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.OnGetFeaturedModsTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)(::StringW)>(&::GlobalNamespace::CustomMapsListScreen::OnGetFeaturedModsTitleData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a004f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"OnGetFeaturedModsTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.RetrieveAvailableMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::RetrieveAvailableMods)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59ff168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RetrieveAvailableMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.FilterAvailableMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::FilterAvailableMods)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5a005b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"FilterAvailableMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.RetrieveSubscribedMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::RetrieveSubscribedMods)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59ff3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RetrieveSubscribedMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.FilterSubscribedMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::FilterSubscribedMods)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5a0093c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"FilterSubscribedMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.RetrieveInstalledMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::CustomMapsListScreen::*)(bool)>(&::GlobalNamespace::CustomMapsListScreen::RetrieveInstalledMods)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59ff210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RetrieveInstalledMods", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.FilterInstalledMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::FilterInstalledMods)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5a00acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"FilterInstalledMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.RetrieveFavoriteMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::CustomMapsListScreen::*)(bool)>(&::GlobalNamespace::CustomMapsListScreen::RetrieveFavoriteMods)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59ff300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RetrieveFavoriteMods", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.FilterFavoriteMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::FilterFavoriteMods)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5a00c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"FilterFavoriteMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.GetDisplayedModList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)(::by_ref<::ArrayW<int64_t>>)>(&::GlobalNamespace::CustomMapsListScreen::GetDisplayedModList)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5a00ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"GetDisplayedModList", {}, {::i2c::type_of<::by_ref<::ArrayW<int64_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.RefreshScreenState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::RefreshScreenState)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x59ff4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RefreshScreenState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.RefreshScreenForAvailableMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::RefreshScreenForAvailableMods)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x5a01138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RefreshScreenForAvailableMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.RefreshScreenForCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::RefreshScreenForCurrentState)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5a015c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RefreshScreenForCurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.GetLoadingStatusForCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::GetLoadingStatusForCurrentState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5a01bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"GetLoadingStatusForCurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.HasModLoadingErrorForCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::HasModLoadingErrorForCurrentState)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a01cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"HasModLoadingErrorForCurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.GetModListForCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::GetModListForCurrentState)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a01d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"GetModListForCurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.GetTotalModsForCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::GetTotalModsForCurrentState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a01d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"GetTotalModsForCurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.GetTitleForCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::GetTitleForCurrentState)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a010a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"GetTitleForCurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.UpdatePageCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)(int32_t)>(&::GlobalNamespace::CustomMapsListScreen::UpdatePageCount)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5a019b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"UpdatePageCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.GetNumPages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::GetNumPages)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a01dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"GetNumPages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.IsOnFirstPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::IsOnFirstPage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a01b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"IsOnFirstPage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.IsOnLastPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::IsOnLastPage)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a01b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"IsOnLastPage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen.RefreshDriverNickname
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)(::StringW)>(&::GlobalNamespace::CustomMapsListScreen::RefreshDriverNickname)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a01dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RefreshDriverNickname", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)()>(&::GlobalNamespace::CustomMapsListScreen::_ctor)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x59f5600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen._PressButton_b__96_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)(bool)>(&::GlobalNamespace::CustomMapsListScreen::_PressButton_b__96_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a01df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"<PressButton>b__96_0", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsListScreen._RetrieveFeaturedMods_b__101_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsListScreen::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::CustomMapsListScreen::_RetrieveFeaturedMods_b__101_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a01e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"<RetrieveFeaturedMods>b__101_0", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_loadingText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_loadingText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingText;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_loadingText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_errorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_errorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorText;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_errorText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_modPageText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modPageText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_modPageText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modPageText;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_modPageText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modPageText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_titleText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_titleText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleText;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_titleText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_sortTypeText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortTypeText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_sortTypeText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortTypeText;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_sortTypeText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortTypeText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_sortByButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortByButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_sortByButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortByButton;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_sortByButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortByButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_allMapsButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allMapsButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_allMapsButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allMapsButton;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_allMapsButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allMapsButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_communityMapsButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___communityMapsButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_communityMapsButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___communityMapsButton;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_communityMapsButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___communityMapsButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_favoriteMapsButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteMapsButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_favoriteMapsButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteMapsButton;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_favoriteMapsButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___favoriteMapsButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_installedMapsButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installedMapsButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_installedMapsButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installedMapsButton;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_installedMapsButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___installedMapsButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_subscribedMapsButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedMapsButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_subscribedMapsButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedMapsButton;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_subscribedMapsButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscribedMapsButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_searchButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_searchButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchButton;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_searchButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_pageUpButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageUpButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_pageUpButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageUpButton;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_pageUpButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageUpButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_pageDownButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageDownButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_pageDownButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageDownButton;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_pageDownButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageDownButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsGalleryView>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_customMapsGalleryView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapsGalleryView;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsGalleryView> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_customMapsGalleryView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapsGalleryView;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_customMapsGalleryView(::UnityW<::GlobalNamespace::CustomMapsGalleryView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customMapsGalleryView = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_browseModsTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___browseModsTitle;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_browseModsTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___browseModsTitle;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_browseModsTitle(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___browseModsTitle = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_communityModsTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___communityModsTitle;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_communityModsTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___communityModsTitle;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_communityModsTitle(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___communityModsTitle = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_installedModsTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installedModsTitle;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_installedModsTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installedModsTitle;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_installedModsTitle(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___installedModsTitle = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_favoriteModsTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteModsTitle;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_favoriteModsTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteModsTitle;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_favoriteModsTitle(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___favoriteModsTitle = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_subscribedModsTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedModsTitle;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_subscribedModsTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedModsTitle;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_subscribedModsTitle(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscribedModsTitle = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_noModsAvailableString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noModsAvailableString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_noModsAvailableString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noModsAvailableString;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_noModsAvailableString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noModsAvailableString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_noModsFoundGenericString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noModsFoundGenericString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_noModsFoundGenericString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noModsFoundGenericString;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_noModsFoundGenericString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noModsFoundGenericString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_noSubscribedModsString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noSubscribedModsString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_noSubscribedModsString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noSubscribedModsString;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_noSubscribedModsString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noSubscribedModsString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_noInstalledModsString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noInstalledModsString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_noInstalledModsString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noInstalledModsString;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_noInstalledModsString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noInstalledModsString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_noFavoriteModsString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noFavoriteModsString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_noFavoriteModsString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noFavoriteModsString;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_noFavoriteModsString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noFavoriteModsString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_failedToRetrieveModsString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failedToRetrieveModsString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_failedToRetrieveModsString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failedToRetrieveModsString;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_failedToRetrieveModsString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failedToRetrieveModsString = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_modsPerPage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modsPerPage;
}
constexpr int32_t const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_modsPerPage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modsPerPage;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_modsPerPage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modsPerPage = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_numModsPerRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numModsPerRequest;
}
constexpr int32_t const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_numModsPerRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numModsPerRequest;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_numModsPerRequest(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numModsPerRequest = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_maxModListItemLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxModListItemLength;
}
constexpr int32_t const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_maxModListItemLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxModListItemLength;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_maxModListItemLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxModListItemLength = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_communityMapsTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___communityMapsTag;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_communityMapsTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___communityMapsTag;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_communityMapsTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___communityMapsTag = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_featuredModsPlayFabKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featuredModsPlayFabKey;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_featuredModsPlayFabKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featuredModsPlayFabKey;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_featuredModsPlayFabKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___featuredModsPlayFabKey = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_loadingFeaturedMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingFeaturedMods;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_loadingFeaturedMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingFeaturedMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_loadingFeaturedMods(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingFeaturedMods = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_displayFeaturedMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayFeaturedMods;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_displayFeaturedMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayFeaturedMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_displayFeaturedMods(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayFeaturedMods = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_totalFeaturedMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalFeaturedMods;
}
constexpr int32_t const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_totalFeaturedMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalFeaturedMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_totalFeaturedMods(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalFeaturedMods = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_featuredModIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featuredModIds;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_featuredModIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featuredModIds;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_featuredModIds(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___featuredModIds = value;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_featuredMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featuredMods;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_featuredMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featuredMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_featuredMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___featuredMods = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_currentAvailableModsRequestPage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAvailableModsRequestPage;
}
constexpr int32_t const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_currentAvailableModsRequestPage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentAvailableModsRequestPage;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_currentAvailableModsRequestPage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentAvailableModsRequestPage = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_loadingAvailableMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingAvailableMods;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_loadingAvailableMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingAvailableMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_loadingAvailableMods(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingAvailableMods = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_totalAvailableMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalAvailableMods;
}
constexpr int32_t const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_totalAvailableMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalAvailableMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_totalAvailableMods(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalAvailableMods = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_errorLoadingAvailableMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorLoadingAvailableMods;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_errorLoadingAvailableMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorLoadingAvailableMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_errorLoadingAvailableMods(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorLoadingAvailableMods = value;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_availableMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableMods;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_availableMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_availableMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___availableMods = value;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_filteredAvailableMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filteredAvailableMods;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_filteredAvailableMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filteredAvailableMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_filteredAvailableMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filteredAvailableMods = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_loadingInstalledMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingInstalledMods;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_loadingInstalledMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingInstalledMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_loadingInstalledMods(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingInstalledMods = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_errorLoadingInstalledMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorLoadingInstalledMods;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_errorLoadingInstalledMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorLoadingInstalledMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_errorLoadingInstalledMods(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorLoadingInstalledMods = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_totalInstalledMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalInstalledMods;
}
constexpr int32_t const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_totalInstalledMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalInstalledMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_totalInstalledMods(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalInstalledMods = value;
}
constexpr ::ArrayW<::Modio::Mods::Mod*>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_installedMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installedMods;
}
constexpr ::ArrayW<::Modio::Mods::Mod*> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_installedMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installedMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_installedMods(::ArrayW<::Modio::Mods::Mod*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___installedMods = value;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_filteredInstalledMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filteredInstalledMods;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_filteredInstalledMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filteredInstalledMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_filteredInstalledMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filteredInstalledMods = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_loadingFavoriteMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingFavoriteMods;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_loadingFavoriteMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingFavoriteMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_loadingFavoriteMods(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingFavoriteMods = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_errorLoadingFavoriteMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorLoadingFavoriteMods;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_errorLoadingFavoriteMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorLoadingFavoriteMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_errorLoadingFavoriteMods(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorLoadingFavoriteMods = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_totalFavoriteMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalFavoriteMods;
}
constexpr int32_t const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_totalFavoriteMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalFavoriteMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_totalFavoriteMods(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalFavoriteMods = value;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_favoriteMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteMods;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_favoriteMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_favoriteMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___favoriteMods = value;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_filteredFavoriteMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filteredFavoriteMods;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_filteredFavoriteMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filteredFavoriteMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_filteredFavoriteMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filteredFavoriteMods = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_loadingSubscribedMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingSubscribedMods;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_loadingSubscribedMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingSubscribedMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_loadingSubscribedMods(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingSubscribedMods = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_errorLoadingSubscribedMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorLoadingSubscribedMods;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_errorLoadingSubscribedMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorLoadingSubscribedMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_errorLoadingSubscribedMods(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorLoadingSubscribedMods = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_totalSubscribedMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalSubscribedMods;
}
constexpr int32_t const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_totalSubscribedMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalSubscribedMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_totalSubscribedMods(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalSubscribedMods = value;
}
constexpr ::ArrayW<::Modio::Mods::Mod*>& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_subscribedMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedMods;
}
constexpr ::ArrayW<::Modio::Mods::Mod*> const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_subscribedMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_subscribedMods(::ArrayW<::Modio::Mods::Mod*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscribedMods = value;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_filteredSubscribedMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filteredSubscribedMods;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_filteredSubscribedMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filteredSubscribedMods;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_filteredSubscribedMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filteredSubscribedMods = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_currentModPage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentModPage;
}
constexpr int32_t const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_currentModPage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentModPage;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_currentModPage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentModPage = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_totalModCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalModCount;
}
constexpr int32_t const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_totalModCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalModCount;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_totalModCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalModCount = value;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_displayedModProfiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayedModProfiles;
}
constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_displayedModProfiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayedModProfiles;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_displayedModProfiles(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayedModProfiles = value;
}
constexpr int32_t& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_sortTypeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortTypeIndex;
}
constexpr int32_t const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_sortTypeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortTypeIndex;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_sortTypeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortTypeIndex = value;
}
constexpr ::Modio::Mods::SortModsBy& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_sortType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortType;
}
constexpr ::Modio::Mods::SortModsBy const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_sortType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortType;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_sortType(::Modio::Mods::SortModsBy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortType = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_searchTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchTags;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_searchTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchTags;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_searchTags(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchTags = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_isAscendingOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAscendingOrder;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_isAscendingOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAscendingOrder;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_isAscendingOrder(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAscendingOrder = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_communityMapsOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___communityMapsOnly;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_communityMapsOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___communityMapsOnly;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_communityMapsOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___communityMapsOnly = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_useMapName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMapName;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_useMapName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMapName;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_useMapName(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useMapName = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_subscribedBttnPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedBttnPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_subscribedBttnPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedBttnPosition;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_subscribedBttnPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscribedBttnPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_searchBttnPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchBttnPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_searchBttnPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchBttnPosition;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_searchBttnPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchBttnPosition = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartCustomModListRetrieval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartCustomModListRetrieval;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartCustomModListRetrieval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartCustomModListRetrieval;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_restartCustomModListRetrieval(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restartCustomModListRetrieval = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartCustomModListRetrievalForceRefresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartCustomModListRetrievalForceRefresh;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartCustomModListRetrievalForceRefresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartCustomModListRetrievalForceRefresh;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_restartCustomModListRetrievalForceRefresh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restartCustomModListRetrievalForceRefresh = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartInstalledModsRetrieval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartInstalledModsRetrieval;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartInstalledModsRetrieval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartInstalledModsRetrieval;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_restartInstalledModsRetrieval(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restartInstalledModsRetrieval = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartInstalledModsRetrievalForceRefresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartInstalledModsRetrievalForceRefresh;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartInstalledModsRetrievalForceRefresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartInstalledModsRetrievalForceRefresh;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_restartInstalledModsRetrievalForceRefresh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restartInstalledModsRetrievalForceRefresh = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartFavoriteModsRetrieval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartFavoriteModsRetrieval;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartFavoriteModsRetrieval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartFavoriteModsRetrieval;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_restartFavoriteModsRetrieval(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restartFavoriteModsRetrieval = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartFavoriteModsRetrievalForceRefresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartFavoriteModsRetrievalForceRefresh;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartFavoriteModsRetrievalForceRefresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartFavoriteModsRetrievalForceRefresh;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_restartFavoriteModsRetrievalForceRefresh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restartFavoriteModsRetrievalForceRefresh = value;
}
constexpr bool& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartSubscribedModsRetrieval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartSubscribedModsRetrieval;
}
constexpr bool const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_restartSubscribedModsRetrieval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartSubscribedModsRetrieval;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_restartSubscribedModsRetrieval(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restartSubscribedModsRetrieval = value;
}
constexpr ::GlobalNamespace::CustomMapsListScreen_ListScreenState& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::CustomMapsListScreen_ListScreenState const& GlobalNamespace::CustomMapsListScreen::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::CustomMapsListScreen::__cordl_internal_set_currentState(::GlobalNamespace::CustomMapsListScreen_ListScreenState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
inline bool GlobalNamespace::CustomMapsListScreen::get_CommunityMapsOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"get_CommunityMapsOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomMapsListScreen::get_CurrentModPage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"get_CurrentModPage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomMapsListScreen::get_ModsPerPage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"get_ModsPerPage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Modio::Mods::SortModsBy GlobalNamespace::CustomMapsListScreen::get_SortType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"get_SortType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::SortModsBy>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::set_SortType(::Modio::Mods::SortModsBy  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"set_SortType", {}, {::i2c::type_of<::Modio::Mods::SortModsBy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CustomMapsListScreen::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::Show()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::Hide()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::OnModIOLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"OnModIOLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::OnModIOLoggedOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"OnModIOLoggedOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::OnModIOUserChanged(::Modio::Users::User*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"OnModIOUserChanged", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline void GlobalNamespace::CustomMapsListScreen::OnModCacheRefreshing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"OnModCacheRefreshing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::OnModCacheRefreshed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"OnModCacheRefreshed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::PressButton(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  buttonPressed)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GlobalNamespace::CustomMapsListScreen::SetSortType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"SetSortType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::SwapListDisplay(::GlobalNamespace::CustomMapsListScreen_ListScreenState  newState, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"SwapListDisplay", {}, {::i2c::type_of<::GlobalNamespace::CustomMapsListScreen_ListScreenState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, force);
}
inline void GlobalNamespace::CustomMapsListScreen::RefreshModSearch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RefreshModSearch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::RetrieveFeaturedMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RetrieveFeaturedMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::OnGetFeaturedModsTitleData(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"OnGetFeaturedModsTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::CustomMapsListScreen::RetrieveAvailableMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RetrieveAvailableMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::FilterAvailableMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"FilterAvailableMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::CustomMapsListScreen::RetrieveSubscribedMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RetrieveSubscribedMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::FilterSubscribedMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"FilterSubscribedMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::CustomMapsListScreen::RetrieveInstalledMods(bool  forceRefresh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RetrieveInstalledMods", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, forceRefresh);
}
inline void GlobalNamespace::CustomMapsListScreen::FilterInstalledMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"FilterInstalledMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::CustomMapsListScreen::RetrieveFavoriteMods(bool  forceRefresh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RetrieveFavoriteMods", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, forceRefresh);
}
inline void GlobalNamespace::CustomMapsListScreen::FilterFavoriteMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"FilterFavoriteMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::GetDisplayedModList(::by_ref<::ArrayW<int64_t>>  modList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"GetDisplayedModList", {}, {::i2c::type_of<::by_ref<::ArrayW<int64_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modList);
}
inline void GlobalNamespace::CustomMapsListScreen::RefreshScreenState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RefreshScreenState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::RefreshScreenForAvailableMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RefreshScreenForAvailableMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::RefreshScreenForCurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RefreshScreenForCurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsListScreen::GetLoadingStatusForCurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"GetLoadingStatusForCurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsListScreen::HasModLoadingErrorForCurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"HasModLoadingErrorForCurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* GlobalNamespace::CustomMapsListScreen::GetModListForCurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"GetModListForCurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomMapsListScreen::GetTotalModsForCurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"GetTotalModsForCurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomMapsListScreen::GetTitleForCurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"GetTitleForCurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::UpdatePageCount(int32_t  totalMods)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"UpdatePageCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, totalMods);
}
inline int32_t GlobalNamespace::CustomMapsListScreen::GetNumPages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"GetNumPages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsListScreen::IsOnFirstPage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"IsOnFirstPage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsListScreen::IsOnLastPage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"IsOnLastPage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::RefreshDriverNickname(::StringW  driverNickname)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"RefreshDriverNickname", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, driverNickname);
}
inline void GlobalNamespace::CustomMapsListScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsListScreen::_PressButton_b__96_0(bool  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"<PressButton>b__96_0", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::CustomMapsListScreen::_RetrieveFeaturedMods_b__101_0(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsListScreen*>(),
                        {"<RetrieveFeaturedMods>b__101_0", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::CustomMapsListScreen* GlobalNamespace::CustomMapsListScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsListScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsListScreen::CustomMapsListScreen()   {
}
