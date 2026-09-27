#pragma once
// IWYU pragma private; include "System/Security/AccessControl/ObjectSecurity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ObjectSecurity)
// Forward declare root types
namespace System::Security::AccessControl {
class ObjectSecurity;
}
// Write type traits
MARK_REF_T(::System::Security::AccessControl::ObjectSecurity*);
DEFINE_IL2CPP_CLASS(::System::Security::AccessControl::ObjectSecurity*, "System.Security.AccessControl", "ObjectSecurity");
// Dependencies System.Object
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.ObjectSecurity
class CORDL_TYPE ObjectSecurity : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectSecurity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectSecurity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectSecurity(ObjectSecurity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectSecurity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectSecurity(ObjectSecurity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6183};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::AccessControl::ObjectSecurity) == 0x10, "Size mismatch!");

} // namespace end def System::Security::AccessControl
