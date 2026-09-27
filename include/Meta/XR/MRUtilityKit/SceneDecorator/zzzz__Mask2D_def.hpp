#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Mask2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Mask2D)
namespace Meta::XR::MRUtilityKit {
struct Float3X3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class Mask2D;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D*, "Meta.XR.MRUtilityKit.SceneDecorator", "Mask2D");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.Mask
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.Mask2D
class CORDL_TYPE Mask2D : public ::Meta::XR::MRUtilityKit::SceneDecorator::Mask {
public:
// Declarations
/// @brief Field offsetX, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_offsetX, put=__cordl_internal_set_offsetX)) float_t  offsetX;

/// @brief Field offsetY, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_offsetY, put=__cordl_internal_set_offsetY)) float_t  offsetY;

/// @brief Field rotation, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) float_t  rotation;

/// @brief Field scaleX, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleX, put=__cordl_internal_set_scaleX)) float_t  scaleX;

/// @brief Field scaleY, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleY, put=__cordl_internal_set_scaleY)) float_t  scaleY;

/// @brief Field shearX, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_shearX, put=__cordl_internal_set_shearX)) float_t  shearX;

/// @brief Field shearY, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_shearY, put=__cordl_internal_set_shearY)) float_t  shearY;

/// @brief Method GenerateAffineTransform, addr 0x9f51df0, size 0x174, virtual false, abstract: false, final false
static inline ::Meta::XR::MRUtilityKit::Float3X3 GenerateAffineTransform(::UnityEngine::Vector2  position, float_t  rotation, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  shear) ;

/// @brief Method GenerateAffineTransform, addr 0x9f50a50, size 0x34, virtual false, abstract: false, final false
static inline ::Meta::XR::MRUtilityKit::Float3X3 GenerateAffineTransform(float_t  positionX, float_t  positionY, float_t  rotation, float_t  scaleX, float_t  scaleY, float_t  shearX, float_t  shearY) ;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D* New_ctor() ;

constexpr float_t const& __cordl_internal_get_offsetX() const;

constexpr float_t& __cordl_internal_get_offsetX() ;

constexpr float_t const& __cordl_internal_get_offsetY() const;

constexpr float_t& __cordl_internal_get_offsetY() ;

constexpr float_t const& __cordl_internal_get_rotation() const;

constexpr float_t& __cordl_internal_get_rotation() ;

constexpr float_t const& __cordl_internal_get_scaleX() const;

constexpr float_t& __cordl_internal_get_scaleX() ;

constexpr float_t const& __cordl_internal_get_scaleY() const;

constexpr float_t& __cordl_internal_get_scaleY() ;

constexpr float_t const& __cordl_internal_get_shearX() const;

constexpr float_t& __cordl_internal_get_shearX() ;

constexpr float_t const& __cordl_internal_get_shearY() const;

constexpr float_t& __cordl_internal_get_shearY() ;

constexpr void __cordl_internal_set_offsetX(float_t  value) ;

constexpr void __cordl_internal_set_offsetY(float_t  value) ;

constexpr void __cordl_internal_set_rotation(float_t  value) ;

constexpr void __cordl_internal_set_scaleX(float_t  value) ;

constexpr void __cordl_internal_set_scaleY(float_t  value) ;

constexpr void __cordl_internal_set_shearX(float_t  value) ;

constexpr void __cordl_internal_set_shearY(float_t  value) ;

/// @brief Method .ctor, addr 0x9f50a9c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mask2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mask2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mask2D(Mask2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mask2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mask2D(Mask2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25935};

/// [SerializeField]
/// @brief Field offsetX, offset: 0x18, size: 0x4, def value: None
 float_t  ___offsetX;

/// [SerializeField]
/// @brief Field offsetY, offset: 0x1c, size: 0x4, def value: None
 float_t  ___offsetY;

/// [SerializeField]
/// @brief Field rotation, offset: 0x20, size: 0x4, def value: None
 float_t  ___rotation;

/// [SerializeField]
/// @brief Field scaleX, offset: 0x24, size: 0x4, def value: None
 float_t  ___scaleX;

/// [SerializeField]
/// @brief Field scaleY, offset: 0x28, size: 0x4, def value: None
 float_t  ___scaleY;

/// [SerializeField]
/// @brief Field shearX, offset: 0x2c, size: 0x4, def value: None
 float_t  ___shearX;

/// [SerializeField]
/// @brief Field shearY, offset: 0x30, size: 0x4, def value: None
 float_t  ___shearY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D, ___offsetX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D, ___offsetY) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D, ___rotation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D, ___scaleX) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D, ___scaleY) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D, ___shearX) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D, ___shearY) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::Mask2D) == 0x38, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
