#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/GrabPoseFinder_FindResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GrabPoseFinder_FindResult)
// Forward declare root types
namespace GlobalNamespace {
struct GrabPoseFinder_FindResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GrabPoseFinder_FindResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrabPoseFinder_FindResult, "Oculus.Interaction.HandGrab", "GrabPoseFinder/FindResult");
// [Obsolete]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.HandGrab.GrabPoseFinder/FindResult
struct CORDL_TYPE GrabPoseFinder_FindResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GrabPoseFinder_FindResult_Unwrapped
enum struct __GrabPoseFinder_FindResult_Unwrapped : int32_t {
__E_NotFound = static_cast<int32_t>(0x0),
__E_NotCompatible = static_cast<int32_t>(0x1),
__E_Found = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GrabPoseFinder_FindResult_Unwrapped () const noexcept {
return static_cast<__GrabPoseFinder_FindResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GrabPoseFinder_FindResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GrabPoseFinder_FindResult(int32_t  value__) noexcept;

/// @brief Field Found value: I32(2)
static ::GlobalNamespace::GrabPoseFinder_FindResult const Found;

/// @brief Field NotCompatible value: I32(1)
static ::GlobalNamespace::GrabPoseFinder_FindResult const NotCompatible;

/// @brief Field NotFound value: I32(0)
static ::GlobalNamespace::GrabPoseFinder_FindResult const NotFound;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16314};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrabPoseFinder_FindResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrabPoseFinder_FindResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
