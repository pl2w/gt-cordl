#pragma once
// IWYU pragma private; include "Fusion/NetworkCCData.hpp"
#include "Fusion/zzzz__NetworkTRSPData_impl.hpp"
#include "Fusion/zzzz__Vector3Compressed_impl.hpp"
#include "Fusion/zzzz__NetworkCCData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkCCData.get_Grounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkCCData::*)()>(&::Fusion::NetworkCCData::get_Grounded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60ee024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCCData>(),
                        {"get_Grounded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCCData.set_Grounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCCData::*)(bool)>(&::Fusion::NetworkCCData::set_Grounded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60ee034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCCData>(),
                        {"set_Grounded", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCCData.get_Velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::NetworkCCData::*)()>(&::Fusion::NetworkCCData::get_Velocity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60ee040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCCData>(),
                        {"get_Velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCCData.set_Velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCCData::*)(::UnityEngine::Vector3)>(&::Fusion::NetworkCCData::set_Velocity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60ee054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCCData>(),
                        {"set_Velocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkTRSPData& Fusion::NetworkCCData::__cordl_internal_get_TRSPData()  {
return this->___TRSPData;
}
constexpr ::Fusion::NetworkTRSPData const& Fusion::NetworkCCData::__cordl_internal_get_TRSPData() const {
return this->___TRSPData;
}
constexpr void Fusion::NetworkCCData::__cordl_internal_set_TRSPData(::Fusion::NetworkTRSPData  value)  {
this->___TRSPData = value;
}
constexpr int32_t& Fusion::NetworkCCData::__cordl_internal_get__grounded()  {
return this->____grounded;
}
constexpr int32_t const& Fusion::NetworkCCData::__cordl_internal_get__grounded() const {
return this->____grounded;
}
constexpr void Fusion::NetworkCCData::__cordl_internal_set__grounded(int32_t  value)  {
this->____grounded = value;
}
constexpr ::Fusion::Vector3Compressed& Fusion::NetworkCCData::__cordl_internal_get__velocityData()  {
return this->____velocityData;
}
constexpr ::Fusion::Vector3Compressed const& Fusion::NetworkCCData::__cordl_internal_get__velocityData() const {
return this->____velocityData;
}
constexpr void Fusion::NetworkCCData::__cordl_internal_set__velocityData(::Fusion::Vector3Compressed  value)  {
this->____velocityData = value;
}
inline bool Fusion::NetworkCCData::get_Grounded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCCData>(),
                        {"get_Grounded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Fusion::NetworkCCData::set_Grounded(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCCData>(),
                        {"set_Grounded", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Fusion::NetworkCCData::get_Velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCCData>(),
                        {"get_Velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void Fusion::NetworkCCData::set_Velocity(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCCData>(),
                        {"set_Velocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkCCData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkCCData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TRSPData", ty: "::Fusion::NetworkTRSPData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_grounded", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_velocityData", ty: "::Fusion::Vector3Compressed", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkCCData::NetworkCCData(::Fusion::NetworkTRSPData  TRSPData, int32_t  _grounded, ::Fusion::Vector3Compressed  _velocityData) noexcept  {
this->TRSPData = TRSPData;
this->_grounded = _grounded;
this->_velocityData = _velocityData;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkCCData::NetworkCCData()   {
}
