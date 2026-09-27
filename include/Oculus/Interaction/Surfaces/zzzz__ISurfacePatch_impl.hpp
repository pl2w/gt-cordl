#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/ISurfacePatch.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurfacePatch_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurface_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::ISurfacePatch.get_BackingSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Surfaces::ISurface* (::Oculus::Interaction::Surfaces::ISurfacePatch::*)()>(&::Oculus::Interaction::Surfaces::ISurfacePatch::get_BackingSurface)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>(),
                    {::i2c::class_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::Surfaces::ISurfacePatch::get_BackingSurface()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Surfaces::ISurfacePatch*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Surfaces::ISurface*>(this, ___internal_method);
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr  Oculus::Interaction::Surfaces::ISurfacePatch::operator ::Oculus::Interaction::Surfaces::ISurface*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::Surfaces::ISurfacePatch::i___Oculus__Interaction__Surfaces__ISurface() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
