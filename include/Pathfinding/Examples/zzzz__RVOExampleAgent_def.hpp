#pragma once
// IWYU pragma private; include "Pathfinding/Examples/RVOExampleAgent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RVOExampleAgent)
namespace Pathfinding::RVO {
class RVOController;
}
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
class Seeker;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Examples {
class RVOExampleAgent;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::RVOExampleAgent*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::RVOExampleAgent*, "Pathfinding.Examples", "RVOExampleAgent");
// [RequireComponent(typeof(Pathfinding.RVO.RVOController))]
// [RequireComponent(typeof(Pathfinding.Seeker))]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_r_v_o_example_agent.php")]
// Dependencies UnityEngine.LayerMask, UnityEngine.MeshRenderer, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.RVOExampleAgent
class CORDL_TYPE RVOExampleAgent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field canSearchAgain, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_canSearchAgain, put=__cordl_internal_set_canSearchAgain)) bool  canSearchAgain;

/// @brief Field controller, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_controller, put=__cordl_internal_set_controller)) ::UnityW<::Pathfinding::RVO::RVOController>  controller;

/// @brief Field groundMask, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundMask, put=__cordl_internal_set_groundMask)) ::UnityEngine::LayerMask  groundMask;

/// @brief Field maxSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field moveNextDist, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_moveNextDist, put=__cordl_internal_set_moveNextDist)) float_t  moveNextDist;

/// @brief Field nextRepath, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextRepath, put=__cordl_internal_set_nextRepath)) float_t  nextRepath;

/// @brief Field path, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::Pathfinding::Path*  path;

/// @brief Field rends, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_rends, put=__cordl_internal_set_rends)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  rends;

/// @brief Field repathRate, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_repathRate, put=__cordl_internal_set_repathRate)) float_t  repathRate;

/// @brief Field seeker, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_seeker, put=__cordl_internal_set_seeker)) ::UnityW<::Pathfinding::Seeker>  seeker;

/// @brief Field slowdownDistance, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowdownDistance, put=__cordl_internal_set_slowdownDistance)) float_t  slowdownDistance;

/// @brief Field target, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityEngine::Vector3  target;

/// @brief Field vectorPath, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_vectorPath, put=__cordl_internal_set_vectorPath)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vectorPath;

/// @brief Field wp, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_wp, put=__cordl_internal_set_wp)) int32_t  wp;

/// @brief Method Awake, addr 0x5ef1950, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Pathfinding::Examples::RVOExampleAgent* New_ctor() ;

/// @brief Method OnPathComplete, addr 0x5ef1afc, size 0x2cc, virtual false, abstract: false, final false
inline void OnPathComplete(::Pathfinding::Path*  _p) ;

/// @brief Method RecalculatePath, addr 0x5ef19e0, size 0x11c, virtual false, abstract: false, final false
inline void RecalculatePath() ;

/// @brief Method SetColor, addr 0x5ef1568, size 0x3a0, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetTarget, addr 0x5ef155c, size 0xc, virtual false, abstract: false, final false
inline void SetTarget(::UnityEngine::Vector3  target) ;

/// @brief Method Update, addr 0x5ef1dc8, size 0x97c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_canSearchAgain() const;

constexpr bool& __cordl_internal_get_canSearchAgain() ;

constexpr ::UnityW<::Pathfinding::RVO::RVOController> const& __cordl_internal_get_controller() const;

constexpr ::UnityW<::Pathfinding::RVO::RVOController>& __cordl_internal_get_controller() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_groundMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_groundMask() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr float_t const& __cordl_internal_get_moveNextDist() const;

constexpr float_t& __cordl_internal_get_moveNextDist() ;

constexpr float_t const& __cordl_internal_get_nextRepath() const;

constexpr float_t& __cordl_internal_get_nextRepath() ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get_path() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get_path() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_rends() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_rends() ;

constexpr float_t const& __cordl_internal_get_repathRate() const;

constexpr float_t& __cordl_internal_get_repathRate() ;

constexpr ::UnityW<::Pathfinding::Seeker> const& __cordl_internal_get_seeker() const;

constexpr ::UnityW<::Pathfinding::Seeker>& __cordl_internal_get_seeker() ;

constexpr float_t const& __cordl_internal_get_slowdownDistance() const;

constexpr float_t& __cordl_internal_get_slowdownDistance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_target() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_target() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_vectorPath() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_vectorPath() ;

constexpr int32_t const& __cordl_internal_get_wp() const;

constexpr int32_t& __cordl_internal_get_wp() ;

constexpr void __cordl_internal_set_canSearchAgain(bool  value) ;

constexpr void __cordl_internal_set_controller(::UnityW<::Pathfinding::RVO::RVOController>  value) ;

constexpr void __cordl_internal_set_groundMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_moveNextDist(float_t  value) ;

constexpr void __cordl_internal_set_nextRepath(float_t  value) ;

constexpr void __cordl_internal_set_path(::Pathfinding::Path*  value) ;

constexpr void __cordl_internal_set_rends(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_repathRate(float_t  value) ;

constexpr void __cordl_internal_set_seeker(::UnityW<::Pathfinding::Seeker>  value) ;

constexpr void __cordl_internal_set_slowdownDistance(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_vectorPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_wp(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ef2744, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RVOExampleAgent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RVOExampleAgent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RVOExampleAgent(RVOExampleAgent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RVOExampleAgent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RVOExampleAgent(RVOExampleAgent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21520};

/// @brief Field repathRate, offset: 0x20, size: 0x4, def value: None
 float_t  ___repathRate;

/// @brief Field nextRepath, offset: 0x24, size: 0x4, def value: None
 float_t  ___nextRepath;

/// @brief Field target, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___target;

/// @brief Field canSearchAgain, offset: 0x34, size: 0x1, def value: None
 bool  ___canSearchAgain;

/// @brief Field controller, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Pathfinding::RVO::RVOController>  ___controller;

/// @brief Field maxSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// @brief Field path, offset: 0x48, size: 0x8, def value: None
 ::Pathfinding::Path*  ___path;

/// @brief Field vectorPath, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___vectorPath;

/// @brief Field wp, offset: 0x58, size: 0x4, def value: None
 int32_t  ___wp;

/// @brief Field moveNextDist, offset: 0x5c, size: 0x4, def value: None
 float_t  ___moveNextDist;

/// @brief Field slowdownDistance, offset: 0x60, size: 0x4, def value: None
 float_t  ___slowdownDistance;

/// @brief Field groundMask, offset: 0x64, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___groundMask;

/// @brief Field seeker, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Seeker>  ___seeker;

/// @brief Field rends, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___rends;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___repathRate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___nextRepath) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___canSearchAgain) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___controller) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___maxSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___path) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___vectorPath) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___wp) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___moveNextDist) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___slowdownDistance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___groundMask) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___seeker) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOExampleAgent, ___rends) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::RVOExampleAgent) == 0x78, "Size mismatch!");

} // namespace end def Pathfinding::Examples
