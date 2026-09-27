#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager_TableEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AllocatorManager_TableEntry)
// Forward declare root types
namespace GlobalNamespace {
struct AllocatorManager_TableEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AllocatorManager_TableEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AllocatorManager_TableEntry, "Unity.Collections", "AllocatorManager/TableEntry");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/TableEntry
struct CORDL_TYPE AllocatorManager_TableEntry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AllocatorManager_TableEntry() ;

// Ctor Parameters [CppParam { name: "function", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "state", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr AllocatorManager_TableEntry(::System::IntPtr  function, ::System::IntPtr  state) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30109};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field function, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  function;

/// @brief Field state, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AllocatorManager_TableEntry, function) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AllocatorManager_TableEntry, state) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AllocatorManager_TableEntry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
