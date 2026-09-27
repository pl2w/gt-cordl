#pragma once
// IWYU pragma private; include "UnityEngine/AI/OffMeshLinkData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AI/zzzz__OffMeshLinkType_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OffMeshLinkData)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
struct OffMeshLinkData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::OffMeshLinkData);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::OffMeshLinkData, "UnityEngine.AI", "OffMeshLinkData");
// [MovedFrom("UnityEngine")]
// [NativeHeader("Modules/AI/Components/OffMeshLink.bindings.h")]
// Dependencies UnityEngine.AI.OffMeshLinkType, UnityEngine.Vector3
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.OffMeshLinkData
struct CORDL_TYPE OffMeshLinkData {
public:
// Declarations
 __declspec(property(get=get_endPos)) ::UnityEngine::Vector3  endPos;

 __declspec(property(get=get_startPos)) ::UnityEngine::Vector3  startPos;

/// @brief Method get_endPos, addr 0xb51fe5c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_endPos() ;

/// @brief Method get_startPos, addr 0xb51fe50, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_startPos() ;

// Ctor Parameters []
// @brief default ctor
constexpr OffMeshLinkData() ;

// Ctor Parameters [CppParam { name: "m_Valid", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Activated", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LinkType", ty: "::UnityEngine::AI::OffMeshLinkType", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr OffMeshLinkData(int32_t  m_Valid, int32_t  m_Activated, int32_t  m_InstanceID, ::UnityEngine::AI::OffMeshLinkType  m_LinkType, ::UnityEngine::Vector3  m_StartPos, ::UnityEngine::Vector3  m_EndPos) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32099};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_Valid, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Valid;

/// @brief Field m_Activated, offset: 0x4, size: 0x4, def value: None
 int32_t  m_Activated;

/// @brief Field m_InstanceID, offset: 0x8, size: 0x4, def value: None
 int32_t  m_InstanceID;

/// @brief Field m_LinkType, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::AI::OffMeshLinkType  m_LinkType;

/// @brief Field m_StartPos, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_StartPos;

/// @brief Field m_EndPos, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_EndPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::OffMeshLinkData, m_Valid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::OffMeshLinkData, m_Activated) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::OffMeshLinkData, m_InstanceID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::OffMeshLinkData, m_LinkType) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::OffMeshLinkData, m_StartPos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::OffMeshLinkData, m_EndPos) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::OffMeshLinkData) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::AI
