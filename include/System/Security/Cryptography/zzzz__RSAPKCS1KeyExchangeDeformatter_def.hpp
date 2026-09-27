#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1KeyExchangeDeformatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricKeyExchangeDeformatter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSAPKCS1KeyExchangeDeformatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1KeyExchangeDeformatter;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter*, "System.Security.Cryptography", "RSAPKCS1KeyExchangeDeformatter");
// [ComVisible(true)]
// Dependencies System.Nullable`1<T>, System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
class CORDL_TYPE RSAPKCS1KeyExchangeDeformatter : public ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter {
public:
// Declarations
 __declspec(property(get=get_OverridesDecrypt)) bool  OverridesDecrypt;

 __declspec(property(get=get_Parameters, put=set_Parameters)) ::StringW  Parameters;

 __declspec(property(get=get_RNG, put=set_RNG)) ::System::Security::Cryptography::RandomNumberGenerator*  RNG;

/// @brief Field RngValue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_RngValue, put=__cordl_internal_set_RngValue)) ::System::Security::Cryptography::RandomNumberGenerator*  RngValue;

/// @brief Field _rsaKey, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__rsaKey, put=__cordl_internal_set__rsaKey)) ::System::Security::Cryptography::RSA*  _rsaKey;

/// @brief Field _rsaOverridesDecrypt, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__rsaOverridesDecrypt, put=__cordl_internal_set__rsaOverridesDecrypt)) ::System::Nullable_1<bool>  _rsaOverridesDecrypt;

/// @brief Method DecryptKeyExchange, addr 0xa177518, size 0x1f8, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> DecryptKeyExchange(::ArrayW<uint8_t>  rgbIn) ;

static inline ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter* New_ctor() ;

static inline ::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

/// @brief Method SetKey, addr 0xa177908, size 0xfc, virtual true, abstract: false, final false
inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& __cordl_internal_get_RngValue() const;

constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __cordl_internal_get_RngValue() ;

constexpr ::System::Security::Cryptography::RSA* const& __cordl_internal_get__rsaKey() const;

constexpr ::System::Security::Cryptography::RSA*& __cordl_internal_get__rsaKey() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__rsaOverridesDecrypt() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__rsaOverridesDecrypt() ;

constexpr void __cordl_internal_set_RngValue(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

constexpr void __cordl_internal_set__rsaKey(::System::Security::Cryptography::RSA*  value) ;

constexpr void __cordl_internal_set__rsaOverridesDecrypt(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa1774f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa175268, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

/// @brief Method get_OverridesDecrypt, addr 0xa177710, size 0x1f8, virtual false, abstract: false, final false
inline bool get_OverridesDecrypt() ;

/// @brief Method get_Parameters, addr 0xa17750c, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Parameters() ;

/// @brief Method get_RNG, addr 0xa1774fc, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::RandomNumberGenerator* get_RNG() ;

/// @brief Method set_Parameters, addr 0xa177514, size 0x4, virtual true, abstract: false, final false
inline void set_Parameters(::StringW  value) ;

/// @brief Method set_RNG, addr 0xa177504, size 0x8, virtual false, abstract: false, final false
inline void set_RNG(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RSAPKCS1KeyExchangeDeformatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1KeyExchangeDeformatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RSAPKCS1KeyExchangeDeformatter(RSAPKCS1KeyExchangeDeformatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1KeyExchangeDeformatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RSAPKCS1KeyExchangeDeformatter(RSAPKCS1KeyExchangeDeformatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6120};

/// @brief Field _rsaKey, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Cryptography::RSA*  ____rsaKey;

/// @brief Field _rsaOverridesDecrypt, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____rsaOverridesDecrypt;

/// @brief Field RngValue, offset: 0x28, size: 0x8, def value: None
 ::System::Security::Cryptography::RandomNumberGenerator*  ___RngValue;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter, ____rsaKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter, ____rsaOverridesDecrypt) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter, ___RngValue) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter) == 0x28, "Size mismatch!");

} // namespace end def System::Security::Cryptography
