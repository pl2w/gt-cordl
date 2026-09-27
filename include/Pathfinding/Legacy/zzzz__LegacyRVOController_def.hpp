#pragma once
// IWYU pragma private; include "Pathfinding/Legacy/LegacyRVOController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/RVO/zzzz__RVOController_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LegacyRVOController)
// Forward declare root types
namespace Pathfinding::Legacy {
class LegacyRVOController;
}
// Write type traits
MARK_REF_T(::Pathfinding::Legacy::LegacyRVOController*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Legacy::LegacyRVOController*, "Pathfinding.Legacy", "LegacyRVOController");
// [AddComponentMenu("Pathfinding/Legacy/Local Avoidance/Legacy RVO Controller")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_legacy_1_1_legacy_r_v_o_controller.php")]
// Dependencies Pathfinding.RVO.RVOController, UnityEngine.LayerMask
namespace Pathfinding::Legacy {
// Is value type: false
// CS Name: Pathfinding.Legacy.LegacyRVOController
class CORDL_TYPE LegacyRVOController : public ::Pathfinding::RVO::RVOController {
public:
// Declarations
/// @brief Field enableRotation, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableRotation, put=__cordl_internal_set_enableRotation)) bool  enableRotation;

/// @brief Field mask, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_mask, put=__cordl_internal_set_mask)) ::UnityEngine::LayerMask  mask;

/// @brief Field rotationSpeed, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeed, put=__cordl_internal_set_rotationSpeed)) float_t  rotationSpeed;

static inline ::Pathfinding::Legacy::LegacyRVOController* New_ctor() ;

/// @brief Method Update, addr 0x5ebe458, size 0x3f8, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_enableRotation() const;

constexpr bool& __cordl_internal_get_enableRotation() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_mask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_mask() ;

constexpr float_t const& __cordl_internal_get_rotationSpeed() const;

constexpr float_t& __cordl_internal_get_rotationSpeed() ;

constexpr void __cordl_internal_set_enableRotation(bool  value) ;

constexpr void __cordl_internal_set_mask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_rotationSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x5ebe850, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyRVOController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyRVOController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyRVOController(LegacyRVOController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyRVOController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyRVOController(LegacyRVOController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21426};

/// [Tooltip("Layer mask for the ground. The RVOController will raycast down to check for the ground to figure out where to place the agent")]
/// @brief Field mask, offset: 0x7c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___mask;

/// @brief Field enableRotation, offset: 0x80, size: 0x1, def value: None
 bool  ___enableRotation;

/// @brief Field rotationSpeed, offset: 0x84, size: 0x4, def value: None
 float_t  ___rotationSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Legacy::LegacyRVOController, ___mask) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Legacy::LegacyRVOController, ___enableRotation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Legacy::LegacyRVOController, ___rotationSpeed) == 0x84, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Legacy::LegacyRVOController) == 0x88, "Size mismatch!");

} // namespace end def Pathfinding::Legacy
