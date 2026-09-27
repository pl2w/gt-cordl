#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/CylinderClipper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CylinderClipper)
namespace Oculus::Interaction::Surfaces {
struct CylinderSegment;
}
namespace Oculus::Interaction::Surfaces {
class ICylinderClipper;
}
// Forward declare root types
namespace Oculus::Interaction::Surfaces {
class CylinderClipper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::CylinderClipper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::CylinderClipper*, "Oculus.Interaction.Surfaces", "CylinderClipper");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.CylinderClipper
class CORDL_TYPE CylinderClipper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ArcDegrees, put=set_ArcDegrees)) float_t  ArcDegrees;

 __declspec(property(get=get_Bottom, put=set_Bottom)) float_t  Bottom;

 __declspec(property(get=get_Rotation, put=set_Rotation)) float_t  Rotation;

 __declspec(property(get=get_Top, put=set_Top)) float_t  Top;

/// @brief Field _arcDegrees, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__arcDegrees, put=__cordl_internal_set__arcDegrees)) float_t  _arcDegrees;

/// @brief Field _bottom, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__bottom, put=__cordl_internal_set__bottom)) float_t  _bottom;

/// @brief Field _rotation, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotation, put=__cordl_internal_set__rotation)) float_t  _rotation;

/// @brief Field _top, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__top, put=__cordl_internal_set__top)) float_t  _top;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ICylinderClipper"
constexpr operator  ::Oculus::Interaction::Surfaces::ICylinderClipper*() noexcept;

/// @brief Method GetCylinderSegment, addr 0xa4b5c4c, size 0x14, virtual true, abstract: false, final true
inline bool GetCylinderSegment(::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>  segment) ;

static inline ::Oculus::Interaction::Surfaces::CylinderClipper* New_ctor() ;

constexpr float_t const& __cordl_internal_get__arcDegrees() const;

constexpr float_t& __cordl_internal_get__arcDegrees() ;

constexpr float_t const& __cordl_internal_get__bottom() const;

constexpr float_t& __cordl_internal_get__bottom() ;

constexpr float_t const& __cordl_internal_get__rotation() const;

constexpr float_t& __cordl_internal_get__rotation() ;

constexpr float_t const& __cordl_internal_get__top() const;

constexpr float_t& __cordl_internal_get__top() ;

constexpr void __cordl_internal_set__arcDegrees(float_t  value) ;

constexpr void __cordl_internal_set__bottom(float_t  value) ;

constexpr void __cordl_internal_set__rotation(float_t  value) ;

constexpr void __cordl_internal_set__top(float_t  value) ;

/// @brief Method .ctor, addr 0xa4b5c60, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ArcDegrees, addr 0xa4b5c0c, size 0x8, virtual false, abstract: false, final false
inline float_t get_ArcDegrees() ;

/// @brief Method get_Bottom, addr 0xa4b5c2c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Bottom() ;

/// @brief Method get_Rotation, addr 0xa4b5c1c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Rotation() ;

/// @brief Method get_Top, addr 0xa4b5c3c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Top() ;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ICylinderClipper"
constexpr ::Oculus::Interaction::Surfaces::ICylinderClipper* i___Oculus__Interaction__Surfaces__ICylinderClipper() noexcept;

/// @brief Method set_ArcDegrees, addr 0xa4b5c14, size 0x8, virtual false, abstract: false, final false
inline void set_ArcDegrees(float_t  value) ;

/// @brief Method set_Bottom, addr 0xa4b5c34, size 0x8, virtual false, abstract: false, final false
inline void set_Bottom(float_t  value) ;

/// @brief Method set_Rotation, addr 0xa4b5c24, size 0x8, virtual false, abstract: false, final false
inline void set_Rotation(float_t  value) ;

/// @brief Method set_Top, addr 0xa4b5c44, size 0x8, virtual false, abstract: false, final false
inline void set_Top(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CylinderClipper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CylinderClipper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CylinderClipper(CylinderClipper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CylinderClipper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CylinderClipper(CylinderClipper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16222};

/// [Tooltip("The rotation of the center of the clip area around the y axis, in degrees.")]
/// [SerializeField]
/// [Range(-180, 180)]
/// @brief Field _rotation, offset: 0x20, size: 0x4, def value: None
 float_t  ____rotation;

/// [Tooltip("The arc degrees of the clip area, centered at the rotation value.")]
/// [SerializeField]
/// [Range(0, 360)]
/// @brief Field _arcDegrees, offset: 0x24, size: 0x4, def value: None
 float_t  ____arcDegrees;

/// [Tooltip("The bottom extent of the clip area, along the y axis.")]
/// [SerializeField]
/// @brief Field _bottom, offset: 0x28, size: 0x4, def value: None
 float_t  ____bottom;

/// [Tooltip("The top extent of the clip area, along the y axis.")]
/// [SerializeField]
/// @brief Field _top, offset: 0x2c, size: 0x4, def value: None
 float_t  ____top;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Surfaces::CylinderClipper, ____rotation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::CylinderClipper, ____arcDegrees) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::CylinderClipper, ____bottom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::CylinderClipper, ____top) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Surfaces::CylinderClipper) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces
