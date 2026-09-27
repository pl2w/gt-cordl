#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/CompressionMethod.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__CompressionMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod::CompressionMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod::CompressionMethod()   {
}
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  ICSharpCode::SharpZipLib::Zip::CompressionMethod::Stored{static_cast<int32_t>(0x0)};
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  ICSharpCode::SharpZipLib::Zip::CompressionMethod::Deflated{static_cast<int32_t>(0x8)};
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  ICSharpCode::SharpZipLib::Zip::CompressionMethod::Deflate64{static_cast<int32_t>(0x9)};
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  ICSharpCode::SharpZipLib::Zip::CompressionMethod::BZip2{static_cast<int32_t>(0xc)};
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  ICSharpCode::SharpZipLib::Zip::CompressionMethod::LZMA{static_cast<int32_t>(0xe)};
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  ICSharpCode::SharpZipLib::Zip::CompressionMethod::PPMd{static_cast<int32_t>(0x62)};
constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  ICSharpCode::SharpZipLib::Zip::CompressionMethod::WinZipAES{static_cast<int32_t>(0x63)};
