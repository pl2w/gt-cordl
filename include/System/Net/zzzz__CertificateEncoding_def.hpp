#pragma once
// IWYU pragma private; include "System/Net/CertificateEncoding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateEncoding)
// Forward declare root types
namespace System::Net {
struct CertificateEncoding;
}
// Write type traits
MARK_VAL_T(::System::Net::CertificateEncoding);
DEFINE_IL2CPP_CLASS(::System::Net::CertificateEncoding, "System.Net", "CertificateEncoding");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.CertificateEncoding
struct CORDL_TYPE CertificateEncoding {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CertificateEncoding_Unwrapped
enum struct __CertificateEncoding_Unwrapped : int32_t {
__E_Zero = static_cast<int32_t>(0x0),
__E_X509AsnEncoding = static_cast<int32_t>(0x1),
__E_X509NdrEncoding = static_cast<int32_t>(0x2),
__E_Pkcs7AsnEncoding = static_cast<int32_t>(0x10000),
__E_Pkcs7NdrEncoding = static_cast<int32_t>(0x20000),
__E_AnyAsnEncoding = static_cast<int32_t>(0x10001),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CertificateEncoding_Unwrapped () const noexcept {
return static_cast<__CertificateEncoding_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CertificateEncoding() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CertificateEncoding(int32_t  value__) noexcept;

/// @brief Field AnyAsnEncoding value: I32(65537)
static ::System::Net::CertificateEncoding const AnyAsnEncoding;

/// @brief Field Pkcs7AsnEncoding value: I32(65536)
static ::System::Net::CertificateEncoding const Pkcs7AsnEncoding;

/// @brief Field Pkcs7NdrEncoding value: I32(131072)
static ::System::Net::CertificateEncoding const Pkcs7NdrEncoding;

/// @brief Field X509AsnEncoding value: I32(1)
static ::System::Net::CertificateEncoding const X509AsnEncoding;

/// @brief Field X509NdrEncoding value: I32(2)
static ::System::Net::CertificateEncoding const X509NdrEncoding;

/// @brief Field Zero value: I32(0)
static ::System::Net::CertificateEncoding const Zero;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10525};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CertificateEncoding, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::CertificateEncoding) == 0x4, "Size mismatch!");

} // namespace end def System::Net
