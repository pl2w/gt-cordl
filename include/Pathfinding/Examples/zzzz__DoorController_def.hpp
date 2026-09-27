#pragma once
// IWYU pragma private; include "Pathfinding/Examples/DoorController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DoorController)
// Forward declare root types
namespace Pathfinding::Examples {
class DoorController;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::DoorController*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::DoorController*, "Pathfinding.Examples", "DoorController");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_door_controller.php")]
// Dependencies UnityEngine.Bounds, UnityEngine.MonoBehaviour
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.DoorController
class CORDL_TYPE DoorController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bounds, offset 0x34, size 0x18 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Field closedtag, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_closedtag, put=__cordl_internal_set_closedtag)) int32_t  closedtag;

/// @brief Field open, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_open, put=__cordl_internal_set_open)) bool  open;

/// @brief Field opentag, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_opentag, put=__cordl_internal_set_opentag)) int32_t  opentag;

/// @brief Field updateGraphsWithGUO, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateGraphsWithGUO, put=__cordl_internal_set_updateGraphsWithGUO)) bool  updateGraphsWithGUO;

/// @brief Field yOffset, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_yOffset, put=__cordl_internal_set_yOffset)) float_t  yOffset;

static inline ::Pathfinding::Examples::DoorController* New_ctor() ;

/// @brief Method OnGUI, addr 0x5efa700, size 0xb4, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method SetState, addr 0x5efa554, size 0x1ac, virtual false, abstract: false, final false
inline void SetState(bool  open) ;

/// @brief Method Start, addr 0x5efa4d0, size 0x84, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_bounds() ;

constexpr int32_t const& __cordl_internal_get_closedtag() const;

constexpr int32_t& __cordl_internal_get_closedtag() ;

constexpr bool const& __cordl_internal_get_open() const;

constexpr bool& __cordl_internal_get_open() ;

constexpr int32_t const& __cordl_internal_get_opentag() const;

constexpr int32_t& __cordl_internal_get_opentag() ;

constexpr bool const& __cordl_internal_get_updateGraphsWithGUO() const;

constexpr bool& __cordl_internal_get_updateGraphsWithGUO() ;

constexpr float_t const& __cordl_internal_get_yOffset() const;

constexpr float_t& __cordl_internal_get_yOffset() ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_closedtag(int32_t  value) ;

constexpr void __cordl_internal_set_open(bool  value) ;

constexpr void __cordl_internal_set_opentag(int32_t  value) ;

constexpr void __cordl_internal_set_updateGraphsWithGUO(bool  value) ;

constexpr void __cordl_internal_set_yOffset(float_t  value) ;

/// @brief Method .ctor, addr 0x5efa7b4, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DoorController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DoorController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DoorController(DoorController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DoorController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DoorController(DoorController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21545};

/// @brief Field open, offset: 0x20, size: 0x1, def value: None
 bool  ___open;

/// @brief Field opentag, offset: 0x24, size: 0x4, def value: None
 int32_t  ___opentag;

/// @brief Field closedtag, offset: 0x28, size: 0x4, def value: None
 int32_t  ___closedtag;

/// @brief Field updateGraphsWithGUO, offset: 0x2c, size: 0x1, def value: None
 bool  ___updateGraphsWithGUO;

/// @brief Field yOffset, offset: 0x30, size: 0x4, def value: None
 float_t  ___yOffset;

/// @brief Field bounds, offset: 0x34, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___bounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::DoorController, ___open) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::DoorController, ___opentag) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::DoorController, ___closedtag) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::DoorController, ___updateGraphsWithGUO) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::DoorController, ___yOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::DoorController, ___bounds) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::DoorController) == 0x50, "Size mismatch!");

} // namespace end def Pathfinding::Examples
