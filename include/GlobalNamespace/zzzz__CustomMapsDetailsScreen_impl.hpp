#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsDetailsScreen.hpp"
#include "GlobalNamespace/zzzz__CustomMapsTerminalScreen_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsDetailsScreen_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsDetailsScreen__UpdateStatus_d__76_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsScreenButton_def.hpp"
#include "GlobalNamespace/zzzz__VirtualStumpSerializer_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapKeyboardBinding_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__MapLoadStatus_def.hpp"
#include "Modio/Mods/zzzz__ModFileState_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Mods/zzzz__Modfile_def.hpp"
#include "Modio/Users/zzzz__User_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationPhase_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.set_currentMapMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapsDetailsScreen::set_currentMapMod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59f5a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"set_currentMapMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.get_currentMapMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::get_currentMapMod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f5a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"get_currentMapMod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f5a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.Show
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::Show)> {
  constexpr static std::size_t size = 0x684;
  constexpr static std::size_t addrs = 0x59f5a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::Hide)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x59f6594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.OnModUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::OnModUpdated)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59f6980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnModUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.OnModIOLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::OnModIOLoggedIn)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59f69d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnModIOLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.OnModIOLoggedOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::OnModIOLoggedOut)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59f73e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnModIOLoggedOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.OnModIOUserChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::Modio::Users::User*)>(&::GlobalNamespace::CustomMapsDetailsScreen::OnModIOUserChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f7424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnModIOUserChanged", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.HandleModManagementEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::Modio::Mods::Mod*, ::Modio::Mods::Modfile*, ::GlobalNamespace::ModInstallationManagement_OperationType, ::GlobalNamespace::ModInstallationManagement_OperationPhase)>(&::GlobalNamespace::CustomMapsDetailsScreen::HandleModManagementEvent)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x59f742c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"HandleModManagementEvent", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::Modfile*>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationType>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationPhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::Update)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x59f7568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.RetrieveModFromModIO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(int64_t, bool, ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*)>(&::GlobalNamespace::CustomMapsDetailsScreen::RetrieveModFromModIO)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59f77b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"RetrieveModFromModIO", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.SetModProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapsDetailsScreen::SetModProfile)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x59f78b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"SetModProfile", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.PressButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding)>(&::GlobalNamespace::CustomMapsDetailsScreen::PressButton)> {
  constexpr static std::size_t size = 0xb7c;
  constexpr static std::size_t addrs = 0x59f7a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.RefreshCurrentMapMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::RefreshCurrentMapMod)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x59f6a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"RefreshCurrentMapMod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.OnProfileReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::Modio::Error*, ::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapsDetailsScreen::OnProfileReceived)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x59f8acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnProfileReceived", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.ResetToDefaultView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::ResetToDefaultView)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x59f60d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"ResetToDefaultView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.UpdateMapDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(bool)>(&::GlobalNamespace::CustomMapsDetailsScreen::UpdateMapDetails)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x59f6c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"UpdateMapDetails", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.OnGetModLogo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::Modio::Error*, ::UnityEngine::Texture2D*)>(&::GlobalNamespace::CustomMapsDetailsScreen::OnGetModLogo)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x59f8ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnGetModLogo", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.UpdateStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::CustomMapsDetailsScreen::*)(bool)>(&::GlobalNamespace::CustomMapsDetailsScreen::UpdateStatus)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59f72f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"UpdateStatus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.CanChangeMapState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsDetailsScreen::*)(bool, ::by_ref<::StringW>)>(&::GlobalNamespace::CustomMapsDetailsScreen::CanChangeMapState)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x59f85c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"CanChangeMapState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.LoadMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::LoadMap)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x59f8878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"LoadMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.UnloadMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::UnloadMap)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59f8790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"UnloadMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.OnMapLoadComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(bool)>(&::GlobalNamespace::CustomMapsDetailsScreen::OnMapLoadComplete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59f9188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnMapLoadComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.OnMapLoadComplete_UIUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::OnMapLoadComplete_UIUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59f8d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnMapLoadComplete_UIUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.OnMapUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::OnMapUnloaded)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59f9194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnMapUnloaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.OnRoomMapChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::Modio::Mods::ModId)>(&::GlobalNamespace::CustomMapsDetailsScreen::OnRoomMapChanged)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x59f8c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnRoomMapChanged", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.OnRoomMapRetrieved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::Modio::Error*, ::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapsDetailsScreen::OnRoomMapRetrieved)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x59f91cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnRoomMapRetrieved", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.ShowLoadRoomMapPrompt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::ShowLoadRoomMapPrompt)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x59f8e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"ShowLoadRoomMapPrompt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.OnMapLoadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, int32_t, ::StringW)>(&::GlobalNamespace::CustomMapsDetailsScreen::OnMapLoadProgress)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x59f9260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnMapLoadProgress", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.GetModId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModId (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::GetModId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59f7550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"GetModId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen.IsCurrentModHidden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::IsCurrentModHidden)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59f87a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"IsCurrentModHidden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)()>(&::GlobalNamespace::CustomMapsDetailsScreen::_ctor)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x59f9760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen._SetModProfile_b__69_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::StringW)>(&::GlobalNamespace::CustomMapsDetailsScreen::_SetModProfile_b__69_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59f9d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<SetModProfile>b__69_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen._PressButton_b__70_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(bool)>(&::GlobalNamespace::CustomMapsDetailsScreen::_PressButton_b__70_0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x59f9d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<PressButton>b__70_0", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen._PressButton_b__70_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::Modio::Error*)>(&::GlobalNamespace::CustomMapsDetailsScreen::_PressButton_b__70_3)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59f9e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<PressButton>b__70_3", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen._PressButton_b__70_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::Modio::Error*)>(&::GlobalNamespace::CustomMapsDetailsScreen::_PressButton_b__70_4)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59f9ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<PressButton>b__70_4", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen._PressButton_b__70_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(bool)>(&::GlobalNamespace::CustomMapsDetailsScreen::_PressButton_b__70_1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59f9f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<PressButton>b__70_1", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen._PressButton_b__70_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::Modio::Error*)>(&::GlobalNamespace::CustomMapsDetailsScreen::_PressButton_b__70_2)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59f9fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<PressButton>b__70_2", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen._ResetToDefaultView_b__73_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::Modio::Error*, ::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapsDetailsScreen::_ResetToDefaultView_b__73_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fa058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<ResetToDefaultView>b__73_0", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen._UpdateMapDetails_b__74_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::Modio::Error*, ::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapsDetailsScreen::_UpdateMapDetails_b__74_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fa05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<UpdateMapDetails>b__74_0", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDetailsScreen._UpdateStatus_b__76_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDetailsScreen::*)(::StringW)>(&::GlobalNamespace::CustomMapsDetailsScreen::_UpdateStatus_b__76_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59fa060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<UpdateStatus>b__76_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapScreenshotImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapScreenshotImage;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapScreenshotImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapScreenshotImage;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapScreenshotImage(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapScreenshotImage = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_hiddenMapLogo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenMapLogo;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_hiddenMapLogo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenMapLogo;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_hiddenMapLogo(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hiddenMapLogo = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_loadingText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_loadingText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_loadingText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modNameText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modNameText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_modNameText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modNameText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modCreatorLabelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modCreatorLabelText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modCreatorLabelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modCreatorLabelText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_modCreatorLabelText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modCreatorLabelText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modCreatorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modCreatorText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modCreatorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modCreatorText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_modCreatorText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modCreatorText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modDescriptionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modDescriptionText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modDescriptionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modDescriptionText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_modDescriptionText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modDescriptionText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modStatusText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modStatusText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modStatusText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modStatusText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_modStatusText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modStatusText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modStatusLabelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modStatusLabelText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modStatusLabelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modStatusLabelText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_modStatusLabelText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modStatusLabelText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modSubscriptionStatusText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modSubscriptionStatusText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modSubscriptionStatusText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modSubscriptionStatusText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_modSubscriptionStatusText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modSubscriptionStatusText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_loadingMapLabelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingMapLabelText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_loadingMapLabelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingMapLabelText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_loadingMapLabelText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingMapLabelText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_loadingMapMessageText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingMapMessageText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_loadingMapMessageText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingMapMessageText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_loadingMapMessageText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingMapMessageText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_hiddenRoomMapText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenRoomMapText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_hiddenRoomMapText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenRoomMapText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_hiddenRoomMapText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hiddenRoomMapText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapReadyText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapReadyText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapReadyText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapReadyText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapReadyText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapReadyText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_unloadPromptText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unloadPromptText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_unloadPromptText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unloadPromptText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_unloadPromptText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unloadPromptText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_errorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_errorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_errorText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_outdatedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outdatedText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_outdatedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outdatedText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_outdatedText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outdatedText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_playerCountText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCountText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_playerCountText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCountText;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_playerCountText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCountText = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_subscriptionToggleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscriptionToggleButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_subscriptionToggleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscriptionToggleButton;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_subscriptionToggleButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscriptionToggleButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_favoriteToggleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteToggleButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_favoriteToggleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteToggleButton;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_favoriteToggleButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___favoriteToggleButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_rateUpButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rateUpButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_rateUpButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rateUpButton;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_rateUpButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rateUpButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_rateDownButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rateDownButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_rateDownButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rateDownButton;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_rateDownButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rateDownButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_loadButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_loadButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadButton;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_loadButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadButton = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_deleteButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deleteButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsScreenButton> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_deleteButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deleteButton;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_deleteButton(::UnityW<::GlobalNamespace::CustomMapsScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deleteButton = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modAvailableString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modAvailableString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_modAvailableString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modAvailableString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_modAvailableString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modAvailableString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapAutoDownloadingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapAutoDownloadingString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapAutoDownloadingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapAutoDownloadingString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapAutoDownloadingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapAutoDownloadingString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapDownloadingProgressString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapDownloadingProgressString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapDownloadingProgressString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapDownloadingProgressString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapDownloadingProgressString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapDownloadingProgressString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapInstallingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapInstallingString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapInstallingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapInstallingString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapInstallingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapInstallingString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapInstallingProgressString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapInstallingProgressString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapInstallingProgressString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapInstallingProgressString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapInstallingProgressString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapInstallingProgressString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapDownloadQueuedString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapDownloadQueuedString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapDownloadQueuedString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapDownloadQueuedString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapDownloadQueuedString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapDownloadQueuedString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapLoadingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapLoadingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapLoadingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapLoadingString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapUnloadingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapUnloadingString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapUnloadingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapUnloadingString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapUnloadingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapUnloadingString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapLoadingErrorString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapLoadingErrorString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapLoadingErrorString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapLoadingErrorString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapLoadingErrorDriverString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorDriverString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapLoadingErrorDriverString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorDriverString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapLoadingErrorDriverString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapLoadingErrorDriverString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapLoadingErrorNonDriverString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorNonDriverString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapLoadingErrorNonDriverString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorNonDriverString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapLoadingErrorNonDriverString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapLoadingErrorNonDriverString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapLoadingErrorInvalidModFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorInvalidModFile;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapLoadingErrorInvalidModFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorInvalidModFile;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapLoadingErrorInvalidModFile(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapLoadingErrorInvalidModFile = value;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpSerializer>& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_networkObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkObject;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpSerializer> const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_networkObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkObject;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_networkObject(::UnityW<::GlobalNamespace::VirtualStumpSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkObject = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapNotDownloadedString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapNotDownloadedString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapNotDownloadedString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapNotDownloadedString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapNotDownloadedString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapNotDownloadedString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapNeedsUpdateString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapNeedsUpdateString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapNeedsUpdateString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapNeedsUpdateString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapNeedsUpdateString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapNeedsUpdateString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_subscribeString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribeString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_subscribeString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribeString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_subscribeString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscribeString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_unsubscribeString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsubscribeString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_unsubscribeString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsubscribeString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_unsubscribeString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unsubscribeString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_subscribedStatusString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedStatusString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_subscribedStatusString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedStatusString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_subscribedStatusString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscribedStatusString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_unsubscribedStatusString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsubscribedStatusString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_unsubscribedStatusString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsubscribedStatusString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_unsubscribedStatusString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unsubscribedStatusString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_loadMapString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadMapString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_loadMapString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadMapString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_loadMapString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadMapString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_downloadMapString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadMapString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_downloadMapString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadMapString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_downloadMapString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downloadMapString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_updateMapString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateMapString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_updateMapString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateMapString;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_updateMapString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateMapString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_hiddenMapTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenMapTitle;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_hiddenMapTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenMapTitle;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_hiddenMapTitle(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hiddenMapTitle = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_hiddenMapDesc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenMapDesc;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_hiddenMapDesc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenMapDesc;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_hiddenMapDesc(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hiddenMapDesc = value;
}
constexpr int64_t& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_pendingModId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingModId;
}
constexpr int64_t const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_pendingModId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingModId;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_pendingModId(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingModId = value;
}
constexpr ::Modio::Mods::Mod*& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get__currentMapMod_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMapMod_k__BackingField;
}
constexpr ::Modio::Mods::Mod* const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get__currentMapMod_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMapMod_k__BackingField;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set__currentMapMod_k__BackingField(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentMapMod_k__BackingField = value;
}
constexpr bool& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_hasModProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasModProfile;
}
constexpr bool const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_hasModProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasModProfile;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_hasModProfile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasModProfile = value;
}
constexpr bool& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapLoadError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadError;
}
constexpr bool const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_mapLoadError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadError;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_mapLoadError(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapLoadError = value;
}
constexpr bool& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_isFavorite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFavorite;
}
constexpr bool const& GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_get_isFavorite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFavorite;
}
constexpr void GlobalNamespace::CustomMapsDetailsScreen::__cordl_internal_set_isFavorite(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFavorite = value;
}
inline void GlobalNamespace::CustomMapsDetailsScreen::setStaticF_modStatusStrings(::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModFileState,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModFileState,::StringW>*, "modStatusStrings", ::GlobalNamespace::CustomMapsDetailsScreen*>(std::forward<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModFileState,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModFileState,::StringW>* GlobalNamespace::CustomMapsDetailsScreen::getStaticF_modStatusStrings()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModFileState,::StringW>*, "modStatusStrings", ::GlobalNamespace::CustomMapsDetailsScreen*>();
}
inline void GlobalNamespace::CustomMapsDetailsScreen::set_currentMapMod(::Modio::Mods::Mod*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"set_currentMapMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::Mod* GlobalNamespace::CustomMapsDetailsScreen::get_currentMapMod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"get_currentMapMod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::Show()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::Hide()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::OnModUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnModUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::OnModIOLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnModIOLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::OnModIOLoggedOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnModIOLoggedOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::OnModIOUserChanged(::Modio::Users::User*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnModIOUserChanged", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::HandleModManagementEvent(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"HandleModManagementEvent", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::Modfile*>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationType>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationPhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, modfile, jobType, jobPhase);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::RetrieveModFromModIO(int64_t  id, bool  forceUpdate, ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"RetrieveModFromModIO", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, forceUpdate, callback);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::SetModProfile(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"SetModProfile", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::PressButton(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  buttonPressed)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::RefreshCurrentMapMod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"RefreshCurrentMapMod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::OnProfileReceived(::Modio::Error*  error, ::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnProfileReceived", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, mod);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::ResetToDefaultView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"ResetToDefaultView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::UpdateMapDetails(bool  refreshScreenState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"UpdateMapDetails", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, refreshScreenState);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::OnGetModLogo(::Modio::Error*  error, ::UnityEngine::Texture2D*  modLogo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnGetModLogo", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, modLogo);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::CustomMapsDetailsScreen::UpdateStatus(bool  errorEncountered)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"UpdateStatus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, errorEncountered);
}
inline bool GlobalNamespace::CustomMapsDetailsScreen::CanChangeMapState(bool  load, ::by_ref<::StringW>  disallowedReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"CanChangeMapState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, load, disallowedReason);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::LoadMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"LoadMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::UnloadMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"UnloadMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::OnMapLoadComplete(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnMapLoadComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::OnMapLoadComplete_UIUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnMapLoadComplete_UIUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::OnMapUnloaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnMapUnloaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::OnRoomMapChanged(::Modio::Mods::ModId  roomMapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnRoomMapChanged", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomMapID);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::OnRoomMapRetrieved(::Modio::Error*  error, ::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnRoomMapRetrieved", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, mod);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::ShowLoadRoomMapPrompt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"ShowLoadRoomMapPrompt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::OnMapLoadProgress(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  loadStatus, int32_t  progress, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"OnMapLoadProgress", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadStatus, progress, message);
}
inline ::Modio::Mods::ModId GlobalNamespace::CustomMapsDetailsScreen::GetModId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"GetModId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModId>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsDetailsScreen::IsCurrentModHidden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"IsCurrentModHidden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::_SetModProfile_b__69_0(::StringW  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<SetModProfile>b__69_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::_PressButton_b__70_0(bool  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<PressButton>b__70_0", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::_PressButton_b__70_3(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<PressButton>b__70_3", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::_PressButton_b__70_4(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<PressButton>b__70_4", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::_PressButton_b__70_1(bool  modDownloadStarted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<PressButton>b__70_1", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modDownloadStarted);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::_PressButton_b__70_2(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<PressButton>b__70_2", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::_ResetToDefaultView_b__73_0(::Modio::Error*  error, ::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<ResetToDefaultView>b__73_0", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, mod);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::_UpdateMapDetails_b__74_0(::Modio::Error*  error, ::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<UpdateMapDetails>b__74_0", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, mod);
}
inline void GlobalNamespace::CustomMapsDetailsScreen::_UpdateStatus_b__76_0(::StringW  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDetailsScreen*>(),
                        {"<UpdateStatus>b__76_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline ::GlobalNamespace::CustomMapsDetailsScreen* GlobalNamespace::CustomMapsDetailsScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsDetailsScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsDetailsScreen::CustomMapsDetailsScreen()   {
}
