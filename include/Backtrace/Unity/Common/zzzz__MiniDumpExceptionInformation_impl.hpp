#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/MiniDumpExceptionInformation.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Backtrace/Unity/Common/zzzz__MiniDumpExceptionInformation_def.hpp"
#include "Backtrace/Unity/Types/zzzz__MinidumpException_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Common::MiniDumpExceptionInformation.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Common::MiniDumpExceptionInformation (*)(::Backtrace::Unity::Types::MinidumpException)>(&::Backtrace::Unity::Common::MiniDumpExceptionInformation::GetInstance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f26a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MiniDumpExceptionInformation>(),
                        {"GetInstance", {}, {::i2c::type_of<::Backtrace::Unity::Types::MinidumpException>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Backtrace::Unity::Common::MiniDumpExceptionInformation Backtrace::Unity::Common::MiniDumpExceptionInformation::GetInstance(::Backtrace::Unity::Types::MinidumpException  exceptionInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MiniDumpExceptionInformation>(),
                        {"GetInstance", {}, {::i2c::type_of<::Backtrace::Unity::Types::MinidumpException>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Common::MiniDumpExceptionInformation>(nullptr, ___internal_method, exceptionInfo);
}
// Ctor Parameters [CppParam { name: "ThreadId", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ExceptionPointers", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ClientPointers", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Backtrace::Unity::Common::MiniDumpExceptionInformation::MiniDumpExceptionInformation(uint32_t  ThreadId, ::System::IntPtr  ExceptionPointers, bool  ClientPointers) noexcept  {
this->ThreadId = ThreadId;
this->ExceptionPointers = ExceptionPointers;
this->ClientPointers = ClientPointers;
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Common::MiniDumpExceptionInformation::MiniDumpExceptionInformation()   {
}
