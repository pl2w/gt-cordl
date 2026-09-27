#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Encryption/PkzipClassicManaged.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Encryption/zzzz__PkzipClassic_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkzipClassicManaged)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Encryption {
class PkzipClassicManaged;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged*, "ICSharpCode.SharpZipLib.Encryption", "PkzipClassicManaged");
// Dependencies ICSharpCode.SharpZipLib.Encryption.PkzipClassic
namespace ICSharpCode::SharpZipLib::Encryption {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged
class CORDL_TYPE PkzipClassicManaged : public ::ICSharpCode::SharpZipLib::Encryption::PkzipClassic {
public:
// Declarations
 __declspec(property(get=get_BlockSize, put=set_BlockSize)) int32_t  BlockSize;

 __declspec(property(get=get_Key, put=set_Key)) ::ArrayW<uint8_t>  Key;

 __declspec(property(get=get_LegalBlockSizes)) ::ArrayW<::System::Security::Cryptography::KeySizes*>  LegalBlockSizes;

 __declspec(property(get=get_LegalKeySizes)) ::ArrayW<::System::Security::Cryptography::KeySizes*>  LegalKeySizes;

/// @brief Field key_, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_key_, put=__cordl_internal_set_key_)) ::ArrayW<uint8_t>  key_;

/// @brief Method CreateDecryptor, addr 0x9ff8b80, size 0x98, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t>  rgbKey, ::ArrayW<uint8_t>  rgbIV) ;

/// @brief Method CreateEncryptor, addr 0x9ff8ae8, size 0x98, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t>  rgbKey, ::ArrayW<uint8_t>  rgbIV) ;

/// @brief Method GenerateIV, addr 0x9ff86e8, size 0x4, virtual true, abstract: false, final false
inline void GenerateIV() ;

/// @brief Method GenerateKey, addr 0x9ff8960, size 0x188, virtual true, abstract: false, final false
inline void GenerateKey() ;

static inline ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged* New_ctor() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_key_() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_key_() ;

constexpr void __cordl_internal_set_key_(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x9ff8c18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BlockSize, addr 0x9ff85dc, size 0x8, virtual true, abstract: false, final false
inline int32_t get_BlockSize() ;

/// @brief Method get_Key, addr 0x9ff8798, size 0x94, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> get_Key() ;

/// @brief Method get_LegalBlockSizes, addr 0x9ff86ec, size 0xac, virtual true, abstract: false, final false
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> get_LegalBlockSizes() ;

/// @brief Method get_LegalKeySizes, addr 0x9ff863c, size 0xac, virtual true, abstract: false, final false
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> get_LegalKeySizes() ;

/// @brief Method set_BlockSize, addr 0x9ff85e4, size 0x58, virtual true, abstract: false, final false
inline void set_BlockSize(int32_t  value) ;

/// @brief Method set_Key, addr 0x9ff882c, size 0x134, virtual true, abstract: false, final false
inline void set_Key(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PkzipClassicManaged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PkzipClassicManaged", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PkzipClassicManaged(PkzipClassicManaged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkzipClassicManaged", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkzipClassicManaged(PkzipClassicManaged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17414};

/// @brief Field key_, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___key_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged, ___key_) == 0x48, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Encryption::PkzipClassicManaged) == 0x50, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Encryption
