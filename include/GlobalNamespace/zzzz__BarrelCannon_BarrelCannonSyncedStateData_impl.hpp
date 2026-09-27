#pragma once
// IWYU pragma private; include "GlobalNamespace/BarrelCannon_BarrelCannonSyncedStateData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@1_impl.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_BarrelCannonSyncedStateData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_BarrelCannonState_def.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData.get_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BarrelCannon_BarrelCannonState (::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::*)()>(&::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::get_CurrentState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c00e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"get_CurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData.set_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::*)(::GlobalNamespace::BarrelCannon_BarrelCannonState)>(&::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::set_CurrentState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c01278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::GlobalNamespace::BarrelCannon_BarrelCannonState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData.get_HasAuthorityPassenger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBool (::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::*)()>(&::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::get_HasAuthorityPassenger)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c00ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"get_HasAuthorityPassenger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData.set_HasAuthorityPassenger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::*)(::Fusion::NetworkBool)>(&::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::set_HasAuthorityPassenger)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c012b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"set_HasAuthorityPassenger", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData.get_FiringPositionLerpValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::*)()>(&::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::get_FiringPositionLerpValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c012f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"get_FiringPositionLerpValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData.set_FiringPositionLerpValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::*)(float_t)>(&::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::set_FiringPositionLerpValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c01300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"set_FiringPositionLerpValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::*)(::GlobalNamespace::BarrelCannon_BarrelCannonState, bool, float_t)>(&::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c01308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::BarrelCannon_BarrelCannonState>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData.op_Implicit___GlobalNamespace__BarrelCannon_BarrelCannonSyncedStateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData (*)(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*)>(&::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::op_Implicit___GlobalNamespace__BarrelCannon_BarrelCannonSyncedStateData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c00d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::CodeGen::FixedStorage@1& GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::__cordl_internal_get__CurrentState()  {
return this->____CurrentState;
}
constexpr ::Fusion::CodeGen::FixedStorage@1 const& GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::__cordl_internal_get__CurrentState() const {
return this->____CurrentState;
}
constexpr void GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::__cordl_internal_set__CurrentState(::Fusion::CodeGen::FixedStorage@1  value)  {
this->____CurrentState = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@1& GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::__cordl_internal_get__HasAuthorityPassenger()  {
return this->____HasAuthorityPassenger;
}
constexpr ::Fusion::CodeGen::FixedStorage@1 const& GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::__cordl_internal_get__HasAuthorityPassenger() const {
return this->____HasAuthorityPassenger;
}
constexpr void GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::__cordl_internal_set__HasAuthorityPassenger(::Fusion::CodeGen::FixedStorage@1  value)  {
this->____HasAuthorityPassenger = value;
}
constexpr float_t& GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::__cordl_internal_get__FiringPositionLerpValue_k__BackingField()  {
return this->____FiringPositionLerpValue_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::__cordl_internal_get__FiringPositionLerpValue_k__BackingField() const {
return this->____FiringPositionLerpValue_k__BackingField;
}
constexpr void GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::__cordl_internal_set__FiringPositionLerpValue_k__BackingField(float_t  value)  {
this->____FiringPositionLerpValue_k__BackingField = value;
}
inline ::GlobalNamespace::BarrelCannon_BarrelCannonState GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"get_CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BarrelCannon_BarrelCannonState>(*this, ___internal_method);
}
inline void GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::set_CurrentState(::GlobalNamespace::BarrelCannon_BarrelCannonState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::GlobalNamespace::BarrelCannon_BarrelCannonState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::NetworkBool GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::get_HasAuthorityPassenger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"get_HasAuthorityPassenger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBool>(*this, ___internal_method);
}
inline void GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::set_HasAuthorityPassenger(::Fusion::NetworkBool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"set_HasAuthorityPassenger", {}, {::i2c::type_of<::Fusion::NetworkBool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::get_FiringPositionLerpValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"get_FiringPositionLerpValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::set_FiringPositionLerpValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"set_FiringPositionLerpValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::_ctor(::GlobalNamespace::BarrelCannon_BarrelCannonState  state, bool  hasAuthPassenger, float_t  firingPosLerpVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::BarrelCannon_BarrelCannonState>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state, hasAuthPassenger, firingPosLerpVal);
}
inline ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::op_Implicit___GlobalNamespace__BarrelCannon_BarrelCannonSyncedStateData(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(nullptr, ___internal_method, state);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_CurrentState", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_HasAuthorityPassenger", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_FiringPositionLerpValue_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::BarrelCannon_BarrelCannonSyncedStateData(::Fusion::CodeGen::FixedStorage@1  _CurrentState, ::Fusion::CodeGen::FixedStorage@1  _HasAuthorityPassenger, float_t  _FiringPositionLerpValue_k__BackingField) noexcept  {
this->_CurrentState = _CurrentState;
this->_HasAuthorityPassenger = _HasAuthorityPassenger;
this->_FiringPositionLerpValue_k__BackingField = _FiringPositionLerpValue_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData::BarrelCannon_BarrelCannonSyncedStateData()   {
}
