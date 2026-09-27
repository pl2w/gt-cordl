#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueue`1_ParallelWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeQueue`1_ParallelWriter)
namespace Unity::Collections {
struct UnsafeQueueData;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct UnsafeQueue_1_ParallelWriter;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::UnsafeQueue_1_ParallelWriter);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::UnsafeQueue_1_ParallelWriter, "Unity.Collections", "UnsafeQueue`1/ParallelWriter");
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.UnsafeQueue`1/ParallelWriter<T>
struct CORDL_TYPE UnsafeQueue_1_ParallelWriter {
public:
// Declarations
/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Enqueue(T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeQueue_1_ParallelWriter() ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::UnsafeQueueData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AllocatorLabel", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ThreadIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeQueue_1_ParallelWriter(::Unity::Collections::UnsafeQueueData*  m_Buffer, ::GlobalNamespace::AllocatorManager_AllocatorHandle  m_AllocatorLabel, int32_t  m_ThreadIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30213};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::UnsafeQueueData*  m_Buffer;

/// @brief Field m_AllocatorLabel, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::AllocatorManager_AllocatorHandle  m_AllocatorLabel;

/// [NativeSetThreadIndex]
/// @brief Field m_ThreadIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  m_ThreadIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
