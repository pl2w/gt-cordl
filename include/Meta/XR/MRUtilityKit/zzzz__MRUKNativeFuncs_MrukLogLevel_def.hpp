#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukLogLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukLogLevel)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukLogLevel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukLogLevel");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukLogLevel
struct CORDL_TYPE MRUKNativeFuncs_MrukLogLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MRUKNativeFuncs_MrukLogLevel_Unwrapped
enum struct __MRUKNativeFuncs_MrukLogLevel_Unwrapped : int32_t {
__E_Debug = static_cast<int32_t>(0x0),
__E_Info = static_cast<int32_t>(0x1),
__E_Warn = static_cast<int32_t>(0x2),
__E_Error = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MRUKNativeFuncs_MrukLogLevel_Unwrapped () const noexcept {
return static_cast<__MRUKNativeFuncs_MrukLogLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukLogLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukLogLevel(int32_t  value__) noexcept;

/// @brief Field Debug value: I32(0)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel const Debug;

/// @brief Field Error value: I32(3)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel const Error;

/// @brief Field Info value: I32(1)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel const Info;

/// @brief Field Warn value: I32(2)
static ::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel const Warn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25782};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
