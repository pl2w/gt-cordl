#pragma once
// IWYU pragma private; include "GlobalNamespace/SIExclusionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIExclusionType)
// Forward declare root types
namespace GlobalNamespace {
struct SIExclusionType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIExclusionType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIExclusionType, "", "SIExclusionType");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIExclusionType
struct CORDL_TYPE SIExclusionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIExclusionType_Unwrapped
enum struct __SIExclusionType_Unwrapped : int32_t {
__E_AffectsOthers = static_cast<int32_t>(0x1),
__E_AffectsLocalMovement = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIExclusionType_Unwrapped () const noexcept {
return static_cast<__SIExclusionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIExclusionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIExclusionType(int32_t  value__) noexcept;

/// @brief Field AffectsLocalMovement value: I32(2)
static ::GlobalNamespace::SIExclusionType const AffectsLocalMovement;

/// @brief Field AffectsOthers value: I32(1)
static ::GlobalNamespace::SIExclusionType const AffectsOthers;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{318};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIExclusionType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIExclusionType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
