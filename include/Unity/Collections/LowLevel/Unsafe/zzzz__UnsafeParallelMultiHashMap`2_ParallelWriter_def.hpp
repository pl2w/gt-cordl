#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelMultiHashMap`2_ParallelWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeParallelMultiHashMap`2_ParallelWriter)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeParallelHashMapData;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct UnsafeParallelMultiHashMap_2_ParallelWriter;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::UnsafeParallelMultiHashMap_2_ParallelWriter);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::UnsafeParallelMultiHashMap_2_ParallelWriter, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelMultiHashMap`2/ParallelWriter");
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2/ParallelWriter<TKey,TValue>
struct CORDL_TYPE UnsafeParallelMultiHashMap_2_ParallelWriter {
public:
// Declarations
/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(TKey  key, TValue  item) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeParallelMultiHashMap_2_ParallelWriter() ;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ThreadIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeParallelMultiHashMap_2_ParallelWriter(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*  m_Buffer, int32_t  m_ThreadIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30243};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*  m_Buffer;

/// [NativeSetThreadIndex]
/// @brief Field m_ThreadIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  m_ThreadIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
