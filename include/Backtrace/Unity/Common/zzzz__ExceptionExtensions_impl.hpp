#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/ExceptionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Common/zzzz__ExceptionExtensions_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceReport_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Common::ExceptionExtensions.ToBacktraceReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceReport* (*)(::System::Exception*)>(&::Backtrace::Unity::Common::ExceptionExtensions::ToBacktraceReport)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f274ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::ExceptionExtensions*>(),
                        {"ToBacktraceReport", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Backtrace::Unity::Model::BacktraceReport* Backtrace::Unity::Common::ExceptionExtensions::ToBacktraceReport(::System::Exception*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::ExceptionExtensions*>(),
                        {"ToBacktraceReport", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceReport*>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Common::ExceptionExtensions::ExceptionExtensions()   {
}
