#pragma once
// IWYU pragma private; include "GlobalNamespace/ForceVolume_AudioState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ForceVolume_AudioState)
// Forward declare root types
namespace GlobalNamespace {
struct ForceVolume_AudioState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ForceVolume_AudioState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ForceVolume_AudioState, "", "ForceVolume/AudioState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ForceVolume/AudioState
struct CORDL_TYPE ForceVolume_AudioState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ForceVolume_AudioState_Unwrapped
enum struct __ForceVolume_AudioState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Enter = static_cast<int32_t>(0x1),
__E_Crescendo = static_cast<int32_t>(0x2),
__E_Loop = static_cast<int32_t>(0x3),
__E_Exit = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ForceVolume_AudioState_Unwrapped () const noexcept {
return static_cast<__ForceVolume_AudioState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ForceVolume_AudioState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ForceVolume_AudioState(int32_t  value__) noexcept;

/// @brief Field Crescendo value: I32(2)
static ::GlobalNamespace::ForceVolume_AudioState const Crescendo;

/// @brief Field Enter value: I32(1)
static ::GlobalNamespace::ForceVolume_AudioState const Enter;

/// @brief Field Exit value: I32(4)
static ::GlobalNamespace::ForceVolume_AudioState const Exit;

/// @brief Field Loop value: I32(3)
static ::GlobalNamespace::ForceVolume_AudioState const Loop;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ForceVolume_AudioState const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3234};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ForceVolume_AudioState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ForceVolume_AudioState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
