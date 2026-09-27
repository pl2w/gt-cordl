#pragma once
// IWYU pragma private; include "Pathfinding/RandomPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__ABPath_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RandomPath)
namespace Pathfinding {
class OnPathDelegate;
}
namespace Pathfinding {
class PathNode;
}
namespace System {
class Random;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class RandomPath;
}
// Write type traits
MARK_REF_T(::Pathfinding::RandomPath*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RandomPath*, "Pathfinding", "RandomPath");
// Dependencies Pathfinding.ABPath, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RandomPath
class CORDL_TYPE RandomPath : public ::Pathfinding::ABPath {
public:
// Declarations
 __declspec(property(get=get_FloodingPath)) bool  FloodingPath;

/// @brief Field aim, offset 0x15c, size 0xc 
 __declspec(property(get=__cordl_internal_get_aim, put=__cordl_internal_set_aim)) ::UnityEngine::Vector3  aim;

/// @brief Field aimStrength, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_aimStrength, put=__cordl_internal_set_aimStrength)) float_t  aimStrength;

/// @brief Field chosenNodeR, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_chosenNodeR, put=__cordl_internal_set_chosenNodeR)) ::Pathfinding::PathNode*  chosenNodeR;

 __declspec(property(get=get_hasEndPoint)) bool  hasEndPoint;

/// @brief Field maxGScore, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxGScore, put=__cordl_internal_set_maxGScore)) int32_t  maxGScore;

/// @brief Field maxGScoreNodeR, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxGScoreNodeR, put=__cordl_internal_set_maxGScoreNodeR)) ::Pathfinding::PathNode*  maxGScoreNodeR;

/// @brief Field nodesEvaluatedRep, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_nodesEvaluatedRep, put=__cordl_internal_set_nodesEvaluatedRep)) int32_t  nodesEvaluatedRep;

/// @brief Field rnd, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_rnd, put=__cordl_internal_set_rnd)) ::System::Random*  rnd;

/// @brief Field searchLength, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_searchLength, put=__cordl_internal_set_searchLength)) int32_t  searchLength;

/// @brief Field spread, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_spread, put=__cordl_internal_set_spread)) int32_t  spread;

/// @brief Method CalculateStep, addr 0x5eb1cc8, size 0x294, virtual true, abstract: false, final false
inline void CalculateStep(int64_t  targetTick) ;

/// @brief Method Construct, addr 0x5eb17e0, size 0xb0, virtual false, abstract: false, final false
static inline ::Pathfinding::RandomPath* Construct(::UnityEngine::Vector3  start, int32_t  length, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method Initialize, addr 0x5eb1b40, size 0x188, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::Pathfinding::RandomPath* New_ctor() ;

/// @brief Method Prepare, addr 0x5eb1984, size 0x1bc, virtual true, abstract: false, final false
inline void Prepare() ;

/// @brief Method Reset, addr 0x5eb1744, size 0x9c, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method ReturnPath, addr 0x5eb1890, size 0xf4, virtual true, abstract: false, final false
inline void ReturnPath() ;

/// @brief Method Setup, addr 0x5eae284, size 0xd8, virtual false, abstract: false, final false
inline ::Pathfinding::RandomPath* Setup(::UnityEngine::Vector3  start, int32_t  length, ::Pathfinding::OnPathDelegate*  callback) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_aim() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_aim() ;

constexpr float_t const& __cordl_internal_get_aimStrength() const;

constexpr float_t& __cordl_internal_get_aimStrength() ;

constexpr ::Pathfinding::PathNode* const& __cordl_internal_get_chosenNodeR() const;

constexpr ::Pathfinding::PathNode*& __cordl_internal_get_chosenNodeR() ;

constexpr int32_t const& __cordl_internal_get_maxGScore() const;

constexpr int32_t& __cordl_internal_get_maxGScore() ;

constexpr ::Pathfinding::PathNode* const& __cordl_internal_get_maxGScoreNodeR() const;

constexpr ::Pathfinding::PathNode*& __cordl_internal_get_maxGScoreNodeR() ;

constexpr int32_t const& __cordl_internal_get_nodesEvaluatedRep() const;

constexpr int32_t& __cordl_internal_get_nodesEvaluatedRep() ;

constexpr ::System::Random* const& __cordl_internal_get_rnd() const;

constexpr ::System::Random*& __cordl_internal_get_rnd() ;

constexpr int32_t const& __cordl_internal_get_searchLength() const;

constexpr int32_t& __cordl_internal_get_searchLength() ;

constexpr int32_t const& __cordl_internal_get_spread() const;

constexpr int32_t& __cordl_internal_get_spread() ;

constexpr void __cordl_internal_set_aim(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_aimStrength(float_t  value) ;

constexpr void __cordl_internal_set_chosenNodeR(::Pathfinding::PathNode*  value) ;

constexpr void __cordl_internal_set_maxGScore(int32_t  value) ;

constexpr void __cordl_internal_set_maxGScoreNodeR(::Pathfinding::PathNode*  value) ;

constexpr void __cordl_internal_set_nodesEvaluatedRep(int32_t  value) ;

constexpr void __cordl_internal_set_rnd(::System::Random*  value) ;

constexpr void __cordl_internal_set_searchLength(int32_t  value) ;

constexpr void __cordl_internal_set_spread(int32_t  value) ;

/// @brief Method .ctor, addr 0x5eae088, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FloodingPath, addr 0x5eb1734, size 0x8, virtual true, abstract: false, final false
inline bool get_FloodingPath() ;

/// @brief Method get_hasEndPoint, addr 0x5eb173c, size 0x8, virtual true, abstract: false, final false
inline bool get_hasEndPoint() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomPath(RandomPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomPath(RandomPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21398};

/// @brief Field searchLength, offset: 0x138, size: 0x4, def value: None
 int32_t  ___searchLength;

/// @brief Field spread, offset: 0x13c, size: 0x4, def value: None
 int32_t  ___spread;

/// @brief Field aimStrength, offset: 0x140, size: 0x4, def value: None
 float_t  ___aimStrength;

/// @brief Field chosenNodeR, offset: 0x148, size: 0x8, def value: None
 ::Pathfinding::PathNode*  ___chosenNodeR;

/// @brief Field maxGScoreNodeR, offset: 0x150, size: 0x8, def value: None
 ::Pathfinding::PathNode*  ___maxGScoreNodeR;

/// @brief Field maxGScore, offset: 0x158, size: 0x4, def value: None
 int32_t  ___maxGScore;

/// @brief Field aim, offset: 0x15c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___aim;

/// @brief Field nodesEvaluatedRep, offset: 0x168, size: 0x4, def value: None
 int32_t  ___nodesEvaluatedRep;

/// @brief Field rnd, offset: 0x170, size: 0x8, def value: None
 ::System::Random*  ___rnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RandomPath, ___searchLength) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RandomPath, ___spread) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RandomPath, ___aimStrength) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RandomPath, ___chosenNodeR) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RandomPath, ___maxGScoreNodeR) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RandomPath, ___maxGScore) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RandomPath, ___aim) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RandomPath, ___nodesEvaluatedRep) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RandomPath, ___rnd) == 0x170, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RandomPath) == 0x178, "Size mismatch!");

} // namespace end def Pathfinding
