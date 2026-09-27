#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/ConnectAndJoinRandom.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__ConnectAndJoinRandom_def.hpp"
#include "Photon/Realtime/zzzz__DisconnectCause_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ConnectAndJoinRandom.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::*)()>(&::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa739658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ConnectAndJoinRandom.ConnectNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::*)()>(&::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::ConnectNow)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa739668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(),
                        {"ConnectNow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ConnectAndJoinRandom.OnConnectedToMaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::*)()>(&::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::OnConnectedToMaster)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa739768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ConnectAndJoinRandom.OnJoinedLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::*)()>(&::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::OnJoinedLobby)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa739838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ConnectAndJoinRandom.OnJoinRandomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::*)(int16_t, ::StringW)>(&::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa739908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ConnectAndJoinRandom.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::*)(::Photon::Realtime::DisconnectCause)>(&::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::OnDisconnected)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa739a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ConnectAndJoinRandom.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::*)()>(&::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::OnJoinedRoom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa739b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ConnectAndJoinRandom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::*)()>(&::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa739c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Photon::Pun::UtilityScripts::ConnectAndJoinRandom::__cordl_internal_get_AutoConnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoConnect;
}
constexpr bool const& Photon::Pun::UtilityScripts::ConnectAndJoinRandom::__cordl_internal_get_AutoConnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoConnect;
}
constexpr void Photon::Pun::UtilityScripts::ConnectAndJoinRandom::__cordl_internal_set_AutoConnect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoConnect = value;
}
constexpr uint8_t& Photon::Pun::UtilityScripts::ConnectAndJoinRandom::__cordl_internal_get_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr uint8_t const& Photon::Pun::UtilityScripts::ConnectAndJoinRandom::__cordl_internal_get_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr void Photon::Pun::UtilityScripts::ConnectAndJoinRandom::__cordl_internal_set_Version(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Version = value;
}
constexpr uint8_t& Photon::Pun::UtilityScripts::ConnectAndJoinRandom::__cordl_internal_get_MaxPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxPlayers;
}
constexpr uint8_t const& Photon::Pun::UtilityScripts::ConnectAndJoinRandom::__cordl_internal_get_MaxPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxPlayers;
}
constexpr void Photon::Pun::UtilityScripts::ConnectAndJoinRandom::__cordl_internal_set_MaxPlayers(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxPlayers = value;
}
constexpr int32_t& Photon::Pun::UtilityScripts::ConnectAndJoinRandom::__cordl_internal_get_playerTTL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTTL;
}
constexpr int32_t const& Photon::Pun::UtilityScripts::ConnectAndJoinRandom::__cordl_internal_get_playerTTL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTTL;
}
constexpr void Photon::Pun::UtilityScripts::ConnectAndJoinRandom::__cordl_internal_set_playerTTL(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTTL = value;
}
inline void Photon::Pun::UtilityScripts::ConnectAndJoinRandom::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::ConnectAndJoinRandom::ConnectNow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(),
                        {"ConnectNow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::ConnectAndJoinRandom::OnConnectedToMaster()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::ConnectAndJoinRandom::OnJoinedLobby()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::ConnectAndJoinRandom::OnJoinRandomFailed(int16_t  returnCode, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::UtilityScripts::ConnectAndJoinRandom::OnDisconnected(::Photon::Realtime::DisconnectCause  cause)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cause);
}
inline void Photon::Pun::UtilityScripts::ConnectAndJoinRandom::OnJoinedRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::ConnectAndJoinRandom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::ConnectAndJoinRandom* Photon::Pun::UtilityScripts::ConnectAndJoinRandom::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::ConnectAndJoinRandom::ConnectAndJoinRandom()   {
}
