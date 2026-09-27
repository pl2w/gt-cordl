#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaEventAnimationController_AnimToGEAKeyframeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaEventAnimationController_AnimToGEAKeyframeData)
namespace GlobalNamespace {
struct GorillaEventAnimationController_GEAKeyframeData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaEventAnimationController_AnimToGEAKeyframeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaEventAnimationController_AnimToGEAKeyframeData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaEventAnimationController_AnimToGEAKeyframeData, "", "GorillaEventAnimationController/AnimToGEAKeyframeData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaEventAnimationController/AnimToGEAKeyframeData
struct CORDL_TYPE GorillaEventAnimationController_AnimToGEAKeyframeData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaEventAnimationController_AnimToGEAKeyframeData() ;

// Ctor Parameters [CppParam { name: "clip", ty: "::UnityW<::UnityEngine::AnimationClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "gEAKeyframeData", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_GEAKeyframeData>*", modifiers: "", def_value: None, comment: None }]
constexpr GorillaEventAnimationController_AnimToGEAKeyframeData(::UnityW<::UnityEngine::AnimationClip>  clip, ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_GEAKeyframeData>*  gEAKeyframeData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{210};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field clip, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  clip;

/// @brief Field gEAKeyframeData, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_GEAKeyframeData>*  gEAKeyframeData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController_AnimToGEAKeyframeData, clip) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController_AnimToGEAKeyframeData, gEAKeyframeData) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaEventAnimationController_AnimToGEAKeyframeData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
