#pragma once
// IWYU pragma private; include "UnityEngine/LightProbesQuery_LightProbesQueryDisposeJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LightProbesQuery_LightProbesQueryDispose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LightProbesQuery_LightProbesQueryDisposeJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct LightProbesQuery_LightProbesQueryDisposeJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob, "UnityEngine", "LightProbesQuery/LightProbesQueryDisposeJob");
// Dependencies UnityEngine.LightProbesQuery::LightProbesQueryDispose
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.LightProbesQuery/LightProbesQueryDisposeJob
struct CORDL_TYPE LightProbesQuery_LightProbesQueryDisposeJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0xb57ba14, size 0x4, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr LightProbesQuery_LightProbesQueryDisposeJob() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose", modifiers: "", def_value: None, comment: None }]
constexpr LightProbesQuery_LightProbesQueryDisposeJob(::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose  Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14855};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Data, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose  Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob, Data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightProbesQuery_LightProbesQueryDisposeJob) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
