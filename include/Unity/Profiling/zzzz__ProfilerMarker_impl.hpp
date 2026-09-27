#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarker.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_AutoScope_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::ProfilerMarker::*)(::StringW)>(&::Unity::Profiling::ProfilerMarker::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb55cf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerMarker>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::ProfilerMarker::*)(::Unity::Profiling::ProfilerCategory, ::StringW)>(&::Unity::Profiling::ProfilerMarker::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb55d0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerMarker>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarker.Auto
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProfilerMarker_AutoScope (::Unity::Profiling::ProfilerMarker::*)()>(&::Unity::Profiling::ProfilerMarker::Auto)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb55d0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerMarker>(),
                        {"Auto", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Profiling::ProfilerMarker::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerMarker>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline void Unity::Profiling::ProfilerMarker::_ctor(::Unity::Profiling::ProfilerCategory  category, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerMarker>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, category, name);
}
inline ::GlobalNamespace::ProfilerMarker_AutoScope Unity::Profiling::ProfilerMarker::Auto()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerMarker>(),
                        {"Auto", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProfilerMarker_AutoScope>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Profiling::ProfilerMarker::ProfilerMarker(::System::IntPtr  m_Ptr) noexcept  {
this->m_Ptr = m_Ptr;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerMarker::ProfilerMarker()   {
}
