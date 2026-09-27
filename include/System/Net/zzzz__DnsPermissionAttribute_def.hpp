#pragma once
// IWYU pragma private; include "System/Net/DnsPermissionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Permissions/zzzz__CodeAccessSecurityAttribute_def.hpp"
CORDL_MODULE_EXPORT(DnsPermissionAttribute)
namespace System::Security::Permissions {
struct SecurityAction;
}
namespace System::Security {
class IPermission;
}
// Forward declare root types
namespace System::Net {
class DnsPermissionAttribute;
}
// Write type traits
MARK_REF_T(::System::Net::DnsPermissionAttribute*);
DEFINE_IL2CPP_CLASS(::System::Net::DnsPermissionAttribute*, "System.Net", "DnsPermissionAttribute");
// [AttributeUsage((System.AttributeTargets)109, AllowMultiple = true, Inherited = false)]
// Dependencies System.Security.Permissions.CodeAccessSecurityAttribute
namespace System::Net {
// Is value type: false
// CS Name: System.Net.DnsPermissionAttribute
class CORDL_TYPE DnsPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute {
public:
// Declarations
/// @brief Method CreatePermission, addr 0xacf78e0, size 0x38, virtual true, abstract: false, final false
inline ::System::Security::IPermission* CreatePermission() ;

static inline ::System::Net::DnsPermissionAttribute* New_ctor(::System::Security::Permissions::SecurityAction  action) ;

/// @brief Method .ctor, addr 0xacf78dc, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Permissions::SecurityAction  action) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DnsPermissionAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DnsPermissionAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DnsPermissionAttribute(DnsPermissionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DnsPermissionAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DnsPermissionAttribute(DnsPermissionAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10975};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::DnsPermissionAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::Net
