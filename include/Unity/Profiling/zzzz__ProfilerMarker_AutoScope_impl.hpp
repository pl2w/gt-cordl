#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarker_AutoScope.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_AutoScope_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProfilerMarker_AutoScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProfilerMarker_AutoScope::*)(::System::IntPtr)>(&::GlobalNamespace::ProfilerMarker_AutoScope::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb55d130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProfilerMarker_AutoScope>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProfilerMarker_AutoScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProfilerMarker_AutoScope::*)()>(&::GlobalNamespace::ProfilerMarker_AutoScope::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb55d1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProfilerMarker_AutoScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProfilerMarker_AutoScope::_ctor(::System::IntPtr  markerPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProfilerMarker_AutoScope>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, markerPtr);
}
inline void GlobalNamespace::ProfilerMarker_AutoScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProfilerMarker_AutoScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ProfilerMarker_AutoScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ProfilerMarker_AutoScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProfilerMarker_AutoScope::ProfilerMarker_AutoScope(::System::IntPtr  m_Ptr) noexcept  {
this->m_Ptr = m_Ptr;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProfilerMarker_AutoScope::ProfilerMarker_AutoScope()   {
}
