#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ParallelSortExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelSortExtensions)
namespace GlobalNamespace {
struct ParallelSortExtensions_RadixSortBatchPrefixSumJob;
}
namespace GlobalNamespace {
struct ParallelSortExtensions_RadixSortBucketCountJob;
}
namespace GlobalNamespace {
struct ParallelSortExtensions_RadixSortBucketSortJob;
}
namespace GlobalNamespace {
struct ParallelSortExtensions_RadixSortPrefixSumJob;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ParallelSortExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ParallelSortExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ParallelSortExtensions*, "UnityEngine.Rendering", "ParallelSortExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ParallelSortExtensions
class CORDL_TYPE ParallelSortExtensions : public ::System::Object {
public:
// Declarations
using RadixSortBatchPrefixSumJob = ::GlobalNamespace::ParallelSortExtensions_RadixSortBatchPrefixSumJob;

using RadixSortBucketCountJob = ::GlobalNamespace::ParallelSortExtensions_RadixSortBucketCountJob;

using RadixSortBucketSortJob = ::GlobalNamespace::ParallelSortExtensions_RadixSortBucketSortJob;

using RadixSortPrefixSumJob = ::GlobalNamespace::ParallelSortExtensions_RadixSortPrefixSumJob;

/// [Extension]
/// @brief Method ParallelSort, addr 0xb2132f0, size 0x4c4, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle ParallelSort(::Unity::Collections::NativeArray_1<int32_t>  array) ;

/// [CompilerGenerated]
/// @brief Method <ParallelSort>g__Swap|2_0, addr 0xb2137b4, size 0x1c, virtual false, abstract: false, final false
static inline void _ParallelSort_g__Swap_2_0(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  a, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParallelSortExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParallelSortExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParallelSortExtensions(ParallelSortExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParallelSortExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParallelSortExtensions(ParallelSortExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26732};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ParallelSortExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
