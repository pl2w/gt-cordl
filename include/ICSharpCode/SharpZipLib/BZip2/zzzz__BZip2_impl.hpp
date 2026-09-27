#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/BZip2/BZip2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/BZip2/zzzz__BZip2_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2.Decompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*, bool)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2::Decompress)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x9ffdd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2*>(),
                        {"Decompress", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::BZip2::BZip2.Compress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*, bool, int32_t)>(&::ICSharpCode::SharpZipLib::BZip2::BZip2::Compress)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x9ffe318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2*>(),
                        {"Compress", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::BZip2::BZip2::Decompress(::System::IO::Stream*  inStream, ::System::IO::Stream*  outStream, bool  isStreamOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2*>(),
                        {"Decompress", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inStream, outStream, isStreamOwner);
}
inline void ICSharpCode::SharpZipLib::BZip2::BZip2::Compress(::System::IO::Stream*  inStream, ::System::IO::Stream*  outStream, bool  isStreamOwner, int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::BZip2::BZip2*>(),
                        {"Compress", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inStream, outStream, isStreamOwner, level);
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::BZip2::BZip2::BZip2()   {
}
