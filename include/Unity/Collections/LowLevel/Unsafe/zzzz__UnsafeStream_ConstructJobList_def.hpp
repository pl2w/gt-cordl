#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStream_ConstructJobList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnsafeStream_ConstructJobList)
namespace Unity::Collections::LowLevel::Unsafe {
struct UntypedUnsafeList;
}
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct UnsafeStream_ConstructJobList;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnsafeStream_ConstructJobList);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnsafeStream_ConstructJobList, "Unity.Collections.LowLevel.Unsafe", "UnsafeStream/ConstructJobList");
// [BurstCompile]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeStream
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStream/ConstructJobList
struct CORDL_TYPE UnsafeStream_ConstructJobList {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0xaf07ea4, size 0x18, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeStream_ConstructJobList() ;

// Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: None, comment: None }, CppParam { name: "List", ty: "::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeStream_ConstructJobList(::Unity::Collections::LowLevel::Unsafe::UnsafeStream  Container, ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*  List) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30253};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Container, offset: 0x0, size: 0x20, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeStream  Container;

/// [ReadOnly]
/// [NativeDisableUnsafePtrRestriction]
/// @brief Field List, offset: 0x20, size: 0x8, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*  List;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnsafeStream_ConstructJobList, Container) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnsafeStream_ConstructJobList, List) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnsafeStream_ConstructJobList) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
