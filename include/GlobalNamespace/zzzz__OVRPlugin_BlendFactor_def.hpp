#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BlendFactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_BlendFactor)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_BlendFactor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_BlendFactor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_BlendFactor, "", "OVRPlugin/BlendFactor");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/BlendFactor
struct CORDL_TYPE OVRPlugin_BlendFactor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_BlendFactor_Unwrapped
enum struct __OVRPlugin_BlendFactor_Unwrapped : int32_t {
__E_Zero = static_cast<int32_t>(0x0),
__E_One = static_cast<int32_t>(0x1),
__E_SrcAlpha = static_cast<int32_t>(0x2),
__E_OneMinusSrcAlpha = static_cast<int32_t>(0x3),
__E_DstAlpha = static_cast<int32_t>(0x4),
__E_OneMinusDstAlpha = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_BlendFactor_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_BlendFactor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_BlendFactor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_BlendFactor(int32_t  value__) noexcept;

/// @brief Field DstAlpha value: I32(4)
static ::GlobalNamespace::OVRPlugin_BlendFactor const DstAlpha;

/// @brief Field One value: I32(1)
static ::GlobalNamespace::OVRPlugin_BlendFactor const One;

/// @brief Field OneMinusDstAlpha value: I32(5)
static ::GlobalNamespace::OVRPlugin_BlendFactor const OneMinusDstAlpha;

/// @brief Field OneMinusSrcAlpha value: I32(3)
static ::GlobalNamespace::OVRPlugin_BlendFactor const OneMinusSrcAlpha;

/// @brief Field SrcAlpha value: I32(2)
static ::GlobalNamespace::OVRPlugin_BlendFactor const SrcAlpha;

/// @brief Field Zero value: I32(0)
static ::GlobalNamespace::OVRPlugin_BlendFactor const Zero;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12127};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_BlendFactor, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_BlendFactor) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
