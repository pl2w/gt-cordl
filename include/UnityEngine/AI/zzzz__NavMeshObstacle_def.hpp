#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshObstacle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NavMeshObstacle)
namespace System {
struct IntPtr;
}
namespace UnityEngine::AI {
struct NavMeshObstacleShape;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMeshObstacle;
}
// Write type traits
MARK_REF_T(::UnityEngine::AI::NavMeshObstacle*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshObstacle*, "UnityEngine.AI", "NavMeshObstacle");
// [MovedFrom("UnityEngine")]
// [NativeHeader("Modules/AI/Components/NavMeshObstacle.bindings.h")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.ai.navigation@2.0/manual/NavMeshObstacle.html")]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMeshObstacle
class CORDL_TYPE NavMeshObstacle : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(put=set_carveOnlyStationary)) bool  carveOnlyStationary;

 __declspec(property(put=set_carving)) bool  carving;

/// @brief [NativeProperty("MoveThreshold")]
 __declspec(property(put=set_carvingMoveThreshold)) float_t  carvingMoveThreshold;

/// @brief [NativeProperty("TimeToStationary")]
 __declspec(property(put=set_carvingTimeToStationary)) float_t  carvingTimeToStationary;

 __declspec(property(put=set_center)) ::UnityEngine::Vector3  center;

 __declspec(property(put=set_shape)) ::UnityEngine::AI::NavMeshObstacleShape  shape;

 __declspec(property(put=set_size)) ::UnityEngine::Vector3  size;

/// @brief Method set_carveOnlyStationary, addr 0xb51f978, size 0x80, virtual false, abstract: false, final false
inline void set_carveOnlyStationary(bool  value) ;

/// @brief Method set_carveOnlyStationary_Injected, addr 0xb51f9f8, size 0x44, virtual false, abstract: false, final false
static inline void set_carveOnlyStationary_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_carving, addr 0xb51f8b4, size 0x80, virtual false, abstract: false, final false
inline void set_carving(bool  value) ;

/// @brief Method set_carvingMoveThreshold, addr 0xb51fa3c, size 0x88, virtual false, abstract: false, final false
inline void set_carvingMoveThreshold(float_t  value) ;

/// @brief Method set_carvingMoveThreshold_Injected, addr 0xb51fac4, size 0x4c, virtual false, abstract: false, final false
static inline void set_carvingMoveThreshold_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_carvingTimeToStationary, addr 0xb51fb10, size 0x88, virtual false, abstract: false, final false
inline void set_carvingTimeToStationary(float_t  value) ;

/// @brief Method set_carvingTimeToStationary_Injected, addr 0xb51fb98, size 0x4c, virtual false, abstract: false, final false
static inline void set_carvingTimeToStationary_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_carving_Injected, addr 0xb51f934, size 0x44, virtual false, abstract: false, final false
static inline void set_carving_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_center, addr 0xb51fca8, size 0x90, virtual false, abstract: false, final false
inline void set_center(::UnityEngine::Vector3  value) ;

/// @brief Method set_center_Injected, addr 0xb51fd38, size 0x44, virtual false, abstract: false, final false
static inline void set_center_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_shape, addr 0xb51fbe4, size 0x80, virtual false, abstract: false, final false
inline void set_shape(::UnityEngine::AI::NavMeshObstacleShape  value) ;

/// @brief Method set_shape_Injected, addr 0xb51fc64, size 0x44, virtual false, abstract: false, final false
static inline void set_shape_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AI::NavMeshObstacleShape  value) ;

/// [FreeFunction("NavMeshObstacleScriptBindings::SetSize", HasExplicitThis = true)]
/// @brief Method set_size, addr 0xb51fd7c, size 0x90, virtual false, abstract: false, final false
inline void set_size(::UnityEngine::Vector3  value) ;

/// @brief Method set_size_Injected, addr 0xb51fe0c, size 0x44, virtual false, abstract: false, final false
static inline void set_size_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshObstacle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshObstacle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshObstacle(NavMeshObstacle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshObstacle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshObstacle(NavMeshObstacle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32097};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AI::NavMeshObstacle) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::AI
