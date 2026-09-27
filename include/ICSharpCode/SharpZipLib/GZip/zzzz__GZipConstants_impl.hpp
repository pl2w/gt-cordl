#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/GZip/GZipConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/GZip/zzzz__GZipConstants_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipConstants.get_Encoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)()>(&::ICSharpCode::SharpZipLib::GZip::GZipConstants::get_Encoding)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ff64a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipConstants*>(),
                        {"get_Encoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZipConstants._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::GZip::GZipConstants::*)()>(&::ICSharpCode::SharpZipLib::GZip::GZipConstants::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff6538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipConstants*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Text::Encoding* ICSharpCode::SharpZipLib::GZip::GZipConstants::get_Encoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipConstants*>(),
                        {"get_Encoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::GZip::GZipConstants::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZipConstants*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::GZip::GZipConstants* ICSharpCode::SharpZipLib::GZip::GZipConstants::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::GZip::GZipConstants*>());
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::GZip::GZipConstants::GZipConstants()   {
}
