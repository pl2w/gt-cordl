#pragma once
// IWYU pragma private; include "Oculus/Interaction/RoundedBoxProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RoundedBoxProperties)
namespace Oculus::Interaction {
class MaterialPropertyBlockEditor;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Oculus::Interaction {
class RoundedBoxProperties;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::RoundedBoxProperties*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::RoundedBoxProperties*, "Oculus.Interaction", "RoundedBoxProperties");
// [ExecuteAlways]
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.RoundedBoxProperties
class CORDL_TYPE RoundedBoxProperties : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_BorderColor, put=set_BorderColor)) ::UnityEngine::Color  BorderColor;

 __declspec(property(get=get_BorderInnerRadius, put=set_BorderInnerRadius)) float_t  BorderInnerRadius;

 __declspec(property(get=get_BorderOuterRadius, put=set_BorderOuterRadius)) float_t  BorderOuterRadius;

 __declspec(property(get=get_Color, put=set_Color)) ::UnityEngine::Color  Color;

 __declspec(property(get=get_Height, put=set_Height)) float_t  Height;

 __declspec(property(get=get_RadiusBottomLeft, put=set_RadiusBottomLeft)) float_t  RadiusBottomLeft;

 __declspec(property(get=get_RadiusBottomRight, put=set_RadiusBottomRight)) float_t  RadiusBottomRight;

 __declspec(property(get=get_RadiusTopLeft, put=set_RadiusTopLeft)) float_t  RadiusTopLeft;

 __declspec(property(get=get_RadiusTopRight, put=set_RadiusTopRight)) float_t  RadiusTopRight;

 __declspec(property(get=get_Width, put=set_Width)) float_t  Width;

/// @brief Field _borderColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__borderColor, put=__cordl_internal_set__borderColor)) ::UnityEngine::Color  _borderColor;

/// @brief Field _borderColorShaderID, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__borderColorShaderID, put=__cordl_internal_set__borderColorShaderID)) int32_t  _borderColorShaderID;

/// @brief Field _borderInnerRadius, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__borderInnerRadius, put=__cordl_internal_set__borderInnerRadius)) float_t  _borderInnerRadius;

/// @brief Field _borderOuterRadius, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__borderOuterRadius, put=__cordl_internal_set__borderOuterRadius)) float_t  _borderOuterRadius;

/// @brief Field _color, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _colorShaderID, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__colorShaderID, put=__cordl_internal_set__colorShaderID)) int32_t  _colorShaderID;

/// @brief Field _dimensionsShaderID, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__dimensionsShaderID, put=__cordl_internal_set__dimensionsShaderID)) int32_t  _dimensionsShaderID;

/// @brief Field _editor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__editor, put=__cordl_internal_set__editor)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _editor;

/// @brief Field _height, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__height, put=__cordl_internal_set__height)) float_t  _height;

/// @brief Field _radiiShaderID, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__radiiShaderID, put=__cordl_internal_set__radiiShaderID)) int32_t  _radiiShaderID;

/// @brief Field _radiusBottomLeft, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__radiusBottomLeft, put=__cordl_internal_set__radiusBottomLeft)) float_t  _radiusBottomLeft;

/// @brief Field _radiusBottomRight, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__radiusBottomRight, put=__cordl_internal_set__radiusBottomRight)) float_t  _radiusBottomRight;

/// @brief Field _radiusTopLeft, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__radiusTopLeft, put=__cordl_internal_set__radiusTopLeft)) float_t  _radiusTopLeft;

/// @brief Field _radiusTopRight, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__radiusTopRight, put=__cordl_internal_set__radiusTopRight)) float_t  _radiusTopRight;

/// @brief Field _width, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__width, put=__cordl_internal_set__width)) float_t  _width;

/// @brief Method Awake, addr 0xa472688, size 0x18, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::RoundedBoxProperties* New_ctor() ;

/// @brief Method OnValidate, addr 0xa472854, size 0x18, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Start, addr 0xa47283c, size 0x18, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateMaterialPropertyBlock, addr 0xa4726a0, size 0x19c, virtual false, abstract: false, final false
inline void UpdateMaterialPropertyBlock() ;

/// @brief Method UpdateSize, addr 0xa4725a4, size 0x44, virtual false, abstract: false, final false
inline void UpdateSize() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__borderColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__borderColor() ;

constexpr int32_t const& __cordl_internal_get__borderColorShaderID() const;

constexpr int32_t& __cordl_internal_get__borderColorShaderID() ;

constexpr float_t const& __cordl_internal_get__borderInnerRadius() const;

constexpr float_t& __cordl_internal_get__borderInnerRadius() ;

constexpr float_t const& __cordl_internal_get__borderOuterRadius() const;

constexpr float_t& __cordl_internal_get__borderOuterRadius() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr int32_t const& __cordl_internal_get__colorShaderID() const;

constexpr int32_t& __cordl_internal_get__colorShaderID() ;

constexpr int32_t const& __cordl_internal_get__dimensionsShaderID() const;

constexpr int32_t& __cordl_internal_get__dimensionsShaderID() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__editor() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__editor() ;

constexpr float_t const& __cordl_internal_get__height() const;

constexpr float_t& __cordl_internal_get__height() ;

constexpr int32_t const& __cordl_internal_get__radiiShaderID() const;

constexpr int32_t& __cordl_internal_get__radiiShaderID() ;

constexpr float_t const& __cordl_internal_get__radiusBottomLeft() const;

constexpr float_t& __cordl_internal_get__radiusBottomLeft() ;

constexpr float_t const& __cordl_internal_get__radiusBottomRight() const;

constexpr float_t& __cordl_internal_get__radiusBottomRight() ;

constexpr float_t const& __cordl_internal_get__radiusTopLeft() const;

constexpr float_t& __cordl_internal_get__radiusTopLeft() ;

constexpr float_t const& __cordl_internal_get__radiusTopRight() const;

constexpr float_t& __cordl_internal_get__radiusTopRight() ;

constexpr float_t const& __cordl_internal_get__width() const;

constexpr float_t& __cordl_internal_get__width() ;

constexpr void __cordl_internal_set__borderColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__borderColorShaderID(int32_t  value) ;

constexpr void __cordl_internal_set__borderInnerRadius(float_t  value) ;

constexpr void __cordl_internal_set__borderOuterRadius(float_t  value) ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__colorShaderID(int32_t  value) ;

constexpr void __cordl_internal_set__dimensionsShaderID(int32_t  value) ;

constexpr void __cordl_internal_set__editor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__height(float_t  value) ;

constexpr void __cordl_internal_set__radiiShaderID(int32_t  value) ;

constexpr void __cordl_internal_set__radiusBottomLeft(float_t  value) ;

constexpr void __cordl_internal_set__radiusBottomRight(float_t  value) ;

constexpr void __cordl_internal_set__radiusTopLeft(float_t  value) ;

constexpr void __cordl_internal_set__radiusTopRight(float_t  value) ;

constexpr void __cordl_internal_set__width(float_t  value) ;

/// @brief Method .ctor, addr 0xa47286c, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BorderColor, addr 0xa472610, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_BorderColor() ;

/// @brief Method get_BorderInnerRadius, addr 0xa472668, size 0x8, virtual false, abstract: false, final false
inline float_t get_BorderInnerRadius() ;

/// @brief Method get_BorderOuterRadius, addr 0xa472678, size 0x8, virtual false, abstract: false, final false
inline float_t get_BorderOuterRadius() ;

/// @brief Method get_Color, addr 0xa4725f8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

/// @brief Method get_Height, addr 0xa4725e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_Height() ;

/// @brief Method get_RadiusBottomLeft, addr 0xa472648, size 0x8, virtual false, abstract: false, final false
inline float_t get_RadiusBottomLeft() ;

/// @brief Method get_RadiusBottomRight, addr 0xa472658, size 0x8, virtual false, abstract: false, final false
inline float_t get_RadiusBottomRight() ;

/// @brief Method get_RadiusTopLeft, addr 0xa472628, size 0x8, virtual false, abstract: false, final false
inline float_t get_RadiusTopLeft() ;

/// @brief Method get_RadiusTopRight, addr 0xa472638, size 0x8, virtual false, abstract: false, final false
inline float_t get_RadiusTopRight() ;

/// @brief Method get_Width, addr 0xa472594, size 0x8, virtual false, abstract: false, final false
inline float_t get_Width() ;

/// @brief Method set_BorderColor, addr 0xa47261c, size 0xc, virtual false, abstract: false, final false
inline void set_BorderColor(::UnityEngine::Color  value) ;

/// @brief Method set_BorderInnerRadius, addr 0xa472670, size 0x8, virtual false, abstract: false, final false
inline void set_BorderInnerRadius(float_t  value) ;

/// @brief Method set_BorderOuterRadius, addr 0xa472680, size 0x8, virtual false, abstract: false, final false
inline void set_BorderOuterRadius(float_t  value) ;

/// @brief Method set_Color, addr 0xa472604, size 0xc, virtual false, abstract: false, final false
inline void set_Color(::UnityEngine::Color  value) ;

/// @brief Method set_Height, addr 0xa4725f0, size 0x8, virtual false, abstract: false, final false
inline void set_Height(float_t  value) ;

/// @brief Method set_RadiusBottomLeft, addr 0xa472650, size 0x8, virtual false, abstract: false, final false
inline void set_RadiusBottomLeft(float_t  value) ;

/// @brief Method set_RadiusBottomRight, addr 0xa472660, size 0x8, virtual false, abstract: false, final false
inline void set_RadiusBottomRight(float_t  value) ;

/// @brief Method set_RadiusTopLeft, addr 0xa472630, size 0x8, virtual false, abstract: false, final false
inline void set_RadiusTopLeft(float_t  value) ;

/// @brief Method set_RadiusTopRight, addr 0xa472640, size 0x8, virtual false, abstract: false, final false
inline void set_RadiusTopRight(float_t  value) ;

/// @brief Method set_Width, addr 0xa47259c, size 0x8, virtual false, abstract: false, final false
inline void set_Width(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoundedBoxProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoundedBoxProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoundedBoxProperties(RoundedBoxProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoundedBoxProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoundedBoxProperties(RoundedBoxProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15937};

/// [SerializeField]
/// @brief Field _editor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____editor;

/// [SerializeField]
/// @brief Field _width, offset: 0x28, size: 0x4, def value: None
 float_t  ____width;

/// [SerializeField]
/// @brief Field _height, offset: 0x2c, size: 0x4, def value: None
 float_t  ____height;

/// [SerializeField]
/// @brief Field _color, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// [SerializeField]
/// @brief Field _borderColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____borderColor;

/// [SerializeField]
/// @brief Field _radiusTopLeft, offset: 0x50, size: 0x4, def value: None
 float_t  ____radiusTopLeft;

/// [SerializeField]
/// @brief Field _radiusTopRight, offset: 0x54, size: 0x4, def value: None
 float_t  ____radiusTopRight;

/// [SerializeField]
/// @brief Field _radiusBottomLeft, offset: 0x58, size: 0x4, def value: None
 float_t  ____radiusBottomLeft;

/// [SerializeField]
/// @brief Field _radiusBottomRight, offset: 0x5c, size: 0x4, def value: None
 float_t  ____radiusBottomRight;

/// [SerializeField]
/// @brief Field _borderInnerRadius, offset: 0x60, size: 0x4, def value: None
 float_t  ____borderInnerRadius;

/// [SerializeField]
/// @brief Field _borderOuterRadius, offset: 0x64, size: 0x4, def value: None
 float_t  ____borderOuterRadius;

/// @brief Field _colorShaderID, offset: 0x68, size: 0x4, def value: None
 int32_t  ____colorShaderID;

/// @brief Field _borderColorShaderID, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____borderColorShaderID;

/// @brief Field _radiiShaderID, offset: 0x70, size: 0x4, def value: None
 int32_t  ____radiiShaderID;

/// @brief Field _dimensionsShaderID, offset: 0x74, size: 0x4, def value: None
 int32_t  ____dimensionsShaderID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____editor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____height) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____color) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____borderColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____radiusTopLeft) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____radiusTopRight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____radiusBottomLeft) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____radiusBottomRight) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____borderInnerRadius) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____borderOuterRadius) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____colorShaderID) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____borderColorShaderID) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____radiiShaderID) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RoundedBoxProperties, ____dimensionsShaderID) == 0x74, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::RoundedBoxProperties) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction
