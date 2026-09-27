#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceStackTrace.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceStackTrace_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceStackFrame_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__StackFrame_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceStackTrace._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceStackTrace::*)(::System::Exception*)>(&::Backtrace::Unity::Model::BacktraceStackTrace::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f124b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackTrace*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceStackTrace.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceStackTrace::*)()>(&::Backtrace::Unity::Model::BacktraceStackTrace::Initialize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f13530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackTrace*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceStackTrace.SetStacktraceInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceStackTrace::*)(::ArrayW<::System::Diagnostics::StackFrame*>, bool)>(&::Backtrace::Unity::Model::BacktraceStackTrace::SetStacktraceInformation)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f13674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackTrace*>(),
                        {"SetStacktraceInformation", {}, {::i2c::type_of<::ArrayW<::System::Diagnostics::StackFrame*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*& Backtrace::Unity::Model::BacktraceStackTrace::__cordl_internal_get_StackFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackFrames;
}
constexpr ::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* const& Backtrace::Unity::Model::BacktraceStackTrace::__cordl_internal_get_StackFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackFrames;
}
constexpr void Backtrace::Unity::Model::BacktraceStackTrace::__cordl_internal_set_StackFrames(::System::Collections::Generic::List_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StackFrames = value;
}
constexpr ::System::Exception*& Backtrace::Unity::Model::BacktraceStackTrace::__cordl_internal_get__exception()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exception;
}
constexpr ::System::Exception* const& Backtrace::Unity::Model::BacktraceStackTrace::__cordl_internal_get__exception() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exception;
}
constexpr void Backtrace::Unity::Model::BacktraceStackTrace::__cordl_internal_set__exception(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exception = value;
}
inline void Backtrace::Unity::Model::BacktraceStackTrace::_ctor(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackTrace*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline void Backtrace::Unity::Model::BacktraceStackTrace::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackTrace*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceStackTrace::SetStacktraceInformation(::ArrayW<::System::Diagnostics::StackFrame*>  frames, bool  generatedByException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceStackTrace*>(),
                        {"SetStacktraceInformation", {}, {::i2c::type_of<::ArrayW<::System::Diagnostics::StackFrame*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frames, generatedByException);
}
inline ::Backtrace::Unity::Model::BacktraceStackTrace* Backtrace::Unity::Model::BacktraceStackTrace::New_ctor(::System::Exception*  exception)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceStackTrace*>(exception));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceStackTrace::BacktraceStackTrace()   {
}
