#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager_Range.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AllocatorManager_Range)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct AllocatorManager_Range;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AllocatorManager_Range);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AllocatorManager_Range, "Unity.Collections", "AllocatorManager/Range");
// Dependencies System.IntPtr, Unity.Collections.AllocatorManager::AllocatorHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/Range
struct CORDL_TYPE AllocatorManager_Range {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xaf039bc, size 0x3c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AllocatorManager_Range() ;

// Ctor Parameters [CppParam { name: "Pointer", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "Items", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Allocator", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None, comment: None }]
constexpr AllocatorManager_Range(::System::IntPtr  Pointer, int32_t  Items, ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30106};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Pointer, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  Pointer;

/// @brief Field Items, offset: 0x8, size: 0x4, def value: None
 int32_t  Items;

/// @brief Field Allocator, offset: 0xc, size: 0x4, def value: None
 ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AllocatorManager_Range, Pointer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AllocatorManager_Range, Items) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AllocatorManager_Range, Allocator) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AllocatorManager_Range) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
