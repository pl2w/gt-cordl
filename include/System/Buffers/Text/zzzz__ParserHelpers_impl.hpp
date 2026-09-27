#pragma once
// IWYU pragma private; include "System/Buffers/Text/ParserHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/Text/zzzz__ParserHelpers_def.hpp"
//  Writing Method size for method: ::System::Buffers::Text::ParserHelpers.IsDigit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Buffers::Text::ParserHelpers::IsDigit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa278bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::ParserHelpers*>(),
                        {"IsDigit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Buffers::Text::ParserHelpers::setStaticF_s_hexLookup(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_hexLookup", ::System::Buffers::Text::ParserHelpers*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Buffers::Text::ParserHelpers::getStaticF_s_hexLookup()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_hexLookup", ::System::Buffers::Text::ParserHelpers*>();
}
inline bool System::Buffers::Text::ParserHelpers::IsDigit(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::ParserHelpers*>(),
                        {"IsDigit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i);
}
// Ctor Parameters []
constexpr ::System::Buffers::Text::ParserHelpers::ParserHelpers()   {
}
