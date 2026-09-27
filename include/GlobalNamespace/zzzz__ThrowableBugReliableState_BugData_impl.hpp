#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableBugReliableState_BugData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@3_impl.hpp"
#include "GlobalNamespace/zzzz__ThrowableBugReliableState_BugData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState_BugData.get_tDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::ThrowableBugReliableState_BugData::*)()>(&::GlobalNamespace::ThrowableBugReliableState_BugData::get_tDirection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b34350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState_BugData>(),
                        {"get_tDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState_BugData.set_tDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugReliableState_BugData::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ThrowableBugReliableState_BugData::set_tDirection)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b347a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState_BugData>(),
                        {"set_tDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableBugReliableState_BugData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableBugReliableState_BugData::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ThrowableBugReliableState_BugData::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b3429c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState_BugData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::CodeGen::FixedStorage@3& GlobalNamespace::ThrowableBugReliableState_BugData::__cordl_internal_get__tDirection()  {
return this->____tDirection;
}
constexpr ::Fusion::CodeGen::FixedStorage@3 const& GlobalNamespace::ThrowableBugReliableState_BugData::__cordl_internal_get__tDirection() const {
return this->____tDirection;
}
constexpr void GlobalNamespace::ThrowableBugReliableState_BugData::__cordl_internal_set__tDirection(::Fusion::CodeGen::FixedStorage@3  value)  {
this->____tDirection = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::ThrowableBugReliableState_BugData::get_tDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState_BugData>(),
                        {"get_tDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void GlobalNamespace::ThrowableBugReliableState_BugData::set_tDirection(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState_BugData>(),
                        {"set_tDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::ThrowableBugReliableState_BugData::_ctor(::UnityEngine::Vector3  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableBugReliableState_BugData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dir);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::ThrowableBugReliableState_BugData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::ThrowableBugReliableState_BugData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_tDirection", ty: "::Fusion::CodeGen::FixedStorage@3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ThrowableBugReliableState_BugData::ThrowableBugReliableState_BugData(::Fusion::CodeGen::FixedStorage@3  _tDirection) noexcept  {
this->_tDirection = _tDirection;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThrowableBugReliableState_BugData::ThrowableBugReliableState_BugData()   {
}
