#pragma once
// IWYU pragma private; include "System/Security/Principal/IdentityReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IdentityReference)
// Forward declare root types
namespace System::Security::Principal {
class IdentityReference;
}
// Write type traits
MARK_REF_T(::System::Security::Principal::IdentityReference*);
DEFINE_IL2CPP_CLASS(::System::Security::Principal::IdentityReference*, "System.Security.Principal", "IdentityReference");
// [ComVisible(false)]
// Dependencies System.Object
namespace System::Security::Principal {
// Is value type: false
// CS Name: System.Security.Principal.IdentityReference
class CORDL_TYPE IdentityReference : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr IdentityReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IdentityReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IdentityReference(IdentityReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IdentityReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IdentityReference(IdentityReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6171};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Principal::IdentityReference) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Principal
