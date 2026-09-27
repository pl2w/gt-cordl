#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/IRigConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRigConstraint)
namespace UnityEngine::Animations::Rigging {
class IAnimationJobBinder;
}
namespace UnityEngine::Animations::Rigging {
class IAnimationJobData;
}
namespace UnityEngine::Animations {
class IAnimationJob;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class IRigConstraint;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::IRigConstraint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::IRigConstraint*, "UnityEngine.Animations.Rigging", "IRigConstraint");
// Dependencies 
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.IRigConstraint
class CORDL_TYPE IRigConstraint {
public:
// Declarations
 __declspec(property(get=get_binder)) ::UnityEngine::Animations::Rigging::IAnimationJobBinder*  binder;

 __declspec(property(get=get_component)) ::UnityW<::UnityEngine::Component>  component;

 __declspec(property(get=get_data)) ::UnityEngine::Animations::Rigging::IAnimationJobData*  data;

/// @brief Method CreateJob, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Animations::IAnimationJob* CreateJob(::UnityEngine::Animator*  animator) ;

/// @brief Method DestroyJob, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DestroyJob(::UnityEngine::Animations::IAnimationJob*  job) ;

/// @brief Method IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsValid() ;

/// @brief Method UpdateJob, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateJob(::UnityEngine::Animations::IAnimationJob*  job) ;

/// @brief Method get_binder, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Animations::Rigging::IAnimationJobBinder* get_binder() ;

/// @brief Method get_component, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Component> get_component() ;

/// @brief Method get_data, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Animations::Rigging::IAnimationJobData* get_data() ;

// Ctor Parameters [CppParam { name: "", ty: "IRigConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRigConstraint(IRigConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32299};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations::Rigging
