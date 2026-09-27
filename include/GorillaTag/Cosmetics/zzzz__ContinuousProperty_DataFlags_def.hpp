#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousProperty_DataFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContinuousProperty_DataFlags)
// Forward declare root types
namespace GlobalNamespace {
struct ContinuousProperty_DataFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContinuousProperty_DataFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContinuousProperty_DataFlags, "GorillaTag.Cosmetics", "ContinuousProperty/DataFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.ContinuousProperty/DataFlags
struct CORDL_TYPE ContinuousProperty_DataFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContinuousProperty_DataFlags_Unwrapped
enum struct __ContinuousProperty_DataFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_HasCurve = static_cast<int32_t>(0x1),
__E_HasColor = static_cast<int32_t>(0x2),
__E_HasAxis = static_cast<int32_t>(0x4),
__E_HasInteger = static_cast<int32_t>(0x8),
__E_HasInterpolation = static_cast<int32_t>(0x10),
__E_IsShaderProperty = static_cast<int32_t>(0x20),
__E_IsAnimatorParameter = static_cast<int32_t>(0x40),
__E_HasThreshold = static_cast<int32_t>(0x80),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContinuousProperty_DataFlags_Unwrapped () const noexcept {
return static_cast<__ContinuousProperty_DataFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContinuousProperty_DataFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContinuousProperty_DataFlags(int32_t  value__) noexcept;

/// @brief Field HasAxis value: I32(4)
static ::GlobalNamespace::ContinuousProperty_DataFlags const HasAxis;

/// @brief Field HasColor value: I32(2)
static ::GlobalNamespace::ContinuousProperty_DataFlags const HasColor;

/// @brief Field HasCurve value: I32(1)
static ::GlobalNamespace::ContinuousProperty_DataFlags const HasCurve;

/// @brief Field HasInteger value: I32(8)
static ::GlobalNamespace::ContinuousProperty_DataFlags const HasInteger;

/// @brief Field HasInterpolation value: I32(16)
static ::GlobalNamespace::ContinuousProperty_DataFlags const HasInterpolation;

/// @brief Field HasThreshold value: I32(128)
static ::GlobalNamespace::ContinuousProperty_DataFlags const HasThreshold;

/// @brief Field IsAnimatorParameter value: I32(64)
static ::GlobalNamespace::ContinuousProperty_DataFlags const IsAnimatorParameter;

/// @brief Field IsShaderProperty value: I32(32)
static ::GlobalNamespace::ContinuousProperty_DataFlags const IsShaderProperty;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ContinuousProperty_DataFlags const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4883};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContinuousProperty_DataFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContinuousProperty_DataFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
