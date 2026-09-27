#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualStumpSerializer.hpp"
#include "GlobalNamespace/zzzz__GorillaSerializer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VirtualStumpSerializer_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsDisplayScreen_def.hpp"
#include "GlobalNamespace/zzzz__GTMapLoadSource_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VirtualStumpBarrierSFX_def.hpp"
#include "GlobalNamespace/zzzz__VirtualStumpSerializer_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.get_HasAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VirtualStumpSerializer::*)()>(&::GlobalNamespace::VirtualStumpSerializer::get_HasAuthority)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a093cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"get_HasAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)()>(&::GlobalNamespace::VirtualStumpSerializer::Start)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5a0c6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::VirtualStumpSerializer::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5a0c8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)()>(&::GlobalNamespace::VirtualStumpSerializer::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5a0c9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)()>(&::GlobalNamespace::VirtualStumpSerializer::OnLeftRoom)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a0cb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.IsWaitingForRoomInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::VirtualStumpSerializer::IsWaitingForRoomInit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a0cbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"IsWaitingForRoomInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.RequestRoomInitialization_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::VirtualStumpSerializer::RequestRoomInitialization_RPC)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5a0cc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"RequestRoomInitialization_RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.InitializeRoom_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)(int32_t, int32_t, int64_t, int64_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::VirtualStumpSerializer::InitializeRoom_RPC)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5a0d048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"InitializeRoom_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.LoadMapSynced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)(int64_t, ::GlobalNamespace::GTMapLoadSource)>(&::GlobalNamespace::VirtualStumpSerializer::LoadMapSynced)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5a0d254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"LoadMapSynced", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::GTMapLoadSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.UnloadMapSynced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)()>(&::GlobalNamespace::VirtualStumpSerializer::UnloadMapSynced)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5a0d408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"UnloadMapSynced", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.SetRoomMap_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)(int64_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::VirtualStumpSerializer::SetRoomMap_RPC)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5a0d580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"SetRoomMap_RPC", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.UnloadMap_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::VirtualStumpSerializer::UnloadMap_RPC)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5a0d70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"UnloadMap_RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.RequestTerminalControlStatusChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)(bool)>(&::GlobalNamespace::VirtualStumpSerializer::RequestTerminalControlStatusChange)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a093e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"RequestTerminalControlStatusChange", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.RequestTerminalControlStatusChange_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)(bool, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::VirtualStumpSerializer::RequestTerminalControlStatusChange_RPC)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5a0d86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"RequestTerminalControlStatusChange_RPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.SetTerminalControlStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)(bool, int32_t)>(&::GlobalNamespace::VirtualStumpSerializer::SetTerminalControlStatus)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5a082f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"SetTerminalControlStatus", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.SetTerminalControlStatus_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)(bool, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::VirtualStumpSerializer::SetTerminalControlStatus_RPC)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5a0dafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"SetTerminalControlStatus_RPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.SendTerminalStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)()>(&::GlobalNamespace::VirtualStumpSerializer::SendTerminalStatus)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a07934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"SendTerminalStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.WaitToSendStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::VirtualStumpSerializer::*)()>(&::GlobalNamespace::VirtualStumpSerializer::WaitToSendStatus)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a0dd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"WaitToSendStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.UpdateScreen_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)(int32_t, int64_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::VirtualStumpSerializer::UpdateScreen_RPC)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5a0ddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"UpdateScreen_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.RefreshDriverNickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)()>(&::GlobalNamespace::VirtualStumpSerializer::RefreshDriverNickName)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5a095c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"RefreshDriverNickName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer.RefreshDriverNickName_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::VirtualStumpSerializer::RefreshDriverNickName_RPC)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5a0e0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"RefreshDriverNickName_RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer::*)()>(&::GlobalNamespace::VirtualStumpSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0e300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VirtualStumpBarrierSFX>& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_barrierSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___barrierSFX;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpBarrierSFX> const& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_barrierSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___barrierSFX;
}
constexpr void GlobalNamespace::VirtualStumpSerializer::__cordl_internal_set_barrierSFX(::UnityW<::GlobalNamespace::VirtualStumpBarrierSFX>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___barrierSFX = value;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_detailsScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailsScreen;
}
constexpr ::UnityW<::GlobalNamespace::CustomMapsDisplayScreen> const& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_detailsScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailsScreen;
}
constexpr void GlobalNamespace::VirtualStumpSerializer::__cordl_internal_set_detailsScreen(::UnityW<::GlobalNamespace::CustomMapsDisplayScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailsScreen = value;
}
constexpr bool& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_sendModList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendModList;
}
constexpr bool const& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_sendModList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendModList;
}
constexpr void GlobalNamespace::VirtualStumpSerializer::__cordl_internal_set_sendModList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendModList = value;
}
constexpr bool& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_forceNewSearch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceNewSearch;
}
constexpr bool const& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_forceNewSearch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceNewSearch;
}
constexpr void GlobalNamespace::VirtualStumpSerializer::__cordl_internal_set_forceNewSearch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceNewSearch = value;
}
constexpr bool& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_waitToSendStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitToSendStatus;
}
constexpr bool const& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_waitToSendStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitToSendStatus;
}
constexpr void GlobalNamespace::VirtualStumpSerializer::__cordl_internal_set_waitToSendStatus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitToSendStatus = value;
}
constexpr bool& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_sendNewStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendNewStatus;
}
constexpr bool const& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_sendNewStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendNewStatus;
}
constexpr void GlobalNamespace::VirtualStumpSerializer::__cordl_internal_set_sendNewStatus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendNewStatus = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_statusUpdateCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusUpdateCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::VirtualStumpSerializer::__cordl_internal_get_statusUpdateCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statusUpdateCoroutine;
}
constexpr void GlobalNamespace::VirtualStumpSerializer::__cordl_internal_set_statusUpdateCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statusUpdateCoroutine = value;
}
inline void GlobalNamespace::VirtualStumpSerializer::setStaticF_waitingForRoomInitialization(bool  value)  {
::cordl_internals::setStaticField<bool, "waitingForRoomInitialization", ::GlobalNamespace::VirtualStumpSerializer*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::VirtualStumpSerializer::getStaticF_waitingForRoomInitialization()  {
return ::cordl_internals::getStaticField<bool, "waitingForRoomInitialization", ::GlobalNamespace::VirtualStumpSerializer*>();
}
inline void GlobalNamespace::VirtualStumpSerializer::setStaticF_roomInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "roomInitialized", ::GlobalNamespace::VirtualStumpSerializer*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::VirtualStumpSerializer::getStaticF_roomInitialized()  {
return ::cordl_internals::getStaticField<bool, "roomInitialized", ::GlobalNamespace::VirtualStumpSerializer*>();
}
inline bool GlobalNamespace::VirtualStumpSerializer::get_HasAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"get_HasAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpSerializer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpSerializer::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  leavingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leavingPlayer);
}
inline void GlobalNamespace::VirtualStumpSerializer::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpSerializer::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::VirtualStumpSerializer::IsWaitingForRoomInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"IsWaitingForRoomInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpSerializer::RequestRoomInitialization_RPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"RequestRoomInitialization_RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::VirtualStumpSerializer::InitializeRoom_RPC(int32_t  currentScreen, int32_t  driverID, int64_t  modDetailsID, int64_t  loadedMapModID, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"InitializeRoom_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentScreen, driverID, modDetailsID, loadedMapModID, info);
}
inline void GlobalNamespace::VirtualStumpSerializer::LoadMapSynced(int64_t  modId, ::GlobalNamespace::GTMapLoadSource  loadSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"LoadMapSynced", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::GTMapLoadSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modId, loadSource);
}
inline void GlobalNamespace::VirtualStumpSerializer::UnloadMapSynced()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"UnloadMapSynced", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpSerializer::SetRoomMap_RPC(int64_t  modId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"SetRoomMap_RPC", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modId, info);
}
inline void GlobalNamespace::VirtualStumpSerializer::UnloadMap_RPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"UnloadMap_RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::VirtualStumpSerializer::RequestTerminalControlStatusChange(bool  lockedStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"RequestTerminalControlStatusChange", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lockedStatus);
}
inline void GlobalNamespace::VirtualStumpSerializer::RequestTerminalControlStatusChange_RPC(bool  lockedStatus, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"RequestTerminalControlStatusChange_RPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lockedStatus, info);
}
inline void GlobalNamespace::VirtualStumpSerializer::SetTerminalControlStatus(bool  locked, int32_t  playerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"SetTerminalControlStatus", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locked, playerID);
}
inline void GlobalNamespace::VirtualStumpSerializer::SetTerminalControlStatus_RPC(bool  locked, int32_t  driverID, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"SetTerminalControlStatus_RPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locked, driverID, info);
}
inline void GlobalNamespace::VirtualStumpSerializer::SendTerminalStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"SendTerminalStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::VirtualStumpSerializer::WaitToSendStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"WaitToSendStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpSerializer::UpdateScreen_RPC(int32_t  currentScreen, int64_t  modDetailsID, int32_t  driverID, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"UpdateScreen_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentScreen, modDetailsID, driverID, info);
}
inline void GlobalNamespace::VirtualStumpSerializer::RefreshDriverNickName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"RefreshDriverNickName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpSerializer::RefreshDriverNickName_RPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {"RefreshDriverNickName_RPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::VirtualStumpSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VirtualStumpSerializer* GlobalNamespace::VirtualStumpSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VirtualStumpSerializer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VirtualStumpSerializer::VirtualStumpSerializer()   {
}
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::*)(int32_t)>(&::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a0ddc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::*)()>(&::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0e308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::*)()>(&::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5a0e30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::*)()>(&::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0e5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::*)()>(&::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a0e5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::*)()>(&::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a0e628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpSerializer>& GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::VirtualStumpSerializer> const& GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::VirtualStumpSerializer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28* GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VirtualStumpSerializer__WaitToSendStatus_d__28::VirtualStumpSerializer__WaitToSendStatus_d__28()   {
}
