#pragma once
// IWYU pragma private; include "GlobalNamespace/BeeSwarmData.hpp"
#include "GlobalNamespace/zzzz__BeeSwarmData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmData.get_TargetActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeeSwarmData::*)()>(&::GlobalNamespace::BeeSwarmData::get_TargetActorNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56109bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {"get_TargetActorNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmData.set_TargetActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmData::*)(int32_t)>(&::GlobalNamespace::BeeSwarmData::set_TargetActorNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56109c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {"set_TargetActorNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmData.get_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeeSwarmData::*)()>(&::GlobalNamespace::BeeSwarmData::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56109cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {"get_CurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmData.set_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmData::*)(int32_t)>(&::GlobalNamespace::BeeSwarmData::set_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56109d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {"set_CurrentState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmData.get_CurrentSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeeSwarmData::*)()>(&::GlobalNamespace::BeeSwarmData::get_CurrentSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56109dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {"get_CurrentSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmData.set_CurrentSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmData::*)(float_t)>(&::GlobalNamespace::BeeSwarmData::set_CurrentSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56109e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {"set_CurrentSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmData::*)(int32_t, int32_t, float_t)>(&::GlobalNamespace::BeeSwarmData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56109ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BeeSwarmData::__cordl_internal_get__TargetActorNumber_k__BackingField()  {
return this->____TargetActorNumber_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeeSwarmData::__cordl_internal_get__TargetActorNumber_k__BackingField() const {
return this->____TargetActorNumber_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmData::__cordl_internal_set__TargetActorNumber_k__BackingField(int32_t  value)  {
this->____TargetActorNumber_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeeSwarmData::__cordl_internal_get__CurrentState_k__BackingField()  {
return this->____CurrentState_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeeSwarmData::__cordl_internal_get__CurrentState_k__BackingField() const {
return this->____CurrentState_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmData::__cordl_internal_set__CurrentState_k__BackingField(int32_t  value)  {
this->____CurrentState_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeeSwarmData::__cordl_internal_get__CurrentSpeed_k__BackingField()  {
return this->____CurrentSpeed_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeeSwarmData::__cordl_internal_get__CurrentSpeed_k__BackingField() const {
return this->____CurrentSpeed_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmData::__cordl_internal_set__CurrentSpeed_k__BackingField(float_t  value)  {
this->____CurrentSpeed_k__BackingField = value;
}
inline int32_t GlobalNamespace::BeeSwarmData::get_TargetActorNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {"get_TargetActorNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmData::set_TargetActorNumber(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {"set_TargetActorNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::BeeSwarmData::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {"get_CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmData::set_CurrentState(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {"set_CurrentState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeeSwarmData::get_CurrentSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {"get_CurrentSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmData::set_CurrentSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {"set_CurrentSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::BeeSwarmData::_ctor(int32_t  actorNr, int32_t  state, float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmData>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, actorNr, state, speed);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::BeeSwarmData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::BeeSwarmData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_TargetActorNumber_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CurrentState_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CurrentSpeed_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BeeSwarmData::BeeSwarmData(int32_t  _TargetActorNumber_k__BackingField, int32_t  _CurrentState_k__BackingField, float_t  _CurrentSpeed_k__BackingField) noexcept  {
this->_TargetActorNumber_k__BackingField = _TargetActorNumber_k__BackingField;
this->_CurrentState_k__BackingField = _CurrentState_k__BackingField;
this->_CurrentSpeed_k__BackingField = _CurrentSpeed_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeeSwarmData::BeeSwarmData()   {
}
