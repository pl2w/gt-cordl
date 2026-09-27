#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAOAEPKeyExchangeDeformatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricKeyExchangeDeformatter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSAOAEPKeyExchangeDeformatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSAOAEPKeyExchangeDeformatter;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter*, "System.Security.Cryptography", "RSAOAEPKeyExchangeDeformatter");
// [ComVisible(true)]
// Dependencies System.Nullable`1<T>, System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter
class CORDL_TYPE RSAOAEPKeyExchangeDeformatter : public ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter {
public:
// Declarations
 __declspec(property(get=get_OverridesDecrypt)) bool  OverridesDecrypt;

 __declspec(property(get=get_Parameters, put=set_Parameters)) ::StringW  Parameters;

/// @brief Field _rsaKey, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__rsaKey, put=__cordl_internal_set__rsaKey)) ::System::Security::Cryptography::RSA*  _rsaKey;

/// @brief Field _rsaOverridesDecrypt, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__rsaOverridesDecrypt, put=__cordl_internal_set__rsaOverridesDecrypt)) ::System::Nullable_1<bool>  _rsaOverridesDecrypt;

/// @brief Method DecryptKeyExchange, addr 0xa176844, size 0x18c, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> DecryptKeyExchange(::ArrayW<uint8_t>  rgbData) ;

static inline ::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter* New_ctor() ;

static inline ::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

/// @brief Method SetKey, addr 0xa176c90, size 0xfc, virtual true, abstract: false, final false
inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

constexpr ::System::Security::Cryptography::RSA* const& __cordl_internal_get__rsaKey() const;

constexpr ::System::Security::Cryptography::RSA*& __cordl_internal_get__rsaKey() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__rsaOverridesDecrypt() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__rsaOverridesDecrypt() ;

constexpr void __cordl_internal_set__rsaKey(::System::Security::Cryptography::RSA*  value) ;

constexpr void __cordl_internal_set__rsaOverridesDecrypt(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa176830, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa175168, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

/// @brief Method get_OverridesDecrypt, addr 0xa1769d0, size 0x1f8, virtual false, abstract: false, final false
inline bool get_OverridesDecrypt() ;

/// @brief Method get_Parameters, addr 0xa176838, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Parameters() ;

/// @brief Method set_Parameters, addr 0xa176840, size 0x4, virtual true, abstract: false, final false
inline void set_Parameters(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RSAOAEPKeyExchangeDeformatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RSAOAEPKeyExchangeDeformatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RSAOAEPKeyExchangeDeformatter(RSAOAEPKeyExchangeDeformatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RSAOAEPKeyExchangeDeformatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RSAOAEPKeyExchangeDeformatter(RSAOAEPKeyExchangeDeformatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6118};

/// @brief Field _rsaKey, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Cryptography::RSA*  ____rsaKey;

/// @brief Field _rsaOverridesDecrypt, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____rsaOverridesDecrypt;

/// @brief Size padding 0x20 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter, ____rsaKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter, ____rsaOverridesDecrypt) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter) == 0x20, "Size mismatch!");

} // namespace end def System::Security::Cryptography
