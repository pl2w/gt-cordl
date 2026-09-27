#pragma once
// IWYU pragma private; include "System/Threading/Mutex.hpp"
#include "System/Threading/zzzz__WaitHandle_impl.hpp"
#include "System/Threading/zzzz__Mutex_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Threading::Mutex.CreateMutex_icall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(bool, char16_t*, int32_t, ::by_ref<bool>)>(&::System::Threading::Mutex::CreateMutex_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa353ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Mutex*>(),
                        {"CreateMutex_icall", {}, {::i2c::type_of<bool>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Mutex.ReleaseMutex_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::System::Threading::Mutex::ReleaseMutex_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa353ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Mutex*>(),
                        {"ReleaseMutex_internal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Mutex.CreateMutex_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(bool, ::StringW, ::by_ref<bool>)>(&::System::Threading::Mutex::CreateMutex_internal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa353eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Mutex*>(),
                        {"CreateMutex_internal", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Mutex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Mutex::*)()>(&::System::Threading::Mutex::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa353ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Mutex*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Mutex.ReleaseMutex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Mutex::*)()>(&::System::Threading::Mutex::ReleaseMutex)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa353f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Mutex*>(),
                        {"ReleaseMutex", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr System::Threading::Mutex::CreateMutex_icall(bool  initiallyOwned, char16_t*  name, int32_t  name_length, ::by_ref<bool>  created)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Mutex*>(),
                        {"CreateMutex_icall", {}, {::i2c::type_of<bool>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, initiallyOwned, name, name_length, created);
}
inline bool System::Threading::Mutex::ReleaseMutex_internal(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Mutex*>(),
                        {"ReleaseMutex_internal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr System::Threading::Mutex::CreateMutex_internal(bool  initiallyOwned, ::StringW  name, ::by_ref<bool>  created)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Mutex*>(),
                        {"CreateMutex_internal", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, initiallyOwned, name, created);
}
inline void System::Threading::Mutex::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Mutex*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Mutex::ReleaseMutex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Mutex*>(),
                        {"ReleaseMutex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)1)]
inline ::System::Threading::Mutex* System::Threading::Mutex::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Mutex*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Mutex::Mutex()   {
}
