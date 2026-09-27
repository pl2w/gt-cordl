#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PunTurnManager.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PunTurnManager_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__IPunTurnManagerCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__IOnEventCallback_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.get_Turn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(&::Photon::Pun::UtilityScripts::PunTurnManager::get_Turn)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa73c3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"get_Turn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.set_Turn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)(int32_t)>(&::Photon::Pun::UtilityScripts::PunTurnManager::set_Turn)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa73c568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"set_Turn", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.get_ElapsedTimeInTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(&::Photon::Pun::UtilityScripts::PunTurnManager::get_ElapsedTimeInTurn)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa73c780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"get_ElapsedTimeInTurn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.get_RemainingSecondsInTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(&::Photon::Pun::UtilityScripts::PunTurnManager::get_RemainingSecondsInTurn)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa73c920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"get_RemainingSecondsInTurn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.get_IsCompletedByAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(&::Photon::Pun::UtilityScripts::PunTurnManager::get_IsCompletedByAll)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa73c94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"get_IsCompletedByAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.get_IsFinishedByMe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(&::Photon::Pun::UtilityScripts::PunTurnManager::get_IsFinishedByMe)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa73ca04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"get_IsFinishedByMe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.get_IsOver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(&::Photon::Pun::UtilityScripts::PunTurnManager::get_IsOver)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa73ca88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"get_IsOver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(&::Photon::Pun::UtilityScripts::PunTurnManager::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa73cabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(&::Photon::Pun::UtilityScripts::PunTurnManager::Update)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa73cac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.BeginTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(&::Photon::Pun::UtilityScripts::PunTurnManager::BeginTurn)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa73cbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"BeginTurn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.SendMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)(::System::Object*, bool)>(&::Photon::Pun::UtilityScripts::PunTurnManager::SendMove)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa73cbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"SendMove", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.GetPlayerFinishedTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::PunTurnManager::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::PunTurnManager::GetPlayerFinishedTurn)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa73d3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"GetPlayerFinishedTurn", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.ProcessOnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)(uint8_t, ::System::Object*, int32_t)>(&::Photon::Pun::UtilityScripts::PunTurnManager::ProcessOnEvent)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0xa73cfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"ProcessOnEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.OnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)(::ExitGames::Client::Photon::EventData*)>(&::Photon::Pun::UtilityScripts::PunTurnManager::OnEvent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa73d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"OnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Pun::UtilityScripts::PunTurnManager::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa73d47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(&::Photon::Pun::UtilityScripts::PunTurnManager::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa73d5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::Player*& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_sender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr ::Photon::Realtime::Player* const& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_sender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr void Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_set_sender(::Photon::Realtime::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sender = value;
}
constexpr float_t& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_TurnDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TurnDuration;
}
constexpr float_t const& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_TurnDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TurnDuration;
}
constexpr void Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_set_TurnDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TurnDuration = value;
}
constexpr ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_TurnManagerListener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TurnManagerListener;
}
constexpr ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks* const& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_TurnManagerListener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TurnManagerListener;
}
constexpr void Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_set_TurnManagerListener(::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TurnManagerListener = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_finishedPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedPlayers;
}
constexpr ::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>* const& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_finishedPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedPlayers;
}
constexpr void Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_set_finishedPlayers(::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finishedPlayers = value;
}
constexpr bool& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get__isOverCallProcessed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOverCallProcessed;
}
constexpr bool const& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get__isOverCallProcessed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOverCallProcessed;
}
constexpr void Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_set__isOverCallProcessed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isOverCallProcessed = value;
}
inline int32_t Photon::Pun::UtilityScripts::PunTurnManager::get_Turn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"get_Turn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::set_Turn(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"set_Turn", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Photon::Pun::UtilityScripts::PunTurnManager::get_ElapsedTimeInTurn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"get_ElapsedTimeInTurn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Photon::Pun::UtilityScripts::PunTurnManager::get_RemainingSecondsInTurn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"get_RemainingSecondsInTurn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Photon::Pun::UtilityScripts::PunTurnManager::get_IsCompletedByAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"get_IsCompletedByAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Pun::UtilityScripts::PunTurnManager::get_IsFinishedByMe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"get_IsFinishedByMe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Pun::UtilityScripts::PunTurnManager::get_IsOver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"get_IsOver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::BeginTurn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"BeginTurn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::SendMove(::System::Object*  move, bool  finished)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"SendMove", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, move, finished);
}
inline bool Photon::Pun::UtilityScripts::PunTurnManager::GetPlayerFinishedTurn(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"GetPlayerFinishedTurn", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::ProcessOnEvent(uint8_t  eventCode, ::System::Object*  content, int32_t  senderId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"ProcessOnEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventCode, content, senderId);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::OnEvent(::ExitGames::Client::Photon::EventData*  photonEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {"OnEvent", {}, {::i2c::type_of<::ExitGames::Client::Photon::EventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, photonEvent);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunTurnManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::PunTurnManager* Photon::Pun::UtilityScripts::PunTurnManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::PunTurnManager*>());
}
/// @brief Convert operator to "::Photon::Realtime::IOnEventCallback"
constexpr  Photon::Pun::UtilityScripts::PunTurnManager::operator ::Photon::Realtime::IOnEventCallback*() noexcept {
return static_cast<::Photon::Realtime::IOnEventCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IOnEventCallback"
constexpr ::Photon::Realtime::IOnEventCallback* Photon::Pun::UtilityScripts::PunTurnManager::i___Photon__Realtime__IOnEventCallback() noexcept {
return static_cast<::Photon::Realtime::IOnEventCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PunTurnManager::PunTurnManager()   {
}
