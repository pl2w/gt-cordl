#pragma once
// IWYU pragma private; include "Mono/Security/X509/Extensions/KeyUsageExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyUsageExtension)
namespace Mono::Security::X509::Extensions {
struct KeyUsages;
}
namespace Mono::Security::X509 {
class X509Extension;
}
// Forward declare root types
namespace Mono::Security::X509::Extensions {
class KeyUsageExtension;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::Extensions::KeyUsageExtension*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::Extensions::KeyUsageExtension*, "Mono.Security.X509.Extensions", "KeyUsageExtension");
// Dependencies Mono.Security.X509.X509Extension
namespace Mono::Security::X509::Extensions {
// Is value type: false
// CS Name: Mono.Security.X509.Extensions.KeyUsageExtension
class CORDL_TYPE KeyUsageExtension : public ::Mono::Security::X509::X509Extension {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field kubits, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_kubits, put=__cordl_internal_set_kubits)) int32_t  kubits;

/// @brief Method Decode, addr 0xa0f839c, size 0x13c, virtual true, abstract: false, final false
inline void Decode() ;

/// @brief Method Encode, addr 0xa0f84d8, size 0x1dc, virtual true, abstract: false, final false
inline void Encode() ;

static inline ::Mono::Security::X509::Extensions::KeyUsageExtension* New_ctor(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method Support, addr 0xa0f86f4, size 0xe0, virtual false, abstract: false, final false
inline bool Support(::Mono::Security::X509::Extensions::KeyUsages  usage) ;

/// @brief Method ToString, addr 0xa0f87d4, size 0x49c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_kubits() const;

constexpr int32_t& __cordl_internal_get_kubits() ;

constexpr void __cordl_internal_set_kubits(int32_t  value) ;

/// @brief Method .ctor, addr 0xa0f8398, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::Mono::Security::X509::X509Extension*  extension) ;

/// @brief Method get_Name, addr 0xa0f86b4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyUsageExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyUsageExtension", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyUsageExtension(KeyUsageExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyUsageExtension", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyUsageExtension(KeyUsageExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27849};

/// @brief Field kubits, offset: 0x28, size: 0x4, def value: None
 int32_t  ___kubits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::Extensions::KeyUsageExtension, ___kubits) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mono::Security::X509::Extensions::KeyUsageExtension) == 0x30, "Size mismatch!");

} // namespace end def Mono::Security::X509::Extensions
