#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuestCategory)
// Forward declare root types
namespace GlobalNamespace {
struct QuestCategory;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::QuestCategory);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QuestCategory, "", "QuestCategory");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: QuestCategory
struct CORDL_TYPE QuestCategory {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __QuestCategory_Unwrapped
enum struct __QuestCategory_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0x0),
__E_Social = static_cast<int32_t>(0x1),
__E_Exploration = static_cast<int32_t>(0x2),
__E_Gameplay = static_cast<int32_t>(0x3),
__E_GameRound = static_cast<int32_t>(0x4),
__E_Tag = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __QuestCategory_Unwrapped () const noexcept {
return static_cast<__QuestCategory_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr QuestCategory() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr QuestCategory(int32_t  value__) noexcept;

/// @brief Field Exploration value: I32(2)
static ::GlobalNamespace::QuestCategory const Exploration;

/// @brief Field GameRound value: I32(4)
static ::GlobalNamespace::QuestCategory const GameRound;

/// @brief Field Gameplay value: I32(3)
static ::GlobalNamespace::QuestCategory const Gameplay;

/// @brief Field NONE value: I32(0)
static ::GlobalNamespace::QuestCategory const NONE;

/// @brief Field Social value: I32(1)
static ::GlobalNamespace::QuestCategory const Social;

/// @brief Field Tag value: I32(5)
static ::GlobalNamespace::QuestCategory const Tag;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{616};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuestCategory, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::QuestCategory) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
