#pragma once
// IWYU pragma private; include "System/Security/Permissions/CodeAccessSecurityAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Permissions/zzzz__SecurityAttribute_def.hpp"
CORDL_MODULE_EXPORT(CodeAccessSecurityAttribute)
namespace System::Security::Permissions {
struct SecurityAction;
}
// Forward declare root types
namespace System::Security::Permissions {
class CodeAccessSecurityAttribute;
}
// Write type traits
MARK_REF_T(::System::Security::Permissions::CodeAccessSecurityAttribute*);
DEFINE_IL2CPP_CLASS(::System::Security::Permissions::CodeAccessSecurityAttribute*, "System.Security.Permissions", "CodeAccessSecurityAttribute");
// [Obsolete("CAS support is not available with Silverlight applications.")]
// [ComVisible(true)]
// [AttributeUsage((System.AttributeTargets)109, AllowMultiple = true, Inherited = false)]
// Dependencies System.Security.Permissions.SecurityAttribute
namespace System::Security::Permissions {
// Is value type: false
// CS Name: System.Security.Permissions.CodeAccessSecurityAttribute
class CORDL_TYPE CodeAccessSecurityAttribute : public ::System::Security::Permissions::SecurityAttribute {
public:
// Declarations
static inline ::System::Security::Permissions::CodeAccessSecurityAttribute* New_ctor(::System::Security::Permissions::SecurityAction  action) ;

/// @brief Method .ctor, addr 0xa15acd4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Permissions::SecurityAction  action) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CodeAccessSecurityAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CodeAccessSecurityAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CodeAccessSecurityAttribute(CodeAccessSecurityAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CodeAccessSecurityAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CodeAccessSecurityAttribute(CodeAccessSecurityAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6048};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Permissions::CodeAccessSecurityAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::Security::Permissions
