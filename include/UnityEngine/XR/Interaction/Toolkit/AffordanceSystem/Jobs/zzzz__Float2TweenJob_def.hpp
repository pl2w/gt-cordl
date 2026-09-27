#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/Float2TweenJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Float2TweenJob)
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Mathematics {
struct float2;
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
struct Float2TweenJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "Float2TweenJob");
// [BurstCompile]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies Unity.Mathematics.float2, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob
struct CORDL_TYPE Float2TweenJob {
public:
// Declarations
 __declspec(property(get=get_jobData, put=set_jobData)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>  jobData;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float2>"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float2>*() ;

/// @brief Method Execute, addr 0xb4ddaa4, size 0x184, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method IsNearlyEqual, addr 0xb4ddc88, size 0x28, virtual true, abstract: false, final true
inline bool IsNearlyEqual(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to) ;

/// @brief Method Lerp, addr 0xb4ddc28, size 0x60, virtual true, abstract: false, final true
inline ::Unity::Mathematics::float2 Lerp(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to, float_t  t) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_jobData, addr 0xb4dda8c, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2> get_jobData() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float2>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float2>* i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Jobs__ITweenJob_1___Unity__Mathematics__float2_() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

/// [CompilerGenerated]
/// @brief Method set_jobData, addr 0xb4dda9c, size 0x8, virtual true, abstract: false, final true
inline void set_jobData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Float2TweenJob() ;

// Ctor Parameters [CppParam { name: "_jobData_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>", modifiers: "", def_value: None, comment: None }]
constexpr Float2TweenJob(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>  _jobData_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11772};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// [CompilerGenerated]
/// @brief Field <jobData>k__BackingField, offset: 0x0, size: 0x58, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>  _jobData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob, _jobData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs
