#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LayerSuperSamplingType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_LayerSuperSamplingType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_LayerSuperSamplingType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_LayerSuperSamplingType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_LayerSuperSamplingType, "", "OVRPlugin/LayerSuperSamplingType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/LayerSuperSamplingType
struct CORDL_TYPE OVRPlugin_LayerSuperSamplingType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_LayerSuperSamplingType_Unwrapped
enum struct __OVRPlugin_LayerSuperSamplingType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Normal = static_cast<int32_t>(0x1000),
__E_Quality = static_cast<int32_t>(0x100),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_LayerSuperSamplingType_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_LayerSuperSamplingType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_LayerSuperSamplingType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_LayerSuperSamplingType(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRPlugin_LayerSuperSamplingType const None;

/// @brief Field Normal value: I32(4096)
static ::GlobalNamespace::OVRPlugin_LayerSuperSamplingType const Normal;

/// @brief Field Quality value: I32(256)
static ::GlobalNamespace::OVRPlugin_LayerSuperSamplingType const Quality;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12069};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerSuperSamplingType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_LayerSuperSamplingType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
