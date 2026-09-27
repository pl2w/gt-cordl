#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/XrStructureType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrStructureType)
// Forward declare root types
namespace Valve::OpenXR::Utils {
struct XrStructureType;
}
// Write type traits
MARK_VAL_T(::Valve::OpenXR::Utils::XrStructureType);
DEFINE_IL2CPP_CLASS(::Valve::OpenXR::Utils::XrStructureType, "Valve.OpenXR.Utils", "XrStructureType");
// Dependencies 
namespace Valve::OpenXR::Utils {
// Is value type: true
// CS Name: Valve.OpenXR.Utils.XrStructureType
struct CORDL_TYPE XrStructureType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XrStructureType_Unwrapped
enum struct __XrStructureType_Unwrapped : int32_t {
__E_XR_TYPE_FOVEATION_EYE_TRACKED_STATE_META = static_cast<int32_t>(0x3b9dd741),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XrStructureType_Unwrapped () const noexcept {
return static_cast<__XrStructureType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XrStructureType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XrStructureType(int32_t  value__) noexcept;

/// @brief Field XR_TYPE_FOVEATION_EYE_TRACKED_STATE_META value: I32(1000200001)
static ::Valve::OpenXR::Utils::XrStructureType const XR_TYPE_FOVEATION_EYE_TRACKED_STATE_META;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31842};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Valve::OpenXR::Utils::XrStructureType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Valve::OpenXR::Utils::XrStructureType) == 0x4, "Size mismatch!");

} // namespace end def Valve::OpenXR::Utils
