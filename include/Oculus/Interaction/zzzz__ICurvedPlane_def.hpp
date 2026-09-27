#pragma once
// IWYU pragma private; include "Oculus/Interaction/ICurvedPlane.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ICurvedPlane)
namespace Oculus::Interaction {
class Cylinder;
}
// Forward declare root types
namespace Oculus::Interaction {
class ICurvedPlane;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ICurvedPlane*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ICurvedPlane*, "Oculus.Interaction", "ICurvedPlane");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ICurvedPlane
class CORDL_TYPE ICurvedPlane {
public:
// Declarations
 __declspec(property(get=get_ArcDegrees)) float_t  ArcDegrees;

 __declspec(property(get=get_Bottom)) float_t  Bottom;

 __declspec(property(get=get_Cylinder)) ::UnityW<::Oculus::Interaction::Cylinder>  Cylinder;

 __declspec(property(get=get_Rotation)) float_t  Rotation;

 __declspec(property(get=get_Top)) float_t  Top;

/// @brief Method get_ArcDegrees, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_ArcDegrees() ;

/// @brief Method get_Bottom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Bottom() ;

/// @brief Method get_Cylinder, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::Oculus::Interaction::Cylinder> get_Cylinder() ;

/// @brief Method get_Rotation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Rotation() ;

/// @brief Method get_Top, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Top() ;

// Ctor Parameters [CppParam { name: "", ty: "ICurvedPlane", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICurvedPlane(ICurvedPlane const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15986};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
