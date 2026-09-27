#pragma once
// IWYU pragma private; include "System/Threading/ReaderWriterLockSlim_TimeoutTracker.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_TimeoutTracker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker::*)(int32_t)>(&::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa8ca7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker.get_RemainingMilliseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker::*)()>(&::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker::get_RemainingMilliseconds)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa8cbae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker>(),
                        {"get_RemainingMilliseconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker.get_IsExpired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker::*)()>(&::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker::get_IsExpired)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa8cabe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker>(),
                        {"get_IsExpired", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker::_ctor(int32_t  millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, millisecondsTimeout);
}
inline int32_t GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker::get_RemainingMilliseconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker>(),
                        {"get_RemainingMilliseconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker::get_IsExpired()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker>(),
                        {"get_IsExpired", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_total", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_start", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker::ReaderWriterLockSlim_TimeoutTracker(int32_t  m_total, int32_t  m_start) noexcept  {
this->m_total = m_total;
this->m_start = m_start;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker::ReaderWriterLockSlim_TimeoutTracker()   {
}
