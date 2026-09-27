#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTurning.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaTurning)
namespace UnityEngine::XR::Interaction::Toolkit {
class GorillaSnapTurn;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTurning;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTurning*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTurning*, "", "GorillaTurning");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTurning
class CORDL_TYPE GorillaTurning : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field blueMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_blueMaterial, put=__cordl_internal_set_blueMaterial)) ::UnityW<::UnityEngine::Material>  blueMaterial;

/// @brief Field currentChoice, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentChoice, put=__cordl_internal_set_currentChoice)) ::StringW  currentChoice;

/// @brief Field currentSpeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSpeed, put=__cordl_internal_set_currentSpeed)) float_t  currentSpeed;

/// @brief Field greenMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_greenMaterial, put=__cordl_internal_set_greenMaterial)) ::UnityW<::UnityEngine::Material>  greenMaterial;

/// @brief Field noTurnBox, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_noTurnBox, put=__cordl_internal_set_noTurnBox)) ::UnityW<::UnityEngine::MeshRenderer>  noTurnBox;

/// @brief Field redMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_redMaterial, put=__cordl_internal_set_redMaterial)) ::UnityW<::UnityEngine::Material>  redMaterial;

/// @brief Field smoothTurnBox, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_smoothTurnBox, put=__cordl_internal_set_smoothTurnBox)) ::UnityW<::UnityEngine::MeshRenderer>  smoothTurnBox;

/// @brief Field snapTurn, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapTurn, put=__cordl_internal_set_snapTurn)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  snapTurn;

/// @brief Field snapTurnBox, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapTurnBox, put=__cordl_internal_set_snapTurnBox)) ::UnityW<::UnityEngine::MeshRenderer>  snapTurnBox;

/// @brief Field transparentBlueMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_transparentBlueMaterial, put=__cordl_internal_set_transparentBlueMaterial)) ::UnityW<::UnityEngine::Material>  transparentBlueMaterial;

/// @brief Field transparentGreenMaterial, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_transparentGreenMaterial, put=__cordl_internal_set_transparentGreenMaterial)) ::UnityW<::UnityEngine::Material>  transparentGreenMaterial;

/// @brief Field transparentRedMaterial, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_transparentRedMaterial, put=__cordl_internal_set_transparentRedMaterial)) ::UnityW<::UnityEngine::Material>  transparentRedMaterial;

/// @brief Method Awake, addr 0x59470c8, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaTurning* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blueMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blueMaterial() ;

constexpr ::StringW const& __cordl_internal_get_currentChoice() const;

constexpr ::StringW& __cordl_internal_get_currentChoice() ;

constexpr float_t const& __cordl_internal_get_currentSpeed() const;

constexpr float_t& __cordl_internal_get_currentSpeed() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_greenMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_greenMaterial() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_noTurnBox() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_noTurnBox() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_redMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_redMaterial() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_smoothTurnBox() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_smoothTurnBox() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> const& __cordl_internal_get_snapTurn() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>& __cordl_internal_get_snapTurn() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_snapTurnBox() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_snapTurnBox() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_transparentBlueMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_transparentBlueMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_transparentGreenMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_transparentGreenMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_transparentRedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_transparentRedMaterial() ;

constexpr void __cordl_internal_set_blueMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_currentChoice(::StringW  value) ;

constexpr void __cordl_internal_set_currentSpeed(float_t  value) ;

constexpr void __cordl_internal_set_greenMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_noTurnBox(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_redMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_smoothTurnBox(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_snapTurn(::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  value) ;

constexpr void __cordl_internal_set_snapTurnBox(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_transparentBlueMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_transparentGreenMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_transparentRedMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x59470cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTurning() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTurning", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTurning(GorillaTurning && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTurning", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTurning(GorillaTurning const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2274};

/// @brief Field redMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___redMaterial;

/// @brief Field blueMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blueMaterial;

/// @brief Field greenMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___greenMaterial;

/// @brief Field transparentBlueMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___transparentBlueMaterial;

/// @brief Field transparentRedMaterial, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___transparentRedMaterial;

/// @brief Field transparentGreenMaterial, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___transparentGreenMaterial;

/// @brief Field smoothTurnBox, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___smoothTurnBox;

/// @brief Field snapTurnBox, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___snapTurnBox;

/// @brief Field noTurnBox, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___noTurnBox;

/// @brief Field snapTurn, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  ___snapTurn;

/// @brief Field currentChoice, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___currentChoice;

/// @brief Field currentSpeed, offset: 0x78, size: 0x4, def value: None
 float_t  ___currentSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTurning, ___redMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurning, ___blueMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurning, ___greenMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurning, ___transparentBlueMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurning, ___transparentRedMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurning, ___transparentGreenMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurning, ___smoothTurnBox) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurning, ___snapTurnBox) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurning, ___noTurnBox) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurning, ___snapTurn) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurning, ___currentChoice) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTurning, ___currentSpeed) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTurning) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
