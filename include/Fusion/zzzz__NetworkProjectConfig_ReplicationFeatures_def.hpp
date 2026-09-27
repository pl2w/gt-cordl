#pragma once
// IWYU pragma private; include "Fusion/NetworkProjectConfig_ReplicationFeatures.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkProjectConfig_ReplicationFeatures)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkProjectConfig_ReplicationFeatures;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures, "Fusion", "NetworkProjectConfig/ReplicationFeatures");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkProjectConfig/ReplicationFeatures
struct CORDL_TYPE NetworkProjectConfig_ReplicationFeatures {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkProjectConfig_ReplicationFeatures_Unwrapped
enum struct __NetworkProjectConfig_ReplicationFeatures_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Scheduling = static_cast<int32_t>(0x1),
__E_SchedulingAndInterestManagement = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkProjectConfig_ReplicationFeatures_Unwrapped () const noexcept {
return static_cast<__NetworkProjectConfig_ReplicationFeatures_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkProjectConfig_ReplicationFeatures() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkProjectConfig_ReplicationFeatures(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures const None;

/// @brief Field Scheduling value: I32(1)
static ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures const Scheduling;

/// @brief Field SchedulingAndInterestManagement value: I32(3)
static ::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures const SchedulingAndInterestManagement;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19248};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkProjectConfig_ReplicationFeatures) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
