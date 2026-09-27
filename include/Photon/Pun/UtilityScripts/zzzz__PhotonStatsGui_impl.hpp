#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PhotonStatsGui.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PhotonStatsGui_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonStatsGui.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonStatsGui::*)()>(&::Photon::Pun::UtilityScripts::PhotonStatsGui::Start)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa7315ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonStatsGui*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonStatsGui.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonStatsGui::*)()>(&::Photon::Pun::UtilityScripts::PhotonStatsGui::Update)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa7315e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonStatsGui*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonStatsGui.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonStatsGui::*)()>(&::Photon::Pun::UtilityScripts::PhotonStatsGui::OnGUI)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa731604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonStatsGui*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonStatsGui.TrafficStatsWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonStatsGui::*)(int32_t)>(&::Photon::Pun::UtilityScripts::PhotonStatsGui::TrafficStatsWindow)> {
  constexpr static std::size_t size = 0x1084;
  constexpr static std::size_t addrs = 0xa7317d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonStatsGui*>(),
                        {"TrafficStatsWindow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonStatsGui._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonStatsGui::*)()>(&::Photon::Pun::UtilityScripts::PhotonStatsGui::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa73285c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonStatsGui*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_statsWindowOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsWindowOn;
}
constexpr bool const& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_statsWindowOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsWindowOn;
}
constexpr void Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_set_statsWindowOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statsWindowOn = value;
}
constexpr bool& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_statsOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsOn;
}
constexpr bool const& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_statsOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsOn;
}
constexpr void Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_set_statsOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statsOn = value;
}
constexpr bool& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_healthStatsVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___healthStatsVisible;
}
constexpr bool const& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_healthStatsVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___healthStatsVisible;
}
constexpr void Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_set_healthStatsVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___healthStatsVisible = value;
}
constexpr bool& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_trafficStatsOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trafficStatsOn;
}
constexpr bool const& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_trafficStatsOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trafficStatsOn;
}
constexpr void Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_set_trafficStatsOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trafficStatsOn = value;
}
constexpr bool& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_buttonsOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonsOn;
}
constexpr bool const& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_buttonsOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonsOn;
}
constexpr void Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_set_buttonsOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonsOn = value;
}
constexpr ::UnityEngine::Rect& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_statsRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsRect;
}
constexpr ::UnityEngine::Rect const& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_statsRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsRect;
}
constexpr void Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_set_statsRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statsRect = value;
}
constexpr int32_t& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_WindowId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindowId;
}
constexpr int32_t const& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_WindowId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindowId;
}
constexpr void Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_set_WindowId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WindowId = value;
}
constexpr bool& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_turnOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOn;
}
constexpr bool const& Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_get_turnOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnOn;
}
constexpr void Photon::Pun::UtilityScripts::PhotonStatsGui::__cordl_internal_set_turnOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnOn = value;
}
inline void Photon::Pun::UtilityScripts::PhotonStatsGui::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonStatsGui*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonStatsGui::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonStatsGui*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonStatsGui::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonStatsGui*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonStatsGui::TrafficStatsWindow(int32_t  windowID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonStatsGui*>(),
                        {"TrafficStatsWindow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, windowID);
}
inline void Photon::Pun::UtilityScripts::PhotonStatsGui::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonStatsGui*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::PhotonStatsGui* Photon::Pun::UtilityScripts::PhotonStatsGui::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::PhotonStatsGui*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PhotonStatsGui::PhotonStatsGui()   {
}
