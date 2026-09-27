#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/IRigLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IRigLayer)
namespace UnityEngine::Animations::Rigging {
class IRigConstraint;
}
namespace UnityEngine::Animations::Rigging {
class Rig;
}
namespace UnityEngine::Animations {
class IAnimationJob;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class IRigLayer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::IRigLayer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::IRigLayer*, "UnityEngine.Animations.Rigging", "IRigLayer");
// Dependencies 
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.IRigLayer
class CORDL_TYPE IRigLayer {
public:
// Declarations
 __declspec(property(get=get_active)) bool  active;

 __declspec(property(get=get_constraints)) ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>  constraints;

 __declspec(property(get=get_jobs)) ::ArrayW<::UnityEngine::Animations::IAnimationJob*>  jobs;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_rig)) ::UnityW<::UnityEngine::Animations::Rigging::Rig>  rig;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Initialize(::UnityEngine::Animator*  animator) ;

/// @brief Method IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsValid() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Update() ;

/// @brief Method get_active, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_active() ;

/// @brief Method get_constraints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> get_constraints() ;

/// @brief Method get_jobs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::UnityEngine::Animations::IAnimationJob*> get_jobs() ;

/// @brief Method get_name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_name() ;

/// @brief Method get_rig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Animations::Rigging::Rig> get_rig() ;

// Ctor Parameters [CppParam { name: "", ty: "IRigLayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRigLayer(IRigLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32300};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations::Rigging
