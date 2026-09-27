#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/Float4TweenJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Float4TweenJob)
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Mathematics {
struct float4;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template<typename T>
class ITweenJob_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template<typename T>
struct TweenJobData_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
struct Float4TweenJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float4TweenJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float4TweenJob, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "Float4TweenJob");
// [BurstCompile]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies Unity.Mathematics.float4, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float4TweenJob
struct CORDL_TYPE Float4TweenJob {
public:
// Declarations
 __declspec(property(get=get_jobData, put=set_jobData)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float4>  jobData;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float4>"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float4>*() ;

/// @brief Method Execute, addr 0xb4ddf34, size 0x1d0, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method IsNearlyEqual, addr 0xb4de19c, size 0x40, virtual true, abstract: false, final true
inline bool IsNearlyEqual(::Unity::Mathematics::float4  from, ::Unity::Mathematics::float4  to) ;

/// @brief Method Lerp, addr 0xb4de104, size 0x98, virtual true, abstract: false, final true
inline ::Unity::Mathematics::float4 Lerp(::Unity::Mathematics::float4  from, ::Unity::Mathematics::float4  to, float_t  t) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_jobData, addr 0xb4ddf1c, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float4> get_jobData() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float4>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float4>* i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Jobs__ITweenJob_1___Unity__Mathematics__float4_() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

/// [CompilerGenerated]
/// @brief Method set_jobData, addr 0xb4ddf2c, size 0x8, virtual true, abstract: false, final true
inline void set_jobData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float4>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Float4TweenJob() ;

// Ctor Parameters [CppParam { name: "_jobData_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None, comment: None }]
constexpr Float4TweenJob(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float4>  _jobData_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11774};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// [CompilerGenerated]
/// @brief Field <jobData>k__BackingField, offset: 0x0, size: 0x58, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float4>  _jobData_k__BackingField;

/// @brief Size padding 0x78 - 0x58 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float4TweenJob, _jobData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float4TweenJob) == 0x78, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs
