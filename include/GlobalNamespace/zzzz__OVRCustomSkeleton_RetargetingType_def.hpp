#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCustomSkeleton_RetargetingType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRCustomSkeleton_RetargetingType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRCustomSkeleton_RetargetingType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRCustomSkeleton_RetargetingType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRCustomSkeleton_RetargetingType, "", "OVRCustomSkeleton/RetargetingType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRCustomSkeleton/RetargetingType
struct CORDL_TYPE OVRCustomSkeleton_RetargetingType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRCustomSkeleton_RetargetingType_Unwrapped
enum struct __OVRCustomSkeleton_RetargetingType_Unwrapped : int32_t {
__E_OculusSkeleton = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRCustomSkeleton_RetargetingType_Unwrapped () const noexcept {
return static_cast<__OVRCustomSkeleton_RetargetingType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRCustomSkeleton_RetargetingType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRCustomSkeleton_RetargetingType(int32_t  value__) noexcept;

/// @brief Field OculusSkeleton value: I32(0)
static ::GlobalNamespace::OVRCustomSkeleton_RetargetingType const OculusSkeleton;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12604};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRCustomSkeleton_RetargetingType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRCustomSkeleton_RetargetingType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
