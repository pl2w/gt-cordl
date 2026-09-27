#pragma once
// IWYU pragma private; include "Pathfinding/Funnel_PathPart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Funnel_PathPart)
// Forward declare root types
namespace GlobalNamespace {
struct Funnel_PathPart;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Funnel_PathPart);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Funnel_PathPart, "Pathfinding", "Funnel/PathPart");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Funnel/PathPart
struct CORDL_TYPE Funnel_PathPart {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Funnel_PathPart() ;

// Ctor Parameters [CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "endIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "startPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "endPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "isLink", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr Funnel_PathPart(int32_t  startIndex, int32_t  endIndex, ::UnityEngine::Vector3  startPoint, ::UnityEngine::Vector3  endPoint, bool  isLink) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21413};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field startIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  startIndex;

/// @brief Field endIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  endIndex;

/// @brief Field startPoint, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  startPoint;

/// @brief Field endPoint, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  endPoint;

/// @brief Field isLink, offset: 0x20, size: 0x1, def value: None
 bool  isLink;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Funnel_PathPart, startIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Funnel_PathPart, endIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Funnel_PathPart, startPoint) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Funnel_PathPart, endPoint) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Funnel_PathPart, isLink) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Funnel_PathPart) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
