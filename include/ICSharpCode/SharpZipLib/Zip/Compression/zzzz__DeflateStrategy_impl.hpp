#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/DeflateStrategy.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__DeflateStrategy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy::DeflateStrategy(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy::DeflateStrategy()   {
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy  ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy::Default{static_cast<int32_t>(0x0)};
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy  ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy::Filtered{static_cast<int32_t>(0x1)};
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy  ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy::HuffmanOnly{static_cast<int32_t>(0x2)};
