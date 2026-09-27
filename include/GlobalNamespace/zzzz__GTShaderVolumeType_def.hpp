#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderVolumeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTShaderVolumeType)
// Forward declare root types
namespace GlobalNamespace {
struct GTShaderVolumeType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTShaderVolumeType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTShaderVolumeType, "", "GTShaderVolumeType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTShaderVolumeType
struct CORDL_TYPE GTShaderVolumeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __GTShaderVolumeType_Unwrapped
enum struct __GTShaderVolumeType_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_Fog = static_cast<uint32_t>(0x1u),
__E_Tint = static_cast<uint32_t>(0x2u),
__E_Decal = static_cast<uint32_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTShaderVolumeType_Unwrapped () const noexcept {
return static_cast<__GTShaderVolumeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTShaderVolumeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTShaderVolumeType(uint32_t  value__) noexcept;

/// @brief Field Decal value: U32(4)
static ::GlobalNamespace::GTShaderVolumeType const Decal;

/// @brief Field Fog value: U32(1)
static ::GlobalNamespace::GTShaderVolumeType const Fog;

/// @brief Field None value: U32(0)
static ::GlobalNamespace::GTShaderVolumeType const None;

/// @brief Field Tint value: U32(2)
static ::GlobalNamespace::GTShaderVolumeType const Tint;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{986};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTShaderVolumeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTShaderVolumeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
