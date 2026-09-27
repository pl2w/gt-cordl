#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelHashMap`2_ParallelWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap`2_ParallelWriter_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeParallelHashMap`2_ParallelWriter)
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct NativeParallelHashMap_2_ParallelWriter;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NativeParallelHashMap_2_ParallelWriter);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NativeParallelHashMap_2_ParallelWriter, "Unity.Collections", "NativeParallelHashMap`2/ParallelWriter");
// [NativeContainer]
// [NativeContainerIsAtomicWriteOnly]
// [DebuggerDisplay("Capacity = {m_Writer.Capacity}")]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2::ParallelWriter<TKey, TValue>
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Unity.Collections.NativeParallelHashMap`2/ParallelWriter<TKey,TValue>
struct CORDL_TYPE NativeParallelHashMap_2_ParallelWriter {
public:
// Declarations
/// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryAdd(TKey  key, TValue  item) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeParallelHashMap_2_ParallelWriter() ;

// Ctor Parameters [CppParam { name: "m_Writer", ty: "::GlobalNamespace::UnsafeParallelHashMap_2_ParallelWriter<TKey,TValue>", modifiers: "", def_value: None, comment: None }]
constexpr NativeParallelHashMap_2_ParallelWriter(::GlobalNamespace::UnsafeParallelHashMap_2_ParallelWriter<TKey,TValue>  m_Writer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30178};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Writer, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::UnsafeParallelHashMap_2_ParallelWriter<TKey,TValue>  m_Writer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
