#pragma once
// IWYU pragma private; include "Drawing/Text/DefaultFonts.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Drawing/Text/zzzz__DefaultFonts_def.hpp"
#include "Drawing/Text/zzzz__SDFFont_def.hpp"
//  Writing Method size for method: ::Drawing::Text::DefaultFonts.LoadDefaultFont
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::Text::SDFFont (*)()>(&::Drawing::Text::DefaultFonts::LoadDefaultFont)> {
  constexpr static std::size_t size = 0x339c;
  constexpr static std::size_t addrs = 0x55dc894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Text::DefaultFonts*>(),
                        {"LoadDefaultFont", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Drawing::Text::SDFFont Drawing::Text::DefaultFonts::LoadDefaultFont()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Text::DefaultFonts*>(),
                        {"LoadDefaultFont", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::Text::SDFFont>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Drawing::Text::DefaultFonts::DefaultFonts()   {
}
