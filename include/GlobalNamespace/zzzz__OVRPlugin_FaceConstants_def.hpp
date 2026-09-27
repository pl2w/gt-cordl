#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FaceConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_FaceConstants)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_FaceConstants;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_FaceConstants);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_FaceConstants, "", "OVRPlugin/FaceConstants");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/FaceConstants
struct CORDL_TYPE OVRPlugin_FaceConstants {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_FaceConstants_Unwrapped
enum struct __OVRPlugin_FaceConstants_Unwrapped : int32_t {
__E_MaxFaceExpressions = static_cast<int32_t>(0x3f),
__E_MaxFaceRegionConfidences = static_cast<int32_t>(0x2),
__E_MaxFaceExpressions2 = static_cast<int32_t>(0x46),
__E_FaceVisemesCount = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_FaceConstants_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_FaceConstants_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_FaceConstants() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_FaceConstants(int32_t  value__) noexcept;

/// @brief Field FaceVisemesCount value: I32(15)
static ::GlobalNamespace::OVRPlugin_FaceConstants const FaceVisemesCount;

/// @brief Field MaxFaceExpressions value: I32(63)
static ::GlobalNamespace::OVRPlugin_FaceConstants const MaxFaceExpressions;

/// @brief Field MaxFaceExpressions2 value: I32(70)
static ::GlobalNamespace::OVRPlugin_FaceConstants const MaxFaceExpressions2;

/// @brief Field MaxFaceRegionConfidences value: I32(2)
static ::GlobalNamespace::OVRPlugin_FaceConstants const MaxFaceRegionConfidences;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12174};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceConstants, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_FaceConstants) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
