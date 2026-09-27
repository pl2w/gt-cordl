#pragma once
// IWYU pragma private; include "GlobalNamespace/HuntData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@20_impl.hpp"
#include "Fusion/zzzz__NetworkBool_impl.hpp"
#include "GlobalNamespace/zzzz__HuntData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HuntData.get_currentHuntedArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<int32_t> (::GlobalNamespace::HuntData::*)()>(&::GlobalNamespace::HuntData::get_currentHuntedArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x579bf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HuntData>(),
                        {"get_currentHuntedArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HuntData.get_currentTargetArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<int32_t> (::GlobalNamespace::HuntData::*)()>(&::GlobalNamespace::HuntData::get_currentTargetArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x579c028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HuntData>(),
                        {"get_currentTargetArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkBool& GlobalNamespace::HuntData::__cordl_internal_get_huntStarted()  {
return this->___huntStarted;
}
constexpr ::Fusion::NetworkBool const& GlobalNamespace::HuntData::__cordl_internal_get_huntStarted() const {
return this->___huntStarted;
}
constexpr void GlobalNamespace::HuntData::__cordl_internal_set_huntStarted(::Fusion::NetworkBool  value)  {
this->___huntStarted = value;
}
constexpr ::Fusion::NetworkBool& GlobalNamespace::HuntData::__cordl_internal_get_waitingToStartNextHuntGame()  {
return this->___waitingToStartNextHuntGame;
}
constexpr ::Fusion::NetworkBool const& GlobalNamespace::HuntData::__cordl_internal_get_waitingToStartNextHuntGame() const {
return this->___waitingToStartNextHuntGame;
}
constexpr void GlobalNamespace::HuntData::__cordl_internal_set_waitingToStartNextHuntGame(::Fusion::NetworkBool  value)  {
this->___waitingToStartNextHuntGame = value;
}
constexpr int32_t& GlobalNamespace::HuntData::__cordl_internal_get_countDownTime()  {
return this->___countDownTime;
}
constexpr int32_t const& GlobalNamespace::HuntData::__cordl_internal_get_countDownTime() const {
return this->___countDownTime;
}
constexpr void GlobalNamespace::HuntData::__cordl_internal_set_countDownTime(int32_t  value)  {
this->___countDownTime = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@20& GlobalNamespace::HuntData::__cordl_internal_get__currentHuntedArray()  {
return this->____currentHuntedArray;
}
constexpr ::Fusion::CodeGen::FixedStorage@20 const& GlobalNamespace::HuntData::__cordl_internal_get__currentHuntedArray() const {
return this->____currentHuntedArray;
}
constexpr void GlobalNamespace::HuntData::__cordl_internal_set__currentHuntedArray(::Fusion::CodeGen::FixedStorage@20  value)  {
this->____currentHuntedArray = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@20& GlobalNamespace::HuntData::__cordl_internal_get__currentTargetArray()  {
return this->____currentTargetArray;
}
constexpr ::Fusion::CodeGen::FixedStorage@20 const& GlobalNamespace::HuntData::__cordl_internal_get__currentTargetArray() const {
return this->____currentTargetArray;
}
constexpr void GlobalNamespace::HuntData::__cordl_internal_set__currentTargetArray(::Fusion::CodeGen::FixedStorage@20  value)  {
this->____currentTargetArray = value;
}
inline ::Fusion::NetworkArray_1<int32_t> GlobalNamespace::HuntData::get_currentHuntedArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HuntData>(),
                        {"get_currentHuntedArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Fusion::NetworkArray_1<int32_t> GlobalNamespace::HuntData::get_currentTargetArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HuntData>(),
                        {"get_currentTargetArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<int32_t>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::HuntData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::HuntData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "huntStarted", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "waitingToStartNextHuntGame", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "countDownTime", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_currentHuntedArray", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_currentTargetArray", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HuntData::HuntData(::Fusion::NetworkBool  huntStarted, ::Fusion::NetworkBool  waitingToStartNextHuntGame, int32_t  countDownTime, ::Fusion::CodeGen::FixedStorage@20  _currentHuntedArray, ::Fusion::CodeGen::FixedStorage@20  _currentTargetArray) noexcept  {
this->huntStarted = huntStarted;
this->waitingToStartNextHuntGame = waitingToStartNextHuntGame;
this->countDownTime = countDownTime;
this->_currentHuntedArray = _currentHuntedArray;
this->_currentTargetArray = _currentTargetArray;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HuntData::HuntData()   {
}
