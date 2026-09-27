#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsDisplayScreen.hpp"
#include "GlobalNamespace/zzzz__CustomMapsTerminalScreen_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsDisplayScreen_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsDisplayScreen__UpdateStatus_d__53_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__MapLoadStatus_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Mods/zzzz__Modfile_def.hpp"
#include "Modio/Users/zzzz__User_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationPhase_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationType_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.set_currentMapMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapsDisplayScreen::set_currentMapMod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59fadbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"set_currentMapMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.get_currentMapMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::get_currentMapMod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fadcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"get_currentMapMod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fadd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.Show
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::Show)> {
  constexpr static std::size_t size = 0x638;
  constexpr static std::size_t addrs = 0x59fadd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::Hide)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x59fb894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.OnModIOLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::OnModIOLoggedIn)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59fbc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnModIOLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.OnModIOLoggedOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::OnModIOLoggedOut)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59fc604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnModIOLoggedOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.OnModIOUserChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(::Modio::Users::User*)>(&::GlobalNamespace::CustomMapsDisplayScreen::OnModIOUserChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fc644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnModIOUserChanged", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.HandleModManagementEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(::Modio::Mods::Mod*, ::Modio::Mods::Modfile*, ::GlobalNamespace::ModInstallationManagement_OperationType, ::GlobalNamespace::ModInstallationManagement_OperationPhase)>(&::GlobalNamespace::CustomMapsDisplayScreen::HandleModManagementEvent)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x59fc64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"HandleModManagementEvent", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::Modfile*>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationType>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationPhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.RetrieveModFromModIO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(int64_t, bool, ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*)>(&::GlobalNamespace::CustomMapsDisplayScreen::RetrieveModFromModIO)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59fc788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"RetrieveModFromModIO", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.SetModProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapsDisplayScreen::SetModProfile)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59fc888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"SetModProfile", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.RefreshCurrentMapMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::RefreshCurrentMapMod)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x59fbd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"RefreshCurrentMapMod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.OnProfileReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(::Modio::Error*, ::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapsDisplayScreen::OnProfileReceived)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x59fc8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnProfileReceived", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.ResetToDefaultView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::ResetToDefaultView)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x59fb410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"ResetToDefaultView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.UpdateMapDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(bool)>(&::GlobalNamespace::CustomMapsDisplayScreen::UpdateMapDetails)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x59fbe6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"UpdateMapDetails", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.OnGetModLogo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(::Modio::Error*, ::UnityEngine::Texture2D*)>(&::GlobalNamespace::CustomMapsDisplayScreen::OnGetModLogo)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x59fcf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnGetModLogo", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.UpdateStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::CustomMapsDisplayScreen::*)(bool)>(&::GlobalNamespace::CustomMapsDisplayScreen::UpdateStatus)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59fc514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"UpdateStatus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.OnMapLoadComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(bool)>(&::GlobalNamespace::CustomMapsDisplayScreen::OnMapLoadComplete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59fd090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnMapLoadComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.OnMapLoadComplete_UIUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::OnMapLoadComplete_UIUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59fcc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnMapLoadComplete_UIUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.OnMapUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::OnMapUnloaded)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59fd09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnMapUnloaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.OnRoomMapChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(::Modio::Mods::ModId)>(&::GlobalNamespace::CustomMapsDisplayScreen::OnRoomMapChanged)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x59fca58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnRoomMapChanged", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.OnRoomMapRetrieved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(::Modio::Error*, ::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapsDisplayScreen::OnRoomMapRetrieved)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x59fd0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnRoomMapRetrieved", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.ShowLoadRoomMapPrompt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::ShowLoadRoomMapPrompt)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x59fcd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"ShowLoadRoomMapPrompt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.OnMapLoadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, int32_t, ::StringW)>(&::GlobalNamespace::CustomMapsDisplayScreen::OnMapLoadProgress)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x59fd168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnMapLoadProgress", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.GetModId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::ModId (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::GetModId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59fc770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"GetModId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen.IsCurrentModHidden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::IsCurrentModHidden)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59fcb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"IsCurrentModHidden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)()>(&::GlobalNamespace::CustomMapsDisplayScreen::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x59fd668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen._ResetToDefaultView_b__50_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(::Modio::Error*, ::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapsDisplayScreen::_ResetToDefaultView_b__50_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fd8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"<ResetToDefaultView>b__50_0", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen._UpdateMapDetails_b__51_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(::Modio::Error*, ::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapsDisplayScreen::_UpdateMapDetails_b__51_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fd8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"<UpdateMapDetails>b__51_0", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsDisplayScreen._UpdateStatus_b__53_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsDisplayScreen::*)(::StringW)>(&::GlobalNamespace::CustomMapsDisplayScreen::_UpdateStatus_b__53_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59fd8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"<UpdateStatus>b__53_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapScreenshotImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapScreenshotImage;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapScreenshotImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapScreenshotImage;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapScreenshotImage(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapScreenshotImage = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_hiddenMapLogo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenMapLogo;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_hiddenMapLogo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenMapLogo;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_hiddenMapLogo(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hiddenMapLogo = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_loadingText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_loadingText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingText;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_loadingText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_modNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modNameText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_modNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modNameText;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_modNameText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modNameText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_modCreatorLabelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modCreatorLabelText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_modCreatorLabelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modCreatorLabelText;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_modCreatorLabelText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modCreatorLabelText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_modCreatorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modCreatorText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_modCreatorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modCreatorText;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_modCreatorText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modCreatorText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_modDescriptionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modDescriptionText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_modDescriptionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modDescriptionText;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_modDescriptionText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modDescriptionText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_loadingMapLabelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingMapLabelText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_loadingMapLabelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingMapLabelText;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_loadingMapLabelText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingMapLabelText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_loadingMapMessageText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingMapMessageText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_loadingMapMessageText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingMapMessageText;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_loadingMapMessageText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingMapMessageText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_loadRoomMapPromptText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadRoomMapPromptText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_loadRoomMapPromptText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadRoomMapPromptText;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_loadRoomMapPromptText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadRoomMapPromptText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_hiddenRoomMapText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenRoomMapText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_hiddenRoomMapText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenRoomMapText;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_hiddenRoomMapText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hiddenRoomMapText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapReadyText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapReadyText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapReadyText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapReadyText;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapReadyText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapReadyText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_errorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_errorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorText;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_errorText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_outdatedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outdatedText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_outdatedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outdatedText;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_outdatedText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outdatedText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_playerCountText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCountText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_playerCountText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCountText;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_playerCountText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCountText = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapAutoDownloadingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapAutoDownloadingString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapAutoDownloadingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapAutoDownloadingString;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapAutoDownloadingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapAutoDownloadingString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapDownloadingProgressString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapDownloadingProgressString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapDownloadingProgressString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapDownloadingProgressString;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapDownloadingProgressString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapDownloadingProgressString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapInstallingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapInstallingString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapInstallingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapInstallingString;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapInstallingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapInstallingString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapInstallingProgressString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapInstallingProgressString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapInstallingProgressString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapInstallingProgressString;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapInstallingProgressString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapInstallingProgressString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapLoadingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapLoadingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingString;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapLoadingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapLoadingString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapUnloadingString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapUnloadingString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapUnloadingString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapUnloadingString;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapUnloadingString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapUnloadingString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapLoadingErrorString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapLoadingErrorString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorString;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapLoadingErrorString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapLoadingErrorString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapLoadingErrorDriverString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorDriverString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapLoadingErrorDriverString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorDriverString;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapLoadingErrorDriverString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapLoadingErrorDriverString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapLoadingErrorNonDriverString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorNonDriverString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapLoadingErrorNonDriverString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorNonDriverString;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapLoadingErrorNonDriverString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapLoadingErrorNonDriverString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapLoadingErrorInvalidModFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorInvalidModFile;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapLoadingErrorInvalidModFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadingErrorInvalidModFile;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapLoadingErrorInvalidModFile(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapLoadingErrorInvalidModFile = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapNotDownloadedString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapNotDownloadedString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapNotDownloadedString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapNotDownloadedString;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapNotDownloadedString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapNotDownloadedString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapNeedsUpdateString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapNeedsUpdateString;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapNeedsUpdateString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapNeedsUpdateString;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapNeedsUpdateString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapNeedsUpdateString = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_hiddenMapTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenMapTitle;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_hiddenMapTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenMapTitle;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_hiddenMapTitle(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hiddenMapTitle = value;
}
constexpr ::StringW& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_hiddenMapDesc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenMapDesc;
}
constexpr ::StringW const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_hiddenMapDesc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenMapDesc;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_hiddenMapDesc(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hiddenMapDesc = value;
}
constexpr int64_t& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_pendingModId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingModId;
}
constexpr int64_t const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_pendingModId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingModId;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_pendingModId(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingModId = value;
}
constexpr ::Modio::Mods::Mod*& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get__currentMapMod_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMapMod_k__BackingField;
}
constexpr ::Modio::Mods::Mod* const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get__currentMapMod_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMapMod_k__BackingField;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set__currentMapMod_k__BackingField(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentMapMod_k__BackingField = value;
}
constexpr bool& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_hasModProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasModProfile;
}
constexpr bool const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_hasModProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasModProfile;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_hasModProfile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasModProfile = value;
}
constexpr bool& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapLoadError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadError;
}
constexpr bool const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_mapLoadError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapLoadError;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_mapLoadError(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapLoadError = value;
}
constexpr bool& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_isFavorite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFavorite;
}
constexpr bool const& GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_get_isFavorite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFavorite;
}
constexpr void GlobalNamespace::CustomMapsDisplayScreen::__cordl_internal_set_isFavorite(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFavorite = value;
}
inline void GlobalNamespace::CustomMapsDisplayScreen::set_currentMapMod(::Modio::Mods::Mod*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"set_currentMapMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Mods::Mod* GlobalNamespace::CustomMapsDisplayScreen::get_currentMapMod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"get_currentMapMod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::Show()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::Hide()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::OnModIOLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnModIOLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::OnModIOLoggedOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnModIOLoggedOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::OnModIOUserChanged(::Modio::Users::User*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnModIOUserChanged", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::HandleModManagementEvent(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"HandleModManagementEvent", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::Modfile*>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationType>(), ::i2c::type_of<::GlobalNamespace::ModInstallationManagement_OperationPhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, modfile, jobType, jobPhase);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::RetrieveModFromModIO(int64_t  id, bool  forceUpdate, ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"RetrieveModFromModIO", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, forceUpdate, callback);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::SetModProfile(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"SetModProfile", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::RefreshCurrentMapMod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"RefreshCurrentMapMod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::OnProfileReceived(::Modio::Error*  error, ::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnProfileReceived", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, mod);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::ResetToDefaultView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"ResetToDefaultView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::UpdateMapDetails(bool  refreshScreenState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"UpdateMapDetails", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, refreshScreenState);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::OnGetModLogo(::Modio::Error*  error, ::UnityEngine::Texture2D*  modLogo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnGetModLogo", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, modLogo);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::CustomMapsDisplayScreen::UpdateStatus(bool  errorEncountered)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"UpdateStatus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, errorEncountered);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::OnMapLoadComplete(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnMapLoadComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::OnMapLoadComplete_UIUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnMapLoadComplete_UIUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::OnMapUnloaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnMapUnloaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::OnRoomMapChanged(::Modio::Mods::ModId  roomMapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnRoomMapChanged", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomMapID);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::OnRoomMapRetrieved(::Modio::Error*  error, ::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnRoomMapRetrieved", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, mod);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::ShowLoadRoomMapPrompt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"ShowLoadRoomMapPrompt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::OnMapLoadProgress(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  loadStatus, int32_t  progress, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"OnMapLoadProgress", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadStatus, progress, message);
}
inline ::Modio::Mods::ModId GlobalNamespace::CustomMapsDisplayScreen::GetModId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"GetModId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::ModId>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsDisplayScreen::IsCurrentModHidden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"IsCurrentModHidden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::_ResetToDefaultView_b__50_0(::Modio::Error*  error, ::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"<ResetToDefaultView>b__50_0", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, mod);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::_UpdateMapDetails_b__51_0(::Modio::Error*  error, ::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"<UpdateMapDetails>b__51_0", {}, {::i2c::type_of<::Modio::Error*>(), ::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, mod);
}
inline void GlobalNamespace::CustomMapsDisplayScreen::_UpdateStatus_b__53_0(::StringW  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsDisplayScreen*>(),
                        {"<UpdateStatus>b__53_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline ::GlobalNamespace::CustomMapsDisplayScreen* GlobalNamespace::CustomMapsDisplayScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsDisplayScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsDisplayScreen::CustomMapsDisplayScreen()   {
}
