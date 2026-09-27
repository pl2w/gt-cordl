#pragma once
// IWYU pragma private; include "Modio/Extensions/DateTimeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Extensions/zzzz__DateTimeExtensions_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Modio::Extensions::DateTimeExtensions.GetUtcDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t)>(&::Modio::Extensions::DateTimeExtensions::GetUtcDateTime)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa054c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Extensions::DateTimeExtensions*>(),
                        {"GetUtcDateTime", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::DateTime Modio::Extensions::DateTimeExtensions::GetUtcDateTime(int64_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Extensions::DateTimeExtensions*>(),
                        {"GetUtcDateTime", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, timeStamp);
}
// Ctor Parameters []
constexpr ::Modio::Extensions::DateTimeExtensions::DateTimeExtensions()   {
}
