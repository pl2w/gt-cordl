#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/ColorTweenJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorTweenJob)
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
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
struct ColorTweenJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ColorTweenJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ColorTweenJob, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "ColorTweenJob");
// [BurstCompile]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.Color, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ColorTweenJob
struct CORDL_TYPE ColorTweenJob {
public:
// Declarations
 __declspec(property(get=get_colorBlendAmount, put=set_colorBlendAmount)) float_t  colorBlendAmount;

 __declspec(property(get=get_colorBlendMode, put=set_colorBlendMode)) uint8_t  colorBlendMode;

 __declspec(property(get=get_jobData, put=set_jobData)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>  jobData;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::UnityEngine::Color>"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::UnityEngine::Color>*() ;

/// @brief Method Execute, addr 0xb4dd404, size 0x210, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method IsNearlyEqual, addr 0xb4dd808, size 0xa8, virtual true, abstract: false, final true
inline bool IsNearlyEqual(::UnityEngine::Color  from, ::UnityEngine::Color  to) ;

/// @brief Method Lerp, addr 0xb4dd614, size 0xf4, virtual true, abstract: false, final true
inline ::UnityEngine::Color Lerp(::UnityEngine::Color  from, ::UnityEngine::Color  to, float_t  t) ;

/// @brief Method ProcessTargetAffordanceValue, addr 0xb4dd708, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Color ProcessTargetAffordanceValue(::UnityEngine::Color  initialValue, ::UnityEngine::Color  newValue) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_colorBlendAmount, addr 0xb4dd3f4, size 0x8, virtual false, abstract: false, final false
inline float_t get_colorBlendAmount() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_colorBlendMode, addr 0xb4dd3e4, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_colorBlendMode() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_jobData, addr 0xb4dd3cc, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color> get_jobData() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::UnityEngine::Color>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::UnityEngine::Color>* i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Jobs__ITweenJob_1___UnityEngine__Color_() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

/// [CompilerGenerated]
/// @brief Method set_colorBlendAmount, addr 0xb4dd3fc, size 0x8, virtual false, abstract: false, final false
inline void set_colorBlendAmount(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_colorBlendMode, addr 0xb4dd3ec, size 0x8, virtual false, abstract: false, final false
inline void set_colorBlendMode(uint8_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_jobData, addr 0xb4dd3dc, size 0x8, virtual true, abstract: false, final true
inline void set_jobData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ColorTweenJob() ;

// Ctor Parameters [CppParam { name: "_jobData_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_colorBlendMode_k__BackingField", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_colorBlendAmount_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ColorTweenJob(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>  _jobData_k__BackingField, uint8_t  _colorBlendMode_k__BackingField, float_t  _colorBlendAmount_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11770};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// [CompilerGenerated]
/// @brief Field <jobData>k__BackingField, offset: 0x0, size: 0x58, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>  _jobData_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <colorBlendMode>k__BackingField, offset: 0x58, size: 0x1, def value: None
 uint8_t  _colorBlendMode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <colorBlendAmount>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 float_t  _colorBlendAmount_k__BackingField;

/// @brief Size padding 0x80 - 0x60 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ColorTweenJob, _jobData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ColorTweenJob, _colorBlendMode_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ColorTweenJob, _colorBlendAmount_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ColorTweenJob) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs
