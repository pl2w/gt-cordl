#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraUpdateManager_UpdateFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraUpdateManager_UpdateFilter)
// Forward declare root types
namespace GlobalNamespace {
struct CameraUpdateManager_UpdateFilter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CameraUpdateManager_UpdateFilter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CameraUpdateManager_UpdateFilter, "Unity.Cinemachine", "CameraUpdateManager/UpdateFilter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CameraUpdateManager/UpdateFilter
struct CORDL_TYPE CameraUpdateManager_UpdateFilter {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CameraUpdateManager_UpdateFilter_Unwrapped
enum struct __CameraUpdateManager_UpdateFilter_Unwrapped : int32_t {
__E_Fixed = static_cast<int32_t>(0x1),
__E_Late = static_cast<int32_t>(0x2),
__E_Smart = static_cast<int32_t>(0x8),
__E_SmartFixed = static_cast<int32_t>(0x9),
__E_SmartLate = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CameraUpdateManager_UpdateFilter_Unwrapped () const noexcept {
return static_cast<__CameraUpdateManager_UpdateFilter_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CameraUpdateManager_UpdateFilter() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CameraUpdateManager_UpdateFilter(int32_t  value__) noexcept;

/// @brief Field Fixed value: I32(1)
static ::GlobalNamespace::CameraUpdateManager_UpdateFilter const Fixed;

/// @brief Field Late value: I32(2)
static ::GlobalNamespace::CameraUpdateManager_UpdateFilter const Late;

/// @brief Field Smart value: I32(8)
static ::GlobalNamespace::CameraUpdateManager_UpdateFilter const Smart;

/// @brief Field SmartFixed value: I32(9)
static ::GlobalNamespace::CameraUpdateManager_UpdateFilter const SmartFixed;

/// @brief Field SmartLate value: I32(10)
static ::GlobalNamespace::CameraUpdateManager_UpdateFilter const SmartLate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22262};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CameraUpdateManager_UpdateFilter, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CameraUpdateManager_UpdateFilter) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
