#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshHit)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshHit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshHit);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshHit, "UnityEngine.AI", "NavMeshHit");
// [MovedFrom("UnityEngine")]
// Dependencies UnityEngine.Vector3
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.NavMeshHit
struct CORDL_TYPE NavMeshHit {
public:
// Declarations
 __declspec(property(get=get_distance)) float_t  distance;

 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

/// @brief Method get_distance, addr 0xb51fe74, size 0x8, virtual false, abstract: false, final false
inline float_t get_distance() ;

/// @brief Method get_position, addr 0xb51fe68, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

// Ctor Parameters []
// @brief default ctor
constexpr NavMeshHit() ;

// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Hit", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavMeshHit(::UnityEngine::Vector3  m_Position, ::UnityEngine::Vector3  m_Normal, float_t  m_Distance, int32_t  m_Mask, int32_t  m_Hit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32100};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Position;

/// @brief Field m_Normal, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Normal;

/// @brief Field m_Distance, offset: 0x18, size: 0x4, def value: None
 float_t  m_Distance;

/// @brief Field m_Mask, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_Mask;

/// @brief Field m_Hit, offset: 0x20, size: 0x4, def value: None
 int32_t  m_Hit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshHit, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshHit, m_Normal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshHit, m_Distance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshHit, m_Mask) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshHit, m_Hit) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshHit) == 0x24, "Size mismatch!");

} // namespace end def UnityEngine::AI
