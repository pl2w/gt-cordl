#pragma once
// IWYU pragma private; include "Photon/Realtime/ILobbyCallbacks.hpp"
#include "Photon/Realtime/zzzz__ILobbyCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::ILobbyCallbacks.OnJoinedLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ILobbyCallbacks::*)()>(&::Photon::Realtime::ILobbyCallbacks::OnJoinedLobby)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::ILobbyCallbacks*>(),
                    {::i2c::class_of<::Photon::Realtime::ILobbyCallbacks*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ILobbyCallbacks.OnLeftLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ILobbyCallbacks::*)()>(&::Photon::Realtime::ILobbyCallbacks::OnLeftLobby)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::ILobbyCallbacks*>(),
                    {::i2c::class_of<::Photon::Realtime::ILobbyCallbacks*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ILobbyCallbacks.OnRoomListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ILobbyCallbacks::*)(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*)>(&::Photon::Realtime::ILobbyCallbacks::OnRoomListUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::ILobbyCallbacks*>(),
                    {::i2c::class_of<::Photon::Realtime::ILobbyCallbacks*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::ILobbyCallbacks.OnLobbyStatisticsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::ILobbyCallbacks::*)(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*)>(&::Photon::Realtime::ILobbyCallbacks::OnLobbyStatisticsUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::ILobbyCallbacks*>(),
                    {::i2c::class_of<::Photon::Realtime::ILobbyCallbacks*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Photon::Realtime::ILobbyCallbacks::OnJoinedLobby()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::ILobbyCallbacks*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Realtime::ILobbyCallbacks::OnLeftLobby()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::ILobbyCallbacks*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Realtime::ILobbyCallbacks::OnRoomListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*  roomList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::ILobbyCallbacks*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomList);
}
inline void Photon::Realtime::ILobbyCallbacks::OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::ILobbyCallbacks*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyStatistics);
}
