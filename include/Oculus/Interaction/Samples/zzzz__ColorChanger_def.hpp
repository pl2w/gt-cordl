#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ColorChanger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorChanger)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class ColorChanger;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::ColorChanger*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::ColorChanger*, "Oculus.Interaction.Samples", "ColorChanger");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.ColorChanger
class CORDL_TYPE ColorChanger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lastHue, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastHue, put=__cordl_internal_set__lastHue)) float_t  _lastHue;

/// @brief Field _savedColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__savedColor, put=__cordl_internal_set__savedColor)) ::UnityEngine::Color  _savedColor;

/// @brief Field _target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Renderer>  _target;

/// @brief Field _targetMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetMaterial, put=__cordl_internal_set__targetMaterial)) ::UnityW<::UnityEngine::Material>  _targetMaterial;

static inline ::Oculus::Interaction::Samples::ColorChanger* New_ctor() ;

/// @brief Method NextColor, addr 0xa436b34, size 0x54, virtual false, abstract: false, final false
inline void NextColor() ;

/// @brief Method OnDestroy, addr 0xa436c30, size 0x5c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Revert, addr 0xa436bb4, size 0x24, virtual false, abstract: false, final false
inline void Revert() ;

/// @brief Method Save, addr 0xa436b88, size 0x2c, virtual false, abstract: false, final false
inline void Save() ;

/// @brief Method Start, addr 0xa436bd8, size 0x58, virtual true, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get__lastHue() const;

constexpr float_t& __cordl_internal_get__lastHue() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__savedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__savedColor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__target() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__targetMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__targetMaterial() ;

constexpr void __cordl_internal_set__lastHue(float_t  value) ;

constexpr void __cordl_internal_set__savedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__targetMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0xa436c8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorChanger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorChanger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorChanger(ColorChanger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorChanger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorChanger(ColorChanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28296};

/// [SerializeField]
/// @brief Field _target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____target;

/// @brief Field _targetMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____targetMaterial;

/// @brief Field _savedColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____savedColor;

/// @brief Field _lastHue, offset: 0x40, size: 0x4, def value: None
 float_t  ____lastHue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::ColorChanger, ____target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ColorChanger, ____targetMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ColorChanger, ____savedColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ColorChanger, ____lastHue) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::ColorChanger) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
