#pragma once
// IWYU pragma private; include "Pathfinding/Examples/GroupController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GroupController)
namespace Pathfinding::Examples {
class RVOExampleAgent;
}
namespace Pathfinding::RVO {
class Simulator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Pathfinding::Examples {
class GroupController;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::GroupController*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::GroupController*, "Pathfinding.Examples", "GroupController");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_group_controller.php")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.GroupController
class CORDL_TYPE GroupController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field adjustCamera, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_adjustCamera, put=__cordl_internal_set_adjustCamera)) bool  adjustCamera;

/// @brief Field cam, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_cam, put=__cordl_internal_set_cam)) ::UnityW<::UnityEngine::Camera>  cam;

/// @brief Field end, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) ::UnityEngine::Vector2  end;

/// @brief Field selection, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_selection, put=__cordl_internal_set_selection)) ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::Examples::RVOExampleAgent>>*  selection;

/// @brief Field selectionBox, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectionBox, put=__cordl_internal_set_selectionBox)) ::UnityEngine::GUIStyle*  selectionBox;

/// @brief Field sim, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_sim, put=__cordl_internal_set_sim)) ::Pathfinding::RVO::Simulator*  sim;

/// @brief Field start, offset 0x2c, size 0x8 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) ::UnityEngine::Vector2  start;

/// @brief Field wasDown, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasDown, put=__cordl_internal_set_wasDown)) bool  wasDown;

/// @brief Method GetColor, addr 0x5eee4e4, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(float_t  angle) ;

static inline ::Pathfinding::Examples::GroupController* New_ctor() ;

/// @brief Method OnGUI, addr 0x5eee0a8, size 0x1b4, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method Order, addr 0x5eede18, size 0x290, virtual false, abstract: false, final false
inline void Order() ;

/// @brief Method Select, addr 0x5eee25c, size 0x288, virtual false, abstract: false, final false
inline void Select(::UnityEngine::Vector2  _start, ::UnityEngine::Vector2  _end) ;

/// @brief Method Start, addr 0x5eeda60, size 0x134, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5eedb94, size 0x284, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_adjustCamera() const;

constexpr bool& __cordl_internal_get_adjustCamera() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_cam() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_cam() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_end() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_end() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::Examples::RVOExampleAgent>>* const& __cordl_internal_get_selection() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::Examples::RVOExampleAgent>>*& __cordl_internal_get_selection() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get_selectionBox() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_selectionBox() ;

constexpr ::Pathfinding::RVO::Simulator* const& __cordl_internal_get_sim() const;

constexpr ::Pathfinding::RVO::Simulator*& __cordl_internal_get_sim() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_start() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_start() ;

constexpr bool const& __cordl_internal_get_wasDown() const;

constexpr bool& __cordl_internal_get_wasDown() ;

constexpr void __cordl_internal_set_adjustCamera(bool  value) ;

constexpr void __cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_end(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_selection(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::Examples::RVOExampleAgent>>*  value) ;

constexpr void __cordl_internal_set_selectionBox(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set_sim(::Pathfinding::RVO::Simulator*  value) ;

constexpr void __cordl_internal_set_start(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_wasDown(bool  value) ;

/// @brief Method .ctor, addr 0x5eee508, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupController(GroupController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupController(GroupController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21515};

/// @brief Field rad2Deg offset 0xffffffff size 0x4
static constexpr float_t  rad2Deg{static_cast<float_t>(57.295776f)};

/// @brief Field selectionBox, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ___selectionBox;

/// @brief Field adjustCamera, offset: 0x28, size: 0x1, def value: None
 bool  ___adjustCamera;

/// @brief Field start, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___start;

/// @brief Field end, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___end;

/// @brief Field wasDown, offset: 0x3c, size: 0x1, def value: None
 bool  ___wasDown;

/// @brief Field selection, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::Examples::RVOExampleAgent>>*  ___selection;

/// @brief Field sim, offset: 0x48, size: 0x8, def value: None
 ::Pathfinding::RVO::Simulator*  ___sim;

/// @brief Field cam, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___cam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::GroupController, ___selectionBox) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::GroupController, ___adjustCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::GroupController, ___start) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::GroupController, ___end) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::GroupController, ___wasDown) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::GroupController, ___selection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::GroupController, ___sim) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::GroupController, ___cam) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::GroupController) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding::Examples
