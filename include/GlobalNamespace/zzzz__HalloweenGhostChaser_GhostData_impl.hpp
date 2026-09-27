#pragma once
// IWYU pragma private; include "GlobalNamespace/HalloweenGhostChaser_GhostData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@1_impl.hpp"
#include "Fusion/zzzz__NetworkBool_impl.hpp"
#include "GlobalNamespace/zzzz__HalloweenGhostChaser_GhostData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser_GhostData.get_CurrentSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::HalloweenGhostChaser_GhostData::*)()>(&::GlobalNamespace::HalloweenGhostChaser_GhostData::get_CurrentSpeed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x594ee5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser_GhostData>(),
                        {"get_CurrentSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser_GhostData.set_CurrentSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser_GhostData::*)(float_t)>(&::GlobalNamespace::HalloweenGhostChaser_GhostData::set_CurrentSpeed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x594ee98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser_GhostData>(),
                        {"set_CurrentSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_get_TargetActorNumber()  {
return this->___TargetActorNumber;
}
constexpr int32_t const& GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_get_TargetActorNumber() const {
return this->___TargetActorNumber;
}
constexpr void GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_set_TargetActorNumber(int32_t  value)  {
this->___TargetActorNumber = value;
}
constexpr int32_t& GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_get_CurrentState()  {
return this->___CurrentState;
}
constexpr int32_t const& GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_get_CurrentState() const {
return this->___CurrentState;
}
constexpr void GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_set_CurrentState(int32_t  value)  {
this->___CurrentState = value;
}
constexpr int32_t& GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_get_SpawnIndex()  {
return this->___SpawnIndex;
}
constexpr int32_t const& GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_get_SpawnIndex() const {
return this->___SpawnIndex;
}
constexpr void GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_set_SpawnIndex(int32_t  value)  {
this->___SpawnIndex = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@1& GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_get__CurrentSpeed()  {
return this->____CurrentSpeed;
}
constexpr ::Fusion::CodeGen::FixedStorage@1 const& GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_get__CurrentSpeed() const {
return this->____CurrentSpeed;
}
constexpr void GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_set__CurrentSpeed(::Fusion::CodeGen::FixedStorage@1  value)  {
this->____CurrentSpeed = value;
}
constexpr ::Fusion::NetworkBool& GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_get_IsSummoned()  {
return this->___IsSummoned;
}
constexpr ::Fusion::NetworkBool const& GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_get_IsSummoned() const {
return this->___IsSummoned;
}
constexpr void GlobalNamespace::HalloweenGhostChaser_GhostData::__cordl_internal_set_IsSummoned(::Fusion::NetworkBool  value)  {
this->___IsSummoned = value;
}
inline float_t GlobalNamespace::HalloweenGhostChaser_GhostData::get_CurrentSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser_GhostData>(),
                        {"get_CurrentSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser_GhostData::set_CurrentSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser_GhostData>(),
                        {"set_CurrentSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::HalloweenGhostChaser_GhostData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::HalloweenGhostChaser_GhostData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TargetActorNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CurrentState", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SpawnIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CurrentSpeed", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsSummoned", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HalloweenGhostChaser_GhostData::HalloweenGhostChaser_GhostData(int32_t  TargetActorNumber, int32_t  CurrentState, int32_t  SpawnIndex, ::Fusion::CodeGen::FixedStorage@1  _CurrentSpeed, ::Fusion::NetworkBool  IsSummoned) noexcept  {
this->TargetActorNumber = TargetActorNumber;
this->CurrentState = CurrentState;
this->SpawnIndex = SpawnIndex;
this->_CurrentSpeed = _CurrentSpeed;
this->IsSummoned = IsSummoned;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HalloweenGhostChaser_GhostData::HalloweenGhostChaser_GhostData()   {
}
