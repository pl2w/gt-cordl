#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/DistantInteractionPolylineVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/DistanceReticles/zzzz__DistantInteractionLineVisual_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DistantInteractionPolylineVisual)
namespace Oculus::Interaction {
class IDistanceInteractor;
}
namespace Oculus::Interaction {
class PolylineRenderer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
class DistantInteractionPolylineVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceReticles::DistantInteractionPolylineVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::DistantInteractionPolylineVisual*, "Oculus.Interaction.DistanceReticles", "DistantInteractionPolylineVisual");
// Dependencies Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual, UnityEngine.Color
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.DistantInteractionPolylineVisual
class CORDL_TYPE DistantInteractionPolylineVisual : public ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual {
public:
// Declarations
 __declspec(property(get=get_Color, put=set_Color)) ::UnityEngine::Color  Color;

 __declspec(property(get=get_LineWidth, put=set_LineWidth)) float_t  LineWidth;

/// @brief Field _color, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _lineMaterial, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__lineMaterial, put=__cordl_internal_set__lineMaterial)) ::UnityW<::UnityEngine::Material>  _lineMaterial;

/// @brief Field _linePointsVec4, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__linePointsVec4, put=__cordl_internal_set__linePointsVec4)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  _linePointsVec4;

/// @brief Field _lineWidth, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__lineWidth, put=__cordl_internal_set__lineWidth)) float_t  _lineWidth;

/// @brief Field _polylineRenderer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__polylineRenderer, put=__cordl_internal_set__polylineRenderer)) ::Oculus::Interaction::PolylineRenderer*  _polylineRenderer;

/// @brief Method HideLine, addr 0xa4f0314, size 0x4, virtual true, abstract: false, final false
inline void HideLine() ;

/// @brief Method InjectAllDistantInteractionPolylineVisual, addr 0xa4f0318, size 0x54, virtual false, abstract: false, final false
inline void InjectAllDistantInteractionPolylineVisual(::Oculus::Interaction::IDistanceInteractor*  interactor, ::UnityEngine::Color  color, ::UnityEngine::Material*  material) ;

/// @brief Method InjectLineColor, addr 0xa4f036c, size 0xc, virtual false, abstract: false, final false
inline void InjectLineColor(::UnityEngine::Color  color) ;

/// @brief Method InjectLineMaterial, addr 0xa4f0378, size 0x8, virtual false, abstract: false, final false
inline void InjectLineMaterial(::UnityEngine::Material*  material) ;

static inline ::Oculus::Interaction::DistanceReticles::DistantInteractionPolylineVisual* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa4f0228, size 0x18, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RenderLine, addr 0xa4f0240, size 0xd4, virtual true, abstract: false, final false
inline void RenderLine(::ArrayW<::UnityEngine::Vector3>  linePoints) ;

/// @brief Method Start, addr 0xa4f012c, size 0xfc, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__lineMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__lineMaterial() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get__linePointsVec4() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get__linePointsVec4() ;

constexpr float_t const& __cordl_internal_get__lineWidth() const;

constexpr float_t& __cordl_internal_get__lineWidth() ;

constexpr ::Oculus::Interaction::PolylineRenderer* const& __cordl_internal_get__polylineRenderer() const;

constexpr ::Oculus::Interaction::PolylineRenderer*& __cordl_internal_get__polylineRenderer() ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__lineMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__linePointsVec4(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set__lineWidth(float_t  value) ;

constexpr void __cordl_internal_set__polylineRenderer(::Oculus::Interaction::PolylineRenderer*  value) ;

/// @brief Method .ctor, addr 0xa4f0380, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Color, addr 0xa4f0104, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

/// @brief Method get_LineWidth, addr 0xa4f011c, size 0x8, virtual false, abstract: false, final false
inline float_t get_LineWidth() ;

/// @brief Method set_Color, addr 0xa4f0110, size 0xc, virtual false, abstract: false, final false
inline void set_Color(::UnityEngine::Color  value) ;

/// @brief Method set_LineWidth, addr 0xa4f0124, size 0x8, virtual false, abstract: false, final false
inline void set_LineWidth(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistantInteractionPolylineVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistantInteractionPolylineVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistantInteractionPolylineVisual(DistantInteractionPolylineVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistantInteractionPolylineVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistantInteractionPolylineVisual(DistantInteractionPolylineVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16367};

/// [SerializeField]
/// @brief Field _color, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// [SerializeField]
/// @brief Field _lineWidth, offset: 0x78, size: 0x4, def value: None
 float_t  ____lineWidth;

/// @brief Field _linePointsVec4, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ____linePointsVec4;

/// [SerializeField]
/// @brief Field _lineMaterial, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____lineMaterial;

/// @brief Field _polylineRenderer, offset: 0x90, size: 0x8, def value: None
 ::Oculus::Interaction::PolylineRenderer*  ____polylineRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionPolylineVisual, ____color) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionPolylineVisual, ____lineWidth) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionPolylineVisual, ____linePointsVec4) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionPolylineVisual, ____lineMaterial) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionPolylineVisual, ____polylineRenderer) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::DistantInteractionPolylineVisual) == 0x98, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
