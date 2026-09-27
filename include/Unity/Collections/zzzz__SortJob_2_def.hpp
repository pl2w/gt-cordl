#pragma once
// IWYU pragma private; include "Unity/Collections/SortJob_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortJob_2)
namespace GlobalNamespace {
template<typename T,typename U>
struct SortJob_2_SegmentSortMerge;
}
namespace GlobalNamespace {
template<typename T,typename U>
struct SortJob_2_SegmentSort;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
template<typename T,typename U>
struct SortJob_2;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::SortJob_2);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Collections::SortJob_2, "Unity.Collections", "SortJob`2");
// [GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.NativeSortExtension::DefaultComparer`1<T>) })]
// Dependencies 
namespace Unity::Collections {
// cpp template
template<typename T,typename U>
// Is value type: true
// CS Name: Unity.Collections.SortJob`2<T,U>
struct CORDL_TYPE SortJob_2 {
public:
// Declarations
using SegmentSort = ::GlobalNamespace::SortJob_2_SegmentSort<T, U>;

using SegmentSortMerge = ::GlobalNamespace::SortJob_2_SegmentSortMerge<T, U>;

/// @brief Method Schedule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle Schedule(::Unity::Jobs::JobHandle  inputDeps) ;

// Ctor Parameters []
// @brief default ctor
constexpr SortJob_2() ;

// Ctor Parameters [CppParam { name: "Data", ty: "T*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: None, comment: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SortJob_2(T*  Data, U  Comp, int32_t  Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30199};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Data, offset: 0x0, size: 0x8, def value: None
 T*  Data;

/// @brief Field Comp, offset: 0x8, size: 0x8, def value: None
 U  Comp;

/// @brief Field Length, offset: 0x10, size: 0x4, def value: None
 int32_t  Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
