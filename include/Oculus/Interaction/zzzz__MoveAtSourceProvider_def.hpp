#pragma once
// IWYU pragma private; include "Oculus/Interaction/MoveAtSourceProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MoveAtSourceProvider)
namespace Oculus::Interaction {
class IMovementProvider;
}
namespace Oculus::Interaction {
class IMovement;
}
// Forward declare root types
namespace Oculus::Interaction {
class MoveAtSourceProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::MoveAtSourceProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MoveAtSourceProvider*, "Oculus.Interaction", "MoveAtSourceProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.MoveAtSourceProvider
class CORDL_TYPE MoveAtSourceProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to "::Oculus::Interaction::IMovementProvider"
constexpr operator  ::Oculus::Interaction::IMovementProvider*() noexcept;

/// @brief Method CreateMovement, addr 0xa474a6c, size 0x50, virtual true, abstract: false, final true
inline ::Oculus::Interaction::IMovement* CreateMovement() ;

static inline ::Oculus::Interaction::MoveAtSourceProvider* New_ctor() ;

/// @brief Method .ctor, addr 0xa474b3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::IMovementProvider"
constexpr ::Oculus::Interaction::IMovementProvider* i___Oculus__Interaction__IMovementProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoveAtSourceProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoveAtSourceProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MoveAtSourceProvider(MoveAtSourceProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoveAtSourceProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoveAtSourceProvider(MoveAtSourceProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15947};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::MoveAtSourceProvider) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
