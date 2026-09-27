#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetry_MarkerPoint.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetry_MarkerPoint_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_MarkerPoint.get_NameHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRTelemetry_MarkerPoint::*)()>(&::GlobalNamespace::OVRTelemetry_MarkerPoint::get_NameHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa64b994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>(),
                        {"get_NameHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_MarkerPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_MarkerPoint::*)(::StringW)>(&::GlobalNamespace::OVRTelemetry_MarkerPoint::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa64b99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_MarkerPoint.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_MarkerPoint::*)()>(&::GlobalNamespace::OVRTelemetry_MarkerPoint::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa64ba24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::OVRTelemetry_MarkerPoint::get_NameHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>(),
                        {"get_NameHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTelemetry_MarkerPoint::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline void GlobalNamespace::OVRTelemetry_MarkerPoint::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::OVRTelemetry_MarkerPoint::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRTelemetry_MarkerPoint::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_NameHandle_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRTelemetry_MarkerPoint::OVRTelemetry_MarkerPoint(int32_t  _NameHandle_k__BackingField) noexcept  {
this->_NameHandle_k__BackingField = _NameHandle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetry_MarkerPoint::OVRTelemetry_MarkerPoint()   {
}
