#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/TurnExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__TurnExtensions_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "Photon/Realtime/zzzz__Room_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TurnExtensions.SetTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Realtime::Room*, int32_t, bool)>(&::Photon::Pun::UtilityScripts::TurnExtensions::SetTurn)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa73c608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TurnExtensions*>(),
                        {"SetTurn", {}, {::i2c::type_of<::Photon::Realtime::Room*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TurnExtensions.GetTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Photon::Realtime::RoomInfo*)>(&::Photon::Pun::UtilityScripts::TurnExtensions::GetTurn)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa73c470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TurnExtensions*>(),
                        {"GetTurn", {}, {::i2c::type_of<::Photon::Realtime::RoomInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TurnExtensions.GetTurnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Photon::Realtime::RoomInfo*)>(&::Photon::Pun::UtilityScripts::TurnExtensions::GetTurnStart)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa73c828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TurnExtensions*>(),
                        {"GetTurnStart", {}, {::i2c::type_of<::Photon::Realtime::RoomInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TurnExtensions.GetFinishedTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::TurnExtensions::GetFinishedTurn)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa73d630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TurnExtensions*>(),
                        {"GetFinishedTurn", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TurnExtensions.SetFinishedTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Realtime::Player*, int32_t)>(&::Photon::Pun::UtilityScripts::TurnExtensions::SetFinishedTurn)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa73ce84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TurnExtensions*>(),
                        {"SetFinishedTurn", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::TurnExtensions::setStaticF_TurnPropKey(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "TurnPropKey", ::Photon::Pun::UtilityScripts::TurnExtensions*>(std::forward<::StringW>(value));
}
inline ::StringW Photon::Pun::UtilityScripts::TurnExtensions::getStaticF_TurnPropKey()  {
return ::cordl_internals::getStaticField<::StringW, "TurnPropKey", ::Photon::Pun::UtilityScripts::TurnExtensions*>();
}
inline void Photon::Pun::UtilityScripts::TurnExtensions::setStaticF_TurnStartPropKey(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "TurnStartPropKey", ::Photon::Pun::UtilityScripts::TurnExtensions*>(std::forward<::StringW>(value));
}
inline ::StringW Photon::Pun::UtilityScripts::TurnExtensions::getStaticF_TurnStartPropKey()  {
return ::cordl_internals::getStaticField<::StringW, "TurnStartPropKey", ::Photon::Pun::UtilityScripts::TurnExtensions*>();
}
inline void Photon::Pun::UtilityScripts::TurnExtensions::setStaticF_FinishedTurnPropKey(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "FinishedTurnPropKey", ::Photon::Pun::UtilityScripts::TurnExtensions*>(std::forward<::StringW>(value));
}
inline ::StringW Photon::Pun::UtilityScripts::TurnExtensions::getStaticF_FinishedTurnPropKey()  {
return ::cordl_internals::getStaticField<::StringW, "FinishedTurnPropKey", ::Photon::Pun::UtilityScripts::TurnExtensions*>();
}
inline void Photon::Pun::UtilityScripts::TurnExtensions::SetTurn(::Photon::Realtime::Room*  room, int32_t  turn, bool  setStartTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TurnExtensions*>(),
                        {"SetTurn", {}, {::i2c::type_of<::Photon::Realtime::Room*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, room, turn, setStartTime);
}
inline int32_t Photon::Pun::UtilityScripts::TurnExtensions::GetTurn(::Photon::Realtime::RoomInfo*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TurnExtensions*>(),
                        {"GetTurn", {}, {::i2c::type_of<::Photon::Realtime::RoomInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, room);
}
inline int32_t Photon::Pun::UtilityScripts::TurnExtensions::GetTurnStart(::Photon::Realtime::RoomInfo*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TurnExtensions*>(),
                        {"GetTurnStart", {}, {::i2c::type_of<::Photon::Realtime::RoomInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, room);
}
inline int32_t Photon::Pun::UtilityScripts::TurnExtensions::GetFinishedTurn(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TurnExtensions*>(),
                        {"GetFinishedTurn", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, player);
}
inline void Photon::Pun::UtilityScripts::TurnExtensions::SetFinishedTurn(::Photon::Realtime::Player*  player, int32_t  turn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TurnExtensions*>(),
                        {"SetFinishedTurn", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, turn);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::TurnExtensions::TurnExtensions()   {
}
