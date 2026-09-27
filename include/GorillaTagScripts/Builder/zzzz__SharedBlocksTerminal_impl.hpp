#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksTerminal.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksTerminal_ScreenType_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksTerminal_TerminalState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksTerminal_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksKeyboardBindings_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksScreenSearch_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksScreen_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksTerminal_ScreenType_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksTerminal_TerminalState_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksTerminal_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.get_SelectedMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::get_SelectedMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c427cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"get_SelectedMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.get_IsTerminalLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::get_IsTerminalLocked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c427d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"get_IsTerminalLocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.get_playersInLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::get_playersInLobby)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c427dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"get_playersInLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.get_IsDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::get_IsDriver)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c4282c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"get_IsDriver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.GetTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::BuilderTable> (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::GetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c428bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"GetTable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.get_GetDriverID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::get_GetDriverID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c428c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"get_GetDriverID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.MapIDToDisplayedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::MapIDToDisplayedString)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5c40b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"MapIDToDisplayedString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(::GorillaTagScripts::BuilderTable*)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::Init)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x5c428dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"Init", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::Start)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c432e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::LateUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c4340c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnDestroy)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x5c43a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.RefreshActiveScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::RefreshActiveScreen)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c43140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"RefreshActiveScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.SetTerminalState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(::GlobalNamespace::SharedBlocksTerminal_TerminalState)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::SetTerminalState)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x5c42ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"SetTerminalState", {}, {::i2c::type_of<::GlobalNamespace::SharedBlocksTerminal_TerminalState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.SelectMapIDAndOpenInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::SelectMapIDAndOpenInfo)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c40fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"SelectMapIDAndOpenInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnPlayerMapRequestComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnPlayerMapRequestComplete)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c43f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnPlayerMapRequestComplete", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.CanChangeMapState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(bool, ::by_ref<::StringW>)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::CanChangeMapState)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5c44004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"CanChangeMapState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.SetStatusText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::SetStatusText)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c410f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"SetStatusText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.IsLocalPlayerInLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::IsLocalPlayerInLobby)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c44334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"IsLocalPlayerInLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.AreAllPlayersInLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::AreAllPlayersInLobby)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c4250c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"AreAllPlayersInLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.GetLobbyText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::GetLobbyText)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c423cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"GetLobbyText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.RefreshLobbyCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::RefreshLobbyCount)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c422c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"RefreshLobbyCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.PressButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::PressButton)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5c4442c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"PressButton", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnUpButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnUpButtonPressed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c4465c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnUpButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnDownButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnDownButtonPressed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c446e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnDownButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnSelectButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnSelectButtonPressed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c4481c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnSelectButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnRandomizeButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnRandomizeButtonPressed)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c448cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnRandomizeButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnDeleteButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnDeleteButtonPressed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c4476c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnDeleteButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnBackButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnBackButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c44e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnBackButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnNumberPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnNumberPressed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c449d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnNumberPressed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnLetterPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnLetterPressed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c44a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnLetterPressed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnTerminalControlPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnTerminalControlPressed)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5c44e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnTerminalControlPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnLoadMapPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(bool)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnLoadMapPressed)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x5c40430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnLoadMapPressed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.LoadPopularMapsThenRandomize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::LoadPopularMapsThenRandomize)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5c44b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"LoadPopularMapsThenRandomize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnRandomMapsLoadedForRandomButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(bool)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnRandomMapsLoadedForRandomButton)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5c45368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnRandomMapsLoadedForRandomButton", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.LoadRandomMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::LoadRandomMap)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5c44cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"LoadRandomMap", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.IsPlayerDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(::Photon::Realtime::Player*)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::IsPlayerDriver)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c45528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"IsPlayerDriver", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.ValidateTerminalControlRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(bool, int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::ValidateTerminalControlRequest)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c45554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"ValidateTerminalControlRequest", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnDriverNameChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnDriverNameChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c45594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnDriverNameChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.SetTerminalDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::SetTerminalDriver)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x5c44f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"SetTerminalDriver", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.RefreshDriverNickname
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::RefreshDriverNickname)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x5c43538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"RefreshDriverNickname", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.ValidateLoadMapRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(::StringW, int32_t)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::ValidateLoadMapRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c455c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"ValidateLoadMapRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c4565c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnReturnedToSinglePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnReturnedToSinglePlayer)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c45844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnReturnedToSinglePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.ResetTerminalControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::ResetTerminalControl)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5c456e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"ResetTerminalControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.UpdateTerminalButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::UpdateTerminalButton)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c45598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"UpdateTerminalButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnSharedBlocksMapLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnSharedBlocksMapLoaded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c458f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnSharedBlocksMapLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnSharedBlocksMapLoadFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)(::StringW)>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnSharedBlocksMapLoadFailed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c459a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnSharedBlocksMapLoadFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal.OnSharedBlocksMapLoadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::OnSharedBlocksMapLoadStart)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c459d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnSharedBlocksMapLoadStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c45a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_tableZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableZone;
}
constexpr ::GlobalNamespace::GTZone const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_tableZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableZone;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_tableZone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableZone = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_currentMapSelectionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMapSelectionText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_currentMapSelectionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentMapSelectionText;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_currentMapSelectionText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentMapSelectionText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_statusMessageText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusMessageText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_statusMessageText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusMessageText;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_statusMessageText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusMessageText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_currentDriverText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDriverText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_currentDriverText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDriverText;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_currentDriverText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDriverText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_currentDriverLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDriverLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_currentDriverLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDriverLabel;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_currentDriverLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDriverLabel = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get__currentDriverLoc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDriverLoc;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get__currentDriverLoc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDriverLoc;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set__currentDriverLoc(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentDriverLoc = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen>& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_noDriverScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noDriverScreen;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen> const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_noDriverScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noDriverScreen;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_noDriverScreen(::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noDriverScreen = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreenSearch>& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_searchScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchScreen;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreenSearch> const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_searchScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchScreen;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_searchScreen(::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreenSearch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_terminalControlButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminalControlButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_terminalControlButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminalControlButton;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_terminalControlButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terminalControlButton = value;
}
constexpr float_t& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_loadMapCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadMapCooldown;
}
constexpr float_t const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_loadMapCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadMapCooldown;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_loadMapCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadMapCooldown = value;
}
constexpr float_t& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_loadRandomMapCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadRandomMapCooldown;
}
constexpr float_t const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_loadRandomMapCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadRandomMapCooldown;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_loadRandomMapCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadRandomMapCooldown = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_lobbyTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyTrigger;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_lobbyTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyTrigger;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_lobbyTrigger(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lobbyTrigger = value;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_selectedMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedMap;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_selectedMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedMap;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_selectedMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedMap = value;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen>& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_currentScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScreen;
}
constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen> const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_currentScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScreen;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_currentScreen(::UnityW<::GorillaTagScripts::Builder::SharedBlocksScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentScreen = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_linkedTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedTable;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_linkedTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedTable;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_linkedTable(::UnityW<::GorillaTagScripts::BuilderTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linkedTable = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_awaitingWebRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaitingWebRequest;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_awaitingWebRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaitingWebRequest;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_awaitingWebRequest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awaitingWebRequest = value;
}
constexpr ::StringW& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_requestedMapID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedMapID;
}
constexpr ::StringW const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_requestedMapID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedMapID;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_requestedMapID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestedMapID = value;
}
constexpr ::System::Action_1<bool>*& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_OnMapLoadComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMapLoadComplete;
}
constexpr ::System::Action_1<bool>* const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_OnMapLoadComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMapLoadComplete;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_OnMapLoadComplete(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMapLoadComplete = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_isTerminalLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTerminalLocked;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_isTerminalLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTerminalLocked;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_isTerminalLocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTerminalLocked = value;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState*& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_localState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localState;
}
constexpr ::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState* const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_localState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localState;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_localState(::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localState = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_cachedLocalPlayerID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedLocalPlayerID;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_cachedLocalPlayerID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedLocalPlayerID;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_cachedLocalPlayerID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedLocalPlayerID = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_isLoadingMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLoadingMap;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_isLoadingMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLoadingMap;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_isLoadingMap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLoadingMap = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_pendingRandomAfterMapsLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingRandomAfterMapsLoaded;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_pendingRandomAfterMapsLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingRandomAfterMapsLoaded;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_pendingRandomAfterMapsLoaded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingRandomAfterMapsLoaded = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_randomMapsRequestInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomMapsRequestInProgress;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_randomMapsRequestInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomMapsRequestInProgress;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_randomMapsRequestInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomMapsRequestInProgress = value;
}
constexpr float_t& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_lastLoadTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLoadTime;
}
constexpr float_t const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_lastLoadTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLoadTime;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_lastLoadTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLoadTime = value;
}
constexpr float_t& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_lastRandomLoadTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRandomLoadTime;
}
constexpr float_t const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_lastRandomLoadTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRandomLoadTime;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_lastRandomLoadTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRandomLoadTime = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_useNametags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNametags;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_useNametags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNametags;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_useNametags(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useNametags = value;
}
constexpr bool& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_hasInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInitialized;
}
constexpr bool const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_hasInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInitialized;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_hasInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasInitialized = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_driverRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___driverRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_driverRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___driverRig;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_driverRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___driverRig = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_playersInRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInRoom;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_get_playersInRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInRoom;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal::__cordl_internal_set_playersInRoom(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersInRoom = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::setStaticF_sb(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "sb", ::GorillaTagScripts::Builder::SharedBlocksTerminal*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* GorillaTagScripts::Builder::SharedBlocksTerminal::getStaticF_sb()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "sb", ::GorillaTagScripts::Builder::SharedBlocksTerminal*>();
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GorillaTagScripts::Builder::SharedBlocksTerminal*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GorillaTagScripts::Builder::SharedBlocksTerminal::getStaticF_tempRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GorillaTagScripts::Builder::SharedBlocksTerminal*>();
}
inline ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* GorillaTagScripts::Builder::SharedBlocksTerminal::get_SelectedMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"get_SelectedMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksTerminal::get_IsTerminalLocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"get_IsTerminalLocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::Builder::SharedBlocksTerminal::get_playersInLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"get_playersInLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksTerminal::get_IsDriver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"get_IsDriver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GorillaTagScripts::BuilderTable> GorillaTagScripts::Builder::SharedBlocksTerminal::GetTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"GetTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::BuilderTable>>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::Builder::SharedBlocksTerminal::get_GetDriverID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"get_GetDriverID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::Builder::SharedBlocksTerminal::MapIDToDisplayedString(::StringW  mapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"MapIDToDisplayedString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mapID);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::Init(::GorillaTagScripts::BuilderTable*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"Init", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::RefreshActiveScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"RefreshActiveScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::SetTerminalState(::GlobalNamespace::SharedBlocksTerminal_TerminalState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"SetTerminalState", {}, {::i2c::type_of<::GlobalNamespace::SharedBlocksTerminal_TerminalState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::SelectMapIDAndOpenInfo(::StringW  mapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"SelectMapIDAndOpenInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnPlayerMapRequestComplete(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnPlayerMapRequestComplete", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline bool GorillaTagScripts::Builder::SharedBlocksTerminal::CanChangeMapState(bool  load, ::by_ref<::StringW>  disallowedReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"CanChangeMapState", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, load, disallowedReason);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::SetStatusText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"SetStatusText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline bool GorillaTagScripts::Builder::SharedBlocksTerminal::IsLocalPlayerInLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"IsLocalPlayerInLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksTerminal::AreAllPlayersInLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"AreAllPlayersInLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::Builder::SharedBlocksTerminal::GetLobbyText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"GetLobbyText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::RefreshLobbyCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"RefreshLobbyCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::PressButton(::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings  buttonPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"PressButton", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonPressed);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnUpButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnUpButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnDownButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnDownButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnSelectButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnSelectButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnRandomizeButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnRandomizeButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnDeleteButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnDeleteButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnBackButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnBackButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnNumberPressed(int32_t  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnNumberPressed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, number);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnLetterPressed(::StringW  letter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnLetterPressed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, letter);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnTerminalControlPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnTerminalControlPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnLoadMapPressed(bool  isRandom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnLoadMapPressed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isRandom);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::LoadPopularMapsThenRandomize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"LoadPopularMapsThenRandomize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnRandomMapsLoadedForRandomButton(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnRandomMapsLoadedForRandomButton", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::LoadRandomMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  randomMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"LoadRandomMap", {}, {::i2c::type_of<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, randomMap);
}
inline bool GorillaTagScripts::Builder::SharedBlocksTerminal::IsPlayerDriver(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"IsPlayerDriver", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GorillaTagScripts::Builder::SharedBlocksTerminal::ValidateTerminalControlRequest(bool  locked, int32_t  playerNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"ValidateTerminalControlRequest", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, locked, playerNumber);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnDriverNameChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnDriverNameChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::SetTerminalDriver(int32_t  playerNum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"SetTerminalDriver", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerNum);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::RefreshDriverNickname()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"RefreshDriverNickname", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::SharedBlocksTerminal::ValidateLoadMapRequest(::StringW  mapID, int32_t  playerNum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"ValidateLoadMapRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mapID, playerNum);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnReturnedToSinglePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnReturnedToSinglePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::ResetTerminalControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"ResetTerminalControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::UpdateTerminalButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"UpdateTerminalButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnSharedBlocksMapLoaded(::StringW  mapID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnSharedBlocksMapLoaded", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapID);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnSharedBlocksMapLoadFailed(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnSharedBlocksMapLoadFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::OnSharedBlocksMapLoadStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {"OnSharedBlocksMapLoadStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksTerminal* GorillaTagScripts::Builder::SharedBlocksTerminal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksTerminal*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksTerminal::SharedBlocksTerminal()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::*)()>(&::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c42ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType& GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::__cordl_internal_get_currentScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScreen;
}
constexpr ::GlobalNamespace::SharedBlocksTerminal_ScreenType const& GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::__cordl_internal_get_currentScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScreen;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::__cordl_internal_set_currentScreen(::GlobalNamespace::SharedBlocksTerminal_ScreenType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentScreen = value;
}
constexpr ::GlobalNamespace::SharedBlocksTerminal_TerminalState& GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::SharedBlocksTerminal_TerminalState const& GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::__cordl_internal_set_state(::GlobalNamespace::SharedBlocksTerminal_TerminalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr int32_t& GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::__cordl_internal_get_driverID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___driverID;
}
constexpr int32_t const& GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::__cordl_internal_get_driverID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___driverID;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::__cordl_internal_set_driverID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___driverID = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState* GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksTerminal_SharedBlocksTerminalState::SharedBlocksTerminal_SharedBlocksTerminalState()   {
}
