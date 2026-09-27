#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/EncryptionAlgorithm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptionAlgorithm)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
struct EncryptionAlgorithm;
}
// Write type traits
MARK_VAL_T(::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm, "ICSharpCode.SharpZipLib.Zip", "EncryptionAlgorithm");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: true
// CS Name: ICSharpCode.SharpZipLib.Zip.EncryptionAlgorithm
struct CORDL_TYPE EncryptionAlgorithm {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EncryptionAlgorithm_Unwrapped
enum struct __EncryptionAlgorithm_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PkzipClassic = static_cast<int32_t>(0x1),
__E_Des = static_cast<int32_t>(0x6601),
__E_RC2 = static_cast<int32_t>(0x6602),
__E_TripleDes168 = static_cast<int32_t>(0x6603),
__E_TripleDes112 = static_cast<int32_t>(0x6609),
__E_Aes128 = static_cast<int32_t>(0x660e),
__E_Aes192 = static_cast<int32_t>(0x660f),
__E_Aes256 = static_cast<int32_t>(0x6610),
__E_RC2Corrected = static_cast<int32_t>(0x6702),
__E_Blowfish = static_cast<int32_t>(0x6720),
__E_Twofish = static_cast<int32_t>(0x6721),
__E_RC4 = static_cast<int32_t>(0x6801),
__E_Unknown = static_cast<int32_t>(0xffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EncryptionAlgorithm_Unwrapped () const noexcept {
return static_cast<__EncryptionAlgorithm_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EncryptionAlgorithm() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EncryptionAlgorithm(int32_t  value__) noexcept;

/// @brief Field Aes128 value: I32(26126)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const Aes128;

/// @brief Field Aes192 value: I32(26127)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const Aes192;

/// @brief Field Aes256 value: I32(26128)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const Aes256;

/// @brief Field Blowfish value: I32(26400)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const Blowfish;

/// @brief Field Des value: I32(26113)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const Des;

/// @brief Field None value: I32(0)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const None;

/// @brief Field PkzipClassic value: I32(1)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const PkzipClassic;

/// @brief Field RC2 value: I32(26114)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const RC2;

/// @brief Field RC2Corrected value: I32(26370)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const RC2Corrected;

/// @brief Field RC4 value: I32(26625)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const RC4;

/// @brief Field TripleDes112 value: I32(26121)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const TripleDes112;

/// @brief Field TripleDes168 value: I32(26115)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const TripleDes168;

/// @brief Field Twofish value: I32(26401)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const Twofish;

/// @brief Field Unknown value: I32(65535)
static ::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17319};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::EncryptionAlgorithm) == 0x4, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
