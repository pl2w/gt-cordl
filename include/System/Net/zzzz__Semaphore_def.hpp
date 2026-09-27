#pragma once
// IWYU pragma private; include "System/Net/Semaphore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Semaphore)
// Forward declare root types
namespace System::Net {
class Semaphore;
}
// Write type traits
MARK_REF_T(::System::Net::Semaphore*);
DEFINE_IL2CPP_CLASS(::System::Net::Semaphore*, "System.Net", "Semaphore");
// Dependencies System.Threading.WaitHandle
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Semaphore
class CORDL_TYPE Semaphore : public ::System::Threading::WaitHandle {
public:
// Declarations
static inline ::System::Net::Semaphore* New_ctor(int32_t  initialCount, int32_t  maxCount) ;

/// @brief Method ReleaseSemaphore, addr 0xac7414c, size 0x30, virtual false, abstract: false, final false
inline bool ReleaseSemaphore() ;

/// @brief Method .ctor, addr 0xac73ff4, size 0x158, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialCount, int32_t  maxCount) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10603};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Semaphore) == 0x30, "Size mismatch!");

} // namespace end def System::Net
