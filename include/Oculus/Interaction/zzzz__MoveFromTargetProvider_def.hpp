#pragma once
// IWYU pragma private; include "Oculus/Interaction/MoveFromTargetProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MoveFromTargetProvider)
namespace Oculus::Interaction {
class IMovementProvider;
}
namespace Oculus::Interaction {
class IMovement;
}
// Forward declare root types
namespace Oculus::Interaction {
class MoveFromTargetProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::MoveFromTargetProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MoveFromTargetProvider*, "Oculus.Interaction", "MoveFromTargetProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.MoveFromTargetProvider
class CORDL_TYPE MoveFromTargetProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to "::Oculus::Interaction::IMovementProvider"
constexpr operator  ::Oculus::Interaction::IMovementProvider*() noexcept;

/// @brief Method CreateMovement, addr 0xa474e0c, size 0x50, virtual true, abstract: false, final true
inline ::Oculus::Interaction::IMovement* CreateMovement() ;

static inline ::Oculus::Interaction::MoveFromTargetProvider* New_ctor() ;

/// @brief Method .ctor, addr 0xa474edc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::IMovementProvider"
constexpr ::Oculus::Interaction::IMovementProvider* i___Oculus__Interaction__IMovementProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoveFromTargetProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoveFromTargetProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MoveFromTargetProvider(MoveFromTargetProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoveFromTargetProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoveFromTargetProvider(MoveFromTargetProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15949};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::MoveFromTargetProvider) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
