#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShuttleUI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRShuttleUI_def.hpp"
#include "GlobalNamespace/zzzz__GRShuttle_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRShuttleUI.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttleUI::*)(::GlobalNamespace::GhostReactor*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRShuttleUI::Setup)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58b48dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttleUI*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttleUI.RefreshUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttleUI::*)()>(&::GlobalNamespace::GRShuttleUI::RefreshUI)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x58b4914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttleUI*>(),
                        {"RefreshUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttleUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttleUI::*)()>(&::GlobalNamespace::GRShuttleUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b4de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttleUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRShuttleUI::__cordl_internal_get_playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRShuttleUI::__cordl_internal_get_playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr void GlobalNamespace::GRShuttleUI::__cordl_internal_set_playerName(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerName = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRShuttleUI::__cordl_internal_get_playerTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTitle;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRShuttleUI::__cordl_internal_get_playerTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTitle;
}
constexpr void GlobalNamespace::GRShuttleUI::__cordl_internal_set_playerTitle(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTitle = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRShuttleUI::__cordl_internal_get_destFloorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destFloorText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRShuttleUI::__cordl_internal_get_destFloorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destFloorText;
}
constexpr void GlobalNamespace::GRShuttleUI::__cordl_internal_set_destFloorText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destFloorText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRShuttleUI::__cordl_internal_get_infoText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infoText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRShuttleUI::__cordl_internal_get_infoText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infoText;
}
constexpr void GlobalNamespace::GRShuttleUI::__cordl_internal_set_infoText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___infoText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRShuttleUI::__cordl_internal_get_validScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRShuttleUI::__cordl_internal_get_validScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validScreen;
}
constexpr void GlobalNamespace::GRShuttleUI::__cordl_internal_set_validScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRShuttleUI::__cordl_internal_get_invalidScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invalidScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRShuttleUI::__cordl_internal_get_invalidScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invalidScreen;
}
constexpr void GlobalNamespace::GRShuttleUI::__cordl_internal_set_invalidScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invalidScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::GRShuttle>& GlobalNamespace::GRShuttleUI::__cordl_internal_get_shuttle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttle;
}
constexpr ::UnityW<::GlobalNamespace::GRShuttle> const& GlobalNamespace::GRShuttleUI::__cordl_internal_get_shuttle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttle;
}
constexpr void GlobalNamespace::GRShuttleUI::__cordl_internal_set_shuttle(::UnityW<::GlobalNamespace::GRShuttle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shuttle = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GRShuttleUI::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GRShuttleUI::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::GRShuttleUI::__cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRShuttleUI::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRShuttleUI::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRShuttleUI::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
inline void GlobalNamespace::GRShuttleUI::Setup(::GlobalNamespace::GhostReactor*  reactor, ::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttleUI*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor, player);
}
inline void GlobalNamespace::GRShuttleUI::RefreshUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttleUI*>(),
                        {"RefreshUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttleUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttleUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRShuttleUI* GlobalNamespace::GRShuttleUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRShuttleUI*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRShuttleUI::GRShuttleUI()   {
}
