#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcadeMachineJoystickNetworkState.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__ArcadeMachineJoystickNetworkState_def.hpp"
#include "GlobalNamespace/zzzz__ArcadeMachineJoystick_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystickNetworkState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystickNetworkState::*)()>(&::GlobalNamespace::ArcadeMachineJoystickNetworkState::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x55e5a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystickNetworkState.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystickNetworkState::*)()>(&::GlobalNamespace::ArcadeMachineJoystickNetworkState::ReadDataFusion)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x55e5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystickNetworkState.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystickNetworkState::*)()>(&::GlobalNamespace::ArcadeMachineJoystickNetworkState::WriteDataFusion)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x55e5b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystickNetworkState.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystickNetworkState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArcadeMachineJoystickNetworkState::ReadDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e5b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystickNetworkState.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystickNetworkState::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::ArcadeMachineJoystickNetworkState::WriteDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e5b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystickNetworkState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystickNetworkState::*)()>(&::GlobalNamespace::ArcadeMachineJoystickNetworkState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e5b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystickNetworkState.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystickNetworkState::*)(bool)>(&::GlobalNamespace::ArcadeMachineJoystickNetworkState::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e5b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcadeMachineJoystickNetworkState.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ArcadeMachineJoystickNetworkState::*)()>(&::GlobalNamespace::ArcadeMachineJoystickNetworkState::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e5b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(),
                    {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ArcadeMachineJoystick>& GlobalNamespace::ArcadeMachineJoystickNetworkState::__cordl_internal_get_joystick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystick;
}
constexpr ::UnityW<::GlobalNamespace::ArcadeMachineJoystick> const& GlobalNamespace::ArcadeMachineJoystickNetworkState::__cordl_internal_get_joystick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystick;
}
constexpr void GlobalNamespace::ArcadeMachineJoystickNetworkState::__cordl_internal_set_joystick(::UnityW<::GlobalNamespace::ArcadeMachineJoystick>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystick = value;
}
inline void GlobalNamespace::ArcadeMachineJoystickNetworkState::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystickNetworkState::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystickNetworkState::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystickNetworkState::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::ArcadeMachineJoystickNetworkState::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::ArcadeMachineJoystickNetworkState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ArcadeMachineJoystickNetworkState::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::ArcadeMachineJoystickNetworkState::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ArcadeMachineJoystickNetworkState* GlobalNamespace::ArcadeMachineJoystickNetworkState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ArcadeMachineJoystickNetworkState*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArcadeMachineJoystickNetworkState::ArcadeMachineJoystickNetworkState()   {
}
