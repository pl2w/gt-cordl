#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/DeflaterPending.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__PendingBuffer_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__DeflaterPending_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd1c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending* ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*>());
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending::DeflaterPending()   {
}
