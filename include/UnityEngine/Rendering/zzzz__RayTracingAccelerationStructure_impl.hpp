#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingAccelerationStructure.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_BuildSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)()>(&::UnityEngine::Rendering::RayTracingAccelerationStructure::Dispose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb607f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingAccelerationStructure::*)(bool)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb607fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure::Destroy)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb608018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure.Destroy_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure::Destroy_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb608060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                        {"Destroy_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Rendering::RayTracingAccelerationStructure::__cordl_internal_get_m_Ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::Rendering::RayTracingAccelerationStructure::__cordl_internal_get_m_Ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr void UnityEngine::Rendering::RayTracingAccelerationStructure::__cordl_internal_set_m_Ptr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ptr = value;
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::Destroy(::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelStruct)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, accelStruct);
}
inline void UnityEngine::Rendering::RayTracingAccelerationStructure::Destroy_Injected(::System::IntPtr  accelStruct)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(),
                        {"Destroy_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, accelStruct);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Rendering::RayTracingAccelerationStructure::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RayTracingAccelerationStructure::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure::RayTracingAccelerationStructure()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Rendering::RayTracingAccelerationStructure*)>(&::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb60810c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller::ConvertToNative(::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Rendering::RayTracingAccelerationStructure*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, rayTracingAccelerationStructure);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller::RayTracingAccelerationStructure_BindingsMarshaller()   {
}
