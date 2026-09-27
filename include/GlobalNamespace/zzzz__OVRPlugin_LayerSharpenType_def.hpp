#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LayerSharpenType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_LayerSharpenType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_LayerSharpenType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_LayerSharpenType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_LayerSharpenType, "", "OVRPlugin/LayerSharpenType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/LayerSharpenType
struct CORDL_TYPE OVRPlugin_LayerSharpenType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_LayerSharpenType_Unwrapped
enum struct __OVRPlugin_LayerSharpenType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Normal = static_cast<int32_t>(0x2000),
__E_Quality = static_cast<int32_t>(0x10000),
__E_Automatic = static_cast<int32_t>(0x40000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_LayerSharpenType_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_LayerSharpenType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_LayerSharpenType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_LayerSharpenType(int32_t  value__) noexcept;

/// @brief Field Automatic value: I32(262144)
static ::GlobalNamespace::OVRPlugin_LayerSharpenType const Automatic;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRPlugin_LayerSharpenType const None;

/// @brief Field Normal value: I32(8192)
static ::GlobalNamespace::OVRPlugin_LayerSharpenType const Normal;

/// @brief Field Quality value: I32(65536)
static ::GlobalNamespace::OVRPlugin_LayerSharpenType const Quality;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12070};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerSharpenType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_LayerSharpenType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
