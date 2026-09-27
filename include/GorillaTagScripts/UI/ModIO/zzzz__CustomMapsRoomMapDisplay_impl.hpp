#pragma once
// IWYU pragma private; include "GorillaTagScripts/UI/ModIO/CustomMapsRoomMapDisplay.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/UI/ModIO/zzzz__CustomMapsRoomMapDisplay_def.hpp"
#include "GorillaTagScripts/UI/ModIO/zzzz__CustomMapsRoomMapDisplay__UpdateRoomMap_d__20_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__MapLoadStatus_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::*)()>(&::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::Start)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5bf4750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::*)()>(&::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::OnDestroy)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5bf4aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::*)()>(&::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay.OnDisconnectedFromRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::*)()>(&::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::OnDisconnectedFromRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf4eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"OnDisconnectedFromRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay.OnRoomMapChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::*)(::Modio::Mods::ModId)>(&::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::OnRoomMapChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf4eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"OnRoomMapChanged", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay.UpdateRoomMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::*)()>(&::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::UpdateRoomMap)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bf4dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"UpdateRoomMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay.OnMapLoadComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::*)(bool)>(&::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::OnMapLoadComplete)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bf4eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"OnMapLoadComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay.OnMapLoadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::*)(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus, int32_t, ::StringW)>(&::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::OnMapLoadProgress)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5bf4f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"OnMapLoadProgress", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::*)()>(&::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5bf5084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_roomMapLabelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomMapLabelText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_roomMapLabelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomMapLabelText;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_roomMapLabelText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomMapLabelText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_roomMapNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomMapNameText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_roomMapNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomMapNameText;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_roomMapNameText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomMapNameText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_roomMapStatusLabelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomMapStatusLabelText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_roomMapStatusLabelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomMapStatusLabelText;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_roomMapStatusLabelText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomMapStatusLabelText = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_roomMapStatusText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomMapStatusText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_roomMapStatusText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomMapStatusText;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_roomMapStatusText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomMapStatusText = value;
}
constexpr ::StringW& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_noRoomMapString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noRoomMapString;
}
constexpr ::StringW const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_noRoomMapString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noRoomMapString;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_noRoomMapString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noRoomMapString = value;
}
constexpr ::StringW& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_notLoadedStatusString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notLoadedStatusString;
}
constexpr ::StringW const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_notLoadedStatusString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notLoadedStatusString;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_notLoadedStatusString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notLoadedStatusString = value;
}
constexpr ::StringW& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_loadingStatusString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingStatusString;
}
constexpr ::StringW const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_loadingStatusString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingStatusString;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_loadingStatusString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingStatusString = value;
}
constexpr ::StringW& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_downloadingStatusString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadingStatusString;
}
constexpr ::StringW const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_downloadingStatusString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadingStatusString;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_downloadingStatusString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downloadingStatusString = value;
}
constexpr ::StringW& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_installingStatusString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installingStatusString;
}
constexpr ::StringW const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_installingStatusString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___installingStatusString;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_installingStatusString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___installingStatusString = value;
}
constexpr ::StringW& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_readyToPlayStatusString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyToPlayStatusString;
}
constexpr ::StringW const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_readyToPlayStatusString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyToPlayStatusString;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_readyToPlayStatusString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readyToPlayStatusString = value;
}
constexpr ::StringW& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_loadFailedStatusString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadFailedStatusString;
}
constexpr ::StringW const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_loadFailedStatusString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadFailedStatusString;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_loadFailedStatusString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadFailedStatusString = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_notLoadedStatusStringColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notLoadedStatusStringColor;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_notLoadedStatusStringColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notLoadedStatusStringColor;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_notLoadedStatusStringColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notLoadedStatusStringColor = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_loadingStatusStringColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingStatusStringColor;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_loadingStatusStringColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingStatusStringColor;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_loadingStatusStringColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingStatusStringColor = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_readyToPlayStatusStringColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyToPlayStatusStringColor;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_readyToPlayStatusStringColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyToPlayStatusStringColor;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_readyToPlayStatusStringColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readyToPlayStatusStringColor = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_loadFailedStatusStringColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadFailedStatusStringColor;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_get_loadFailedStatusStringColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadFailedStatusStringColor;
}
constexpr void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::__cordl_internal_set_loadFailedStatusStringColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadFailedStatusStringColor = value;
}
inline void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::OnDisconnectedFromRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"OnDisconnectedFromRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::OnRoomMapChanged(::Modio::Mods::ModId  roomMapModId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"OnRoomMapChanged", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomMapModId);
}
inline ::System::Threading::Tasks::Task* GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::UpdateRoomMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"UpdateRoomMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::OnMapLoadComplete(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"OnMapLoadComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::OnMapLoadProgress(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  status, int32_t  progress, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {"OnMapLoadProgress", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, progress, message);
}
inline void GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay* GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::UI::ModIO::CustomMapsRoomMapDisplay::CustomMapsRoomMapDisplay()   {
}
