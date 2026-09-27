#pragma once
// IWYU pragma private; include "System/Threading/Mutex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Mutex)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Threading {
class Mutex;
}
// Write type traits
MARK_REF_T(::System::Threading::Mutex*);
DEFINE_IL2CPP_CLASS(::System::Threading::Mutex*, "System.Threading", "Mutex");
// [ComVisible(true)]
// Dependencies System.Threading.WaitHandle
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.Mutex
class CORDL_TYPE Mutex : public ::System::Threading::WaitHandle {
public:
// Declarations
/// @brief Method CreateMutex_icall, addr 0xa353ea4, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateMutex_icall(bool  initiallyOwned, char16_t*  name, int32_t  name_length, ::by_ref<bool>  created) ;

/// @brief Method CreateMutex_internal, addr 0xa353eac, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateMutex_internal(bool  initiallyOwned, ::StringW  name, ::by_ref<bool>  created) ;

/// @brief [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)1)]
static inline ::System::Threading::Mutex* New_ctor() ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)1)]
/// @brief Method ReleaseMutex, addr 0xa353f88, size 0x68, virtual false, abstract: false, final false
inline void ReleaseMutex() ;

/// @brief Method ReleaseMutex_internal, addr 0xa353ea8, size 0x4, virtual false, abstract: false, final false
static inline bool ReleaseMutex_internal(::System::IntPtr  handle) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)1)]
/// @brief Method .ctor, addr 0xa353ef0, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mutex() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mutex", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mutex(Mutex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mutex", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mutex(Mutex const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5873};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::Mutex) == 0x30, "Size mismatch!");

} // namespace end def System::Threading
