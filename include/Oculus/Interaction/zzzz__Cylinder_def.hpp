#pragma once
// IWYU pragma private; include "Oculus/Interaction/Cylinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Cylinder)
// Forward declare root types
namespace Oculus::Interaction {
class Cylinder;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Cylinder*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Cylinder*, "Oculus.Interaction", "Cylinder");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Cylinder
class CORDL_TYPE Cylinder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

/// @brief Field _radius, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__radius, put=__cordl_internal_set__radius)) float_t  _radius;

static inline ::Oculus::Interaction::Cylinder* New_ctor() ;

constexpr float_t const& __cordl_internal_get__radius() const;

constexpr float_t& __cordl_internal_get__radius() ;

constexpr void __cordl_internal_set__radius(float_t  value) ;

/// @brief Method .ctor, addr 0xa482564, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Radius, addr 0xa482554, size 0x8, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method set_Radius, addr 0xa48255c, size 0x8, virtual false, abstract: false, final false
inline void set_Radius(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Cylinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Cylinder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Cylinder(Cylinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cylinder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cylinder(Cylinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15984};

/// [Tooltip("The radius of the cylinder.")]
/// [SerializeField]
/// @brief Field _radius, offset: 0x20, size: 0x4, def value: None
 float_t  ____radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Cylinder, ____radius) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Cylinder) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction
