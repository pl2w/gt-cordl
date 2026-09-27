#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStream_DisposeJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnsafeStream_DisposeJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct UnsafeStream_DisposeJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnsafeStream_DisposeJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnsafeStream_DisposeJob, "Unity.Collections.LowLevel.Unsafe", "UnsafeStream/DisposeJob");
// [BurstCompile]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeStream
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStream/DisposeJob
struct CORDL_TYPE UnsafeStream_DisposeJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0xaf07ea0, size 0x4, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeStream_DisposeJob() ;

// Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeStream_DisposeJob(::Unity::Collections::LowLevel::Unsafe::UnsafeStream  Container) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30252};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Container, offset: 0x0, size: 0x20, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeStream  Container;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnsafeStream_DisposeJob, Container) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnsafeStream_DisposeJob) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
