#pragma once
// IWYU pragma private; include "GlobalNamespace/GameObjectScheduleGenerator_ScheduleType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameObjectScheduleGenerator_ScheduleType)
// Forward declare root types
namespace GlobalNamespace {
struct GameObjectScheduleGenerator_ScheduleType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType, "", "GameObjectScheduleGenerator/ScheduleType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameObjectScheduleGenerator/ScheduleType
struct CORDL_TYPE GameObjectScheduleGenerator_ScheduleType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GameObjectScheduleGenerator_ScheduleType_Unwrapped
enum struct __GameObjectScheduleGenerator_ScheduleType_Unwrapped : int32_t {
__E_DailyShuffle = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameObjectScheduleGenerator_ScheduleType_Unwrapped () const noexcept {
return static_cast<__GameObjectScheduleGenerator_ScheduleType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GameObjectScheduleGenerator_ScheduleType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameObjectScheduleGenerator_ScheduleType(int32_t  value__) noexcept;

/// @brief Field DailyShuffle value: I32(0)
static ::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType const DailyShuffle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{173};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameObjectScheduleGenerator_ScheduleType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
