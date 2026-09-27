#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Lzw/LzwConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Lzw/zzzz__LzwConstants_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Lzw::LzwConstants._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Lzw::LzwConstants::*)()>(&::ICSharpCode::SharpZipLib::Lzw::LzwConstants::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff4bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwConstants*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Lzw::LzwConstants::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Lzw::LzwConstants*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Lzw::LzwConstants* ICSharpCode::SharpZipLib::Lzw::LzwConstants::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Lzw::LzwConstants*>());
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Lzw::LzwConstants::LzwConstants()   {
}
