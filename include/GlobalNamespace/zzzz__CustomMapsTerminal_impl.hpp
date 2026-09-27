#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsTerminal.hpp"
#include "GlobalNamespace/zzzz__CustomMapsTerminal_ScreenType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsTerminal_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsAccessScreen_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsDetailsScreen_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsDisplayScreen_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsListScreen_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsSearchScreen_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsTerminalControlButton_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsTerminal_ScreenType_def.hpp"
#include "GlobalNamespace/zzzz__VirtualStumpSerializer_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.get_LocalPlayerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::CustomMapsTerminal::get_LocalPlayerID)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a06d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"get_LocalPlayerID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.get_LocalModDetailsID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::GlobalNamespace::CustomMapsTerminal::get_LocalModDetailsID)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a06dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"get_LocalModDetailsID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.get_CurrentScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::CustomMapsTerminal::get_CurrentScreen)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a06e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"get_CurrentScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.get_PreviousScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CustomMapsTerminal_ScreenType (*)()>(&::GlobalNamespace::CustomMapsTerminal::get_PreviousScreen)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a06eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"get_PreviousScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.get_IsDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::CustomMapsTerminal::get_IsDriver)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a05b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"get_IsDriver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminal::*)()>(&::GlobalNamespace::CustomMapsTerminal::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a06f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminal::*)()>(&::GlobalNamespace::CustomMapsTerminal::Start)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5a06f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminal::*)()>(&::GlobalNamespace::CustomMapsTerminal::OnDestroy)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5a07234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.ShowDetailsScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::Mod*)>(&::GlobalNamespace::CustomMapsTerminal::ShowDetailsScreen)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5a03cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ShowDetailsScreen", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.ReturnFromDetailsScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapsTerminal::ReturnFromDetailsScreen)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5a074ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ReturnFromDetailsScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.ShowSearchScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapsTerminal::ShowSearchScreen)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a077dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ShowSearchScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.ReturnFromSearchScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapsTerminal::ReturnFromSearchScreen)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5a05c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ReturnFromSearchScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.SendTerminalStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapsTerminal::SendTerminalStatus)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a0745c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"SendTerminalStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.ResetTerminalControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapsTerminal::ResetTerminalControl)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a07a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ResetTerminalControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.HandleTerminalControlStatusChangeRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, int32_t)>(&::GlobalNamespace::CustomMapsTerminal::HandleTerminalControlStatusChangeRequest)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a07cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"HandleTerminalControlStatusChangeRequest", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.SetTerminalControlStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, int32_t, bool)>(&::GlobalNamespace::CustomMapsTerminal::SetTerminalControlStatus)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5a07d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"SetTerminalControlStatus", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.UpdateFromDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int64_t, int32_t)>(&::GlobalNamespace::CustomMapsTerminal::UpdateFromDriver)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5a084b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"UpdateFromDriver", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.UpdateControlScreenForDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminal::*)()>(&::GlobalNamespace::CustomMapsTerminal::UpdateControlScreenForDriver)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5a08ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"UpdateControlScreenForDriver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.ValidateLocalStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminal::*)()>(&::GlobalNamespace::CustomMapsTerminal::ValidateLocalStatus)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5a08f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ValidateLocalStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.OnModIOLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminal::*)()>(&::GlobalNamespace::CustomMapsTerminal::OnModIOLoggedIn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a09154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"OnModIOLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.OnModIOLoggedOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminal::*)()>(&::GlobalNamespace::CustomMapsTerminal::OnModIOLoggedOut)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5a09158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"OnModIOLoggedOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.HandleTerminalControlButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminal::*)()>(&::GlobalNamespace::CustomMapsTerminal::HandleTerminalControlButtonPressed)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5a09250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"HandleTerminalControlButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.ShowTerminalControlScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapsTerminal::ShowTerminalControlScreen)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5a07a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ShowTerminalControlScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.HideTerminalControlScreens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapsTerminal::HideTerminalControlScreens)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5a080e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"HideTerminalControlScreens", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.RequestDriverNickNameRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapsTerminal::RequestDriverNickNameRefresh)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a0951c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"RequestDriverNickNameRefresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.RefreshDriverNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CustomMapsTerminal::RefreshDriverNickName)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x5a08708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"RefreshDriverNickName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.OnReturnedToSinglePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminal::*)()>(&::GlobalNamespace::CustomMapsTerminal::OnReturnedToSinglePlayer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a096dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"OnReturnedToSinglePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminal::*)()>(&::GlobalNamespace::CustomMapsTerminal::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a0978c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.IsLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::CustomMapsTerminal::IsLocked)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a097e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"IsLocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.GetDriverID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::CustomMapsTerminal::GetDriverID)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a09848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"GetDriverID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal.GetDriverNickname
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::CustomMapsTerminal::GetDriverNickname)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a098a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"GetDriverNickname", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsTerminal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsTerminal::*)()>(&::GlobalNamespace::CustomMapsTerminal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a09954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CustomMapsAccessScreen>& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_controlAccessScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlAccessScreen;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsAccessScreen> const& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_controlAccessScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlAccessScreen;
}
constexpr void GlobalNamespace::CustomMapsTerminal::__cordl_internal_set_controlAccessScreen(::UnityW<::GlobalNamespace::CustomMapsAccessScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlAccessScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsAccessScreen>& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_detailsAccessScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailsAccessScreen;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsAccessScreen> const& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_detailsAccessScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailsAccessScreen;
}
constexpr void GlobalNamespace::CustomMapsTerminal::__cordl_internal_set_detailsAccessScreen(::UnityW<::GlobalNamespace::CustomMapsAccessScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailsAccessScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsListScreen>& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_modListScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modListScreen;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsListScreen> const& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_modListScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modListScreen;
}
constexpr void GlobalNamespace::CustomMapsTerminal::__cordl_internal_set_modListScreen(::UnityW<::GlobalNamespace::CustomMapsListScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modListScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsDetailsScreen>& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_modDetailsScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modDetailsScreen;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsDetailsScreen> const& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_modDetailsScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modDetailsScreen;
}
constexpr void GlobalNamespace::CustomMapsTerminal::__cordl_internal_set_modDetailsScreen(::UnityW<::GlobalNamespace::CustomMapsDetailsScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modDetailsScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_modDisplayScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modDisplayScreen;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen> const& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_modDisplayScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modDisplayScreen;
}
constexpr void GlobalNamespace::CustomMapsTerminal::__cordl_internal_set_modDisplayScreen(::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modDisplayScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsSearchScreen>& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_modSearchScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modSearchScreen;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsSearchScreen> const& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_modSearchScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modSearchScreen;
}
constexpr void GlobalNamespace::CustomMapsTerminal::__cordl_internal_set_modSearchScreen(::UnityW<::GlobalNamespace::CustomMapsSearchScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modSearchScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpSerializer>& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_mapTerminalNetworkObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapTerminalNetworkObject;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpSerializer> const& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_mapTerminalNetworkObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapTerminalNetworkObject;
}
constexpr void GlobalNamespace::CustomMapsTerminal::__cordl_internal_set_mapTerminalNetworkObject(::UnityW<::GlobalNamespace::VirtualStumpSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapTerminalNetworkObject = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsTerminalControlButton>& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_terminalControlButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminalControlButton;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsTerminalControlButton> const& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_terminalControlButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminalControlButton;
}
constexpr void GlobalNamespace::CustomMapsTerminal::__cordl_internal_set_terminalControlButton(::UnityW<::GlobalNamespace::CustomMapsTerminalControlButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terminalControlButton = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_terminalControllerLabelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminalControllerLabelText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_terminalControllerLabelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminalControllerLabelText;
}
constexpr void GlobalNamespace::CustomMapsTerminal::__cordl_internal_set_terminalControllerLabelText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terminalControllerLabelText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_terminalControllerText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminalControllerText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::CustomMapsTerminal::__cordl_internal_get_terminalControllerText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminalControllerText;
}
constexpr void GlobalNamespace::CustomMapsTerminal::__cordl_internal_set_terminalControllerText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terminalControllerText = value;
}
inline void GlobalNamespace::CustomMapsTerminal::setStaticF_instance(::UnityW<::GlobalNamespace::CustomMapsTerminal>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CustomMapsTerminal>, "instance", ::GlobalNamespace::CustomMapsTerminal*>(std::forward<::UnityW<::GlobalNamespace::CustomMapsTerminal>>(value));
}
inline ::UnityW<::GlobalNamespace::CustomMapsTerminal> GlobalNamespace::CustomMapsTerminal::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CustomMapsTerminal>, "instance", ::GlobalNamespace::CustomMapsTerminal*>();
}
inline void GlobalNamespace::CustomMapsTerminal::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::CustomMapsTerminal*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CustomMapsTerminal::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::CustomMapsTerminal*>();
}
inline void GlobalNamespace::CustomMapsTerminal::setStaticF_localModDetailsID(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "localModDetailsID", ::GlobalNamespace::CustomMapsTerminal*>(std::forward<int64_t>(value));
}
inline int64_t GlobalNamespace::CustomMapsTerminal::getStaticF_localModDetailsID()  {
return ::cordl_internals::getStaticField<int64_t, "localModDetailsID", ::GlobalNamespace::CustomMapsTerminal*>();
}
inline void GlobalNamespace::CustomMapsTerminal::setStaticF_cachedModDetailsID(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "cachedModDetailsID", ::GlobalNamespace::CustomMapsTerminal*>(std::forward<int64_t>(value));
}
inline int64_t GlobalNamespace::CustomMapsTerminal::getStaticF_cachedModDetailsID()  {
return ::cordl_internals::getStaticField<int64_t, "cachedModDetailsID", ::GlobalNamespace::CustomMapsTerminal*>();
}
inline void GlobalNamespace::CustomMapsTerminal::setStaticF_localDriverID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "localDriverID", ::GlobalNamespace::CustomMapsTerminal*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapsTerminal::getStaticF_localDriverID()  {
return ::cordl_internals::getStaticField<int32_t, "localDriverID", ::GlobalNamespace::CustomMapsTerminal*>();
}
inline void GlobalNamespace::CustomMapsTerminal::setStaticF_cachedLocalPlayerID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "cachedLocalPlayerID", ::GlobalNamespace::CustomMapsTerminal*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::CustomMapsTerminal::getStaticF_cachedLocalPlayerID()  {
return ::cordl_internals::getStaticField<int32_t, "cachedLocalPlayerID", ::GlobalNamespace::CustomMapsTerminal*>();
}
inline void GlobalNamespace::CustomMapsTerminal::setStaticF_localCurrentScreen(::GlobalNamespace::CustomMapsTerminal_ScreenType  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CustomMapsTerminal_ScreenType, "localCurrentScreen", ::GlobalNamespace::CustomMapsTerminal*>(std::forward<::GlobalNamespace::CustomMapsTerminal_ScreenType>(value));
}
inline ::GlobalNamespace::CustomMapsTerminal_ScreenType GlobalNamespace::CustomMapsTerminal::getStaticF_localCurrentScreen()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CustomMapsTerminal_ScreenType, "localCurrentScreen", ::GlobalNamespace::CustomMapsTerminal*>();
}
inline void GlobalNamespace::CustomMapsTerminal::setStaticF_cachedCurrentScreen(::GlobalNamespace::CustomMapsTerminal_ScreenType  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CustomMapsTerminal_ScreenType, "cachedCurrentScreen", ::GlobalNamespace::CustomMapsTerminal*>(std::forward<::GlobalNamespace::CustomMapsTerminal_ScreenType>(value));
}
inline ::GlobalNamespace::CustomMapsTerminal_ScreenType GlobalNamespace::CustomMapsTerminal::getStaticF_cachedCurrentScreen()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CustomMapsTerminal_ScreenType, "cachedCurrentScreen", ::GlobalNamespace::CustomMapsTerminal*>();
}
inline void GlobalNamespace::CustomMapsTerminal::setStaticF_previousScreen(::GlobalNamespace::CustomMapsTerminal_ScreenType  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CustomMapsTerminal_ScreenType, "previousScreen", ::GlobalNamespace::CustomMapsTerminal*>(std::forward<::GlobalNamespace::CustomMapsTerminal_ScreenType>(value));
}
inline ::GlobalNamespace::CustomMapsTerminal_ScreenType GlobalNamespace::CustomMapsTerminal::getStaticF_previousScreen()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CustomMapsTerminal_ScreenType, "previousScreen", ::GlobalNamespace::CustomMapsTerminal*>();
}
inline int32_t GlobalNamespace::CustomMapsTerminal::get_LocalPlayerID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"get_LocalPlayerID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int64_t GlobalNamespace::CustomMapsTerminal::get_LocalModDetailsID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"get_LocalModDetailsID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::CustomMapsTerminal::get_CurrentScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"get_CurrentScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsTerminal_ScreenType GlobalNamespace::CustomMapsTerminal::get_PreviousScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"get_PreviousScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CustomMapsTerminal_ScreenType>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsTerminal::get_IsDriver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"get_IsDriver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::ShowDetailsScreen(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ShowDetailsScreen", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mod);
}
inline void GlobalNamespace::CustomMapsTerminal::ReturnFromDetailsScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ReturnFromDetailsScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::ShowSearchScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ShowSearchScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::ReturnFromSearchScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ReturnFromSearchScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::SendTerminalStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"SendTerminalStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::ResetTerminalControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ResetTerminalControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::HandleTerminalControlStatusChangeRequest(bool  lockedStatus, int32_t  playerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"HandleTerminalControlStatusChangeRequest", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lockedStatus, playerID);
}
inline void GlobalNamespace::CustomMapsTerminal::SetTerminalControlStatus(bool  isLocked, int32_t  driverID, bool  sendRPC)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"SetTerminalControlStatus", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isLocked, driverID, sendRPC);
}
inline void GlobalNamespace::CustomMapsTerminal::UpdateFromDriver(int32_t  currentScreen, int64_t  modDetailsID, int32_t  driverID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"UpdateFromDriver", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentScreen, modDetailsID, driverID);
}
inline void GlobalNamespace::CustomMapsTerminal::UpdateControlScreenForDriver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"UpdateControlScreenForDriver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::ValidateLocalStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ValidateLocalStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::OnModIOLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"OnModIOLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::OnModIOLoggedOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"OnModIOLoggedOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::HandleTerminalControlButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"HandleTerminalControlButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::ShowTerminalControlScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"ShowTerminalControlScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::HideTerminalControlScreens()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"HideTerminalControlScreens", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::RequestDriverNickNameRefresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"RequestDriverNickNameRefresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::RefreshDriverNickName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"RefreshDriverNickName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::OnReturnedToSinglePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"OnReturnedToSinglePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CustomMapsTerminal::IsLocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"IsLocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::CustomMapsTerminal::GetDriverID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"GetDriverID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomMapsTerminal::GetDriverNickname()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {"GetDriverNickname", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CustomMapsTerminal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsTerminal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsTerminal* GlobalNamespace::CustomMapsTerminal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsTerminal*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsTerminal::CustomMapsTerminal()   {
}
