#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ZoneShaderTriggerSettings_ActivationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZoneShaderTriggerSettings_ActivationType)
// Forward declare root types
namespace GlobalNamespace {
struct ZoneShaderTriggerSettings_ActivationType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType, "GT_CustomMapSupportRuntime", "ZoneShaderTriggerSettings/ActivationType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.ZoneShaderTriggerSettings/ActivationType
struct CORDL_TYPE ZoneShaderTriggerSettings_ActivationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZoneShaderTriggerSettings_ActivationType_Unwrapped
enum struct __ZoneShaderTriggerSettings_ActivationType_Unwrapped : int32_t {
__E_ActivateSpecificSettings = static_cast<int32_t>(0x0),
__E_ActivateCustomMapDefaults = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZoneShaderTriggerSettings_ActivationType_Unwrapped () const noexcept {
return static_cast<__ZoneShaderTriggerSettings_ActivationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZoneShaderTriggerSettings_ActivationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZoneShaderTriggerSettings_ActivationType(int32_t  value__) noexcept;

/// @brief Field ActivateCustomMapDefaults value: I32(1)
static ::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType const ActivateCustomMapDefaults;

/// @brief Field ActivateSpecificSettings value: I32(0)
static ::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType const ActivateSpecificSettings;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30939};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneShaderTriggerSettings_ActivationType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
