#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationClipPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimationClipPlayable)
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
class AnimationClip;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationClipPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationClipPlayable);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimationClipPlayable, "UnityEngine.Animations", "AnimationClipPlayable");
// [RequiredByNativeCode]
// [StaticAccessor("AnimationClipPlayableBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeHeader("Modules/Animation/ScriptBindings/AnimationClipPlayable.bindings.h")]
// [NativeHeader("Modules/Animation/Director/AnimationClipPlayable.h")]
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationClipPlayable
struct CORDL_TYPE AnimationClipPlayable {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>*() ;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Method Create, addr 0xb549c80, size 0x38, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::AnimationClipPlayable Create(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AnimationClip*  clip) ;

/// @brief Method CreateHandle, addr 0xb549cb8, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AnimationClip*  clip) ;

/// [NativeThrows]
/// @brief Method CreateHandleInternal, addr 0xb549e58, size 0xa4, virtual false, abstract: false, final false
static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AnimationClip*  clip, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method CreateHandleInternal_Injected, addr 0xb54a1d0, size 0x54, virtual false, abstract: false, final false
static inline bool CreateHandleInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::System::IntPtr  clip, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method Equals, addr 0xb549f38, size 0x78, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Animations::AnimationClipPlayable  other) ;

/// @brief Method GetHandle, addr 0xb549efc, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method SetApplyFootIK, addr 0xb549fb0, size 0x44, virtual false, abstract: false, final false
inline void SetApplyFootIK(bool  value) ;

/// [NativeThrows]
/// @brief Method SetApplyFootIKInternal, addr 0xb549ff4, size 0x44, virtual false, abstract: false, final false
static inline void SetApplyFootIKInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, bool  value) ;

/// @brief Method SetLoopTime, addr 0xb54a148, size 0x44, virtual false, abstract: false, final false
inline void SetLoopTime(bool  value) ;

/// [NativeThrows]
/// @brief Method SetLoopTimeInternal, addr 0xb54a18c, size 0x44, virtual false, abstract: false, final false
static inline void SetLoopTimeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, bool  value) ;

/// @brief Method SetOverrideLoopTime, addr 0xb54a0c0, size 0x44, virtual false, abstract: false, final false
inline void SetOverrideLoopTime(bool  value) ;

/// [NativeThrows]
/// @brief Method SetOverrideLoopTimeInternal, addr 0xb54a104, size 0x44, virtual false, abstract: false, final false
static inline void SetOverrideLoopTimeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, bool  value) ;

/// @brief Method SetRemoveStartOffset, addr 0xb54a038, size 0x44, virtual false, abstract: false, final false
inline void SetRemoveStartOffset(bool  value) ;

/// [NativeThrows]
/// @brief Method SetRemoveStartOffsetInternal, addr 0xb54a07c, size 0x44, virtual false, abstract: false, final false
static inline void SetRemoveStartOffsetInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, bool  value) ;

/// @brief Method .ctor, addr 0xb549d68, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationClipPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationClipPlayable_() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable() ;

/// @brief Method op_Implicit, addr 0xb549f08, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationClipPlayable  playable) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimationClipPlayable() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None, comment: None }]
constexpr AnimationClipPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29805};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationClipPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::AnimationClipPlayable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
