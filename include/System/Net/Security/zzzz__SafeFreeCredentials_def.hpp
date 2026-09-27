#pragma once
// IWYU pragma private; include "System/Net/Security/SafeFreeCredentials.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
CORDL_MODULE_EXPORT(SafeFreeCredentials)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Net::Security {
class SafeFreeCredentials;
}
// Write type traits
MARK_REF_T(::System::Net::Security::SafeFreeCredentials*);
DEFINE_IL2CPP_CLASS(::System::Net::Security::SafeFreeCredentials*, "System.Net.Security", "SafeFreeCredentials");
// Dependencies System.Runtime.InteropServices.SafeHandle
namespace System::Net::Security {
// Is value type: false
// CS Name: System.Net.Security.SafeFreeCredentials
class CORDL_TYPE SafeFreeCredentials : public ::System::Runtime::InteropServices::SafeHandle {
public:
// Declarations
static inline ::System::Net::Security::SafeFreeCredentials* New_ctor(::System::IntPtr  handle, bool  ownsHandle) ;

/// @brief Method .ctor, addr 0xacf49b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle, bool  ownsHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeFreeCredentials() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeFreeCredentials", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeFreeCredentials(SafeFreeCredentials && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeFreeCredentials", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeFreeCredentials(SafeFreeCredentials const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10931};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Security::SafeFreeCredentials) == 0x20, "Size mismatch!");

} // namespace end def System::Net::Security
