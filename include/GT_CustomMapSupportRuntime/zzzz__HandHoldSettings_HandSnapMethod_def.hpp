#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/HandHoldSettings_HandSnapMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandHoldSettings_HandSnapMethod)
// Forward declare root types
namespace GlobalNamespace {
struct HandHoldSettings_HandSnapMethod;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandHoldSettings_HandSnapMethod);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandHoldSettings_HandSnapMethod, "GT_CustomMapSupportRuntime", "HandHoldSettings/HandSnapMethod");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.HandHoldSettings/HandSnapMethod
struct CORDL_TYPE HandHoldSettings_HandSnapMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandHoldSettings_HandSnapMethod_Unwrapped
enum struct __HandHoldSettings_HandSnapMethod_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_SnapToCenterPoint = static_cast<int32_t>(0x1),
__E_SnapToNearestEdge = static_cast<int32_t>(0x2),
__E_SnapToXAxisPoint = static_cast<int32_t>(0x3),
__E_SnapToYAxisPoint = static_cast<int32_t>(0x4),
__E_SnapToZAxisPoint = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandHoldSettings_HandSnapMethod_Unwrapped () const noexcept {
return static_cast<__HandHoldSettings_HandSnapMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandHoldSettings_HandSnapMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandHoldSettings_HandSnapMethod(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::HandHoldSettings_HandSnapMethod const None;

/// @brief Field SnapToCenterPoint value: I32(1)
static ::GlobalNamespace::HandHoldSettings_HandSnapMethod const SnapToCenterPoint;

/// @brief Field SnapToNearestEdge value: I32(2)
static ::GlobalNamespace::HandHoldSettings_HandSnapMethod const SnapToNearestEdge;

/// @brief Field SnapToXAxisPoint value: I32(3)
static ::GlobalNamespace::HandHoldSettings_HandSnapMethod const SnapToXAxisPoint;

/// @brief Field SnapToYAxisPoint value: I32(4)
static ::GlobalNamespace::HandHoldSettings_HandSnapMethod const SnapToYAxisPoint;

/// @brief Field SnapToZAxisPoint value: I32(5)
static ::GlobalNamespace::HandHoldSettings_HandSnapMethod const SnapToZAxisPoint;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30903};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandHoldSettings_HandSnapMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandHoldSettings_HandSnapMethod) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
