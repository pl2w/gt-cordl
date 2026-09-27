#pragma once
// IWYU pragma private; include "Oculus/Interaction/IMovement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMovement)
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class IMovement;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IMovement*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IMovement*, "Oculus.Interaction", "IMovement");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IMovement
class CORDL_TYPE IMovement {
public:
// Declarations
 __declspec(property(get=get_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_Stopped)) bool  Stopped;

/// @brief Method MoveTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MoveTo(::UnityEngine::Pose  target) ;

/// @brief Method StopAndSetPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void StopAndSetPose(::UnityEngine::Pose  pose) ;

/// @brief Method Tick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Tick() ;

/// @brief Method UpdateTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateTarget(::UnityEngine::Pose  target) ;

/// @brief Method get_Pose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Pose get_Pose() ;

/// @brief Method get_Stopped, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_Stopped() ;

// Ctor Parameters [CppParam { name: "", ty: "IMovement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMovement(IMovement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15943};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
