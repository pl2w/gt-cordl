#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/DirectorControlPlayable_PauseAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectorControlPlayable_PauseAction)
// Forward declare root types
namespace GlobalNamespace {
struct DirectorControlPlayable_PauseAction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DirectorControlPlayable_PauseAction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DirectorControlPlayable_PauseAction, "UnityEngine.Timeline", "DirectorControlPlayable/PauseAction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.DirectorControlPlayable/PauseAction
struct CORDL_TYPE DirectorControlPlayable_PauseAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DirectorControlPlayable_PauseAction_Unwrapped
enum struct __DirectorControlPlayable_PauseAction_Unwrapped : int32_t {
__E_StopDirector = static_cast<int32_t>(0x0),
__E_PauseDirector = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DirectorControlPlayable_PauseAction_Unwrapped () const noexcept {
return static_cast<__DirectorControlPlayable_PauseAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DirectorControlPlayable_PauseAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DirectorControlPlayable_PauseAction(int32_t  value__) noexcept;

/// @brief Field PauseDirector value: I32(1)
static ::GlobalNamespace::DirectorControlPlayable_PauseAction const PauseDirector;

/// @brief Field StopDirector value: I32(0)
static ::GlobalNamespace::DirectorControlPlayable_PauseAction const StopDirector;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28755};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DirectorControlPlayable_PauseAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DirectorControlPlayable_PauseAction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
