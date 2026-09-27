#pragma once
// IWYU pragma private; include "Backtrace/Unity/Runtime/Native/IStartupMinidumpSender.hpp"
#include "Backtrace/Unity/Runtime/Native/zzzz__IStartupMinidumpSender_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceApi_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::IStartupMinidumpSender.SendMinidumpOnStartup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Backtrace::Unity::Runtime::Native::IStartupMinidumpSender::*)(::System::Collections::Generic::ICollection_1<::StringW>*, ::Backtrace::Unity::Interfaces::IBacktraceApi*)>(&::Backtrace::Unity::Runtime::Native::IStartupMinidumpSender::SendMinidumpOnStartup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Runtime::Native::IStartupMinidumpSender*>(),
                    {::i2c::class_of<::Backtrace::Unity::Runtime::Native::IStartupMinidumpSender*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Collections::IEnumerator* Backtrace::Unity::Runtime::Native::IStartupMinidumpSender::SendMinidumpOnStartup(::System::Collections::Generic::ICollection_1<::StringW>*  clientAttachments, ::Backtrace::Unity::Interfaces::IBacktraceApi*  backtraceApi)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Runtime::Native::IStartupMinidumpSender*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, clientAttachments, backtraceApi);
}
