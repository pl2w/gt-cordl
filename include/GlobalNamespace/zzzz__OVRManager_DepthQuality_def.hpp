#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_DepthQuality.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRManager_DepthQuality)
// Forward declare root types
namespace GlobalNamespace {
struct OVRManager_DepthQuality;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRManager_DepthQuality);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRManager_DepthQuality, "", "OVRManager/DepthQuality");
// [Obsolete("Deprecated", false)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/DepthQuality
struct CORDL_TYPE OVRManager_DepthQuality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRManager_DepthQuality_Unwrapped
enum struct __OVRManager_DepthQuality_Unwrapped : int32_t {
__E_Low = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRManager_DepthQuality_Unwrapped () const noexcept {
return static_cast<__OVRManager_DepthQuality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRManager_DepthQuality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRManager_DepthQuality(int32_t  value__) noexcept;

/// @brief Field High value: I32(2)
static ::GlobalNamespace::OVRManager_DepthQuality const High;

/// @brief Field Low value: I32(0)
static ::GlobalNamespace::OVRManager_DepthQuality const Low;

/// @brief Field Medium value: I32(1)
static ::GlobalNamespace::OVRManager_DepthQuality const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11986};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_DepthQuality, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRManager_DepthQuality) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
