#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/FloatTweenJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FloatTweenJob)
namespace Unity::Jobs {
class IJob;
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
struct FloatTweenJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::FloatTweenJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::FloatTweenJob, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "FloatTweenJob");
// [BurstCompile]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.FloatTweenJob
struct CORDL_TYPE FloatTweenJob {
public:
// Declarations
 __declspec(property(get=get_jobData, put=set_jobData)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t>  jobData;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<float_t>"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<float_t>*() ;

/// @brief Method Execute, addr 0xb4dd8d8, size 0x158, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method IsNearlyEqual, addr 0xb4dda70, size 0x1c, virtual true, abstract: false, final true
inline bool IsNearlyEqual(float_t  from, float_t  to) ;

/// @brief Method Lerp, addr 0xb4dda30, size 0x40, virtual true, abstract: false, final true
inline float_t Lerp(float_t  from, float_t  to, float_t  t) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_jobData, addr 0xb4dd8b0, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t> get_jobData() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<float_t>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<float_t>* i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Jobs__ITweenJob_1_float_t_() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

/// [CompilerGenerated]
/// @brief Method set_jobData, addr 0xb4dd8c4, size 0x14, virtual true, abstract: false, final true
inline void set_jobData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FloatTweenJob() ;

// Ctor Parameters [CppParam { name: "_jobData_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t>", modifiers: "", def_value: None, comment: None }]
constexpr FloatTweenJob(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t>  _jobData_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11771};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// [CompilerGenerated]
/// @brief Field <jobData>k__BackingField, offset: 0x0, size: 0x58, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t>  _jobData_k__BackingField;

/// @brief Size padding 0x40 - 0x58 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::FloatTweenJob, _jobData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::FloatTweenJob) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs
