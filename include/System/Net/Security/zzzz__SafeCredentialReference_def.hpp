#pragma once
// IWYU pragma private; include "System/Net/Security/SafeCredentialReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__CriticalHandleMinusOneIsInvalid_def.hpp"
CORDL_MODULE_EXPORT(SafeCredentialReference)
namespace System::Net::Security {
class SafeFreeCredentials;
}
// Forward declare root types
namespace System::Net::Security {
class SafeCredentialReference;
}
// Write type traits
MARK_REF_T(::System::Net::Security::SafeCredentialReference*);
DEFINE_IL2CPP_CLASS(::System::Net::Security::SafeCredentialReference*, "System.Net.Security", "SafeCredentialReference");
// Dependencies Microsoft.Win32.SafeHandles.CriticalHandleMinusOneIsInvalid
namespace System::Net::Security {
// Is value type: false
// CS Name: System.Net.Security.SafeCredentialReference
class CORDL_TYPE SafeCredentialReference : public ::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid {
public:
// Declarations
/// @brief Field Target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Target, put=__cordl_internal_set_Target)) ::System::Net::Security::SafeFreeCredentials*  Target;

/// @brief Method CreateReference, addr 0xacf452c, size 0x74, virtual false, abstract: false, final false
static inline ::System::Net::Security::SafeCredentialReference* CreateReference(::System::Net::Security::SafeFreeCredentials*  target) ;

static inline ::System::Net::Security::SafeCredentialReference* New_ctor(::System::Net::Security::SafeFreeCredentials*  target) ;

/// @brief Method ReleaseHandle, addr 0xacf4a2c, size 0x34, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

constexpr ::System::Net::Security::SafeFreeCredentials* const& __cordl_internal_get_Target() const;

constexpr ::System::Net::Security::SafeFreeCredentials*& __cordl_internal_get_Target() ;

constexpr void __cordl_internal_set_Target(::System::Net::Security::SafeFreeCredentials*  value) ;

/// @brief Method .ctor, addr 0xacf49b8, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Security::SafeFreeCredentials*  target) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeCredentialReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeCredentialReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeCredentialReference(SafeCredentialReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeCredentialReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeCredentialReference(SafeCredentialReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10932};

/// @brief Field Target, offset: 0x20, size: 0x8, def value: None
 ::System::Net::Security::SafeFreeCredentials*  ___Target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Security::SafeCredentialReference, ___Target) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::Security::SafeCredentialReference) == 0x28, "Size mismatch!");

} // namespace end def System::Net::Security
