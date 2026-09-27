#pragma once
// IWYU pragma private; include "Pathfinding/Util/IMovementPlane.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IMovementPlane)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Util {
class IMovementPlane;
}
// Write type traits
MARK_REF_T(::Pathfinding::Util::IMovementPlane*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::IMovementPlane*, "Pathfinding.Util", "IMovementPlane");
// Dependencies 
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.IMovementPlane
class CORDL_TYPE IMovementPlane {
public:
// Declarations
/// @brief Method ToPlane, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector2 ToPlane(::UnityEngine::Vector3  p) ;

/// @brief Method ToPlane, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector2 ToPlane(::UnityEngine::Vector3  p, ::by_ref<float_t>  elevation) ;

/// @brief Method ToWorld, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 ToWorld(::UnityEngine::Vector2  p, float_t  elevation) ;

// Ctor Parameters [CppParam { name: "", ty: "IMovementPlane", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMovementPlane(IMovementPlane const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21469};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Util
