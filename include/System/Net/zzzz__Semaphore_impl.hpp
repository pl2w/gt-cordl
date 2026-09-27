#pragma once
// IWYU pragma private; include "System/Net/Semaphore.hpp"
#include "System/Threading/zzzz__WaitHandle_impl.hpp"
#include "System/Net/zzzz__Semaphore_def.hpp"
//  Writing Method size for method: ::System::Net::Semaphore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Semaphore::*)(int32_t, int32_t)>(&::System::Net::Semaphore::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xac73ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Semaphore*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Semaphore.ReleaseSemaphore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Semaphore::*)()>(&::System::Net::Semaphore::ReleaseSemaphore)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac7414c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Semaphore*>(),
                        {"ReleaseSemaphore", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Semaphore::_ctor(int32_t  initialCount, int32_t  maxCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Semaphore*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialCount, maxCount);
}
inline bool System::Net::Semaphore::ReleaseSemaphore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Semaphore*>(),
                        {"ReleaseSemaphore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::Semaphore* System::Net::Semaphore::New_ctor(int32_t  initialCount, int32_t  maxCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Semaphore*>(initialCount, maxCount));
}
// Ctor Parameters []
constexpr ::System::Net::Semaphore::Semaphore()   {
}
