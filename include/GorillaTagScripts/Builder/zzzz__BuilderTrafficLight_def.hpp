#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderTrafficLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Builder/zzzz__BuilderTrafficLight_LightState_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTrafficLight)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
struct BuilderTrafficLight_LightState;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderTrafficLight;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderTrafficLight*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderTrafficLight*, "GorillaTagScripts.Builder", "BuilderTrafficLight");
// Dependencies GorillaTagScripts.Builder.BuilderTrafficLight::LightState, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderTrafficLight
class CORDL_TYPE BuilderTrafficLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LightState = ::GlobalNamespace::BuilderTrafficLight_LightState;

/// @brief Field cycleDuration, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_cycleDuration, put=__cordl_internal_set_cycleDuration)) float_t  cycleDuration;

/// @brief Field greenLight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_greenLight, put=__cordl_internal_set_greenLight)) ::UnityW<::UnityEngine::MeshRenderer>  greenLight;

/// @brief Field greenOff, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get_greenOff, put=__cordl_internal_set_greenOff)) ::UnityEngine::Color  greenOff;

/// @brief Field greenOn, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_greenOn, put=__cordl_internal_set_greenOn)) ::UnityEngine::Color  greenOn;

/// @brief Field lightState, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightState, put=__cordl_internal_set_lightState)) ::GlobalNamespace::BuilderTrafficLight_LightState  lightState;

/// @brief Field materialProps, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialProps, put=__cordl_internal_set_materialProps)) ::UnityEngine::MaterialPropertyBlock*  materialProps;

/// @brief Field piece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_piece, put=__cordl_internal_set_piece)) ::UnityW<::GlobalNamespace::BuilderPiece>  piece;

/// @brief Field redLight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_redLight, put=__cordl_internal_set_redLight)) ::UnityW<::UnityEngine::MeshRenderer>  redLight;

/// @brief Field redOff, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_redOff, put=__cordl_internal_set_redOff)) ::UnityEngine::Color  redOff;

/// @brief Field redOn, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_redOn, put=__cordl_internal_set_redOn)) ::UnityEngine::Color  redOn;

/// @brief Field startPercentageOffset, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_startPercentageOffset, put=__cordl_internal_set_startPercentageOffset)) float_t  startPercentageOffset;

/// @brief Field stateCurve, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateCurve, put=__cordl_internal_set_stateCurve)) ::UnityEngine::AnimationCurve*  stateCurve;

/// @brief Field yellowLight, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_yellowLight, put=__cordl_internal_set_yellowLight)) ::UnityW<::UnityEngine::MeshRenderer>  yellowLight;

/// @brief Field yellowOff, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_yellowOff, put=__cordl_internal_set_yellowOff)) ::UnityEngine::Color  yellowOff;

/// @brief Field yellowOn, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_yellowOn, put=__cordl_internal_set_yellowOn)) ::UnityEngine::Color  yellowOn;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

static inline ::GorillaTagScripts::Builder::BuilderTrafficLight* New_ctor() ;

/// @brief Method OnPieceActivate, addr 0x5c34a68, size 0x4, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5c34a58, size 0x8, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5c34a6c, size 0x8, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5c34a60, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5c34a64, size 0x4, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method SetState, addr 0x5c346a4, size 0x1f8, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::BuilderTrafficLight_LightState  state) ;

/// @brief Method Start, addr 0x5c34644, size 0x60, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5c3489c, size 0x1bc, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_cycleDuration() const;

constexpr float_t& __cordl_internal_get_cycleDuration() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_greenLight() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_greenLight() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_greenOff() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_greenOff() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_greenOn() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_greenOn() ;

constexpr ::GlobalNamespace::BuilderTrafficLight_LightState const& __cordl_internal_get_lightState() const;

constexpr ::GlobalNamespace::BuilderTrafficLight_LightState& __cordl_internal_get_lightState() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_materialProps() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_materialProps() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_piece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_piece() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_redLight() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_redLight() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_redOff() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_redOff() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_redOn() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_redOn() ;

constexpr float_t const& __cordl_internal_get_startPercentageOffset() const;

constexpr float_t& __cordl_internal_get_startPercentageOffset() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_stateCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_stateCurve() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_yellowLight() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_yellowLight() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_yellowOff() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_yellowOff() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_yellowOn() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_yellowOn() ;

constexpr void __cordl_internal_set_cycleDuration(float_t  value) ;

constexpr void __cordl_internal_set_greenLight(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_greenOff(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_greenOn(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_lightState(::GlobalNamespace::BuilderTrafficLight_LightState  value) ;

constexpr void __cordl_internal_set_materialProps(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_piece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_redLight(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_redOff(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_redOn(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_startPercentageOffset(float_t  value) ;

constexpr void __cordl_internal_set_stateCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_yellowLight(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_yellowOff(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_yellowOn(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x5c34a74, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTrafficLight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTrafficLight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTrafficLight(BuilderTrafficLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTrafficLight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTrafficLight(BuilderTrafficLight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4180};

/// [SerializeField]
/// @brief Field piece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___piece;

/// [SerializeField]
/// @brief Field redLight, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___redLight;

/// [SerializeField]
/// @brief Field yellowLight, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___yellowLight;

/// [SerializeField]
/// @brief Field greenLight, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___greenLight;

/// [SerializeField]
/// @brief Field cycleDuration, offset: 0x40, size: 0x4, def value: None
 float_t  ___cycleDuration;

/// [SerializeField]
/// @brief Field startPercentageOffset, offset: 0x44, size: 0x4, def value: None
 float_t  ___startPercentageOffset;

/// [SerializeField]
/// @brief Field redOn, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ___redOn;

/// [SerializeField]
/// @brief Field redOff, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ___redOff;

/// [SerializeField]
/// @brief Field yellowOn, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Color  ___yellowOn;

/// [SerializeField]
/// @brief Field yellowOff, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ___yellowOff;

/// [SerializeField]
/// @brief Field greenOn, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Color  ___greenOn;

/// [SerializeField]
/// @brief Field greenOff, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Color  ___greenOff;

/// @brief Field materialProps, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___materialProps;

/// [SerializeField]
/// @brief Field stateCurve, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___stateCurve;

/// @brief Field lightState, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::BuilderTrafficLight_LightState  ___lightState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___piece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___redLight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___yellowLight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___greenLight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___cycleDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___startPercentageOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___redOn) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___redOff) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___yellowOn) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___yellowOff) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___greenOn) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___greenOff) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___materialProps) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___stateCurve) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderTrafficLight, ___lightState) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderTrafficLight) == 0xc0, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
