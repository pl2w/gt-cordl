#pragma once
// IWYU pragma private; include "GlobalNamespace/MoveRelativeToTargetProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MoveRelativeToTargetProvider)
namespace Oculus::Interaction {
class IMovementProvider;
}
namespace Oculus::Interaction {
class IMovement;
}
// Forward declare root types
namespace GlobalNamespace {
class MoveRelativeToTargetProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MoveRelativeToTargetProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MoveRelativeToTargetProvider*, "", "MoveRelativeToTargetProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MoveRelativeToTargetProvider
class CORDL_TYPE MoveRelativeToTargetProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to "::Oculus::Interaction::IMovementProvider"
constexpr operator  ::Oculus::Interaction::IMovementProvider*() noexcept;

/// @brief Method CreateMovement, addr 0xa42768c, size 0x50, virtual true, abstract: false, final true
inline ::Oculus::Interaction::IMovement* CreateMovement() ;

static inline ::GlobalNamespace::MoveRelativeToTargetProvider* New_ctor() ;

/// @brief Method .ctor, addr 0xa427778, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::IMovementProvider"
constexpr ::Oculus::Interaction::IMovementProvider* i___Oculus__Interaction__IMovementProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoveRelativeToTargetProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoveRelativeToTargetProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MoveRelativeToTargetProvider(MoveRelativeToTargetProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoveRelativeToTargetProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoveRelativeToTargetProvider(MoveRelativeToTargetProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28239};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MoveRelativeToTargetProvider) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
