#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/EncryptionAlgorithm.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__EncryptionAlgorithm_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::EncryptionAlgorithm(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::EncryptionAlgorithm()   {
}
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::None{static_cast<int32_t>(0x0)};
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::PkzipClassic{static_cast<int32_t>(0x1)};
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::Des{static_cast<int32_t>(0x6601)};
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::RC2{static_cast<int32_t>(0x6602)};
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::TripleDes168{static_cast<int32_t>(0x6603)};
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::TripleDes112{static_cast<int32_t>(0x6609)};
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::Aes128{static_cast<int32_t>(0x660e)};
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::Aes192{static_cast<int32_t>(0x660f)};
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::Aes256{static_cast<int32_t>(0x6610)};
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::RC2Corrected{static_cast<int32_t>(0x6702)};
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::Blowfish{static_cast<int32_t>(0x6720)};
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::Twofish{static_cast<int32_t>(0x6721)};
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::RC4{static_cast<int32_t>(0x6801)};
constexpr ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm  ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm::Unknown{static_cast<int32_t>(0xffff)};
