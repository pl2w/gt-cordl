#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_OutputOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB2_OutputOptions)
// Forward declare root types
namespace DigitalOpus::MB::Core {
struct MB2_OutputOptions;
}
// Write type traits
MARK_VAL_T(::DigitalOpus::MB::Core::MB2_OutputOptions);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_OutputOptions, "DigitalOpus.MB.Core", "MB2_OutputOptions");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB2_OutputOptions
struct CORDL_TYPE MB2_OutputOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MB2_OutputOptions_Unwrapped
enum struct __MB2_OutputOptions_Unwrapped : int32_t {
__E_bakeIntoSceneObject = static_cast<int32_t>(0x0),
__E_bakeMeshAssetsInPlace = static_cast<int32_t>(0x1),
__E_bakeIntoPrefab = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MB2_OutputOptions_Unwrapped () const noexcept {
return static_cast<__MB2_OutputOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MB2_OutputOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MB2_OutputOptions(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22597};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field bakeIntoPrefab value: I32(2)
static ::DigitalOpus::MB::Core::MB2_OutputOptions const bakeIntoPrefab;

/// @brief Field bakeIntoSceneObject value: I32(0)
static ::DigitalOpus::MB::Core::MB2_OutputOptions const bakeIntoSceneObject;

/// @brief Field bakeMeshAssetsInPlace value: I32(1)
static ::DigitalOpus::MB::Core::MB2_OutputOptions const bakeMeshAssetsInPlace;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB2_OutputOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB2_OutputOptions) == 0x4, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
