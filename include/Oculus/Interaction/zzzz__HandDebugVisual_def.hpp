#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__HandDebugGizmos_def.hpp"
CORDL_MODULE_EXPORT(HandDebugVisual)
// Forward declare root types
namespace Oculus::Interaction {
class HandDebugVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandDebugVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandDebugVisual*, "Oculus.Interaction", "HandDebugVisual");
// [Obsolete("Use HandDebugGizmos instead.")]
// Dependencies Oculus.Interaction.HandDebugGizmos
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandDebugVisual
class CORDL_TYPE HandDebugVisual : public ::Oculus::Interaction::HandDebugGizmos {
public:
// Declarations
static inline ::Oculus::Interaction::HandDebugVisual* New_ctor() ;

/// [Obsolete("This method has been deprecated.", true)]
/// @brief Method UpdateSkeleton, addr 0xa46ecc0, size 0x38, virtual false, abstract: false, final false
inline void UpdateSkeleton() ;

/// @brief Method .ctor, addr 0xa46ecf8, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandDebugVisual(HandDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandDebugVisual(HandDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15922};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::HandDebugVisual) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction
