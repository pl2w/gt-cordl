#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutNative_LayoutLogEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutNative_LayoutLogEventType)
// Forward declare root types
namespace GlobalNamespace {
struct LayoutNative_LayoutLogEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LayoutNative_LayoutLogEventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LayoutNative_LayoutLogEventType, "UnityEngine.UIElements.Layout", "LayoutNative/LayoutLogEventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutNative/LayoutLogEventType
struct CORDL_TYPE LayoutNative_LayoutLogEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LayoutNative_LayoutLogEventType_Unwrapped
enum struct __LayoutNative_LayoutLogEventType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Error = static_cast<int32_t>(0x1),
__E_Measure = static_cast<int32_t>(0x2),
__E_Layout = static_cast<int32_t>(0x3),
__E_CacheUsage = static_cast<int32_t>(0x4),
__E_BeginLayout = static_cast<int32_t>(0x5),
__E_EndLayout = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LayoutNative_LayoutLogEventType_Unwrapped () const noexcept {
return static_cast<__LayoutNative_LayoutLogEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LayoutNative_LayoutLogEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LayoutNative_LayoutLogEventType(int32_t  value__) noexcept;

/// @brief Field BeginLayout value: I32(5)
static ::GlobalNamespace::LayoutNative_LayoutLogEventType const BeginLayout;

/// @brief Field CacheUsage value: I32(4)
static ::GlobalNamespace::LayoutNative_LayoutLogEventType const CacheUsage;

/// @brief Field EndLayout value: I32(6)
static ::GlobalNamespace::LayoutNative_LayoutLogEventType const EndLayout;

/// @brief Field Error value: I32(1)
static ::GlobalNamespace::LayoutNative_LayoutLogEventType const Error;

/// @brief Field Layout value: I32(3)
static ::GlobalNamespace::LayoutNative_LayoutLogEventType const Layout;

/// @brief Field Measure value: I32(2)
static ::GlobalNamespace::LayoutNative_LayoutLogEventType const Measure;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::LayoutNative_LayoutLogEventType const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8675};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LayoutNative_LayoutLogEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LayoutNative_LayoutLogEventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
