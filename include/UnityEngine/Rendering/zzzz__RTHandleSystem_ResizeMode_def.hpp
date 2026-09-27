#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTHandleSystem_ResizeMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RTHandleSystem_ResizeMode)
// Forward declare root types
namespace GlobalNamespace {
struct RTHandleSystem_ResizeMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RTHandleSystem_ResizeMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RTHandleSystem_ResizeMode, "UnityEngine.Rendering", "RTHandleSystem/ResizeMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RTHandleSystem/ResizeMode
struct CORDL_TYPE RTHandleSystem_ResizeMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RTHandleSystem_ResizeMode_Unwrapped
enum struct __RTHandleSystem_ResizeMode_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0x0),
__E_OnDemand = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RTHandleSystem_ResizeMode_Unwrapped () const noexcept {
return static_cast<__RTHandleSystem_ResizeMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RTHandleSystem_ResizeMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RTHandleSystem_ResizeMode(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(0)
static ::GlobalNamespace::RTHandleSystem_ResizeMode const Auto;

/// @brief Field OnDemand value: I32(1)
static ::GlobalNamespace::RTHandleSystem_ResizeMode const OnDemand;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16969};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RTHandleSystem_ResizeMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RTHandleSystem_ResizeMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
