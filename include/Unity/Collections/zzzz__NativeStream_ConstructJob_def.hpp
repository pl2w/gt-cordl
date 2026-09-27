#pragma once
// IWYU pragma private; include "Unity/Collections/NativeStream_ConstructJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeStream_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeStream_ConstructJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct NativeStream_ConstructJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NativeStream_ConstructJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeStream_ConstructJob, "Unity.Collections", "NativeStream/ConstructJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeStream
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Collections.NativeStream/ConstructJob
struct CORDL_TYPE NativeStream_ConstructJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0xaf0700c, size 0xc, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeStream_ConstructJob() ;

// Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::NativeStream", modifiers: "", def_value: None, comment: None }, CppParam { name: "Length", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr NativeStream_ConstructJob(::Unity::Collections::NativeStream  Container, ::Unity::Collections::NativeArray_1<int32_t>  Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Container, offset: 0x0, size: 0x20, def value: None
 ::Unity::Collections::NativeStream  Container;

/// [ReadOnly]
/// @brief Field Length, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NativeStream_ConstructJob, Container) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeStream_ConstructJob, Length) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NativeStream_ConstructJob) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
