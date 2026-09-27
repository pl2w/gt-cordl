#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings_BackendFovationApi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRSettings_BackendFovationApi)
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRSettings_BackendFovationApi;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRSettings_BackendFovationApi);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRSettings_BackendFovationApi, "UnityEngine.XR.OpenXR", "OpenXRSettings/BackendFovationApi");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/BackendFovationApi
struct CORDL_TYPE OpenXRSettings_BackendFovationApi {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __OpenXRSettings_BackendFovationApi_Unwrapped
enum struct __OpenXRSettings_BackendFovationApi_Unwrapped : uint8_t {
__E_Legacy = static_cast<uint8_t>(0x0u),
__E_SRPFoveation = static_cast<uint8_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpenXRSettings_BackendFovationApi_Unwrapped () const noexcept {
return static_cast<__OpenXRSettings_BackendFovationApi_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpenXRSettings_BackendFovationApi() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRSettings_BackendFovationApi(uint8_t  value__) noexcept;

/// @brief Field Legacy value: U8(0)
static ::GlobalNamespace::OpenXRSettings_BackendFovationApi const Legacy;

/// @brief Field SRPFoveation value: U8(1)
static ::GlobalNamespace::OpenXRSettings_BackendFovationApi const SRPFoveation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27265};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenXRSettings_BackendFovationApi, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpenXRSettings_BackendFovationApi) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
