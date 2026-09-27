#pragma once
// IWYU pragma private; include "Mono/Security/X509/PKCS9.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PKCS9)
// Forward declare root types
namespace Mono::Security::X509 {
class PKCS9;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::PKCS9*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::PKCS9*, "Mono.Security.X509", "PKCS9");
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.PKCS9
class CORDL_TYPE PKCS9 : public ::System::Object {
public:
// Declarations
static inline ::Mono::Security::X509::PKCS9* New_ctor() ;

/// @brief Method .ctor, addr 0xa0dce90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PKCS9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PKCS9", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PKCS9(PKCS9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PKCS9", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PKCS9(PKCS9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27806};

/// @brief Field friendlyName offset 0xffffffff size 0x8
static constexpr ::ConstString  friendlyName{u"1.2.840.113549.1.9.20"};

/// @brief Field localKeyId offset 0xffffffff size 0x8
static constexpr ::ConstString  localKeyId{u"1.2.840.113549.1.9.21"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::X509::PKCS9) == 0x10, "Size mismatch!");

} // namespace end def Mono::Security::X509
