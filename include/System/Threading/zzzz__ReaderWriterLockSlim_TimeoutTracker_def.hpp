#pragma once
// IWYU pragma private; include "System/Threading/ReaderWriterLockSlim_TimeoutTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriterLockSlim_TimeoutTracker)
// Forward declare root types
namespace GlobalNamespace {
struct ReaderWriterLockSlim_TimeoutTracker;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker, "System.Threading", "ReaderWriterLockSlim/TimeoutTracker");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Threading.ReaderWriterLockSlim/TimeoutTracker
struct CORDL_TYPE ReaderWriterLockSlim_TimeoutTracker {
public:
// Declarations
 __declspec(property(get=get_IsExpired)) bool  IsExpired;

 __declspec(property(get=get_RemainingMilliseconds)) int32_t  RemainingMilliseconds;

/// @brief Method .ctor, addr 0xa8ca7f4, size 0x84, virtual false, abstract: false, final false
inline void _ctor(int32_t  millisecondsTimeout) ;

/// @brief Method get_IsExpired, addr 0xa8cabe8, size 0x18, virtual false, abstract: false, final false
inline bool get_IsExpired() ;

/// @brief Method get_RemainingMilliseconds, addr 0xa8cbae8, size 0x48, virtual false, abstract: false, final false
inline int32_t get_RemainingMilliseconds() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReaderWriterLockSlim_TimeoutTracker() ;

// Ctor Parameters [CppParam { name: "m_total", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_start", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ReaderWriterLockSlim_TimeoutTracker(int32_t  m_total, int32_t  m_start) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24169};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_total, offset: 0x0, size: 0x4, def value: None
 int32_t  m_total;

/// @brief Field m_start, offset: 0x4, size: 0x4, def value: None
 int32_t  m_start;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker, m_total) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker, m_start) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReaderWriterLockSlim_TimeoutTracker) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
