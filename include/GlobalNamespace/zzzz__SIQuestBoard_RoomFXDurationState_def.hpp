#pragma once
// IWYU pragma private; include "GlobalNamespace/SIQuestBoard_RoomFXDurationState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIQuestBoard_RoomFXDurationState)
// Forward declare root types
namespace GlobalNamespace {
struct SIQuestBoard_RoomFXDurationState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIQuestBoard_RoomFXDurationState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIQuestBoard_RoomFXDurationState, "", "SIQuestBoard/RoomFXDurationState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIQuestBoard/RoomFXDurationState
struct CORDL_TYPE SIQuestBoard_RoomFXDurationState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIQuestBoard_RoomFXDurationState_Unwrapped
enum struct __SIQuestBoard_RoomFXDurationState_Unwrapped : int32_t {
__E__15seconds = static_cast<int32_t>(0x0),
__E__30seconds = static_cast<int32_t>(0x1),
__E__60seconds = static_cast<int32_t>(0x2),
__E__90seconds = static_cast<int32_t>(0x3),
__E__120seconds = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIQuestBoard_RoomFXDurationState_Unwrapped () const noexcept {
return static_cast<__SIQuestBoard_RoomFXDurationState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIQuestBoard_RoomFXDurationState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIQuestBoard_RoomFXDurationState(int32_t  value__) noexcept;

/// @brief Field _120seconds value: I32(4)
static ::GlobalNamespace::SIQuestBoard_RoomFXDurationState const _120seconds;

/// @brief Field _15seconds value: I32(0)
static ::GlobalNamespace::SIQuestBoard_RoomFXDurationState const _15seconds;

/// @brief Field _30seconds value: I32(1)
static ::GlobalNamespace::SIQuestBoard_RoomFXDurationState const _30seconds;

/// @brief Field _60seconds value: I32(2)
static ::GlobalNamespace::SIQuestBoard_RoomFXDurationState const _60seconds;

/// @brief Field _90seconds value: I32(3)
static ::GlobalNamespace::SIQuestBoard_RoomFXDurationState const _90seconds;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{336};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIQuestBoard_RoomFXDurationState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIQuestBoard_RoomFXDurationState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
