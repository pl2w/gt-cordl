#pragma once
// IWYU pragma private; include "System/Net/DnsPermission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/zzzz__CodeAccessPermission_def.hpp"
CORDL_MODULE_EXPORT(DnsPermission)
namespace System::Security::Permissions {
class IUnrestrictedPermission;
}
namespace System::Security::Permissions {
struct PermissionState;
}
namespace System::Security {
class IPermission;
}
namespace System::Security {
class SecurityElement;
}
// Forward declare root types
namespace System::Net {
class DnsPermission;
}
// Write type traits
MARK_REF_T(::System::Net::DnsPermission*);
DEFINE_IL2CPP_CLASS(::System::Net::DnsPermission*, "System.Net", "DnsPermission");
// Dependencies System.Security.CodeAccessPermission
namespace System::Net {
// Is value type: false
// CS Name: System.Net.DnsPermission
class CORDL_TYPE DnsPermission : public ::System::Security::CodeAccessPermission {
public:
// Declarations
/// @brief Convert operator to "::System::Security::Permissions::IUnrestrictedPermission"
constexpr operator  ::System::Security::Permissions::IUnrestrictedPermission*() noexcept;

/// @brief Method Copy, addr 0xacf778c, size 0x38, virtual true, abstract: false, final false
inline ::System::Security::IPermission* Copy() ;

/// @brief Method FromXml, addr 0xacf77c4, size 0x38, virtual true, abstract: false, final false
inline void FromXml(::System::Security::SecurityElement*  securityElement) ;

/// @brief Method Intersect, addr 0xacf77fc, size 0x38, virtual true, abstract: false, final false
inline ::System::Security::IPermission* Intersect(::System::Security::IPermission*  target) ;

/// @brief Method IsSubsetOf, addr 0xacf7834, size 0x38, virtual true, abstract: false, final false
inline bool IsSubsetOf(::System::Security::IPermission*  target) ;

/// @brief Method IsUnrestricted, addr 0xacf786c, size 0x38, virtual true, abstract: false, final true
inline bool IsUnrestricted() ;

static inline ::System::Net::DnsPermission* New_ctor(::System::Security::Permissions::PermissionState  state) ;

/// @brief Method ToXml, addr 0xacf78a4, size 0x38, virtual true, abstract: false, final false
inline ::System::Security::SecurityElement* ToXml() ;

/// @brief Method .ctor, addr 0xacf7754, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Permissions::PermissionState  state) ;

/// @brief Convert to "::System::Security::Permissions::IUnrestrictedPermission"
constexpr ::System::Security::Permissions::IUnrestrictedPermission* i___System__Security__Permissions__IUnrestrictedPermission() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DnsPermission() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DnsPermission", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DnsPermission(DnsPermission && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DnsPermission", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DnsPermission(DnsPermission const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10974};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::DnsPermission) == 0x10, "Size mismatch!");

} // namespace end def System::Net
