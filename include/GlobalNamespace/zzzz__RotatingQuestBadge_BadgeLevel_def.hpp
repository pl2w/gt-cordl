#pragma once
// IWYU pragma private; include "GlobalNamespace/RotatingQuestBadge_BadgeLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RotatingQuestBadge_BadgeLevel)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct RotatingQuestBadge_BadgeLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RotatingQuestBadge_BadgeLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotatingQuestBadge_BadgeLevel, "", "RotatingQuestBadge/BadgeLevel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RotatingQuestBadge/BadgeLevel
struct CORDL_TYPE RotatingQuestBadge_BadgeLevel {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RotatingQuestBadge_BadgeLevel() ;

// Ctor Parameters [CppParam { name: "badge", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "requiredPoints", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RotatingQuestBadge_BadgeLevel(::UnityW<::UnityEngine::GameObject>  badge, int32_t  requiredPoints) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{611};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field badge, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  badge;

/// @brief Field requiredPoints, offset: 0x8, size: 0x4, def value: None
 int32_t  requiredPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotatingQuestBadge_BadgeLevel, badge) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestBadge_BadgeLevel, requiredPoints) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotatingQuestBadge_BadgeLevel) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
