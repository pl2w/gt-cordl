#pragma once
// IWYU pragma private; include "Voxels/NativeCounter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeCounter)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace Voxels {
struct NativeCounter;
}
// Write type traits
MARK_VAL_T(::Voxels::NativeCounter);
DEFINE_IL2CPP_CLASS(::Voxels::NativeCounter, "Voxels", "NativeCounter");
// Dependencies Unity.Collections.Allocator
namespace Voxels {
// Is value type: true
// CS Name: Voxels.NativeCounter
struct CORDL_TYPE NativeCounter {
public:
// Declarations
 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x5dafde0, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Increment, addr 0x5dafb08, size 0x1c, virtual false, abstract: false, final false
inline int32_t Increment() ;

/// @brief Method .ctor, addr 0x5dafdb0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::Allocator  allocator) ;

/// @brief Method get_Count, addr 0x5dafd98, size 0xc, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method set_Count, addr 0x5dafda4, size 0xc, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeCounter() ;

// Ctor Parameters [CppParam { name: "_allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None, comment: None }, CppParam { name: "_counter", ty: "int32_t*", modifiers: "", def_value: None, comment: None }]
constexpr NativeCounter(::Unity::Collections::Allocator  _allocator, int32_t*  _counter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5014};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _allocator, offset: 0x0, size: 0x4, def value: None
 ::Unity::Collections::Allocator  _allocator;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field _counter, offset: 0x8, size: 0x8, def value: None
 int32_t*  _counter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::NativeCounter, _allocator) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Voxels::NativeCounter, _counter) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Voxels::NativeCounter) == 0x10, "Size mismatch!");

} // namespace end def Voxels
