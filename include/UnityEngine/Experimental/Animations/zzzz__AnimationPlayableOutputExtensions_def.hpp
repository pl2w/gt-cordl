#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Animations/AnimationPlayableOutputExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationPlayableOutputExtensions)
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
namespace UnityEngine::Experimental::Animations {
struct AnimationStreamSource;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Experimental::Animations {
class AnimationPlayableOutputExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions*, "UnityEngine.Experimental.Animations", "AnimationPlayableOutputExtensions");
// [StaticAccessor("AnimationPlayableOutputExtensionsBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [Extension]
// [NativeHeader("Modules/Animation/AnimatorDefines.h")]
// [NativeHeader("Modules/Animation/ScriptBindings/AnimationPlayableOutputExtensions.bindings.h")]
// Dependencies System.Object
namespace UnityEngine::Experimental::Animations {
// Is value type: false
// CS Name: UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions
class CORDL_TYPE AnimationPlayableOutputExtensions : public ::System::Object {
public:
// Declarations
/// [NativeThrows]
/// @brief Method InternalSetAnimationStreamSource, addr 0xb54990c, size 0x50, virtual false, abstract: false, final false
static inline void InternalSetAnimationStreamSource(::UnityEngine::Playables::PlayableOutputHandle  output, ::UnityEngine::Experimental::Animations::AnimationStreamSource  streamSource) ;

/// @brief Method InternalSetAnimationStreamSource_Injected, addr 0xb5499fc, size 0x44, virtual false, abstract: false, final false
static inline void InternalSetAnimationStreamSource_Injected(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  output, ::UnityEngine::Experimental::Animations::AnimationStreamSource  streamSource) ;

/// [NativeThrows]
/// @brief Method InternalSetSortingOrder, addr 0xb5499ac, size 0x50, virtual false, abstract: false, final false
static inline void InternalSetSortingOrder(::UnityEngine::Playables::PlayableOutputHandle  output, int32_t  sortingOrder) ;

/// @brief Method InternalSetSortingOrder_Injected, addr 0xb549a40, size 0x44, virtual false, abstract: false, final false
static inline void InternalSetSortingOrder_Injected(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  output, int32_t  sortingOrder) ;

/// [Extension]
/// @brief Method SetAnimationStreamSource, addr 0xb5498b0, size 0x50, virtual false, abstract: false, final false
static inline void SetAnimationStreamSource(::UnityEngine::Animations::AnimationPlayableOutput  output, ::UnityEngine::Experimental::Animations::AnimationStreamSource  streamSource) ;

/// [Extension]
/// @brief Method SetSortingOrder, addr 0xb54995c, size 0x50, virtual false, abstract: false, final false
static inline void SetSortingOrder(::UnityEngine::Animations::AnimationPlayableOutput  output, uint16_t  sortingOrder) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationPlayableOutputExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableOutputExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationPlayableOutputExtensions(AnimationPlayableOutputExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableOutputExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationPlayableOutputExtensions(AnimationPlayableOutputExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29796};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::Animations
