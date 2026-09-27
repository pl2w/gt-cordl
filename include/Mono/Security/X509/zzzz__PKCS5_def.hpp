#pragma once
// IWYU pragma private; include "Mono/Security/X509/PKCS5.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PKCS5)
// Forward declare root types
namespace Mono::Security::X509 {
class PKCS5;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::PKCS5*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::PKCS5*, "Mono.Security.X509", "PKCS5");
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.PKCS5
class CORDL_TYPE PKCS5 : public ::System::Object {
public:
// Declarations
static inline ::Mono::Security::X509::PKCS5* New_ctor() ;

/// @brief Method .ctor, addr 0xa0dce88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PKCS5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PKCS5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PKCS5(PKCS5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PKCS5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PKCS5(PKCS5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27805};

/// @brief Field pbeWithMD2AndDESCBC offset 0xffffffff size 0x8
static constexpr ::ConstString  pbeWithMD2AndDESCBC{u"1.2.840.113549.1.5.1"};

/// @brief Field pbeWithMD2AndRC2CBC offset 0xffffffff size 0x8
static constexpr ::ConstString  pbeWithMD2AndRC2CBC{u"1.2.840.113549.1.5.4"};

/// @brief Field pbeWithMD5AndDESCBC offset 0xffffffff size 0x8
static constexpr ::ConstString  pbeWithMD5AndDESCBC{u"1.2.840.113549.1.5.3"};

/// @brief Field pbeWithMD5AndRC2CBC offset 0xffffffff size 0x8
static constexpr ::ConstString  pbeWithMD5AndRC2CBC{u"1.2.840.113549.1.5.6"};

/// @brief Field pbeWithSHA1AndDESCBC offset 0xffffffff size 0x8
static constexpr ::ConstString  pbeWithSHA1AndDESCBC{u"1.2.840.113549.1.5.10"};

/// @brief Field pbeWithSHA1AndRC2CBC offset 0xffffffff size 0x8
static constexpr ::ConstString  pbeWithSHA1AndRC2CBC{u"1.2.840.113549.1.5.11"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::PKCS5) == 0x10, "Size mismatch!");

} // namespace end def Mono::Security::X509
