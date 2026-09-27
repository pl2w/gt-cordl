#pragma once
// IWYU pragma private; include "Fusion/AnimatorSyncSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorSyncSettings)
// Forward declare root types
namespace Fusion {
struct AnimatorSyncSettings;
}
// Write type traits
MARK_VAL_T(::Fusion::AnimatorSyncSettings);
DEFINE_IL2CPP_CLASS(::Fusion::AnimatorSyncSettings, "Fusion", "AnimatorSyncSettings");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.AnimatorSyncSettings
struct CORDL_TYPE AnimatorSyncSettings {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnimatorSyncSettings_Unwrapped
enum struct __AnimatorSyncSettings_Unwrapped : int32_t {
__E_ParameterInts = static_cast<int32_t>(0x1),
__E_ParameterFloats = static_cast<int32_t>(0x2),
__E_ParameterBools = static_cast<int32_t>(0x4),
__E_ParameterTriggers = static_cast<int32_t>(0x8),
__E_StateRoot = static_cast<int32_t>(0x10),
__E_StateLayers = static_cast<int32_t>(0x20),
__E_LayerWeights = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnimatorSyncSettings_Unwrapped () const noexcept {
return static_cast<__AnimatorSyncSettings_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnimatorSyncSettings() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AnimatorSyncSettings(int32_t  value__) noexcept;

/// @brief Field LayerWeights value: I32(64)
static ::Fusion::AnimatorSyncSettings const LayerWeights;

/// @brief Field ParameterBools value: I32(4)
static ::Fusion::AnimatorSyncSettings const ParameterBools;

/// @brief Field ParameterFloats value: I32(2)
static ::Fusion::AnimatorSyncSettings const ParameterFloats;

/// @brief Field ParameterInts value: I32(1)
static ::Fusion::AnimatorSyncSettings const ParameterInts;

/// @brief Field ParameterTriggers value: I32(8)
static ::Fusion::AnimatorSyncSettings const ParameterTriggers;

/// @brief Field StateLayers value: I32(32)
static ::Fusion::AnimatorSyncSettings const StateLayers;

/// @brief Field StateRoot value: I32(16)
static ::Fusion::AnimatorSyncSettings const StateRoot;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18923};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::AnimatorSyncSettings, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::AnimatorSyncSettings) == 0x4, "Size mismatch!");

} // namespace end def Fusion
