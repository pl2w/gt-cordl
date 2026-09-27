#pragma once
// IWYU pragma private; include "Backtrace/Unity/Extensions/ThreadExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Extensions/zzzz__ThreadExtensions_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Extensions::ThreadExtensions.GenerateValidThreadName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Threading::Thread*)>(&::Backtrace::Unity::Extensions::ThreadExtensions::GenerateValidThreadName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f1afe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::ThreadExtensions*>(),
                        {"GenerateValidThreadName", {}, {::i2c::type_of<::System::Threading::Thread*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Backtrace::Unity::Extensions::ThreadExtensions::GenerateValidThreadName(::System::Threading::Thread*  thread)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::ThreadExtensions*>(),
                        {"GenerateValidThreadName", {}, {::i2c::type_of<::System::Threading::Thread*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, thread);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Extensions::ThreadExtensions::ThreadExtensions()   {
}
