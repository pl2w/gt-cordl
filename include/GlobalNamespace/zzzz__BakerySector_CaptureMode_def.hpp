#pragma once
// IWYU pragma private; include "GlobalNamespace/BakerySector_CaptureMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BakerySector_CaptureMode)
// Forward declare root types
namespace GlobalNamespace {
struct BakerySector_CaptureMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BakerySector_CaptureMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakerySector_CaptureMode, "", "BakerySector/CaptureMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BakerySector/CaptureMode
struct CORDL_TYPE BakerySector_CaptureMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BakerySector_CaptureMode_Unwrapped
enum struct __BakerySector_CaptureMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_CaptureInPlace = static_cast<int32_t>(0x0),
__E_CaptureToAsset = static_cast<int32_t>(0x1),
__E_LoadCaptured = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BakerySector_CaptureMode_Unwrapped () const noexcept {
return static_cast<__BakerySector_CaptureMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BakerySector_CaptureMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BakerySector_CaptureMode(int32_t  value__) noexcept;

/// @brief Field CaptureInPlace value: I32(0)
static ::GlobalNamespace::BakerySector_CaptureMode const CaptureInPlace;

/// @brief Field CaptureToAsset value: I32(1)
static ::GlobalNamespace::BakerySector_CaptureMode const CaptureToAsset;

/// @brief Field LoadCaptured value: I32(2)
static ::GlobalNamespace::BakerySector_CaptureMode const LoadCaptured;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::BakerySector_CaptureMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32445};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakerySector_CaptureMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakerySector_CaptureMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
