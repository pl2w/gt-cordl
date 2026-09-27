#pragma once
// IWYU pragma private; include "Mono/Security/X509/Extensions/SubjectKeyIdentifierExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubjectKeyIdentifierExtension)
namespace Mono::Security::X509 {
class X509Extension;
}
// Forward declare root types
namespace Mono::Security::X509::Extensions {
class SubjectKeyIdentifierExtension;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension*, "Mono.Security.X509.Extensions", "SubjectKeyIdentifierExtension");
// Dependencies Mono.Security.X509.X509Extension
namespace Mono::Security::X509::Extensions {
// Is value type: false
// CS Name: Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension
class CORDL_TYPE SubjectKeyIdentifierExtension : public ::Mono::Security::X509::X509Extension {
public:
// Declarations
 __declspec(property(get=get_Identifier)) ::ArrayW<uint8_t>  Identifier;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field ski, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ski, put=__cordl_internal_set_ski)) ::ArrayW<uint8_t>  ski;

/// @brief Method Decode, addr 0xa0f8c70, size 0xe4, virtual true, abstract: false, final false
inline void Decode() ;

/// @brief Method Encode, addr 0xa0f8d54, size 0xf0, virtual true, abstract: false, final false
inline void Encode() ;

static inline ::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension* New_ctor(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method ToString, addr 0xa0f8e84, size 0x178, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_ski() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_ski() ;

constexpr void __cordl_internal_set_ski(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xa0f5c70, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method get_Identifier, addr 0xa0f5c74, size 0x74, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Identifier() ;

/// @brief Method get_Name, addr 0xa0f8e44, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubjectKeyIdentifierExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubjectKeyIdentifierExtension", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubjectKeyIdentifierExtension(SubjectKeyIdentifierExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubjectKeyIdentifierExtension", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubjectKeyIdentifierExtension(SubjectKeyIdentifierExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27850};

/// @brief Field ski, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___ski;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension, ___ski) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension) == 0x30, "Size mismatch!");

} // namespace end def Mono::Security::X509::Extensions
