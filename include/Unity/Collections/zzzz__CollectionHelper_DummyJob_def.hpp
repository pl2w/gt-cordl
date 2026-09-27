#pragma once
// IWYU pragma private; include "Unity/Collections/CollectionHelper_DummyJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CollectionHelper_DummyJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct CollectionHelper_DummyJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CollectionHelper_DummyJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CollectionHelper_DummyJob, "Unity.Collections", "CollectionHelper/DummyJob");
// [BurstCompile]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Collections.CollectionHelper/DummyJob
#pragma pack(push, 0)
struct CORDL_TYPE CollectionHelper_DummyJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0xaf03c44, size 0x4, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr CollectionHelper_DummyJob() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30118};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CollectionHelper_DummyJob) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
