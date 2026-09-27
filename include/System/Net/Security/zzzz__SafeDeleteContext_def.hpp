#pragma once
// IWYU pragma private; include "System/Net/Security/SafeDeleteContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
CORDL_MODULE_EXPORT(SafeDeleteContext)
namespace System::Net::Security {
class SafeFreeCredentials;
}
// Forward declare root types
namespace System::Net::Security {
class SafeDeleteContext;
}
// Write type traits
MARK_REF_T(::System::Net::Security::SafeDeleteContext*);
DEFINE_IL2CPP_CLASS(::System::Net::Security::SafeDeleteContext*, "System.Net.Security", "SafeDeleteContext");
// Dependencies System.Runtime.InteropServices.SafeHandle
namespace System::Net::Security {
// Is value type: false
// CS Name: System.Net.Security.SafeDeleteContext
class CORDL_TYPE SafeDeleteContext : public ::System::Runtime::InteropServices::SafeHandle {
public:
// Declarations
 __declspec(property(get=get_IsInvalid)) bool  IsInvalid;

/// @brief Field _credential, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__credential, put=__cordl_internal_set__credential)) ::System::Net::Security::SafeFreeCredentials*  _credential;

static inline ::System::Net::Security::SafeDeleteContext* New_ctor(::System::Net::Security::SafeFreeCredentials*  credential) ;

/// @brief Method ReleaseHandle, addr 0xacf48dc, size 0x38, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

constexpr ::System::Net::Security::SafeFreeCredentials* const& __cordl_internal_get__credential() const;

constexpr ::System::Net::Security::SafeFreeCredentials*& __cordl_internal_get__credential() ;

constexpr void __cordl_internal_set__credential(::System::Net::Security::SafeFreeCredentials*  value) ;

/// @brief Method .ctor, addr 0xacf4870, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Security::SafeFreeCredentials*  credential) ;

/// @brief Method get_IsInvalid, addr 0xacf48cc, size 0x10, virtual true, abstract: false, final false
inline bool get_IsInvalid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeDeleteContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeDeleteContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeDeleteContext(SafeDeleteContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeDeleteContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeDeleteContext(SafeDeleteContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10929};

/// @brief Field _credential, offset: 0x20, size: 0x8, def value: None
 ::System::Net::Security::SafeFreeCredentials*  ____credential;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Security::SafeDeleteContext, ____credential) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::Security::SafeDeleteContext) == 0x28, "Size mismatch!");

} // namespace end def System::Net::Security
