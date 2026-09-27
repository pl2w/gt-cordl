#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandPokeOvershootGlow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/zzzz__HandPokeOvershootGlow_GlowType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandPokeOvershootGlow)
namespace GlobalNamespace {
struct HandPokeOvershootGlow_GlowType;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class HandVisual;
}
namespace Oculus::Interaction {
class MaterialPropertyBlockEditor;
}
namespace Oculus::Interaction {
class PokeInteractor;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandPokeOvershootGlow;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandPokeOvershootGlow*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandPokeOvershootGlow*, "Oculus.Interaction", "HandPokeOvershootGlow");
// Dependencies Oculus.Interaction.HandPokeOvershootGlow::GlowType, Oculus.Interaction.Input.HandFinger, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandPokeOvershootGlow
class CORDL_TYPE HandPokeOvershootGlow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GlowType = ::GlobalNamespace::HandPokeOvershootGlow_GlowType;

/// @brief Field Hand, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hand, put=__cordl_internal_set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field _generateGlowID, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__generateGlowID, put=__cordl_internal_set__generateGlowID)) int32_t  _generateGlowID;

/// @brief Field _glowColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__glowColor, put=__cordl_internal_set__glowColor)) ::UnityEngine::Color  _glowColor;

/// @brief Field _glowColorID, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowColorID, put=__cordl_internal_set__glowColorID)) int32_t  _glowColorID;

/// @brief Field _glowEnabled, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__glowEnabled, put=__cordl_internal_set__glowEnabled)) bool  _glowEnabled;

/// @brief Field _glowFingerIndexID, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowFingerIndexID, put=__cordl_internal_set__glowFingerIndexID)) int32_t  _glowFingerIndexID;

/// @brief Field _glowMaxLengthID, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowMaxLengthID, put=__cordl_internal_set__glowMaxLengthID)) int32_t  _glowMaxLengthID;

/// @brief Field _glowParameterID, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowParameterID, put=__cordl_internal_set__glowParameterID)) int32_t  _glowParameterID;

/// @brief Field _glowType, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowType, put=__cordl_internal_set__glowType)) ::GlobalNamespace::HandPokeOvershootGlow_GlowType  _glowType;

/// @brief Field _glowTypeID, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__glowTypeID, put=__cordl_internal_set__glowTypeID)) int32_t  _glowTypeID;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _handRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__handRenderer, put=__cordl_internal_set__handRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  _handRenderer;

/// @brief Field _handVisual, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__handVisual, put=__cordl_internal_set__handVisual)) ::UnityW<::Oculus::Interaction::HandVisual>  _handVisual;

/// @brief Field _materialEditor, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialEditor, put=__cordl_internal_set__materialEditor)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _materialEditor;

/// @brief Field _maxGradientLength, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxGradientLength, put=__cordl_internal_set__maxGradientLength)) float_t  _maxGradientLength;

/// @brief Field _overshootMaxDistance, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__overshootMaxDistance, put=__cordl_internal_set__overshootMaxDistance)) float_t  _overshootMaxDistance;

/// @brief Field _pokeFinger, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__pokeFinger, put=__cordl_internal_set__pokeFinger)) ::Oculus::Interaction::Input::HandFinger  _pokeFinger;

/// @brief Field _pokeInteractor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__pokeInteractor, put=__cordl_internal_set__pokeInteractor)) ::UnityW<::Oculus::Interaction::PokeInteractor>  _pokeInteractor;

/// @brief Field _started, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa406cec, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllHandPokeOvershootGlow, addr 0xa407348, size 0x70, virtual false, abstract: false, final false
inline void InjectAllHandPokeOvershootGlow(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PokeInteractor*  pokeInteractor, ::Oculus::Interaction::HandVisual*  handVisual, ::UnityEngine::SkinnedMeshRenderer*  handRenderer, ::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor) ;

/// @brief Method InjectAllHandPokeOvershootGlow, addr 0xa4071ec, size 0x8c, virtual false, abstract: false, final false
inline void InjectAllHandPokeOvershootGlow(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PokeInteractor*  pokeInteractor, ::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor, ::UnityEngine::Color  glowColor, float_t  distanceMultiplier, ::UnityEngine::Transform*  wristTransform, ::GlobalNamespace::HandPokeOvershootGlow_GlowType  glowType) ;

/// @brief Method InjectGlowColor, addr 0xa4073d8, size 0xc, virtual false, abstract: false, final false
inline void InjectGlowColor(::UnityEngine::Color  glowColor) ;

/// @brief Method InjectGlowType, addr 0xa4073ec, size 0x8, virtual false, abstract: false, final false
inline void InjectGlowType(::GlobalNamespace::HandPokeOvershootGlow_GlowType  glowType) ;

/// @brief Method InjectHand, addr 0xa407278, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHandRenderer, addr 0xa4073c0, size 0x8, virtual false, abstract: false, final false
inline void InjectHandRenderer(::UnityEngine::SkinnedMeshRenderer*  handRenderer) ;

/// @brief Method InjectHandVisual, addr 0xa4073c8, size 0x8, virtual false, abstract: false, final false
inline void InjectHandVisual(::Oculus::Interaction::HandVisual*  handVisual) ;

/// @brief Method InjectMaterialPropertyBlockEditor, addr 0xa4073d0, size 0x8, virtual false, abstract: false, final false
inline void InjectMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  materialEditor) ;

/// @brief Method InjectOvershootMaxDistance, addr 0xa4073e4, size 0x8, virtual false, abstract: false, final false
inline void InjectOvershootMaxDistance(float_t  overshootMaxDistance) ;

/// @brief Method InjectPokeInteractor, addr 0xa4073b8, size 0x8, virtual false, abstract: false, final false
inline void InjectPokeInteractor(::Oculus::Interaction::PokeInteractor*  pokeInteractor) ;

static inline ::Oculus::Interaction::HandPokeOvershootGlow* New_ctor() ;

/// @brief Method OnDisable, addr 0xa406ea8, size 0xb0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa406df8, size 0xb0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa406d54, size 0xa4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateOvershoot, addr 0xa406f58, size 0x128, virtual false, abstract: false, final false
inline void UpdateOvershoot(float_t  normalizedDistance) ;

/// @brief Method UpdateVisual, addr 0xa407080, size 0x16c, virtual false, abstract: false, final false
inline void UpdateVisual() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get_Hand() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get_Hand() ;

constexpr int32_t const& __cordl_internal_get__generateGlowID() const;

constexpr int32_t& __cordl_internal_get__generateGlowID() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__glowColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__glowColor() ;

constexpr int32_t const& __cordl_internal_get__glowColorID() const;

constexpr int32_t& __cordl_internal_get__glowColorID() ;

constexpr bool const& __cordl_internal_get__glowEnabled() const;

constexpr bool& __cordl_internal_get__glowEnabled() ;

constexpr int32_t const& __cordl_internal_get__glowFingerIndexID() const;

constexpr int32_t& __cordl_internal_get__glowFingerIndexID() ;

constexpr int32_t const& __cordl_internal_get__glowMaxLengthID() const;

constexpr int32_t& __cordl_internal_get__glowMaxLengthID() ;

constexpr int32_t const& __cordl_internal_get__glowParameterID() const;

constexpr int32_t& __cordl_internal_get__glowParameterID() ;

constexpr ::GlobalNamespace::HandPokeOvershootGlow_GlowType const& __cordl_internal_get__glowType() const;

constexpr ::GlobalNamespace::HandPokeOvershootGlow_GlowType& __cordl_internal_get__glowType() ;

constexpr int32_t const& __cordl_internal_get__glowTypeID() const;

constexpr int32_t& __cordl_internal_get__glowTypeID() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get__handRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get__handRenderer() ;

constexpr ::UnityW<::Oculus::Interaction::HandVisual> const& __cordl_internal_get__handVisual() const;

constexpr ::UnityW<::Oculus::Interaction::HandVisual>& __cordl_internal_get__handVisual() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__materialEditor() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__materialEditor() ;

constexpr float_t const& __cordl_internal_get__maxGradientLength() const;

constexpr float_t& __cordl_internal_get__maxGradientLength() ;

constexpr float_t const& __cordl_internal_get__overshootMaxDistance() const;

constexpr float_t& __cordl_internal_get__overshootMaxDistance() ;

constexpr ::Oculus::Interaction::Input::HandFinger const& __cordl_internal_get__pokeFinger() const;

constexpr ::Oculus::Interaction::Input::HandFinger& __cordl_internal_get__pokeFinger() ;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractor> const& __cordl_internal_get__pokeInteractor() const;

constexpr ::UnityW<::Oculus::Interaction::PokeInteractor>& __cordl_internal_get__pokeInteractor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__generateGlowID(int32_t  value) ;

constexpr void __cordl_internal_set__glowColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__glowColorID(int32_t  value) ;

constexpr void __cordl_internal_set__glowEnabled(bool  value) ;

constexpr void __cordl_internal_set__glowFingerIndexID(int32_t  value) ;

constexpr void __cordl_internal_set__glowMaxLengthID(int32_t  value) ;

constexpr void __cordl_internal_set__glowParameterID(int32_t  value) ;

constexpr void __cordl_internal_set__glowType(::GlobalNamespace::HandPokeOvershootGlow_GlowType  value) ;

constexpr void __cordl_internal_set__glowTypeID(int32_t  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set__handVisual(::UnityW<::Oculus::Interaction::HandVisual>  value) ;

constexpr void __cordl_internal_set__materialEditor(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__maxGradientLength(float_t  value) ;

constexpr void __cordl_internal_set__overshootMaxDistance(float_t  value) ;

constexpr void __cordl_internal_set__pokeFinger(::Oculus::Interaction::Input::HandFinger  value) ;

constexpr void __cordl_internal_set__pokeInteractor(::UnityW<::Oculus::Interaction::PokeInteractor>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4073f4, size 0x154, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandPokeOvershootGlow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandPokeOvershootGlow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandPokeOvershootGlow(HandPokeOvershootGlow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandPokeOvershootGlow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandPokeOvershootGlow(HandPokeOvershootGlow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15717};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [SerializeField]
/// @brief Field _pokeInteractor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PokeInteractor>  ____pokeInteractor;

/// [SerializeField]
/// @brief Field _handVisual, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandVisual>  ____handVisual;

/// [SerializeField]
/// @brief Field _handRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ____handRenderer;

/// [SerializeField]
/// @brief Field _materialEditor, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____materialEditor;

/// [SerializeField]
/// @brief Field _glowColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ____glowColor;

/// [SerializeField]
/// @brief Field _overshootMaxDistance, offset: 0x58, size: 0x4, def value: None
 float_t  ____overshootMaxDistance;

/// [SerializeField]
/// @brief Field _pokeFinger, offset: 0x5c, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandFinger  ____pokeFinger;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _maxGradientLength, offset: 0x60, size: 0x4, def value: None
 float_t  ____maxGradientLength;

/// [SerializeField]
/// @brief Field _glowType, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::HandPokeOvershootGlow_GlowType  ____glowType;

/// @brief Field Hand, offset: 0x68, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ___Hand;

/// @brief Field _glowEnabled, offset: 0x70, size: 0x1, def value: None
 bool  ____glowEnabled;

/// @brief Field _glowFingerIndexID, offset: 0x74, size: 0x4, def value: None
 int32_t  ____glowFingerIndexID;

/// @brief Field _generateGlowID, offset: 0x78, size: 0x4, def value: None
 int32_t  ____generateGlowID;

/// @brief Field _glowColorID, offset: 0x7c, size: 0x4, def value: None
 int32_t  ____glowColorID;

/// @brief Field _glowTypeID, offset: 0x80, size: 0x4, def value: None
 int32_t  ____glowTypeID;

/// @brief Field _glowParameterID, offset: 0x84, size: 0x4, def value: None
 int32_t  ____glowParameterID;

/// @brief Field _glowMaxLengthID, offset: 0x88, size: 0x4, def value: None
 int32_t  ____glowMaxLengthID;

/// @brief Field _started, offset: 0x8c, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____pokeInteractor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____handVisual) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____handRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____materialEditor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____glowColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____overshootMaxDistance) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____pokeFinger) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____maxGradientLength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____glowType) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ___Hand) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____glowEnabled) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____glowFingerIndexID) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____generateGlowID) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____glowColorID) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____glowTypeID) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____glowParameterID) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____glowMaxLengthID) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandPokeOvershootGlow, ____started) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandPokeOvershootGlow) == 0x90, "Size mismatch!");

} // namespace end def Oculus::Interaction
