#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationLayerMixerPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationLayerMixerPlayable)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AvatarMask;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationLayerMixerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationLayerMixerPlayable);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimationLayerMixerPlayable, "UnityEngine.Animations", "AnimationLayerMixerPlayable");
// [NativeHeader("Runtime/Director/Core/HPlayable.h")]
// [StaticAccessor("AnimationLayerMixerPlayableBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [RequiredByNativeCode]
// [NativeHeader("Modules/Animation/Director/AnimationLayerMixerPlayable.h")]
// [NativeHeader("Modules/Animation/ScriptBindings/AnimationLayerMixerPlayable.bindings.h")]
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationLayerMixerPlayable
struct CORDL_TYPE AnimationLayerMixerPlayable {
public:
// Declarations
/// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_m_NullPlayable, put=setStaticF_m_NullPlayable)) ::UnityEngine::Animations::AnimationLayerMixerPlayable  m_NullPlayable;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>*() ;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Method Create, addr 0xb54a224, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable Create(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount, bool  singleLayerOptimization) ;

/// @brief Method CreateHandle, addr 0xb54a2cc, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// [NativeThrows]
/// @brief Method CreateHandleInternal, addr 0xb54a508, size 0x8c, virtual false, abstract: false, final false
static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph  graph, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method CreateHandleInternal_Injected, addr 0xb54a9a8, size 0x44, virtual false, abstract: false, final false
static inline bool CreateHandleInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method Equals, addr 0xb54a664, size 0x9c, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Animations::AnimationLayerMixerPlayable  other) ;

/// @brief Method GetHandle, addr 0xb54a5d8, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method SetLayerMaskFromAvatarMask, addr 0xb54a700, size 0x1f0, virtual false, abstract: false, final false
inline void SetLayerMaskFromAvatarMask(uint32_t  layerIndex, ::UnityEngine::AvatarMask*  mask) ;

/// [NativeThrows]
/// @brief Method SetLayerMaskFromAvatarMaskInternal, addr 0xb54a8f0, size 0xb8, virtual false, abstract: false, final false
static inline void SetLayerMaskFromAvatarMaskInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, uint32_t  layerIndex, ::UnityEngine::AvatarMask*  mask) ;

/// @brief Method SetLayerMaskFromAvatarMaskInternal_Injected, addr 0xb54a9ec, size 0x54, virtual false, abstract: false, final false
static inline void SetLayerMaskFromAvatarMaskInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, uint32_t  layerIndex, ::System::IntPtr  mask) ;

/// [NativeThrows]
/// @brief Method SetSingleLayerOptimizationInternal, addr 0xb54a594, size 0x44, virtual false, abstract: false, final false
static inline void SetSingleLayerOptimizationInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, bool  value) ;

/// @brief Method .ctor, addr 0xb54a3bc, size 0x14c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle, bool  singleLayerOptimization) ;

static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable getStaticF_m_NullPlayable() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationLayerMixerPlayable_() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable() ;

/// @brief Method op_Implicit, addr 0xb54a5e4, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationLayerMixerPlayable  playable) ;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationLayerMixerPlayable  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimationLayerMixerPlayable() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None, comment: None }]
constexpr AnimationLayerMixerPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29807};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationLayerMixerPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::AnimationLayerMixerPlayable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
