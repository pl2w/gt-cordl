#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventInterestReflectionUtils_DefaultEventInterests.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventInterestReflectionUtils_DefaultEventInterests)
// Forward declare root types
namespace GlobalNamespace {
struct EventInterestReflectionUtils_DefaultEventInterests;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EventInterestReflectionUtils_DefaultEventInterests);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EventInterestReflectionUtils_DefaultEventInterests, "UnityEngine.UIElements", "EventInterestReflectionUtils/DefaultEventInterests");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventInterestReflectionUtils/DefaultEventInterests
struct CORDL_TYPE EventInterestReflectionUtils_DefaultEventInterests {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EventInterestReflectionUtils_DefaultEventInterests() ;

// Ctor Parameters [CppParam { name: "DefaultActionCategories", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DefaultActionAtTargetCategories", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "HandleEventTrickleDownCategories", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "HandleEventBubbleUpCategories", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EventInterestReflectionUtils_DefaultEventInterests(int32_t  DefaultActionCategories, int32_t  DefaultActionAtTargetCategories, int32_t  HandleEventTrickleDownCategories, int32_t  HandleEventBubbleUpCategories) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8457};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field DefaultActionCategories, offset: 0x0, size: 0x4, def value: None
 int32_t  DefaultActionCategories;

/// @brief Field DefaultActionAtTargetCategories, offset: 0x4, size: 0x4, def value: None
 int32_t  DefaultActionAtTargetCategories;

/// @brief Field HandleEventTrickleDownCategories, offset: 0x8, size: 0x4, def value: None
 int32_t  HandleEventTrickleDownCategories;

/// @brief Field HandleEventBubbleUpCategories, offset: 0xc, size: 0x4, def value: None
 int32_t  HandleEventBubbleUpCategories;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventInterestReflectionUtils_DefaultEventInterests, DefaultActionCategories) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventInterestReflectionUtils_DefaultEventInterests, DefaultActionAtTargetCategories) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventInterestReflectionUtils_DefaultEventInterests, HandleEventTrickleDownCategories) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventInterestReflectionUtils_DefaultEventInterests, HandleEventBubbleUpCategories) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EventInterestReflectionUtils_DefaultEventInterests) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
