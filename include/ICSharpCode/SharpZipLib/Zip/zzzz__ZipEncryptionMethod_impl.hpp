#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipEncryptionMethod.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEncryptionMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod::ZipEncryptionMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod::ZipEncryptionMethod()   {
}
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod  ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod::None{static_cast<int32_t>(0x0)};
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod  ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod::ZipCrypto{static_cast<int32_t>(0x1)};
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod  ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod::AES128{static_cast<int32_t>(0x2)};
constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod  ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod::AES256{static_cast<int32_t>(0x3)};
