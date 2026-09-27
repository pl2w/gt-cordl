#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Builder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Builder)
namespace Mono::Security {
class ASN1;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Builder;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::X509Builder*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X509Builder*, "Mono.Security.X509", "X509Builder");
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509Builder
class CORDL_TYPE X509Builder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Hash, put=set_Hash)) ::StringW  Hash;

/// @brief Field hashName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_hashName, put=__cordl_internal_set_hashName)) ::StringW  hashName;

/// @brief Method Build, addr 0xa0ecb2c, size 0x12c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> Build(::Mono::Security::ASN1*  tbs, ::StringW  hashoid, ::ArrayW<uint8_t>  signature) ;

/// @brief Method GetOid, addr 0xa0ec658, size 0x320, virtual false, abstract: false, final false
inline ::StringW GetOid(::StringW  hashName) ;

static inline ::Mono::Security::X509::X509Builder* New_ctor() ;

/// @brief Method Sign, addr 0xa0ec9e4, size 0x148, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Sign(::System::Security::Cryptography::AsymmetricAlgorithm*  aa) ;

/// @brief Method Sign, addr 0xa0ecd68, size 0x2dc, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Sign(::System::Security::Cryptography::DSA*  key) ;

/// @brief Method Sign, addr 0xa0ecc58, size 0x110, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Sign(::System::Security::Cryptography::RSA*  key) ;

/// @brief Method ToBeSigned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Mono::Security::ASN1* ToBeSigned(::StringW  hashName) ;

constexpr ::StringW const& __cordl_internal_get_hashName() const;

constexpr ::StringW& __cordl_internal_get_hashName() ;

constexpr void __cordl_internal_set_hashName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa0ec600, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Hash, addr 0xa0ec978, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Hash() ;

/// @brief Method set_Hash, addr 0xa0ec980, size 0x64, virtual false, abstract: false, final false
inline void set_Hash(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509Builder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509Builder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
X509Builder(X509Builder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509Builder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509Builder(X509Builder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27812};

/// @brief Field defaultHash offset 0xffffffff size 0x8
static constexpr ::ConstString  defaultHash{u"SHA1"};

/// @brief Field hashName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___hashName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::X509Builder, ___hashName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mono::Security::X509::X509Builder) == 0x18, "Size mismatch!");

} // namespace end def Mono::Security::X509
