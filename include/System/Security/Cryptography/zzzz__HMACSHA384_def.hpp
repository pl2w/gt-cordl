#pragma once
// IWYU pragma private; include "System/Security/Cryptography/HMACSHA384.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMACSHA384)
// Forward declare root types
namespace System::Security::Cryptography {
class HMACSHA384;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::HMACSHA384*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::HMACSHA384*, "System.Security.Cryptography", "HMACSHA384");
// [ComVisible(true)]
// Dependencies System.Security.Cryptography.HMAC
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.HMACSHA384
class CORDL_TYPE HMACSHA384 : public ::System::Security::Cryptography::HMAC {
public:
// Declarations
 __declspec(property(get=get_BlockSize)) int32_t  BlockSize;

 __declspec(property(get=get_ProduceLegacyHmacValues, put=set_ProduceLegacyHmacValues)) bool  ProduceLegacyHmacValues;

/// @brief Field m_useLegacyBlockSize, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_useLegacyBlockSize, put=__cordl_internal_set_m_useLegacyBlockSize)) bool  m_useLegacyBlockSize;

static inline ::System::Security::Cryptography::HMACSHA384* New_ctor() ;

static inline ::System::Security::Cryptography::HMACSHA384* New_ctor(::ArrayW<uint8_t>  key) ;

constexpr bool const& __cordl_internal_get_m_useLegacyBlockSize() const;

constexpr bool& __cordl_internal_get_m_useLegacyBlockSize() ;

constexpr void __cordl_internal_set_m_useLegacyBlockSize(bool  value) ;

/// @brief Method .ctor, addr 0xa1686c8, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa16872c, size 0x124, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  key) ;

/// @brief Method get_BlockSize, addr 0xa168850, size 0x18, virtual false, abstract: false, final false
inline int32_t get_BlockSize() ;

/// @brief Method get_ProduceLegacyHmacValues, addr 0xa168868, size 0x8, virtual false, abstract: false, final false
inline bool get_ProduceLegacyHmacValues() ;

/// @brief Method set_ProduceLegacyHmacValues, addr 0xa168870, size 0x24, virtual false, abstract: false, final false
inline void set_ProduceLegacyHmacValues(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HMACSHA384() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HMACSHA384", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HMACSHA384(HMACSHA384 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HMACSHA384", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HMACSHA384(HMACSHA384 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6096};

/// @brief Field m_useLegacyBlockSize, offset: 0x61, size: 0x1, def value: None
 bool  ___m_useLegacyBlockSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::HMACSHA384, ___m_useLegacyBlockSize) == 0x61, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::HMACSHA384) == 0x68, "Size mismatch!");

} // namespace end def System::Security::Cryptography
