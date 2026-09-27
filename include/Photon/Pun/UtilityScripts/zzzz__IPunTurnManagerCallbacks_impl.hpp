#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/IPunTurnManagerCallbacks.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__IPunTurnManagerCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks.OnTurnBegins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::*)(int32_t)>(&::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnTurnBegins)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks.OnTurnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::*)(int32_t)>(&::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnTurnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks.OnPlayerMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::*)(::Photon::Realtime::Player*, int32_t, ::System::Object*)>(&::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnPlayerMove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks.OnPlayerFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::*)(::Photon::Realtime::Player*, int32_t, ::System::Object*)>(&::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnPlayerFinished)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks.OnTurnTimeEnds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::*)(int32_t)>(&::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnTurnTimeEnds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnTurnBegins(int32_t  turn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turn);
}
inline void Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnTurnCompleted(int32_t  turn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turn);
}
inline void Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnPlayerMove(::Photon::Realtime::Player*  player, int32_t  turn, ::System::Object*  move)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, turn, move);
}
inline void Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnPlayerFinished(::Photon::Realtime::Player*  player, int32_t  turn, ::System::Object*  move)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, turn, move);
}
inline void Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks::OnTurnTimeEnds(int32_t  turn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turn);
}
