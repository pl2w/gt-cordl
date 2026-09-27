#pragma once
// IWYU pragma private; include "Oculus/Interaction/IDistanceInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDistanceInteractor)
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
class IRelativeToRef;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class IDistanceInteractor;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IDistanceInteractor*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IDistanceInteractor*, "Oculus.Interaction", "IDistanceInteractor");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IDistanceInteractor
class CORDL_TYPE IDistanceInteractor {
public:
// Declarations
 __declspec(property(get=get_DistanceInteractable)) ::Oculus::Interaction::IRelativeToRef*  DistanceInteractable;

 __declspec(property(get=get_HitPoint)) ::UnityEngine::Vector3  HitPoint;

 __declspec(property(get=get_Origin)) ::UnityEngine::Pose  Origin;

/// @brief Convert operator to "::Oculus::Interaction::IInteractorView"
constexpr operator  ::Oculus::Interaction::IInteractorView*() noexcept;

/// @brief Method get_DistanceInteractable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::IRelativeToRef* get_DistanceInteractable() ;

/// @brief Method get_HitPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_HitPoint() ;

/// @brief Method get_Origin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Pose get_Origin() ;

/// @brief Convert to "::Oculus::Interaction::IInteractorView"
constexpr ::Oculus::Interaction::IInteractorView* i___Oculus__Interaction__IInteractorView() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IDistanceInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDistanceInteractor(IDistanceInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15698};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
