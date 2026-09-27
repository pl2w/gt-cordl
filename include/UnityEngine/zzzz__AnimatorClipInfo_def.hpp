#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorClipInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorClipInfo)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace UnityEngine {
struct AnimatorClipInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorClipInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::AnimatorClipInfo, "UnityEngine", "AnimatorClipInfo");
// [UsedByNativeCode]
// [NativeHeader("Modules/Animation/ScriptBindings/Animation.bindings.h")]
// [NativeHeader("Modules/Animation/AnimatorInfo.h")]
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AnimatorClipInfo
struct CORDL_TYPE AnimatorClipInfo {
public:
// Declarations
 __declspec(property(get=get_clip)) ::UnityW<::UnityEngine::AnimationClip>  clip;

 __declspec(property(get=get_weight)) float_t  weight;

/// [FreeFunction("AnimationBindings::InstanceIDToAnimationClipPPtr")]
/// @brief Method InstanceIDToAnimationClipPPtr, addr 0xb53f1c4, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AnimationClip> InstanceIDToAnimationClipPPtr(::UnityEngine::EntityId  entityId) ;

/// @brief Method InstanceIDToAnimationClipPPtr_Injected, addr 0xb53f23c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr InstanceIDToAnimationClipPPtr_Injected(::by_ref<::UnityEngine::EntityId>  entityId) ;

/// @brief Method get_clip, addr 0xb53f19c, size 0x28, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_clip() ;

/// @brief Method get_weight, addr 0xb53f234, size 0x8, virtual false, abstract: false, final false
inline float_t get_weight() ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimatorClipInfo() ;

// Ctor Parameters [CppParam { name: "m_ClipInstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr AnimatorClipInfo(int32_t  m_ClipInstanceID, float_t  m_Weight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29776};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ClipInstanceID, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ClipInstanceID;

/// @brief Field m_Weight, offset: 0x4, size: 0x4, def value: None
 float_t  m_Weight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AnimatorClipInfo, m_ClipInstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimatorClipInfo, m_Weight) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AnimatorClipInfo) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine
