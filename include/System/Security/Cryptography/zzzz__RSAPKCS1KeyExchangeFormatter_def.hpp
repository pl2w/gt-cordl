#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1KeyExchangeFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricKeyExchangeFormatter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSAPKCS1KeyExchangeFormatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1KeyExchangeFormatter;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter*, "System.Security.Cryptography", "RSAPKCS1KeyExchangeFormatter");
// [ComVisible(true)]
// Dependencies System.Nullable`1<T>, System.Security.Cryptography.AsymmetricKeyExchangeFormatter
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
class CORDL_TYPE RSAPKCS1KeyExchangeFormatter : public ::System::Security::Cryptography::AsymmetricKeyExchangeFormatter {
public:
// Declarations
 __declspec(property(get=get_OverridesEncrypt)) bool  OverridesEncrypt;

 __declspec(property(get=get_Parameters)) ::StringW  Parameters;

 __declspec(property(get=get_Rng, put=set_Rng)) ::System::Security::Cryptography::RandomNumberGenerator*  Rng;

/// @brief Field RngValue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_RngValue, put=__cordl_internal_set_RngValue)) ::System::Security::Cryptography::RandomNumberGenerator*  RngValue;

/// @brief Field _rsaKey, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__rsaKey, put=__cordl_internal_set__rsaKey)) ::System::Security::Cryptography::RSA*  _rsaKey;

/// @brief Field _rsaOverridesEncrypt, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__rsaOverridesEncrypt, put=__cordl_internal_set__rsaOverridesEncrypt)) ::System::Nullable_1<bool>  _rsaOverridesEncrypt;

/// @brief Method CreateKeyExchange, addr 0xa177b58, size 0x32c, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> CreateKeyExchange(::ArrayW<uint8_t>  rgbData) ;

/// @brief Method CreateKeyExchange, addr 0xa17807c, size 0xc, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> CreateKeyExchange(::ArrayW<uint8_t>  rgbData, ::System::Type*  symAlgType) ;

static inline ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter* New_ctor() ;

static inline ::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

/// @brief Method SetKey, addr 0xa177a5c, size 0xfc, virtual true, abstract: false, final false
inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& __cordl_internal_get_RngValue() const;

constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __cordl_internal_get_RngValue() ;

constexpr ::System::Security::Cryptography::RSA* const& __cordl_internal_get__rsaKey() const;

constexpr ::System::Security::Cryptography::RSA*& __cordl_internal_get__rsaKey() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__rsaOverridesEncrypt() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__rsaOverridesEncrypt() ;

constexpr void __cordl_internal_set_RngValue(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

constexpr void __cordl_internal_set__rsaKey(::System::Security::Cryptography::RSA*  value) ;

constexpr void __cordl_internal_set__rsaOverridesEncrypt(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa177a04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa1754fc, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

/// @brief Method get_OverridesEncrypt, addr 0xa177e84, size 0x1f8, virtual false, abstract: false, final false
inline bool get_OverridesEncrypt() ;

/// @brief Method get_Parameters, addr 0xa177a0c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Parameters() ;

/// @brief Method get_Rng, addr 0xa177a4c, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::RandomNumberGenerator* get_Rng() ;

/// @brief Method set_Rng, addr 0xa177a54, size 0x8, virtual false, abstract: false, final false
inline void set_Rng(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RSAPKCS1KeyExchangeFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1KeyExchangeFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RSAPKCS1KeyExchangeFormatter(RSAPKCS1KeyExchangeFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1KeyExchangeFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RSAPKCS1KeyExchangeFormatter(RSAPKCS1KeyExchangeFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6121};

/// @brief Field RngValue, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Cryptography::RandomNumberGenerator*  ___RngValue;

/// @brief Field _rsaKey, offset: 0x18, size: 0x8, def value: None
 ::System::Security::Cryptography::RSA*  ____rsaKey;

/// @brief Field _rsaOverridesEncrypt, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____rsaOverridesEncrypt;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter, ___RngValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter, ____rsaKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter, ____rsaOverridesEncrypt) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter) == 0x28, "Size mismatch!");

} // namespace end def System::Security::Cryptography
