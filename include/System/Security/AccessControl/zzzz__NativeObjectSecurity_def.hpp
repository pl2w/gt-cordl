#pragma once
// IWYU pragma private; include "System/Security/AccessControl/NativeObjectSecurity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__CommonObjectSecurity_def.hpp"
CORDL_MODULE_EXPORT(NativeObjectSecurity)
// Forward declare root types
namespace System::Security::AccessControl {
class NativeObjectSecurity;
}
// Write type traits
MARK_REF_T(::System::Security::AccessControl::NativeObjectSecurity*);
DEFINE_IL2CPP_CLASS(::System::Security::AccessControl::NativeObjectSecurity*, "System.Security.AccessControl", "NativeObjectSecurity");
// Dependencies System.Security.AccessControl.CommonObjectSecurity
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.NativeObjectSecurity
class CORDL_TYPE NativeObjectSecurity : public ::System::Security::AccessControl::CommonObjectSecurity {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeObjectSecurity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeObjectSecurity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeObjectSecurity(NativeObjectSecurity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeObjectSecurity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeObjectSecurity(NativeObjectSecurity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6182};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::AccessControl::NativeObjectSecurity) == 0x10, "Size mismatch!");

} // namespace end def System::Security::AccessControl
