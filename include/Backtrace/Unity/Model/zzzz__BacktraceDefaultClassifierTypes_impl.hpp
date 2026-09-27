#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceDefaultClassifierTypes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceDefaultClassifierTypes_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceDefaultClassifierTypes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceDefaultClassifierTypes::*)()>(&::Backtrace::Unity::Model::BacktraceDefaultClassifierTypes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceDefaultClassifierTypes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Model::BacktraceDefaultClassifierTypes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceDefaultClassifierTypes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceDefaultClassifierTypes* Backtrace::Unity::Model::BacktraceDefaultClassifierTypes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceDefaultClassifierTypes*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceDefaultClassifierTypes::BacktraceDefaultClassifierTypes()   {
}
