#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcadeMachine.hpp"
#include "GlobalNamespace/zzzz__ArcadeMachineJoystick_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "Photon/Realtime/zzzz__Player_impl.hpp"
#include "GlobalNamespace/zzzz__ArcadeMachine_def.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
#include "GlobalNamespace/zzzz__ArcadeButtons_def.hpp"
#include "GlobalNamespace/zzzz__ArcadeGame_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)()>(&::GlobalNamespace::ArcadeMachine::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x56d278c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)()>(&::GlobalNamespace::ArcadeMachine::Start)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x56d27f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.PlaySound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)(int32_t, int32_t)>(&::GlobalNamespace::ArcadeMachine::PlaySound)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x56d2470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"PlaySound", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.IsPlayerLocallyControlled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArcadeMachine::*)(int32_t)>(&::GlobalNamespace::ArcadeMachine::IsPlayerLocallyControlled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56d260c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"IsPlayerLocallyControlled", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)()>(&::GlobalNamespace::ArcadeMachine::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56d2950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)()>(&::GlobalNamespace::ArcadeMachine::OnDisable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x56d2a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.ArcadeGameInstance_OnPlaySound_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArcadeMachine::ArcadeGameInstance_OnPlaySound_RPC)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x56d2b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"ArcadeGameInstance_OnPlaySound_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.OnJoystickStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::GlobalNamespace::ArcadeMachine::OnJoystickStateChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56d2c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"OnJoystickStateChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ArcadeButtons>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.IsControllerInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ArcadeMachine::*)(int32_t)>(&::GlobalNamespace::ArcadeMachine::IsControllerInUse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56d2c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"IsControllerInUse", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<uint8_t> (::GlobalNamespace::ArcadeMachine::*)()>(&::GlobalNamespace::ArcadeMachine::get_Data)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56d2cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)()>(&::GlobalNamespace::ArcadeMachine::WriteDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d2df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)()>(&::GlobalNamespace::ArcadeMachine::ReadDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d2df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArcadeMachine::WriteDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d2dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArcadeMachine::ReadDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d2e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.ReadPlayerDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)(int32_t, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArcadeMachine::ReadPlayerDataPUN)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56d2e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"ReadPlayerDataPUN", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.WritePlayerDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)(int32_t, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArcadeMachine::WritePlayerDataPUN)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x56d2e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"WritePlayerDataPUN", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)()>(&::GlobalNamespace::ArcadeMachine::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x56d2e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)(bool)>(&::GlobalNamespace::ArcadeMachine::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x56d2f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachine.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachine::*)()>(&::GlobalNamespace::ArcadeMachine::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x56d3000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ArcadeGame>& GlobalNamespace::ArcadeMachine::__cordl_internal_get_arcadeGame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcadeGame;
}
constexpr ::UnityW<::GlobalNamespace::ArcadeGame> const& GlobalNamespace::ArcadeMachine::__cordl_internal_get_arcadeGame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcadeGame;
}
constexpr void GlobalNamespace::ArcadeMachine::__cordl_internal_set_arcadeGame(::UnityW<::GlobalNamespace::ArcadeGame>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arcadeGame = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ArcadeMachineJoystick>>& GlobalNamespace::ArcadeMachine::__cordl_internal_get_sticks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sticks;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ArcadeMachineJoystick>> const& GlobalNamespace::ArcadeMachine::__cordl_internal_get_sticks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sticks;
}
constexpr void GlobalNamespace::ArcadeMachine::__cordl_internal_set_sticks(::ArrayW<::UnityW<::GlobalNamespace::ArcadeMachineJoystick>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sticks = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::ArcadeMachine::__cordl_internal_get_screen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screen;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::ArcadeMachine::__cordl_internal_get_screen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screen;
}
constexpr void GlobalNamespace::ArcadeMachine::__cordl_internal_set_screen(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screen = value;
}
constexpr bool& GlobalNamespace::ArcadeMachine::__cordl_internal_get_networkSynchronized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSynchronized;
}
constexpr bool const& GlobalNamespace::ArcadeMachine::__cordl_internal_get_networkSynchronized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSynchronized;
}
constexpr void GlobalNamespace::ArcadeMachine::__cordl_internal_set_networkSynchronized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkSynchronized = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::ArcadeMachine::__cordl_internal_get_soundCallLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundCallLimit;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::ArcadeMachine::__cordl_internal_get_soundCallLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundCallLimit;
}
constexpr void GlobalNamespace::ArcadeMachine::__cordl_internal_set_soundCallLimit(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundCallLimit = value;
}
constexpr int32_t& GlobalNamespace::ArcadeMachine::__cordl_internal_get_buttonsStateValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonsStateValue;
}
constexpr int32_t const& GlobalNamespace::ArcadeMachine::__cordl_internal_get_buttonsStateValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonsStateValue;
}
constexpr void GlobalNamespace::ArcadeMachine::__cordl_internal_set_buttonsStateValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonsStateValue = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::ArcadeMachine::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::ArcadeMachine::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::ArcadeMachine::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr int32_t& GlobalNamespace::ArcadeMachine::__cordl_internal_get_audioSourcePriority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourcePriority;
}
constexpr int32_t const& GlobalNamespace::ArcadeMachine::__cordl_internal_get_audioSourcePriority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourcePriority;
}
constexpr void GlobalNamespace::ArcadeMachine::__cordl_internal_set_audioSourcePriority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSourcePriority = value;
}
constexpr ::UnityW<::GlobalNamespace::ArcadeGame>& GlobalNamespace::ArcadeMachine::__cordl_internal_get_arcadeGameInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcadeGameInstance;
}
constexpr ::UnityW<::GlobalNamespace::ArcadeGame> const& GlobalNamespace::ArcadeMachine::__cordl_internal_get_arcadeGameInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arcadeGameInstance;
}
constexpr void GlobalNamespace::ArcadeMachine::__cordl_internal_set_arcadeGameInstance(::UnityW<::GlobalNamespace::ArcadeGame>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arcadeGameInstance = value;
}
constexpr ::ArrayW<::Photon::Realtime::Player*>& GlobalNamespace::ArcadeMachine::__cordl_internal_get_playersPerJoystick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersPerJoystick;
}
constexpr ::ArrayW<::Photon::Realtime::Player*> const& GlobalNamespace::ArcadeMachine::__cordl_internal_get_playersPerJoystick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersPerJoystick;
}
constexpr void GlobalNamespace::ArcadeMachine::__cordl_internal_set_playersPerJoystick(::ArrayW<::Photon::Realtime::Player*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersPerJoystick = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::ArcadeMachine::__cordl_internal_get_playerIdleTimeouts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIdleTimeouts;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::ArcadeMachine::__cordl_internal_get_playerIdleTimeouts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerIdleTimeouts;
}
constexpr void GlobalNamespace::ArcadeMachine::__cordl_internal_set_playerIdleTimeouts(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerIdleTimeouts = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::ArcadeMachine::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::ArcadeMachine::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GlobalNamespace::ArcadeMachine::__cordl_internal_set__Data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GlobalNamespace::ArcadeMachine::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachine::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachine::PlaySound(int32_t  soundId, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"PlaySound", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, soundId, priority);
}
inline bool GlobalNamespace::ArcadeMachine::IsPlayerLocallyControlled(int32_t  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"IsPlayerLocallyControlled", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::ArcadeMachine::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachine::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachine::ArcadeGameInstance_OnPlaySound_RPC(int32_t  id, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"ArcadeGameInstance_OnPlaySound_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, info);
}
inline void GlobalNamespace::ArcadeMachine::OnJoystickStateChange(int32_t  player, ::GlobalNamespace::ArcadeButtons  buttons)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"OnJoystickStateChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ArcadeButtons>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, buttons);
}
inline bool GlobalNamespace::ArcadeMachine::IsControllerInUse(int32_t  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"IsControllerInUse", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline ::Fusion::NetworkArray_1<uint8_t> GlobalNamespace::ArcadeMachine::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<uint8_t>>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachine::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachine::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachine::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::ArcadeMachine::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::ArcadeMachine::ReadPlayerDataPUN(int32_t  player, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"ReadPlayerDataPUN", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, stream, info);
}
inline void GlobalNamespace::ArcadeMachine::WritePlayerDataPUN(int32_t  player, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {"WritePlayerDataPUN", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, stream, info);
}
inline void GlobalNamespace::ArcadeMachine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachine::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::ArcadeMachine::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachine*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArcadeMachine* GlobalNamespace::ArcadeMachine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArcadeMachine*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArcadeMachine::ArcadeMachine()   {
}
