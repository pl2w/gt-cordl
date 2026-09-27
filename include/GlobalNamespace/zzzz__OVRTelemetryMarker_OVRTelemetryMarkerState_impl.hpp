#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetryMarker_OVRTelemetryMarkerState.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_ResultType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_OVRTelemetryMarkerState_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_ResultType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState.get_Sent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::*)()>(&::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::get_Sent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa64cb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState>(),
                        {"get_Sent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState.set_Sent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::*)(bool)>(&::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::set_Sent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa64cb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState>(),
                        {"set_Sent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState.get_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Qpl_OVRPlugin_ResultType (::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::*)()>(&::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa64cb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState>(),
                        {"get_Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState.set_Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::*)(::GlobalNamespace::Qpl_OVRPlugin_ResultType)>(&::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::set_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa64cb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState>(),
                        {"set_Result", {}, {::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_ResultType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::*)(bool, ::GlobalNamespace::Qpl_OVRPlugin_ResultType)>(&::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa64bfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_ResultType>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::get_Sent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState>(),
                        {"get_Sent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::set_Sent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState>(),
                        {"set_Sent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::Qpl_OVRPlugin_ResultType GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::get_Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState>(),
                        {"get_Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Qpl_OVRPlugin_ResultType>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::set_Result(::GlobalNamespace::Qpl_OVRPlugin_ResultType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState>(),
                        {"set_Result", {}, {::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_ResultType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::_ctor(bool  sent, ::GlobalNamespace::Qpl_OVRPlugin_ResultType  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_ResultType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sent, result);
}
// Ctor Parameters [CppParam { name: "_Sent_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Result_k__BackingField", ty: "::GlobalNamespace::Qpl_OVRPlugin_ResultType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::OVRTelemetryMarker_OVRTelemetryMarkerState(bool  _Sent_k__BackingField, ::GlobalNamespace::Qpl_OVRPlugin_ResultType  _Result_k__BackingField) noexcept  {
this->_Sent_k__BackingField = _Sent_k__BackingField;
this->_Result_k__BackingField = _Result_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState::OVRTelemetryMarker_OVRTelemetryMarkerState()   {
}
