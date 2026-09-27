#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshLinkData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshLinkData)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshLinkData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshLinkData);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshLinkData, "UnityEngine.AI", "NavMeshLinkData");
// Dependencies UnityEngine.Vector3
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.NavMeshLinkData
struct CORDL_TYPE NavMeshLinkData {
public:
// Declarations
 __declspec(property(put=set_agentTypeID)) int32_t  agentTypeID;

 __declspec(property(put=set_area)) int32_t  area;

 __declspec(property(put=set_bidirectional)) bool  bidirectional;

 __declspec(property(put=set_costModifier)) float_t  costModifier;

 __declspec(property(put=set_endPosition)) ::UnityEngine::Vector3  endPosition;

 __declspec(property(put=set_startPosition)) ::UnityEngine::Vector3  startPosition;

 __declspec(property(put=set_width)) float_t  width;

/// @brief Method set_agentTypeID, addr 0xb52035c, size 0x8, virtual false, abstract: false, final false
inline void set_agentTypeID(int32_t  value) ;

/// @brief Method set_area, addr 0xb520354, size 0x8, virtual false, abstract: false, final false
inline void set_area(int32_t  value) ;

/// @brief Method set_bidirectional, addr 0xb520340, size 0xc, virtual false, abstract: false, final false
inline void set_bidirectional(bool  value) ;

/// @brief Method set_costModifier, addr 0xb520338, size 0x8, virtual false, abstract: false, final false
inline void set_costModifier(float_t  value) ;

/// @brief Method set_endPosition, addr 0xb52032c, size 0xc, virtual false, abstract: false, final false
inline void set_endPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_startPosition, addr 0xb520320, size 0xc, virtual false, abstract: false, final false
inline void set_startPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_width, addr 0xb52034c, size 0x8, virtual false, abstract: false, final false
inline void set_width(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NavMeshLinkData() ;

// Ctor Parameters [CppParam { name: "m_StartPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EndPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CostModifier", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Bidirectional", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Width", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Area", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AgentTypeID", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavMeshLinkData(::UnityEngine::Vector3  m_StartPosition, ::UnityEngine::Vector3  m_EndPosition, float_t  m_CostModifier, int32_t  m_Bidirectional, float_t  m_Width, int32_t  m_Area, int32_t  m_AgentTypeID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32104};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field m_StartPosition, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_StartPosition;

/// @brief Field m_EndPosition, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_EndPosition;

/// @brief Field m_CostModifier, offset: 0x18, size: 0x4, def value: None
 float_t  m_CostModifier;

/// @brief Field m_Bidirectional, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_Bidirectional;

/// @brief Field m_Width, offset: 0x20, size: 0x4, def value: None
 float_t  m_Width;

/// @brief Field m_Area, offset: 0x24, size: 0x4, def value: None
 int32_t  m_Area;

/// @brief Field m_AgentTypeID, offset: 0x28, size: 0x4, def value: None
 int32_t  m_AgentTypeID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshLinkData, m_StartPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLinkData, m_EndPosition) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLinkData, m_CostModifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLinkData, m_Bidirectional) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLinkData, m_Width) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLinkData, m_Area) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshLinkData, m_AgentTypeID) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshLinkData) == 0x2c, "Size mismatch!");

} // namespace end def UnityEngine::AI
