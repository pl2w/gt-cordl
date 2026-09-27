#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeGssContextHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
CORDL_MODULE_EXPORT(SafeGssContextHandle)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeGssContextHandle;
}
// Write type traits
MARK_REF_T(::Microsoft::Win32::SafeHandles::SafeGssContextHandle*);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::SafeHandles::SafeGssContextHandle*, "Microsoft.Win32.SafeHandles", "SafeGssContextHandle");
// Dependencies System.Runtime.InteropServices.SafeHandle
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// CS Name: Microsoft.Win32.SafeHandles.SafeGssContextHandle
class CORDL_TYPE SafeGssContextHandle : public ::System::Runtime::InteropServices::SafeHandle {
public:
// Declarations
 __declspec(property(get=get_IsInvalid)) bool  IsInvalid;

static inline ::Microsoft::Win32::SafeHandles::SafeGssContextHandle* New_ctor() ;

/// @brief Method ReleaseHandle, addr 0xacfe1b8, size 0x38, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0xacfe198, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsInvalid, addr 0xacfe1a8, size 0x10, virtual true, abstract: false, final false
inline bool get_IsInvalid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeGssContextHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeGssContextHandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeGssContextHandle(SafeGssContextHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeGssContextHandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeGssContextHandle(SafeGssContextHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9914};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Microsoft::Win32::SafeHandles::SafeGssContextHandle) == 0x20, "Size mismatch!");

} // namespace end def Microsoft::Win32::SafeHandles
