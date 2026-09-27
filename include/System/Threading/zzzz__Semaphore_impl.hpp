#pragma once
// IWYU pragma private; include "System/Threading/Semaphore.hpp"
#include "System/Threading/zzzz__WaitHandle_impl.hpp"
#include "System/Threading/zzzz__Semaphore_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Threading::Semaphore.CreateSemaphore_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t, int32_t, ::StringW, ::by_ref<int32_t>)>(&::System::Threading::Semaphore::CreateSemaphore_internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xad07cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Semaphore*>(),
                        {"CreateSemaphore_internal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Semaphore.CreateSemaphore_icall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t, int32_t, char16_t*, int32_t, ::by_ref<int32_t>)>(&::System::Threading::Semaphore::CreateSemaphore_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad07d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Semaphore*>(),
                        {"CreateSemaphore_icall", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Semaphore.ReleaseSemaphore_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, ::by_ref<int32_t>)>(&::System::Threading::Semaphore::ReleaseSemaphore_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad07d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Semaphore*>(),
                        {"ReleaseSemaphore_internal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr System::Threading::Semaphore::CreateSemaphore_internal(int32_t  initialCount, int32_t  maximumCount, ::StringW  name, ::by_ref<int32_t>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Semaphore*>(),
                        {"CreateSemaphore_internal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, initialCount, maximumCount, name, errorCode);
}
inline ::System::IntPtr System::Threading::Semaphore::CreateSemaphore_icall(int32_t  initialCount, int32_t  maximumCount, char16_t*  name, int32_t  name_length, ::by_ref<int32_t>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Semaphore*>(),
                        {"CreateSemaphore_icall", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, initialCount, maximumCount, name, name_length, errorCode);
}
inline bool System::Threading::Semaphore::ReleaseSemaphore_internal(::System::IntPtr  handle, int32_t  releaseCount, ::by_ref<int32_t>  previousCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Semaphore*>(),
                        {"ReleaseSemaphore_internal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, releaseCount, previousCount);
}
// Ctor Parameters []
constexpr ::System::Threading::Semaphore::Semaphore()   {
}
