#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/GZip/GZipFlags.hpp"
#include "ICSharpCode/SharpZipLib/GZip/zzzz__GZipFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::ICSharpCode::SharpZipLib::GZip::GZipFlags::GZipFlags(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::GZip::GZipFlags::GZipFlags()   {
}
constexpr ::ICSharpCode::SharpZipLib::GZip::GZipFlags  ICSharpCode::SharpZipLib::GZip::GZipFlags::FTEXT{static_cast<uint8_t>(0x1u)};
constexpr ::ICSharpCode::SharpZipLib::GZip::GZipFlags  ICSharpCode::SharpZipLib::GZip::GZipFlags::FHCRC{static_cast<uint8_t>(0x2u)};
constexpr ::ICSharpCode::SharpZipLib::GZip::GZipFlags  ICSharpCode::SharpZipLib::GZip::GZipFlags::FEXTRA{static_cast<uint8_t>(0x4u)};
constexpr ::ICSharpCode::SharpZipLib::GZip::GZipFlags  ICSharpCode::SharpZipLib::GZip::GZipFlags::FNAME{static_cast<uint8_t>(0x8u)};
constexpr ::ICSharpCode::SharpZipLib::GZip::GZipFlags  ICSharpCode::SharpZipLib::GZip::GZipFlags::FCOMMENT{static_cast<uint8_t>(0x10u)};
