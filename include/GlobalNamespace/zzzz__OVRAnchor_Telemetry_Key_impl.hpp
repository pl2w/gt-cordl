#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_Telemetry_Key.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Telemetry_Key_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Telemetry_MarkerId_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t)>(&::GlobalNamespace::Telemetry_OVRAnchor_Key::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa56d540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)(::GlobalNamespace::OVRTelemetryMarker, uint64_t)>(&::GlobalNamespace::Telemetry_OVRAnchor_Key::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa56d450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)(::GlobalNamespace::Telemetry_OVRAnchor_Key)>(&::GlobalNamespace::Telemetry_OVRAnchor_Key::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa56d7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)(::System::Object*)>(&::GlobalNamespace::Telemetry_OVRAnchor_Key::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa56d804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(),
                    {::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)()>(&::GlobalNamespace::Telemetry_OVRAnchor_Key::GetHashCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa56d88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(),
                    {::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(), 2}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Telemetry_OVRAnchor_Key::_ctor(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, markerId, requestId);
}
inline void GlobalNamespace::Telemetry_OVRAnchor_Key::_ctor(::GlobalNamespace::OVRTelemetryMarker  marker, uint64_t  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, marker, requestId);
}
inline bool GlobalNamespace::Telemetry_OVRAnchor_Key::Equals(::GlobalNamespace::Telemetry_OVRAnchor_Key  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::Telemetry_OVRAnchor_Key::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::Telemetry_OVRAnchor_Key::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>"
constexpr  GlobalNamespace::Telemetry_OVRAnchor_Key::operator ::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>"
constexpr ::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>* GlobalNamespace::Telemetry_OVRAnchor_Key::i___System__IEquatable_1___GlobalNamespace__Telemetry_OVRAnchor_Key_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_markerId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_requestId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_Key::Telemetry_OVRAnchor_Key(int32_t  _markerId, uint64_t  _requestId) noexcept  {
this->_markerId = _markerId;
this->_requestId = _requestId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_Key::Telemetry_OVRAnchor_Key()   {
}
