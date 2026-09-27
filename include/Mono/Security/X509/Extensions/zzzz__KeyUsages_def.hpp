#pragma once
// IWYU pragma private; include "Mono/Security/X509/Extensions/KeyUsages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyUsages)
// Forward declare root types
namespace Mono::Security::X509::Extensions {
struct KeyUsages;
}
// Write type traits
MARK_VAL_T(::Mono::Security::X509::Extensions::KeyUsages);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::Extensions::KeyUsages, "Mono.Security.X509.Extensions", "KeyUsages");
// [Flags]
// Dependencies 
namespace Mono::Security::X509::Extensions {
// Is value type: true
// CS Name: Mono.Security.X509.Extensions.KeyUsages
struct CORDL_TYPE KeyUsages {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KeyUsages_Unwrapped
enum struct __KeyUsages_Unwrapped : int32_t {
__E_digitalSignature = static_cast<int32_t>(0x80),
__E_nonRepudiation = static_cast<int32_t>(0x40),
__E_keyEncipherment = static_cast<int32_t>(0x20),
__E_dataEncipherment = static_cast<int32_t>(0x10),
__E_keyAgreement = static_cast<int32_t>(0x8),
__E_keyCertSign = static_cast<int32_t>(0x4),
__E_cRLSign = static_cast<int32_t>(0x2),
__E_encipherOnly = static_cast<int32_t>(0x1),
__E_decipherOnly = static_cast<int32_t>(0x800),
__E_none = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KeyUsages_Unwrapped () const noexcept {
return static_cast<__KeyUsages_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KeyUsages() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr KeyUsages(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27848};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field cRLSign value: I32(2)
static ::Mono::Security::X509::Extensions::KeyUsages const cRLSign;

/// @brief Field dataEncipherment value: I32(16)
static ::Mono::Security::X509::Extensions::KeyUsages const dataEncipherment;

/// @brief Field decipherOnly value: I32(2048)
static ::Mono::Security::X509::Extensions::KeyUsages const decipherOnly;

/// @brief Field digitalSignature value: I32(128)
static ::Mono::Security::X509::Extensions::KeyUsages const digitalSignature;

/// @brief Field encipherOnly value: I32(1)
static ::Mono::Security::X509::Extensions::KeyUsages const encipherOnly;

/// @brief Field keyAgreement value: I32(8)
static ::Mono::Security::X509::Extensions::KeyUsages const keyAgreement;

/// @brief Field keyCertSign value: I32(4)
static ::Mono::Security::X509::Extensions::KeyUsages const keyCertSign;

/// @brief Field keyEncipherment value: I32(32)
static ::Mono::Security::X509::Extensions::KeyUsages const keyEncipherment;

/// @brief Field nonRepudiation value: I32(64)
static ::Mono::Security::X509::Extensions::KeyUsages const nonRepudiation;

/// @brief Field none value: I32(0)
static ::Mono::Security::X509::Extensions::KeyUsages const none;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::Extensions::KeyUsages, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Mono::Security::X509::Extensions::KeyUsages) == 0x4, "Size mismatch!");

} // namespace end def Mono::Security::X509::Extensions
