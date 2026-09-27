#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionGame.hpp"
#include "GlobalNamespace/zzzz__ESuperInfectionGameState_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagManager_impl.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionGame_def.hpp"
#include "GlobalNamespace/zzzz__ESuperInfectionGameState_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SuperInfectionGame> (*)()>(&::GlobalNamespace::SuperInfectionGame::get_instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5afbc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SuperInfectionGame*)>(&::GlobalNamespace::SuperInfectionGame::set_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5afbca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionGame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.GameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::GameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afbcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.get_gameState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ESuperInfectionGameState (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::get_gameState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afbd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                        {"get_gameState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.set_gameState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)(::GlobalNamespace::ESuperInfectionGameState)>(&::GlobalNamespace::SuperInfectionGame::set_gameState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afbd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                        {"set_gameState", {}, {::i2c::type_of<::GlobalNamespace::ESuperInfectionGameState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5afbd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5afbd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afbdd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::Tick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afbde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.StartPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::StartPlaying)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5afbde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::StopPlaying)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5afc004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SuperInfectionGame::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5afc0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.GameModeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::GameModeName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5afc198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.GameModeNameRoomLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::GameModeNameRoomLabel)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5afc1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.InfrequentUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::InfrequentUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afc2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.InfectionRoundStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::InfectionRoundStart)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5afc2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 106}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.InfectionRoundEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::InfectionRoundEnd)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5afc2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 108}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.LocalCanTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SuperInfectionGame::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SuperInfectionGame::LocalCanTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afc364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.UpdatePlayerAppearance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::SuperInfectionGame::UpdatePlayerAppearance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afc36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 83}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.MyMatIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SuperInfectionGame::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SuperInfectionGame::MyMatIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afc374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SuperInfectionGame::OnSerializeWrite)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5afc37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SuperInfectionGame::OnSerializeRead)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5afc424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame._OnGameStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::_OnGameStateChanged)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5afc580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                        {"_OnGameStateChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame.HandleTagBroadcast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SuperInfectionGame::HandleTagBroadcast)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x5afc6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                    {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionGame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionGame::*)()>(&::GlobalNamespace::SuperInfectionGame::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5afcbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SuperInfectionGame::__cordl_internal_get__mySuperExampleSerializedField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mySuperExampleSerializedField;
}
constexpr int32_t const& GlobalNamespace::SuperInfectionGame::__cordl_internal_get__mySuperExampleSerializedField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mySuperExampleSerializedField;
}
constexpr void GlobalNamespace::SuperInfectionGame::__cordl_internal_set__mySuperExampleSerializedField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mySuperExampleSerializedField = value;
}
constexpr ::GlobalNamespace::ESuperInfectionGameState& GlobalNamespace::SuperInfectionGame::__cordl_internal_get__gameState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameState_k__BackingField;
}
constexpr ::GlobalNamespace::ESuperInfectionGameState const& GlobalNamespace::SuperInfectionGame::__cordl_internal_get__gameState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameState_k__BackingField;
}
constexpr void GlobalNamespace::SuperInfectionGame::__cordl_internal_set__gameState_k__BackingField(::GlobalNamespace::ESuperInfectionGameState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameState_k__BackingField = value;
}
constexpr ::GlobalNamespace::ESuperInfectionGameState& GlobalNamespace::SuperInfectionGame::__cordl_internal_get__gameState_previous()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameState_previous;
}
constexpr ::GlobalNamespace::ESuperInfectionGameState const& GlobalNamespace::SuperInfectionGame::__cordl_internal_get__gameState_previous() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameState_previous;
}
constexpr void GlobalNamespace::SuperInfectionGame::__cordl_internal_set__gameState_previous(::GlobalNamespace::ESuperInfectionGameState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameState_previous = value;
}
inline void GlobalNamespace::SuperInfectionGame::setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::SuperInfectionGame>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SuperInfectionGame>, "<instance>k__BackingField", ::GlobalNamespace::SuperInfectionGame*>(std::forward<::UnityW<::GlobalNamespace::SuperInfectionGame>>(value));
}
inline ::UnityW<::GlobalNamespace::SuperInfectionGame> GlobalNamespace::SuperInfectionGame::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SuperInfectionGame>, "<instance>k__BackingField", ::GlobalNamespace::SuperInfectionGame*>();
}
inline ::UnityW<::GlobalNamespace::SuperInfectionGame> GlobalNamespace::SuperInfectionGame::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SuperInfectionGame>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionGame::set_instance(::GlobalNamespace::SuperInfectionGame*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::SuperInfectionGame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GorillaGameModes::GameModeType GlobalNamespace::SuperInfectionGame::GameType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline ::GlobalNamespace::ESuperInfectionGameState GlobalNamespace::SuperInfectionGame::get_gameState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                        {"get_gameState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ESuperInfectionGameState>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionGame::set_gameState(::GlobalNamespace::ESuperInfectionGameState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                        {"set_gameState", {}, {::i2c::type_of<::GlobalNamespace::ESuperInfectionGameState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SuperInfectionGame::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionGame::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionGame::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionGame::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionGame::StartPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionGame::StopPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionGame::OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline ::StringW GlobalNamespace::SuperInfectionGame::GameModeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SuperInfectionGame::GameModeNameRoomLabel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionGame::InfrequentUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionGame::InfectionRoundStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 106}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionGame::InfectionRoundEnd()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 108}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SuperInfectionGame::LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, otherPlayer);
}
inline void GlobalNamespace::SuperInfectionGame::UpdatePlayerAppearance(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 83}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline int32_t GlobalNamespace::SuperInfectionGame::MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, forPlayer);
}
inline void GlobalNamespace::SuperInfectionGame::OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SuperInfectionGame::OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SuperInfectionGame::_OnGameStateChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                        {"_OnGameStateChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionGame::HandleTagBroadcast(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer);
}
inline void GlobalNamespace::SuperInfectionGame::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionGame*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SuperInfectionGame* GlobalNamespace::SuperInfectionGame::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SuperInfectionGame*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SuperInfectionGame::SuperInfectionGame()   {
}
