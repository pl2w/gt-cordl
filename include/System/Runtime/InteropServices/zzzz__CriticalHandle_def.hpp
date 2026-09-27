#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/CriticalHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
CORDL_MODULE_EXPORT(CriticalHandle)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class CriticalHandle;
}
// Write type traits
MARK_REF_T(::System::Runtime::InteropServices::CriticalHandle*);
DEFINE_IL2CPP_CLASS(::System::Runtime::InteropServices::CriticalHandle*, "System.Runtime.InteropServices", "CriticalHandle");
// Dependencies System.IntPtr, System.Runtime.ConstrainedExecution.CriticalFinalizerObject
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.CriticalHandle
class CORDL_TYPE CriticalHandle : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
// Declarations
 __declspec(property(get=get_IsClosed)) bool  IsClosed;

 __declspec(property(get=get_IsInvalid)) bool  IsInvalid;

/// @brief Field _isClosed, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isClosed, put=__cordl_internal_set__isClosed)) bool  _isClosed;

/// @brief Field handle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) ::System::IntPtr  handle;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method Cleanup, addr 0xa1e1100, size 0xdc, virtual false, abstract: false, final false
inline void Cleanup() ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method Dispose, addr 0xa1e11f8, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method Dispose, addr 0xa1e1208, size 0x4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method Finalize, addr 0xa1e1070, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FireCustomerDebugProbe, addr 0xa1e11e0, size 0x4, virtual false, abstract: false, final false
static inline void FireCustomerDebugProbe() ;

/// @brief [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)1)]
static inline ::System::Runtime::InteropServices::CriticalHandle* New_ctor(::System::IntPtr  invalidHandleValue) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method ReleaseHandle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ReleaseHandle() ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method SetHandle, addr 0xa1e11e8, size 0x8, virtual false, abstract: false, final false
inline void SetHandle(::System::IntPtr  handle) ;

constexpr bool const& __cordl_internal_get__isClosed() const;

constexpr bool& __cordl_internal_get__isClosed() ;

constexpr ::System::IntPtr const& __cordl_internal_get_handle() const;

constexpr ::System::IntPtr& __cordl_internal_get_handle() ;

constexpr void __cordl_internal_set__isClosed(bool  value) ;

constexpr void __cordl_internal_set_handle(::System::IntPtr  value) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)1)]
/// @brief Method .ctor, addr 0xa1e103c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  invalidHandleValue) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method get_IsClosed, addr 0xa1e11f0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsClosed() ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method get_IsInvalid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsInvalid() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CriticalHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CriticalHandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CriticalHandle(CriticalHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CriticalHandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CriticalHandle(CriticalHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6467};

/// @brief Field handle, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___handle;

/// @brief Field _isClosed, offset: 0x18, size: 0x1, def value: None
 bool  ____isClosed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::CriticalHandle, ___handle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::CriticalHandle, ____isClosed) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::InteropServices::CriticalHandle) == 0x20, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
