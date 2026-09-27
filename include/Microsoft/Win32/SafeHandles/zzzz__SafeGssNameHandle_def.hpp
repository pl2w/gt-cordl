#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeGssNameHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SafeGssNameHandle)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeGssNameHandle;
}
// Write type traits
MARK_REF_T(::Microsoft::Win32::SafeHandles::SafeGssNameHandle*);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::SafeHandles::SafeGssNameHandle*, "Microsoft.Win32.SafeHandles", "SafeGssNameHandle");
// Dependencies System.Runtime.InteropServices.SafeHandle
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// CS Name: Microsoft.Win32.SafeHandles.SafeGssNameHandle
class CORDL_TYPE SafeGssNameHandle : public ::System::Runtime::InteropServices::SafeHandle {
public:
// Declarations
 __declspec(property(get=get_IsInvalid)) bool  IsInvalid;

/// @brief Method CreatePrincipal, addr 0xacfddd8, size 0xc0, virtual false, abstract: false, final false
static inline ::Microsoft::Win32::SafeHandles::SafeGssNameHandle* CreatePrincipal(::StringW  name) ;

/// @brief Method CreateUser, addr 0xacfdd18, size 0xc0, virtual false, abstract: false, final false
static inline ::Microsoft::Win32::SafeHandles::SafeGssNameHandle* CreateUser(::StringW  name) ;

/// @brief Method ReleaseHandle, addr 0xacfdea8, size 0x38, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method get_IsInvalid, addr 0xacfde98, size 0x10, virtual true, abstract: false, final false
inline bool get_IsInvalid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeGssNameHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeGssNameHandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeGssNameHandle(SafeGssNameHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeGssNameHandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeGssNameHandle(SafeGssNameHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9912};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Microsoft::Win32::SafeHandles::SafeGssNameHandle) == 0x20, "Size mismatch!");

} // namespace end def Microsoft::Win32::SafeHandles
