#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/AnimationJobBinder_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AnimationJobBinder_2)
namespace UnityEngine::Animations::Rigging {
class IAnimationJobBinder;
}
namespace UnityEngine::Animations::Rigging {
class IAnimationJobData;
}
namespace UnityEngine::Animations {
struct AnimationScriptPlayable;
}
namespace UnityEngine::Animations {
class IAnimationJob;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
template<typename TJob,typename TData>
class AnimationJobBinder_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Animations::Rigging::AnimationJobBinder_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Animations::Rigging::AnimationJobBinder_2, "UnityEngine.Animations.Rigging", "AnimationJobBinder`2");
// Dependencies System.Object
namespace UnityEngine::Animations::Rigging {
// cpp template
template<typename TJob,typename TData>
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.AnimationJobBinder`2<TJob,TData>
class CORDL_TYPE AnimationJobBinder_2 : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Animations::Rigging::IAnimationJobBinder"
constexpr operator  ::UnityEngine::Animations::Rigging::IAnimationJobBinder*() noexcept;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TJob Create(::UnityEngine::Animator*  animator, ::by_ref<TData>  data, ::UnityEngine::Component*  component) ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Destroy(TJob  job) ;

static inline ::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>* New_ctor() ;

/// @brief Method UnityEngine.Animations.Rigging.IAnimationJobBinder.Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Animations::IAnimationJob* UnityEngine_Animations_Rigging_IAnimationJobBinder_Create(::UnityEngine::Animator*  animator, ::UnityEngine::Animations::Rigging::IAnimationJobData*  data, ::UnityEngine::Component*  component) ;

/// @brief Method UnityEngine.Animations.Rigging.IAnimationJobBinder.CreatePlayable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::Animations::AnimationScriptPlayable UnityEngine_Animations_Rigging_IAnimationJobBinder_CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Animations::IAnimationJob*  job) ;

/// @brief Method UnityEngine.Animations.Rigging.IAnimationJobBinder.Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnityEngine_Animations_Rigging_IAnimationJobBinder_Destroy(::UnityEngine::Animations::IAnimationJob*  job) ;

/// @brief Method UnityEngine.Animations.Rigging.IAnimationJobBinder.Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnityEngine_Animations_Rigging_IAnimationJobBinder_Update(::UnityEngine::Animations::IAnimationJob*  job, ::UnityEngine::Animations::Rigging::IAnimationJobData*  data) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update(TJob  job, ::by_ref<TData>  data) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::Animations::Rigging::IAnimationJobBinder"
constexpr ::UnityEngine::Animations::Rigging::IAnimationJobBinder* i___UnityEngine__Animations__Rigging__IAnimationJobBinder() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationJobBinder_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationJobBinder_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationJobBinder_2(AnimationJobBinder_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationJobBinder_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationJobBinder_2(AnimationJobBinder_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32291};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations::Rigging
