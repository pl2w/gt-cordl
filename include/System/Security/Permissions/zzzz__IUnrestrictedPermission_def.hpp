#pragma once
// IWYU pragma private; include "System/Security/Permissions/IUnrestrictedPermission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUnrestrictedPermission)
// Forward declare root types
namespace System::Security::Permissions {
class IUnrestrictedPermission;
}
// Write type traits
MARK_REF_T(::System::Security::Permissions::IUnrestrictedPermission*);
DEFINE_IL2CPP_CLASS(::System::Security::Permissions::IUnrestrictedPermission*, "System.Security.Permissions", "IUnrestrictedPermission");
// Dependencies 
namespace System::Security::Permissions {
// Is value type: false
// CS Name: System.Security.Permissions.IUnrestrictedPermission
class CORDL_TYPE IUnrestrictedPermission {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IUnrestrictedPermission", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUnrestrictedPermission(IUnrestrictedPermission const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6046};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Permissions
