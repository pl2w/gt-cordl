#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/SizeChangerSettings_ChangerType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SizeChangerSettings_ChangerType)
// Forward declare root types
namespace GlobalNamespace {
struct SizeChangerSettings_ChangerType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SizeChangerSettings_ChangerType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SizeChangerSettings_ChangerType, "GT_CustomMapSupportRuntime", "SizeChangerSettings/ChangerType");
// [NullableContext(0)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.SizeChangerSettings/ChangerType
struct CORDL_TYPE SizeChangerSettings_ChangerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SizeChangerSettings_ChangerType_Unwrapped
enum struct __SizeChangerSettings_ChangerType_Unwrapped : int32_t {
__E_Static = static_cast<int32_t>(0x0),
__E_Continuous = static_cast<int32_t>(0x1),
__E_Radius = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SizeChangerSettings_ChangerType_Unwrapped () const noexcept {
return static_cast<__SizeChangerSettings_ChangerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SizeChangerSettings_ChangerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SizeChangerSettings_ChangerType(int32_t  value__) noexcept;

/// @brief Field Continuous value: I32(1)
static ::GlobalNamespace::SizeChangerSettings_ChangerType const Continuous;

/// @brief Field Radius value: I32(2)
static ::GlobalNamespace::SizeChangerSettings_ChangerType const Radius;

/// @brief Field Static value: I32(0)
static ::GlobalNamespace::SizeChangerSettings_ChangerType const Static;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30924};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SizeChangerSettings_ChangerType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SizeChangerSettings_ChangerType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
