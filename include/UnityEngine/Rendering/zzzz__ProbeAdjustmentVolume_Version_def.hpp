#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeAdjustmentVolume_Version.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeAdjustmentVolume_Version)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeAdjustmentVolume_Version;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeAdjustmentVolume_Version);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeAdjustmentVolume_Version, "UnityEngine.Rendering", "ProbeAdjustmentVolume/Version");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeAdjustmentVolume/Version
struct CORDL_TYPE ProbeAdjustmentVolume_Version {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProbeAdjustmentVolume_Version_Unwrapped
enum struct __ProbeAdjustmentVolume_Version_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_Mode = static_cast<int32_t>(0x1),
__E_Count = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProbeAdjustmentVolume_Version_Unwrapped () const noexcept {
return static_cast<__ProbeAdjustmentVolume_Version_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProbeAdjustmentVolume_Version() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeAdjustmentVolume_Version(int32_t  value__) noexcept;

/// @brief Field Count value: I32(2)
static ::GlobalNamespace::ProbeAdjustmentVolume_Version const Count;

/// @brief Field Initial value: I32(0)
static ::GlobalNamespace::ProbeAdjustmentVolume_Version const Initial;

/// @brief Field Mode value: I32(1)
static ::GlobalNamespace::ProbeAdjustmentVolume_Version const Mode;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16796};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeAdjustmentVolume_Version, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeAdjustmentVolume_Version) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
