#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentManager_ScienceManagerData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@10_impl.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@18_impl.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_ScienceManagerData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
#include "Fusion/zzzz__NetworkLinkedList_1_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_PlayerGameState_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_RotatingRingState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData.get_playerIdArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<int32_t> (::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::*)()>(&::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::get_playerIdArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d31778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>(),
                        {"get_playerIdArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData.get_touchedLiquidArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<bool> (::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::*)()>(&::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::get_touchedLiquidArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d31858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>(),
                        {"get_touchedLiquidArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData.get_touchedLiquidAtProgressArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<float_t> (::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::*)()>(&::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::get_touchedLiquidAtProgressArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d31938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>(),
                        {"get_touchedLiquidAtProgressArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData.get_initialAngleArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkLinkedList_1<float_t> (::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::*)()>(&::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::get_initialAngleArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d31a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>(),
                        {"get_initialAngleArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData.get_resultingAngleArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkLinkedList_1<float_t> (::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::*)()>(&::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::get_resultingAngleArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d31af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>(),
                        {"get_resultingAngleArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::*)(int32_t, double_t, float_t, double_t, int32_t, float_t, int32_t, int32_t, ::ArrayW<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>, ::ArrayW<::GlobalNamespace::ScienceExperimentManager_RotatingRingState>)>(&::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::_ctor)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5d31bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ScienceExperimentManager_RotatingRingState>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_reliableState()  {
return this->___reliableState;
}
constexpr int32_t const& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_reliableState() const {
return this->___reliableState;
}
constexpr void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_set_reliableState(int32_t  value)  {
this->___reliableState = value;
}
constexpr double_t& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_stateStartTime()  {
return this->___stateStartTime;
}
constexpr double_t const& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_stateStartTime() const {
return this->___stateStartTime;
}
constexpr void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_set_stateStartTime(double_t  value)  {
this->___stateStartTime = value;
}
constexpr float_t& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_stateStartLiquidProgressLinear()  {
return this->___stateStartLiquidProgressLinear;
}
constexpr float_t const& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_stateStartLiquidProgressLinear() const {
return this->___stateStartLiquidProgressLinear;
}
constexpr void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_set_stateStartLiquidProgressLinear(float_t  value)  {
this->___stateStartLiquidProgressLinear = value;
}
constexpr double_t& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_activationProgress()  {
return this->___activationProgress;
}
constexpr double_t const& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_activationProgress() const {
return this->___activationProgress;
}
constexpr void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_set_activationProgress(double_t  value)  {
this->___activationProgress = value;
}
constexpr int32_t& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_nextRoundRiseSpeed()  {
return this->___nextRoundRiseSpeed;
}
constexpr int32_t const& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_nextRoundRiseSpeed() const {
return this->___nextRoundRiseSpeed;
}
constexpr void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_set_nextRoundRiseSpeed(int32_t  value)  {
this->___nextRoundRiseSpeed = value;
}
constexpr float_t& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_riseTime()  {
return this->___riseTime;
}
constexpr float_t const& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_riseTime() const {
return this->___riseTime;
}
constexpr void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_set_riseTime(float_t  value)  {
this->___riseTime = value;
}
constexpr int32_t& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_lastWinnerId()  {
return this->___lastWinnerId;
}
constexpr int32_t const& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_lastWinnerId() const {
return this->___lastWinnerId;
}
constexpr void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_set_lastWinnerId(int32_t  value)  {
this->___lastWinnerId = value;
}
constexpr int32_t& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_inGamePlayerCount()  {
return this->___inGamePlayerCount;
}
constexpr int32_t const& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get_inGamePlayerCount() const {
return this->___inGamePlayerCount;
}
constexpr void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_set_inGamePlayerCount(int32_t  value)  {
this->___inGamePlayerCount = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@10& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get__playerIdArray()  {
return this->____playerIdArray;
}
constexpr ::Fusion::CodeGen::FixedStorage@10 const& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get__playerIdArray() const {
return this->____playerIdArray;
}
constexpr void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_set__playerIdArray(::Fusion::CodeGen::FixedStorage@10  value)  {
this->____playerIdArray = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@10& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get__touchedLiquidArray()  {
return this->____touchedLiquidArray;
}
constexpr ::Fusion::CodeGen::FixedStorage@10 const& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get__touchedLiquidArray() const {
return this->____touchedLiquidArray;
}
constexpr void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_set__touchedLiquidArray(::Fusion::CodeGen::FixedStorage@10  value)  {
this->____touchedLiquidArray = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@10& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get__touchedLiquidAtProgressArray()  {
return this->____touchedLiquidAtProgressArray;
}
constexpr ::Fusion::CodeGen::FixedStorage@10 const& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get__touchedLiquidAtProgressArray() const {
return this->____touchedLiquidAtProgressArray;
}
constexpr void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_set__touchedLiquidAtProgressArray(::Fusion::CodeGen::FixedStorage@10  value)  {
this->____touchedLiquidAtProgressArray = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@18& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get__initialAngleArray()  {
return this->____initialAngleArray;
}
constexpr ::Fusion::CodeGen::FixedStorage@18 const& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get__initialAngleArray() const {
return this->____initialAngleArray;
}
constexpr void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_set__initialAngleArray(::Fusion::CodeGen::FixedStorage@18  value)  {
this->____initialAngleArray = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@18& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get__resultingAngleArray()  {
return this->____resultingAngleArray;
}
constexpr ::Fusion::CodeGen::FixedStorage@18 const& GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_get__resultingAngleArray() const {
return this->____resultingAngleArray;
}
constexpr void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::__cordl_internal_set__resultingAngleArray(::Fusion::CodeGen::FixedStorage@18  value)  {
this->____resultingAngleArray = value;
}
inline ::Fusion::NetworkArray_1<int32_t> GlobalNamespace::ScienceExperimentManager_ScienceManagerData::get_playerIdArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>(),
                        {"get_playerIdArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Fusion::NetworkArray_1<bool> GlobalNamespace::ScienceExperimentManager_ScienceManagerData::get_touchedLiquidArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>(),
                        {"get_touchedLiquidArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<bool>>(*this, ___internal_method);
}
inline ::Fusion::NetworkArray_1<float_t> GlobalNamespace::ScienceExperimentManager_ScienceManagerData::get_touchedLiquidAtProgressArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>(),
                        {"get_touchedLiquidAtProgressArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<float_t>>(*this, ___internal_method);
}
inline ::Fusion::NetworkLinkedList_1<float_t> GlobalNamespace::ScienceExperimentManager_ScienceManagerData::get_initialAngleArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>(),
                        {"get_initialAngleArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkLinkedList_1<float_t>>(*this, ___internal_method);
}
inline ::Fusion::NetworkLinkedList_1<float_t> GlobalNamespace::ScienceExperimentManager_ScienceManagerData::get_resultingAngleArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>(),
                        {"get_resultingAngleArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkLinkedList_1<float_t>>(*this, ___internal_method);
}
inline void GlobalNamespace::ScienceExperimentManager_ScienceManagerData::_ctor(int32_t  reliableState, double_t  stateStartTime, float_t  stateStartLiquidProgressLinear, double_t  activationProgress, int32_t  nextRoundRiseSpeed, float_t  riseTime, int32_t  lastWinnerId, int32_t  inGamePlayerCount, ::ArrayW<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>  playerStates, ::ArrayW<::GlobalNamespace::ScienceExperimentManager_RotatingRingState>  rings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::ScienceExperimentManager_RotatingRingState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reliableState, stateStartTime, stateStartLiquidProgressLinear, activationProgress, nextRoundRiseSpeed, riseTime, lastWinnerId, inGamePlayerCount, playerStates, rings);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::ScienceExperimentManager_ScienceManagerData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::ScienceExperimentManager_ScienceManagerData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "reliableState", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stateStartTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stateStartLiquidProgressLinear", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "activationProgress", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nextRoundRiseSpeed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "riseTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastWinnerId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inGamePlayerCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_playerIdArray", ty: "::Fusion::CodeGen::FixedStorage@10", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_touchedLiquidArray", ty: "::Fusion::CodeGen::FixedStorage@10", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_touchedLiquidAtProgressArray", ty: "::Fusion::CodeGen::FixedStorage@10", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_initialAngleArray", ty: "::Fusion::CodeGen::FixedStorage@18", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_resultingAngleArray", ty: "::Fusion::CodeGen::FixedStorage@18", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::ScienceExperimentManager_ScienceManagerData(int32_t  reliableState, double_t  stateStartTime, float_t  stateStartLiquidProgressLinear, double_t  activationProgress, int32_t  nextRoundRiseSpeed, float_t  riseTime, int32_t  lastWinnerId, int32_t  inGamePlayerCount, ::Fusion::CodeGen::FixedStorage@10  _playerIdArray, ::Fusion::CodeGen::FixedStorage@10  _touchedLiquidArray, ::Fusion::CodeGen::FixedStorage@10  _touchedLiquidAtProgressArray, ::Fusion::CodeGen::FixedStorage@18  _initialAngleArray, ::Fusion::CodeGen::FixedStorage@18  _resultingAngleArray) noexcept  {
this->reliableState = reliableState;
this->stateStartTime = stateStartTime;
this->stateStartLiquidProgressLinear = stateStartLiquidProgressLinear;
this->activationProgress = activationProgress;
this->nextRoundRiseSpeed = nextRoundRiseSpeed;
this->riseTime = riseTime;
this->lastWinnerId = lastWinnerId;
this->inGamePlayerCount = inGamePlayerCount;
this->_playerIdArray = _playerIdArray;
this->_touchedLiquidArray = _touchedLiquidArray;
this->_touchedLiquidAtProgressArray = _touchedLiquidAtProgressArray;
this->_initialAngleArray = _initialAngleArray;
this->_resultingAngleArray = _resultingAngleArray;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData::ScienceExperimentManager_ScienceManagerData()   {
}
