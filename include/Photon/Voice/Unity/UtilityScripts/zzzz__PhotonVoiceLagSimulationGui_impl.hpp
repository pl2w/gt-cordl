#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/PhotonVoiceLagSimulationGui.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__PhotonVoiceLagSimulationGui_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonPeer_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceConnection_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::*)()>(&::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::OnEnable)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa789d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::*)()>(&::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::OnGUI)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa789f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui.NetSimHasNoPeerWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::*)(int32_t)>(&::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::NetSimHasNoPeerWindow)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa78a09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui*>(),
                        {"NetSimHasNoPeerWindow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui.NetSimWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::*)(int32_t)>(&::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::NetSimWindow)> {
  constexpr static std::size_t size = 0x888;
  constexpr static std::size_t addrs = 0xa78a14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui*>(),
                        {"NetSimWindow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::*)()>(&::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa78a9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_get_voiceConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_get_voiceConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceConnection = value;
}
constexpr ::UnityEngine::Rect& Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_get_windowRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowRect;
}
constexpr ::UnityEngine::Rect const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_get_windowRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowRect;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_set_windowRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windowRect = value;
}
constexpr int32_t& Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_get_windowId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowId;
}
constexpr int32_t const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_get_windowId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowId;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_set_windowId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windowId = value;
}
constexpr bool& Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_get_visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visible;
}
constexpr bool const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_get_visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visible;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_set_visible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visible = value;
}
constexpr ::ExitGames::Client::Photon::PhotonPeer*& Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_get_peer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peer;
}
constexpr ::ExitGames::Client::Photon::PhotonPeer* const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_get_peer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peer;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_set_peer(::ExitGames::Client::Photon::PhotonPeer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peer = value;
}
constexpr float_t& Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_get_debugLostPercent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLostPercent;
}
constexpr float_t const& Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_get_debugLostPercent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLostPercent;
}
constexpr void Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::__cordl_internal_set_debugLostPercent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugLostPercent = value;
}
inline void Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::NetSimHasNoPeerWindow(int32_t  windowId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui*>(),
                        {"NetSimHasNoPeerWindow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, windowId);
}
inline void Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::NetSimWindow(int32_t  windowId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui*>(),
                        {"NetSimWindow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, windowId);
}
inline void Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui* Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::PhotonVoiceLagSimulationGui::PhotonVoiceLagSimulationGui()   {
}
