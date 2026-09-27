#pragma once
// IWYU pragma private; include "Steamworks/DllCheck.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__DllCheck_def.hpp"
//  Writing Method size for method: ::Steamworks::DllCheck.Test
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::DllCheck::Test)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f32b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::DllCheck*>(),
                        {"Test", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::DllCheck::Test()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::DllCheck*>(),
                        {"Test", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::DllCheck::DllCheck()   {
}
