#pragma once
// IWYU pragma private; include "Backtrace/Unity/Extensions/StreamExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Extensions/zzzz__StreamExtensions_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Extensions::StreamExtensions.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*)>(&::Backtrace::Unity::Extensions::StreamExtensions::CopyTo)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5f25a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::StreamExtensions*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Extensions::StreamExtensions::CopyTo(::System::IO::Stream*  original, ::System::IO::Stream*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Extensions::StreamExtensions*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, original, destination);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Extensions::StreamExtensions::StreamExtensions()   {
}
