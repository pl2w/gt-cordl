#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimeFieldAttribute_UseEditMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeFieldAttribute_UseEditMode)
// Forward declare root types
namespace GlobalNamespace {
struct TimeFieldAttribute_UseEditMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeFieldAttribute_UseEditMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeFieldAttribute_UseEditMode, "UnityEngine.Timeline", "TimeFieldAttribute/UseEditMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimeFieldAttribute/UseEditMode
struct CORDL_TYPE TimeFieldAttribute_UseEditMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimeFieldAttribute_UseEditMode_Unwrapped
enum struct __TimeFieldAttribute_UseEditMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ApplyEditMode = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimeFieldAttribute_UseEditMode_Unwrapped () const noexcept {
return static_cast<__TimeFieldAttribute_UseEditMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimeFieldAttribute_UseEditMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimeFieldAttribute_UseEditMode(int32_t  value__) noexcept;

/// @brief Field ApplyEditMode value: I32(1)
static ::GlobalNamespace::TimeFieldAttribute_UseEditMode const ApplyEditMode;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::TimeFieldAttribute_UseEditMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28773};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeFieldAttribute_UseEditMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeFieldAttribute_UseEditMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
