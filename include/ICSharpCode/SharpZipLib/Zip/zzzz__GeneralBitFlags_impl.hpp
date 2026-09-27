#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/GeneralBitFlags.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__GeneralBitFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::GeneralBitFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::GeneralBitFlags()   {
}
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::Encrypted{static_cast<int32_t>(0x1)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::Method{static_cast<int32_t>(0x6)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::Descriptor{static_cast<int32_t>(0x8)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::ReservedPKware4{static_cast<int32_t>(0x10)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::Patched{static_cast<int32_t>(0x20)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::StrongEncryption{static_cast<int32_t>(0x40)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::Unused7{static_cast<int32_t>(0x80)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::Unused8{static_cast<int32_t>(0x100)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::Unused9{static_cast<int32_t>(0x200)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::Unused10{static_cast<int32_t>(0x400)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::UnicodeText{static_cast<int32_t>(0x800)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::EnhancedCompress{static_cast<int32_t>(0x1000)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::HeaderMasked{static_cast<int32_t>(0x2000)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::ReservedPkware14{static_cast<int32_t>(0x4000)};
constexpr ::ICSharpCode::SharpZipLib::Zip::GeneralBitFlags  ICSharpCode::SharpZipLib::Zip::GeneralBitFlags::ReservedPkware15{static_cast<int32_t>(0x8000)};
