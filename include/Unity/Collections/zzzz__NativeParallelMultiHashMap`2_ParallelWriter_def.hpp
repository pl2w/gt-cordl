#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelMultiHashMap`2_ParallelWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelMultiHashMap`2_ParallelWriter_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeParallelMultiHashMap`2_ParallelWriter)
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct NativeParallelMultiHashMap_2_ParallelWriter;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NativeParallelMultiHashMap_2_ParallelWriter);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NativeParallelMultiHashMap_2_ParallelWriter, "Unity.Collections", "NativeParallelMultiHashMap`2/ParallelWriter");
// [NativeContainer]
// [NativeContainerIsAtomicWriteOnly]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2::ParallelWriter<TKey, TValue>
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Unity.Collections.NativeParallelMultiHashMap`2/ParallelWriter<TKey,TValue>
struct CORDL_TYPE NativeParallelMultiHashMap_2_ParallelWriter {
public:
// Declarations
/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(TKey  key, TValue  item) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeParallelMultiHashMap_2_ParallelWriter() ;

// Ctor Parameters [CppParam { name: "m_Writer", ty: "::GlobalNamespace::UnsafeParallelMultiHashMap_2_ParallelWriter<TKey,TValue>", modifiers: "", def_value: None, comment: None }]
constexpr NativeParallelMultiHashMap_2_ParallelWriter(::GlobalNamespace::UnsafeParallelMultiHashMap_2_ParallelWriter<TKey,TValue>  m_Writer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Writer, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::UnsafeParallelMultiHashMap_2_ParallelWriter<TKey,TValue>  m_Writer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
