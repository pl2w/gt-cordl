#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePlayerLocal_HandData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GamePlayerLocal_HandGrabState_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GamePlayerLocal_HandData)
// Forward declare root types
namespace GlobalNamespace {
struct GamePlayerLocal_HandData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GamePlayerLocal_HandData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GamePlayerLocal_HandData, "", "GamePlayerLocal/HandData");
// Dependencies GamePlayerLocal::HandGrabState
namespace GlobalNamespace {
// Is value type: true
// CS Name: GamePlayerLocal/HandData
struct CORDL_TYPE GamePlayerLocal_HandData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GamePlayerLocal_HandData() ;

// Ctor Parameters [CppParam { name: "grabState", ty: "::GlobalNamespace::GamePlayerLocal_HandGrabState", modifiers: "", def_value: None, comment: None }, CppParam { name: "gripWasHeld", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "triggerWasHeld", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "gripPressedTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "triggerPressedTime", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr GamePlayerLocal_HandData(::GlobalNamespace::GamePlayerLocal_HandGrabState  grabState, bool  gripWasHeld, bool  triggerWasHeld, double_t  gripPressedTime, double_t  triggerPressedTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1785};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field grabState, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GamePlayerLocal_HandGrabState  grabState;

/// @brief Field gripWasHeld, offset: 0x4, size: 0x1, def value: None
 bool  gripWasHeld;

/// @brief Field triggerWasHeld, offset: 0x5, size: 0x1, def value: None
 bool  triggerWasHeld;

/// @brief Field gripPressedTime, offset: 0x8, size: 0x8, def value: None
 double_t  gripPressedTime;

/// @brief Field triggerPressedTime, offset: 0x10, size: 0x8, def value: None
 double_t  triggerPressedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GamePlayerLocal_HandData, grabState) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayerLocal_HandData, gripWasHeld) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayerLocal_HandData, triggerWasHeld) == 0x5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayerLocal_HandData, gripPressedTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayerLocal_HandData, triggerPressedTime) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GamePlayerLocal_HandData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
