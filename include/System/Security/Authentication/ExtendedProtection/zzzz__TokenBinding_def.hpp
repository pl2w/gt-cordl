#pragma once
// IWYU pragma private; include "System/Security/Authentication/ExtendedProtection/TokenBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TokenBinding)
// Forward declare root types
namespace System::Security::Authentication::ExtendedProtection {
class TokenBinding;
}
// Write type traits
MARK_REF_T(::System::Security::Authentication::ExtendedProtection::TokenBinding*);
DEFINE_IL2CPP_CLASS(::System::Security::Authentication::ExtendedProtection::TokenBinding*, "System.Security.Authentication.ExtendedProtection", "TokenBinding");
// Dependencies System.Object
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: false
// CS Name: System.Security.Authentication.ExtendedProtection.TokenBinding
class CORDL_TYPE TokenBinding : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr TokenBinding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TokenBinding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TokenBinding(TokenBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TokenBinding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TokenBinding(TokenBinding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10031};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Authentication::ExtendedProtection::TokenBinding) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Authentication::ExtendedProtection
