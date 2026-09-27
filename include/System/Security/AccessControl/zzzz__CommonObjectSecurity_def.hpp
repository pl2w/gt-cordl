#pragma once
// IWYU pragma private; include "System/Security/AccessControl/CommonObjectSecurity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__ObjectSecurity_def.hpp"
CORDL_MODULE_EXPORT(CommonObjectSecurity)
// Forward declare root types
namespace System::Security::AccessControl {
class CommonObjectSecurity;
}
// Write type traits
MARK_REF_T(::System::Security::AccessControl::CommonObjectSecurity*);
DEFINE_IL2CPP_CLASS(::System::Security::AccessControl::CommonObjectSecurity*, "System.Security.AccessControl", "CommonObjectSecurity");
// Dependencies System.Security.AccessControl.ObjectSecurity
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.CommonObjectSecurity
class CORDL_TYPE CommonObjectSecurity : public ::System::Security::AccessControl::ObjectSecurity {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommonObjectSecurity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommonObjectSecurity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CommonObjectSecurity(CommonObjectSecurity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommonObjectSecurity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommonObjectSecurity(CommonObjectSecurity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6180};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::AccessControl::CommonObjectSecurity) == 0x10, "Size mismatch!");

} // namespace end def System::Security::AccessControl
