#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/CriticalHandleMinusOneIsInvalid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__CriticalHandle_def.hpp"
CORDL_MODULE_EXPORT(CriticalHandleMinusOneIsInvalid)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class CriticalHandleMinusOneIsInvalid;
}
// Write type traits
MARK_REF_T(::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid*);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid*, "Microsoft.Win32.SafeHandles", "CriticalHandleMinusOneIsInvalid");
// Dependencies System.Runtime.InteropServices.CriticalHandle
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// CS Name: Microsoft.Win32.SafeHandles.CriticalHandleMinusOneIsInvalid
class CORDL_TYPE CriticalHandleMinusOneIsInvalid : public ::System::Runtime::InteropServices::CriticalHandle {
public:
// Declarations
 __declspec(property(get=get_IsInvalid)) bool  IsInvalid;

/// @brief [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)1)]
static inline ::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid* New_ctor() ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)1)]
/// @brief Method .ctor, addr 0xa12bee8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsInvalid, addr 0xa12bf24, size 0x38, virtual true, abstract: false, final false
inline bool get_IsInvalid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CriticalHandleMinusOneIsInvalid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CriticalHandleMinusOneIsInvalid", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CriticalHandleMinusOneIsInvalid(CriticalHandleMinusOneIsInvalid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CriticalHandleMinusOneIsInvalid", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CriticalHandleMinusOneIsInvalid(CriticalHandleMinusOneIsInvalid const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5404};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid) == 0x20, "Size mismatch!");

} // namespace end def Microsoft::Win32::SafeHandles
