#pragma once
// IWYU pragma private; include "Steamworks/Packsize.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__Packsize_def.hpp"
#include "Steamworks/zzzz__Packsize_ValvePackingSentinel_t_def.hpp"
//  Writing Method size for method: ::Steamworks::Packsize.Test
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::Packsize::Test)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f32b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::Packsize*>(),
                        {"Test", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::Packsize::Test()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::Packsize*>(),
                        {"Test", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::Packsize::Packsize()   {
}
