#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaEventAnimationController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaEventAnimationController)
namespace GlobalNamespace {
struct GorillaEventAnimationController_AnimToGEAKeyframeData;
}
namespace GlobalNamespace {
struct GorillaEventAnimationController_ControlledAnimationKeyframeData;
}
namespace GlobalNamespace {
struct GorillaEventAnimationController_GEAKeyframeData;
}
namespace GlobalNamespace {
class GorillaEventAnimation;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaEventAnimationController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaEventAnimationController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaEventAnimationController*, "", "GorillaEventAnimationController");
// [RequireComponent(typeof(UnityEngine.Animation))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaEventAnimationController
class CORDL_TYPE GorillaEventAnimationController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AnimToGEAKeyframeData = ::GlobalNamespace::GorillaEventAnimationController_AnimToGEAKeyframeData;

using ControlledAnimationKeyframeData = ::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData;

using GEAKeyframeData = ::GlobalNamespace::GorillaEventAnimationController_GEAKeyframeData;

/// @brief Field animationClipIndex, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationClipIndex, put=__cordl_internal_set_animationClipIndex)) int32_t  animationClipIndex;

/// @brief Field animationTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationTime, put=__cordl_internal_set_animationTime)) float_t  animationTime;

/// @brief Field autoIncrementClipOnLateStart, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoIncrementClipOnLateStart, put=__cordl_internal_set_autoIncrementClipOnLateStart)) bool  autoIncrementClipOnLateStart;

/// @brief Field bakedAnimKeyframeData, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedAnimKeyframeData, put=__cordl_internal_set_bakedAnimKeyframeData)) ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_AnimToGEAKeyframeData>*  bakedAnimKeyframeData;

/// @brief Field bakedAnimationData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedAnimationData, put=__cordl_internal_set_bakedAnimationData)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AnimationClip>,::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GorillaEventAnimation>,::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData>*>*>*  bakedAnimationData;

/// @brief Field clips, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_clips, put=__cordl_internal_set_clips)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  clips;

/// @brief Field controllingAnimation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllingAnimation, put=__cordl_internal_set_controllingAnimation)) ::UnityW<::UnityEngine::Animation>  controllingAnimation;

/// @brief Field currentClip, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentClip, put=__cordl_internal_set_currentClip)) ::UnityW<::UnityEngine::AnimationClip>  currentClip;

/// @brief Field enableSuspensionHandling, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableSuspensionHandling, put=__cordl_internal_set_enableSuspensionHandling)) bool  enableSuspensionHandling;

/// @brief Field lateStart, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lateStart, put=__cordl_internal_set_lateStart)) float_t  lateStart;

/// @brief Field playAnimation, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_playAnimation, put=__cordl_internal_set_playAnimation)) bool  playAnimation;

/// @brief Field suspended, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_suspended, put=__cordl_internal_set_suspended)) float_t  suspended;

/// @brief Field totalTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalTime, put=__cordl_internal_set_totalTime)) float_t  totalTime;

/// @brief Method Awake, addr 0x57f54d4, size 0x298, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaEventAnimationController* New_ctor() ;

/// @brief Method OnDisable, addr 0x57f619c, size 0x5c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57f614c, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetAnimationClip, addr 0x57f6124, size 0x8, virtual false, abstract: false, final false
inline void SetAnimationClip(int32_t  clip) ;

/// @brief Method StartPlaying, addr 0x57f6110, size 0x14, virtual false, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StartPlaying, addr 0x57f60fc, size 0x14, virtual false, abstract: false, final false
inline void StartPlaying(float_t  secondsPast) ;

/// @brief Method StartPlayingClip, addr 0x57f613c, size 0x10, virtual false, abstract: false, final false
inline void StartPlayingClip() ;

/// @brief Method StartPlayingClip, addr 0x57f612c, size 0x10, virtual false, abstract: false, final false
inline void StartPlayingClip(float_t  secondsPast) ;

/// @brief Method Update, addr 0x57f576c, size 0x990, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_animationClipIndex() const;

constexpr int32_t& __cordl_internal_get_animationClipIndex() ;

constexpr float_t const& __cordl_internal_get_animationTime() const;

constexpr float_t& __cordl_internal_get_animationTime() ;

constexpr bool const& __cordl_internal_get_autoIncrementClipOnLateStart() const;

constexpr bool& __cordl_internal_get_autoIncrementClipOnLateStart() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_AnimToGEAKeyframeData>* const& __cordl_internal_get_bakedAnimKeyframeData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_AnimToGEAKeyframeData>*& __cordl_internal_get_bakedAnimKeyframeData() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AnimationClip>,::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GorillaEventAnimation>,::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData>*>*>* const& __cordl_internal_get_bakedAnimationData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AnimationClip>,::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GorillaEventAnimation>,::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData>*>*>*& __cordl_internal_get_bakedAnimationData() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>* const& __cordl_internal_get_clips() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*& __cordl_internal_get_clips() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_controllingAnimation() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_controllingAnimation() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_currentClip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_currentClip() ;

constexpr bool const& __cordl_internal_get_enableSuspensionHandling() const;

constexpr bool& __cordl_internal_get_enableSuspensionHandling() ;

constexpr float_t const& __cordl_internal_get_lateStart() const;

constexpr float_t& __cordl_internal_get_lateStart() ;

constexpr bool const& __cordl_internal_get_playAnimation() const;

constexpr bool& __cordl_internal_get_playAnimation() ;

constexpr float_t const& __cordl_internal_get_suspended() const;

constexpr float_t& __cordl_internal_get_suspended() ;

constexpr float_t const& __cordl_internal_get_totalTime() const;

constexpr float_t& __cordl_internal_get_totalTime() ;

constexpr void __cordl_internal_set_animationClipIndex(int32_t  value) ;

constexpr void __cordl_internal_set_animationTime(float_t  value) ;

constexpr void __cordl_internal_set_autoIncrementClipOnLateStart(bool  value) ;

constexpr void __cordl_internal_set_bakedAnimKeyframeData(::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_AnimToGEAKeyframeData>*  value) ;

constexpr void __cordl_internal_set_bakedAnimationData(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AnimationClip>,::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GorillaEventAnimation>,::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData>*>*>*  value) ;

constexpr void __cordl_internal_set_clips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  value) ;

constexpr void __cordl_internal_set_controllingAnimation(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_currentClip(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_enableSuspensionHandling(bool  value) ;

constexpr void __cordl_internal_set_lateStart(float_t  value) ;

constexpr void __cordl_internal_set_playAnimation(bool  value) ;

constexpr void __cordl_internal_set_suspended(float_t  value) ;

constexpr void __cordl_internal_set_totalTime(float_t  value) ;

/// @brief Method .ctor, addr 0x57f61f8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaEventAnimationController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaEventAnimationController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaEventAnimationController(GorillaEventAnimationController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaEventAnimationController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaEventAnimationController(GorillaEventAnimationController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{213};

/// @brief Field controllingAnimation, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___controllingAnimation;

/// @brief Field playAnimation, offset: 0x28, size: 0x1, def value: None
 bool  ___playAnimation;

/// @brief Field lateStart, offset: 0x2c, size: 0x4, def value: None
 float_t  ___lateStart;

/// @brief Field animationTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___animationTime;

/// @brief Field animationClipIndex, offset: 0x34, size: 0x4, def value: None
 int32_t  ___animationClipIndex;

/// @brief Field clips, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  ___clips;

/// @brief Field currentClip, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___currentClip;

/// @brief Field totalTime, offset: 0x48, size: 0x4, def value: None
 float_t  ___totalTime;

/// @brief Field bakedAnimationData, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AnimationClip>,::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::GorillaEventAnimation>,::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData>*>*>*  ___bakedAnimationData;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field bakedAnimKeyframeData, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_AnimToGEAKeyframeData>*  ___bakedAnimKeyframeData;

/// [SerializeField]
/// @brief Field enableSuspensionHandling, offset: 0x60, size: 0x1, def value: None
 bool  ___enableSuspensionHandling;

/// [SerializeField]
/// @brief Field autoIncrementClipOnLateStart, offset: 0x61, size: 0x1, def value: None
 bool  ___autoIncrementClipOnLateStart;

/// @brief Field suspended, offset: 0x64, size: 0x4, def value: None
 float_t  ___suspended;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController, ___controllingAnimation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController, ___playAnimation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController, ___lateStart) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController, ___animationTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController, ___animationClipIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController, ___clips) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController, ___currentClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController, ___totalTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController, ___bakedAnimationData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController, ___bakedAnimKeyframeData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController, ___enableSuspensionHandling) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController, ___autoIncrementClipOnLateStart) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaEventAnimationController, ___suspended) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaEventAnimationController) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
