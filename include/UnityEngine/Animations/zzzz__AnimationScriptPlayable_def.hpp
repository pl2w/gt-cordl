#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationScriptPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Animations/zzzz__IAnimationJob_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationScriptPlayable)
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
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationScriptPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationScriptPlayable);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimationScriptPlayable, "UnityEngine.Animations", "AnimationScriptPlayable");
// [RequiredByNativeCode]
// [StaticAccessor("AnimationScriptPlayableBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeHeader("Runtime/Director/Core/HPlayable.h")]
// [NativeHeader("Modules/Animation/ScriptBindings/AnimationScriptPlayable.bindings.h")]
// [MovedFrom("UnityEngine.Experimental.Animations")]
// [NativeHeader("Runtime/Director/Core/HPlayableGraph.h")]
// Dependencies UnityEngine.Animations.IAnimationJob, UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationScriptPlayable
struct CORDL_TYPE AnimationScriptPlayable {
public:
// Declarations
/// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_m_NullPlayable, put=setStaticF_m_NullPlayable)) ::UnityEngine::Animations::AnimationScriptPlayable  m_NullPlayable;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*() ;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Method CheckJobTypeValidity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void CheckJobTypeValidity() ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Animations::IAnimationJob*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::UnityEngine::Animations::AnimationScriptPlayable Create(::UnityEngine::Playables::PlayableGraph  graph, T  jobData, int32_t  inputCount) ;

/// @brief Method CreateHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Animations::IAnimationJob*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// [NativeThrows]
/// @brief Method CreateHandleInternal, addr 0xb54cb60, size 0x9c, virtual false, abstract: false, final false
static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph  graph, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::System::IntPtr  jobReflectionData) ;

/// @brief Method CreateHandleInternal_Injected, addr 0xb54cbfc, size 0x54, virtual false, abstract: false, final false
static inline bool CreateHandleInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::System::IntPtr  jobReflectionData) ;

/// @brief Method Equals, addr 0xb54cac4, size 0x9c, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Animations::AnimationScriptPlayable  other) ;

/// @brief Method GetHandle, addr 0xb54ca38, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method SetJobData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Animations::IAnimationJob*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetJobData(T  jobData) ;

/// @brief Method .ctor, addr 0xb54c948, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

static inline ::UnityEngine::Animations::AnimationScriptPlayable getStaticF_m_NullPlayable() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationScriptPlayable_() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable() ;

/// @brief Method op_Implicit, addr 0xb54ca44, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationScriptPlayable  playable) ;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationScriptPlayable  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimationScriptPlayable() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None, comment: None }]
constexpr AnimationScriptPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29816};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationScriptPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::AnimationScriptPlayable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
