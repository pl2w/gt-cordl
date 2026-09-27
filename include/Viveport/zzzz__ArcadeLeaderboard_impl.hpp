#pragma once
// IWYU pragma private; include "Viveport/ArcadeLeaderboard.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/zzzz__ArcadeLeaderboard_def.hpp"
//  Writing Method size for method: ::Viveport::ArcadeLeaderboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::ArcadeLeaderboard::*)()>(&::Viveport::ArcadeLeaderboard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4fbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::ArcadeLeaderboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Viveport::ArcadeLeaderboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::ArcadeLeaderboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::ArcadeLeaderboard* Viveport::ArcadeLeaderboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::ArcadeLeaderboard*>());
}
// Ctor Parameters []
constexpr ::Viveport::ArcadeLeaderboard::ArcadeLeaderboard()   {
}
