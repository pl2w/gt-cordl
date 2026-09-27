#pragma once
// IWYU pragma private; include "GlobalNamespace/LckSocialCamera_CameraType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckSocialCamera_CameraType)
// Forward declare root types
namespace GlobalNamespace {
struct LckSocialCamera_CameraType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckSocialCamera_CameraType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckSocialCamera_CameraType, "", "LckSocialCamera/CameraType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LckSocialCamera/CameraType
struct CORDL_TYPE LckSocialCamera_CameraType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckSocialCamera_CameraType_Unwrapped
enum struct __LckSocialCamera_CameraType_Unwrapped : int32_t {
__E_Cococam = static_cast<int32_t>(0x0),
__E_Tablet = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckSocialCamera_CameraType_Unwrapped () const noexcept {
return static_cast<__LckSocialCamera_CameraType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckSocialCamera_CameraType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckSocialCamera_CameraType(int32_t  value__) noexcept;

/// @brief Field Cococam value: I32(0)
static ::GlobalNamespace::LckSocialCamera_CameraType const Cococam;

/// @brief Field Tablet value: I32(1)
static ::GlobalNamespace::LckSocialCamera_CameraType const Tablet;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1037};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckSocialCamera_CameraType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckSocialCamera_CameraType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
