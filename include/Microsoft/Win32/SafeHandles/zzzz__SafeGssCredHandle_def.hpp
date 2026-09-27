#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeGssCredHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SafeGssCredHandle)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeGssCredHandle;
}
// Write type traits
MARK_REF_T(::Microsoft::Win32::SafeHandles::SafeGssCredHandle*);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::SafeHandles::SafeGssCredHandle*, "Microsoft.Win32.SafeHandles", "SafeGssCredHandle");
// Dependencies System.Runtime.InteropServices.SafeHandle
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// CS Name: Microsoft.Win32.SafeHandles.SafeGssCredHandle
class CORDL_TYPE SafeGssCredHandle : public ::System::Runtime::InteropServices::SafeHandle {
public:
// Declarations
 __declspec(property(get=get_IsInvalid)) bool  IsInvalid;

/// @brief Method Create, addr 0xacfdee0, size 0x260, virtual false, abstract: false, final false
static inline ::Microsoft::Win32::SafeHandles::SafeGssCredHandle* Create(::StringW  username, ::StringW  password, bool  isNtlmOnly) ;

static inline ::Microsoft::Win32::SafeHandles::SafeGssCredHandle* New_ctor() ;

/// @brief Method ReleaseHandle, addr 0xacfe160, size 0x38, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0xacfe140, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsInvalid, addr 0xacfe150, size 0x10, virtual true, abstract: false, final false
inline bool get_IsInvalid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeGssCredHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeGssCredHandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeGssCredHandle(SafeGssCredHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeGssCredHandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeGssCredHandle(SafeGssCredHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9913};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Microsoft::Win32::SafeHandles::SafeGssCredHandle) == 0x20, "Size mismatch!");

} // namespace end def Microsoft::Win32::SafeHandles
