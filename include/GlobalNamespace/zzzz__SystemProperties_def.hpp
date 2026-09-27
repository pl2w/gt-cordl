#pragma once
// IWYU pragma private; include "GlobalNamespace/SystemProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SystemProperties)
// Forward declare root types
namespace GlobalNamespace {
struct SystemProperties;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SystemProperties);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SystemProperties, "", "SystemProperties");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SystemProperties
struct CORDL_TYPE SystemProperties {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SystemProperties_Unwrapped
enum struct __SystemProperties_Unwrapped : int32_t {
__E_SwapInterval = static_cast<int32_t>(0x1),
__E_HalfRefreshRate = static_cast<int32_t>(0x2),
__E_GPULevel = static_cast<int32_t>(0x4),
__E_CPULevel = static_cast<int32_t>(0x8),
__E_Headlock = static_cast<int32_t>(0x10),
__E_HeadlockTranslationX = static_cast<int32_t>(0x20),
__E_HeadlockTranslationY = static_cast<int32_t>(0x40),
__E_HeadlockTranslationZ = static_cast<int32_t>(0x80),
__E_PhaseSyncAdditionalPadding = static_cast<int32_t>(0x100),
__E_PhaseSyncDelayOverride = static_cast<int32_t>(0x200),
__E_PhaseSyncPredictionTime = static_cast<int32_t>(0x400),
__E_PhaseSync = static_cast<int32_t>(0x800),
__E_RefreshRate = static_cast<int32_t>(0x1000),
__E_PredictionTime = static_cast<int32_t>(0x2000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SystemProperties_Unwrapped () const noexcept {
return static_cast<__SystemProperties_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SystemProperties() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SystemProperties(int32_t  value__) noexcept;

/// @brief Field CPULevel value: I32(8)
static ::GlobalNamespace::SystemProperties const CPULevel;

/// @brief Field GPULevel value: I32(4)
static ::GlobalNamespace::SystemProperties const GPULevel;

/// @brief Field HalfRefreshRate value: I32(2)
static ::GlobalNamespace::SystemProperties const HalfRefreshRate;

/// @brief Field Headlock value: I32(16)
static ::GlobalNamespace::SystemProperties const Headlock;

/// @brief Field HeadlockTranslationX value: I32(32)
static ::GlobalNamespace::SystemProperties const HeadlockTranslationX;

/// @brief Field HeadlockTranslationY value: I32(64)
static ::GlobalNamespace::SystemProperties const HeadlockTranslationY;

/// @brief Field HeadlockTranslationZ value: I32(128)
static ::GlobalNamespace::SystemProperties const HeadlockTranslationZ;

/// @brief Field PhaseSync value: I32(2048)
static ::GlobalNamespace::SystemProperties const PhaseSync;

/// @brief Field PhaseSyncAdditionalPadding value: I32(256)
static ::GlobalNamespace::SystemProperties const PhaseSyncAdditionalPadding;

/// @brief Field PhaseSyncDelayOverride value: I32(512)
static ::GlobalNamespace::SystemProperties const PhaseSyncDelayOverride;

/// @brief Field PhaseSyncPredictionTime value: I32(1024)
static ::GlobalNamespace::SystemProperties const PhaseSyncPredictionTime;

/// @brief Field PredictionTime value: I32(8192)
static ::GlobalNamespace::SystemProperties const PredictionTime;

/// @brief Field RefreshRate value: I32(4096)
static ::GlobalNamespace::SystemProperties const RefreshRate;

/// @brief Field SwapInterval value: I32(1)
static ::GlobalNamespace::SystemProperties const SwapInterval;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2284};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SystemProperties, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SystemProperties) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
