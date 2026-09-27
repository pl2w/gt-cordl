#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/GZip/GZip.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/GZip/zzzz__GZip_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZip.Decompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*, bool)>(&::ICSharpCode::SharpZipLib::GZip::GZip::Decompress)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x9ff5bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZip*>(),
                        {"Decompress", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::GZip::GZip.Compress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*, bool, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::GZip::GZip::Compress)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x9ff6000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZip*>(),
                        {"Compress", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::GZip::GZip::Decompress(::System::IO::Stream*  inStream, ::System::IO::Stream*  outStream, bool  isStreamOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZip*>(),
                        {"Decompress", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inStream, outStream, isStreamOwner);
}
inline void ICSharpCode::SharpZipLib::GZip::GZip::Compress(::System::IO::Stream*  inStream, ::System::IO::Stream*  outStream, bool  isStreamOwner, int32_t  bufferSize, int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::GZip::GZip*>(),
                        {"Compress", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inStream, outStream, isStreamOwner, bufferSize, level);
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::GZip::GZip::GZip()   {
}
