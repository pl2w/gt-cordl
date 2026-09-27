#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SkeletonType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SkeletonType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SkeletonType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SkeletonType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SkeletonType, "", "OVRPlugin/SkeletonType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SkeletonType
struct CORDL_TYPE OVRPlugin_SkeletonType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_SkeletonType_Unwrapped
enum struct __OVRPlugin_SkeletonType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_HandLeft = static_cast<int32_t>(0x0),
__E_HandRight = static_cast<int32_t>(0x1),
__E_Body = static_cast<int32_t>(0x2),
__E_FullBody = static_cast<int32_t>(0x3),
__E_XRHandLeft = static_cast<int32_t>(0x4),
__E_XRHandRight = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_SkeletonType_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_SkeletonType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SkeletonType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SkeletonType(int32_t  value__) noexcept;

/// @brief Field Body value: I32(2)
static ::GlobalNamespace::OVRPlugin_SkeletonType const Body;

/// @brief Field FullBody value: I32(3)
static ::GlobalNamespace::OVRPlugin_SkeletonType const FullBody;

/// @brief Field HandLeft value: I32(0)
static ::GlobalNamespace::OVRPlugin_SkeletonType const HandLeft;

/// @brief Field HandRight value: I32(1)
static ::GlobalNamespace::OVRPlugin_SkeletonType const HandRight;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::OVRPlugin_SkeletonType const None;

/// @brief Field XRHandLeft value: I32(4)
static ::GlobalNamespace::OVRPlugin_SkeletonType const XRHandLeft;

/// @brief Field XRHandRight value: I32(5)
static ::GlobalNamespace::OVRPlugin_SkeletonType const XRHandRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12144};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SkeletonType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SkeletonType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
