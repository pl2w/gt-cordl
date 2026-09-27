#pragma once
// IWYU pragma private; include "Fusion/Encryption/EncryptionToken.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptionToken)
// Forward declare root types
namespace Fusion::Encryption {
class EncryptionToken;
}
// Write type traits
MARK_REF_T(::Fusion::Encryption::EncryptionToken*);
DEFINE_IL2CPP_CLASS(::Fusion::Encryption::EncryptionToken*, "Fusion.Encryption", "EncryptionToken");
// Dependencies System.Object
namespace Fusion::Encryption {
// Is value type: false
// CS Name: Fusion.Encryption.EncryptionToken
class CORDL_TYPE EncryptionToken : public ::System::Object {
public:
// Declarations
/// @brief Field Key, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Key, put=__cordl_internal_set_Key)) ::ArrayW<uint8_t>  Key;

/// @brief Field KeyEncrypted, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeyEncrypted, put=__cordl_internal_set_KeyEncrypted)) ::ArrayW<uint8_t>  KeyEncrypted;

static inline ::Fusion::Encryption::EncryptionToken* New_ctor() ;

/// @brief Method ToString, addr 0x603de38, size 0x20c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_Key() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_Key() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_KeyEncrypted() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_KeyEncrypted() ;

constexpr void __cordl_internal_set_Key(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_KeyEncrypted(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x6035df0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EncryptionToken() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EncryptionToken", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EncryptionToken(EncryptionToken && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionToken", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncryptionToken(EncryptionToken const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29417};

/// @brief Field Key, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___Key;

/// @brief Field KeyEncrypted, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___KeyEncrypted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Encryption::EncryptionToken, ___Key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Encryption::EncryptionToken, ___KeyEncrypted) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Encryption::EncryptionToken) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Encryption
