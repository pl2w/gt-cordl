#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_XrApi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_XrApi)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_XrApi;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_XrApi);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_XrApi, "", "OVRPlugin/XrApi");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/XrApi
struct CORDL_TYPE OVRPlugin_XrApi {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_XrApi_Unwrapped
enum struct __OVRPlugin_XrApi_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_CAPI = static_cast<int32_t>(0x1),
__E_VRAPI = static_cast<int32_t>(0x2),
__E_OpenXR = static_cast<int32_t>(0x3),
__E_EnumSize = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_XrApi_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_XrApi_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_XrApi() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_XrApi(int32_t  value__) noexcept;

/// @brief Field CAPI value: I32(1)
static ::GlobalNamespace::OVRPlugin_XrApi const CAPI;

/// @brief Field EnumSize value: I32(2147483647)
static ::GlobalNamespace::OVRPlugin_XrApi const EnumSize;

/// @brief Field OpenXR value: I32(3)
static ::GlobalNamespace::OVRPlugin_XrApi const OpenXR;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::OVRPlugin_XrApi const Unknown;

/// @brief Field VRAPI value: I32(2)
static ::GlobalNamespace::OVRPlugin_XrApi const VRAPI;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12052};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_XrApi, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_XrApi) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
