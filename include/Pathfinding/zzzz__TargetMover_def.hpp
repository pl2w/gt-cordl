#pragma once
// IWYU pragma private; include "Pathfinding/TargetMover.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__IAstarAI_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(TargetMover)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Pathfinding {
class TargetMover;
}
// Write type traits
MARK_REF_T(::Pathfinding::TargetMover*);
DEFINE_IL2CPP_CLASS(::Pathfinding::TargetMover*, "Pathfinding", "TargetMover");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_target_mover.php")]
// Dependencies Pathfinding.IAstarAI, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.TargetMover
class CORDL_TYPE TargetMover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ais, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ais, put=__cordl_internal_set_ais)) ::ArrayW<::Pathfinding::IAstarAI*>  ais;

/// @brief Field cam, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cam, put=__cordl_internal_set_cam)) ::UnityW<::UnityEngine::Camera>  cam;

/// @brief Field mask, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_mask, put=__cordl_internal_set_mask)) ::UnityEngine::LayerMask  mask;

/// @brief Field onlyOnDoubleClick, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyOnDoubleClick, put=__cordl_internal_set_onlyOnDoubleClick)) bool  onlyOnDoubleClick;

/// @brief Field target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field use2D, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_use2D, put=__cordl_internal_set_use2D)) bool  use2D;

static inline ::Pathfinding::TargetMover* New_ctor() ;

/// @brief Method OnGUI, addr 0x5e6be84, size 0xb8, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method Start, addr 0x5e6bda4, size 0xe0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5e6c190, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateTargetPosition, addr 0x5e6bf3c, size 0x254, virtual false, abstract: false, final false
inline void UpdateTargetPosition() ;

constexpr ::ArrayW<::Pathfinding::IAstarAI*> const& __cordl_internal_get_ais() const;

constexpr ::ArrayW<::Pathfinding::IAstarAI*>& __cordl_internal_get_ais() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_cam() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_cam() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_mask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_mask() ;

constexpr bool const& __cordl_internal_get_onlyOnDoubleClick() const;

constexpr bool& __cordl_internal_get_onlyOnDoubleClick() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr bool const& __cordl_internal_get_use2D() const;

constexpr bool& __cordl_internal_get_use2D() ;

constexpr void __cordl_internal_set_ais(::ArrayW<::Pathfinding::IAstarAI*>  value) ;

constexpr void __cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_mask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_onlyOnDoubleClick(bool  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_use2D(bool  value) ;

/// @brief Method .ctor, addr 0x5e6c210, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TargetMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TargetMover", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TargetMover(TargetMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TargetMover", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TargetMover(TargetMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21287};

/// @brief Field mask, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___mask;

/// @brief Field target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field ais, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::IAstarAI*>  ___ais;

/// @brief Field onlyOnDoubleClick, offset: 0x38, size: 0x1, def value: None
 bool  ___onlyOnDoubleClick;

/// @brief Field use2D, offset: 0x39, size: 0x1, def value: None
 bool  ___use2D;

/// @brief Field cam, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___cam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::TargetMover, ___mask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::TargetMover, ___target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::TargetMover, ___ais) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::TargetMover, ___onlyOnDoubleClick) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::TargetMover, ___use2D) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::TargetMover, ___cam) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::TargetMover) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding
