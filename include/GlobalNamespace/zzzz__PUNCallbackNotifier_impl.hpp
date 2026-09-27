#pragma once
// IWYU pragma private; include "GlobalNamespace/PUNCallbackNotifier.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "GlobalNamespace/zzzz__PUNCallbackNotifier_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN_def.hpp"
#include "Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Photon/Realtime/zzzz__IOnEventCallback_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)()>(&::GlobalNamespace::PUNCallbackNotifier::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x570d4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)()>(&::GlobalNamespace::PUNCallbackNotifier::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x570d518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.OnConnectedToMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)()>(&::GlobalNamespace::PUNCallbackNotifier::OnConnectedToMaster)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                    {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)()>(&::GlobalNamespace::PUNCallbackNotifier::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                    {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.OnJoinRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)(int16_t, ::StringW)>(&::GlobalNamespace::PUNCallbackNotifier::OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                    {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.OnJoinRandomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)(int16_t, ::StringW)>(&::GlobalNamespace::PUNCallbackNotifier::OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                    {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.OnCreateRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)(int16_t, ::StringW)>(&::GlobalNamespace::PUNCallbackNotifier::OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                    {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::PUNCallbackNotifier::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                    {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::PUNCallbackNotifier::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                    {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)(::Photon::Realtime::DisconnectCause)>(&::GlobalNamespace::PUNCallbackNotifier::OnDisconnected)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                    {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.OnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)(::ExitGames::Client::Photon::EventData*)>(&::GlobalNamespace::PUNCallbackNotifier::OnEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x570d5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                        {"OnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.OnPreLeavingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)()>(&::GlobalNamespace::PUNCallbackNotifier::OnPreLeavingRoom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                    {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::PUNCallbackNotifier::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                    {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.OnCustomAuthenticationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::GlobalNamespace::PUNCallbackNotifier::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                    {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier.OnCustomAuthenticationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)(::StringW)>(&::GlobalNamespace::PUNCallbackNotifier::OnCustomAuthenticationFailed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x570d688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                    {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PUNCallbackNotifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PUNCallbackNotifier::*)()>(&::GlobalNamespace::PUNCallbackNotifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570d6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NetworkSystemPUN>& GlobalNamespace::PUNCallbackNotifier::__cordl_internal_get_parentSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentSystem;
}
constexpr ::UnityW<::GlobalNamespace::NetworkSystemPUN> const& GlobalNamespace::PUNCallbackNotifier::__cordl_internal_get_parentSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentSystem;
}
constexpr void GlobalNamespace::PUNCallbackNotifier::__cordl_internal_set_parentSystem(::UnityW<::GlobalNamespace::NetworkSystemPUN>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentSystem = value;
}
inline void GlobalNamespace::PUNCallbackNotifier::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PUNCallbackNotifier::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PUNCallbackNotifier::OnConnectedToMaster()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PUNCallbackNotifier::OnJoinedRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PUNCallbackNotifier::OnJoinRoomFailed(int16_t  returnCode, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void GlobalNamespace::PUNCallbackNotifier::OnJoinRandomFailed(int16_t  returnCode, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void GlobalNamespace::PUNCallbackNotifier::OnCreateRoomFailed(int16_t  returnCode, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void GlobalNamespace::PUNCallbackNotifier::OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::PUNCallbackNotifier::OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::PUNCallbackNotifier::OnDisconnected(::Photon::Realtime::DisconnectCause  cause)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void GlobalNamespace::PUNCallbackNotifier::OnEvent(::ExitGames::Client::Photon::EventData*  photonEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                        {"OnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, photonEvent);
}
inline void GlobalNamespace::PUNCallbackNotifier::OnPreLeavingRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PUNCallbackNotifier::OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GlobalNamespace::PUNCallbackNotifier::OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::PUNCallbackNotifier::OnCustomAuthenticationFailed(::StringW  debugMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugMessage);
}
inline void GlobalNamespace::PUNCallbackNotifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PUNCallbackNotifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PUNCallbackNotifier* GlobalNamespace::PUNCallbackNotifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PUNCallbackNotifier*>());
}
/// @brief Convert operator to "::Photon::Realtime::IOnEventCallback"
constexpr  GlobalNamespace::PUNCallbackNotifier::operator ::Photon::Realtime::IOnEventCallback*() noexcept {
return static_cast<::Photon::Realtime::IOnEventCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IOnEventCallback"
constexpr ::Photon::Realtime::IOnEventCallback* GlobalNamespace::PUNCallbackNotifier::i___Photon__Realtime__IOnEventCallback() noexcept {
return static_cast<::Photon::Realtime::IOnEventCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PUNCallbackNotifier::PUNCallbackNotifier()   {
}
