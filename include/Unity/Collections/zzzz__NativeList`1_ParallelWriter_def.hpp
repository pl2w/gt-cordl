#pragma once
// IWYU pragma private; include "Unity/Collections/NativeList`1_ParallelWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeList`1_ParallelWriter)
namespace Unity::Collections::LowLevel::Unsafe {
template<typename T>
struct UnsafeList_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct NativeList_1_ParallelWriter;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NativeList_1_ParallelWriter);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NativeList_1_ParallelWriter, "Unity.Collections", "NativeList`1/ParallelWriter");
// [NativeContainer]
// [NativeContainerIsAtomicWriteOnly]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeList`1/ParallelWriter<T>
struct CORDL_TYPE NativeList_1_ParallelWriter {
public:
// Declarations
/// @brief Method AddNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddNoResize(T  value) ;

/// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddRangeNoResize(void*  ptr, int32_t  count) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*  listData) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeList_1_ParallelWriter() ;

// Ctor Parameters [CppParam { name: "ListData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr NativeList_1_ParallelWriter(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*  ListData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30171};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field ListData, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*  ListData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
