#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/IAnimationJobBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnimationJobBinder)
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
class IAnimationJobBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::IAnimationJobBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::IAnimationJobBinder*, "UnityEngine.Animations.Rigging", "IAnimationJobBinder");
// Dependencies 
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.IAnimationJobBinder
class CORDL_TYPE IAnimationJobBinder {
public:
// Declarations
/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Animations::IAnimationJob* Create(::UnityEngine::Animator*  animator, ::UnityEngine::Animations::Rigging::IAnimationJobData*  data, ::UnityEngine::Component*  component) ;

/// @brief Method CreatePlayable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Animations::AnimationScriptPlayable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Animations::IAnimationJob*  job) ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Destroy(::UnityEngine::Animations::IAnimationJob*  job) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Update(::UnityEngine::Animations::IAnimationJob*  job, ::UnityEngine::Animations::Rigging::IAnimationJobData*  data) ;

// Ctor Parameters [CppParam { name: "", ty: "IAnimationJobBinder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnimationJobBinder(IAnimationJobBinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32290};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations::Rigging
