#pragma once
// IWYU pragma private; include "Unity/Collections/NativeQueue`1_ParallelWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__UnsafeQueue`1_ParallelWriter_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeQueue`1_ParallelWriter)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct NativeQueue_1_ParallelWriter;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NativeQueue_1_ParallelWriter);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NativeQueue_1_ParallelWriter, "Unity.Collections", "NativeQueue`1/ParallelWriter");
// [NativeContainer]
// [NativeContainerIsAtomicWriteOnly]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
// Dependencies Unity.Collections.UnsafeQueue`1::ParallelWriter<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeQueue`1/ParallelWriter<T>
struct CORDL_TYPE NativeQueue_1_ParallelWriter {
public:
// Declarations
/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Enqueue(T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeQueue_1_ParallelWriter() ;

// Ctor Parameters [CppParam { name: "unsafeWriter", ty: "::GlobalNamespace::UnsafeQueue_1_ParallelWriter<T>", modifiers: "", def_value: None, comment: None }]
constexpr NativeQueue_1_ParallelWriter(::GlobalNamespace::UnsafeQueue_1_ParallelWriter<T>  unsafeWriter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30187};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field unsafeWriter, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::UnsafeQueue_1_ParallelWriter<T>  unsafeWriter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
