#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_Block_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeStream)
namespace GlobalNamespace {
struct UnsafeStream_ConstructJobList;
}
namespace GlobalNamespace {
struct UnsafeStream_ConstructJob;
}
namespace GlobalNamespace {
struct UnsafeStream_DisposeJob;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStream;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeStream);
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeStream, "Unity.Collections.LowLevel.Unsafe", "UnsafeStream");
// [GenerateTestsForBurstCompatibility]
// Dependencies Unity.Collections.AllocatorManager::Block
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStream
struct CORDL_TYPE UnsafeStream {
public:
// Declarations
using ConstructJob = ::GlobalNamespace::UnsafeStream_ConstructJob;

using ConstructJobList = ::GlobalNamespace::UnsafeStream_ConstructJobList;

using DisposeJob = ::GlobalNamespace::UnsafeStream_DisposeJob;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AllocateForEach, addr 0xaf06f18, size 0xdc, virtual false, abstract: false, final false
inline void AllocateForEach(int32_t  forEachCount) ;

/// @brief Method Deallocate, addr 0xaf07e00, size 0xa0, virtual false, abstract: false, final false
inline void Deallocate() ;

/// @brief Method Dispose, addr 0xaf06f04, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// [IsReadOnly]
/// @brief Method get_IsCreated, addr 0xaf07df0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeStream() ;

// Ctor Parameters [CppParam { name: "m_BlockData", ty: "::GlobalNamespace::AllocatorManager_Block", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeStream(::GlobalNamespace::AllocatorManager_Block  m_BlockData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30255};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_BlockData, offset: 0x0, size: 0x20, def value: None
 ::GlobalNamespace::AllocatorManager_Block  m_BlockData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream, m_BlockData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::UnsafeStream) == 0x20, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe
