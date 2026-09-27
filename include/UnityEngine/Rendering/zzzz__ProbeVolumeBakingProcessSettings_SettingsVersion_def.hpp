#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingProcessSettings_SettingsVersion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeBakingProcessSettings_SettingsVersion)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeVolumeBakingProcessSettings_SettingsVersion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeVolumeBakingProcessSettings_SettingsVersion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeVolumeBakingProcessSettings_SettingsVersion, "UnityEngine.Rendering", "ProbeVolumeBakingProcessSettings/SettingsVersion");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingProcessSettings/SettingsVersion
struct CORDL_TYPE ProbeVolumeBakingProcessSettings_SettingsVersion {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProbeVolumeBakingProcessSettings_SettingsVersion_Unwrapped
enum struct __ProbeVolumeBakingProcessSettings_SettingsVersion_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_ThreadedVirtualOffset = static_cast<int32_t>(0x1),
__E_Max = static_cast<int32_t>(0x2),
__E_Current = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProbeVolumeBakingProcessSettings_SettingsVersion_Unwrapped () const noexcept {
return static_cast<__ProbeVolumeBakingProcessSettings_SettingsVersion_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProbeVolumeBakingProcessSettings_SettingsVersion() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeVolumeBakingProcessSettings_SettingsVersion(int32_t  value__) noexcept;

/// @brief Field Current value: I32(1)
static ::GlobalNamespace::ProbeVolumeBakingProcessSettings_SettingsVersion const Current;

/// @brief Field Initial value: I32(0)
static ::GlobalNamespace::ProbeVolumeBakingProcessSettings_SettingsVersion const Initial;

/// @brief Field Max value: I32(2)
static ::GlobalNamespace::ProbeVolumeBakingProcessSettings_SettingsVersion const Max;

/// @brief Field ThreadedVirtualOffset value: I32(1)
static ::GlobalNamespace::ProbeVolumeBakingProcessSettings_SettingsVersion const ThreadedVirtualOffset;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16850};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeVolumeBakingProcessSettings_SettingsVersion, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeVolumeBakingProcessSettings_SettingsVersion) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
