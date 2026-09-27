#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/PhotonVoiceStatsGui.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__PhotonVoiceStatsGui_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonPeer_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceConnection_def.hpp"
#include "Photon/Voice/zzzz__VoiceClient_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::*)()>(&::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::OnEnable)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa78a9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::*)()>(&::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::Update)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa78ac14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::*)()>(&::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::OnGUI)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa78ac58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui.TrafficStatsWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::*)(int32_t)>(&::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::TrafficStatsWindow)> {
  constexpr static std::size_t size = 0x144c;
  constexpr static std::size_t addrs = 0xa78addc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui*>(),
                        {"TrafficStatsWindow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::*)()>(&::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa78c228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_statsWindowOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsWindowOn;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_statsWindowOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsWindowOn;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_set_statsWindowOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statsWindowOn = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_statsOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsOn;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_statsOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsOn;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_set_statsOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statsOn = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_healthStatsVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___healthStatsVisible;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_healthStatsVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___healthStatsVisible;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_set_healthStatsVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___healthStatsVisible = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_trafficStatsOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trafficStatsOn;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_trafficStatsOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trafficStatsOn;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_set_trafficStatsOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trafficStatsOn = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_buttonsOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonsOn;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_buttonsOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonsOn;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_set_buttonsOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonsOn = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_voiceStatsOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceStatsOn;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_voiceStatsOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceStatsOn;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_set_voiceStatsOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceStatsOn = value;
}
constexpr ::UnityEngine::Rect& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_statsRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsRect;
}
constexpr ::UnityEngine::Rect const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_statsRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsRect;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_set_statsRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statsRect = value;
}
constexpr int32_t& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_windowId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowId;
}
constexpr int32_t const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_windowId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowId;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_set_windowId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windowId = value;
}
constexpr ::ExitGames::Client::Photon::PhotonPeer*& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_peer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peer;
}
constexpr ::ExitGames::Client::Photon::PhotonPeer* const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_peer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peer;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_set_peer(::ExitGames::Client::Photon::PhotonPeer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peer = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_voiceConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_voiceConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceConnection = value;
}
constexpr ::Photon::Voice::VoiceClient*& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_voiceClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceClient;
}
constexpr ::Photon::Voice::VoiceClient* const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_get_voiceClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceClient;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::__cordl_internal_set_voiceClient(::Photon::Voice::VoiceClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceClient = value;
}
inline void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::TrafficStatsWindow(int32_t  windowId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui*>(),
                        {"TrafficStatsWindow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, windowId);
}
inline void Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui* Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceStatsGui::PhotonVoiceStatsGui()   {
}
