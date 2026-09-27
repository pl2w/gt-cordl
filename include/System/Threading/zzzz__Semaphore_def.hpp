#pragma once
// IWYU pragma private; include "System/Threading/Semaphore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Semaphore)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Threading {
class Semaphore;
}
// Write type traits
MARK_REF_T(::System::Threading::Semaphore*);
DEFINE_IL2CPP_CLASS(::System::Threading::Semaphore*, "System.Threading", "Semaphore");
// [ComVisible(false)]
// Dependencies System.Threading.WaitHandle
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.Semaphore
class CORDL_TYPE Semaphore : public ::System::Threading::WaitHandle {
public:
// Declarations
/// @brief Method CreateSemaphore_icall, addr 0xad07d2c, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateSemaphore_icall(int32_t  initialCount, int32_t  maximumCount, char16_t*  name, int32_t  name_length, ::by_ref<int32_t>  errorCode) ;

/// @brief Method CreateSemaphore_internal, addr 0xad07cd8, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateSemaphore_internal(int32_t  initialCount, int32_t  maximumCount, ::StringW  name, ::by_ref<int32_t>  errorCode) ;

/// @brief Method ReleaseSemaphore_internal, addr 0xad07d30, size 0x4, virtual false, abstract: false, final false
static inline bool ReleaseSemaphore_internal(::System::IntPtr  handle, int32_t  releaseCount, ::by_ref<int32_t>  previousCount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Semaphore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Semaphore", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Semaphore(Semaphore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Semaphore", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Semaphore(Semaphore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9956};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::Semaphore) == 0x30, "Size mismatch!");

} // namespace end def System::Threading
