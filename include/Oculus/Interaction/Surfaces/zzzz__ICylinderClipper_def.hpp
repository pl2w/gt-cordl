#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/ICylinderClipper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICylinderClipper)
namespace Oculus::Interaction::Surfaces {
struct CylinderSegment;
}
// Forward declare root types
namespace Oculus::Interaction::Surfaces {
class ICylinderClipper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::ICylinderClipper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::ICylinderClipper*, "Oculus.Interaction.Surfaces", "ICylinderClipper");
// Dependencies 
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.ICylinderClipper
class CORDL_TYPE ICylinderClipper {
public:
// Declarations
/// @brief Method GetCylinderSegment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetCylinderSegment(::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>  segment) ;

// Ctor Parameters [CppParam { name: "", ty: "ICylinderClipper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICylinderClipper(ICylinderClipper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16229};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Surfaces
