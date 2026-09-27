#pragma once
// IWYU pragma private; include "System/Security/AccessControl/CryptoKeySecurity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__NativeObjectSecurity_def.hpp"
CORDL_MODULE_EXPORT(CryptoKeySecurity)
// Forward declare root types
namespace System::Security::AccessControl {
class CryptoKeySecurity;
}
// Write type traits
MARK_REF_T(::System::Security::AccessControl::CryptoKeySecurity*);
DEFINE_IL2CPP_CLASS(::System::Security::AccessControl::CryptoKeySecurity*, "System.Security.AccessControl", "CryptoKeySecurity");
// Dependencies System.Security.AccessControl.NativeObjectSecurity
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.CryptoKeySecurity
class CORDL_TYPE CryptoKeySecurity : public ::System::Security::AccessControl::NativeObjectSecurity {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr CryptoKeySecurity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CryptoKeySecurity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CryptoKeySecurity(CryptoKeySecurity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CryptoKeySecurity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CryptoKeySecurity(CryptoKeySecurity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6181};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::AccessControl::CryptoKeySecurity) == 0x10, "Size mismatch!");

} // namespace end def System::Security::AccessControl
