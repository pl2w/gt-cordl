#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderResourceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderResourceType)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderResourceType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderResourceType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderResourceType, "", "BuilderResourceType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderResourceType
struct CORDL_TYPE BuilderResourceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderResourceType_Unwrapped
enum struct __BuilderResourceType_Unwrapped : int32_t {
__E_Basic = static_cast<int32_t>(0x0),
__E_Decorative = static_cast<int32_t>(0x1),
__E_Functional = static_cast<int32_t>(0x2),
__E_Count = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderResourceType_Unwrapped () const noexcept {
return static_cast<__BuilderResourceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderResourceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderResourceType(int32_t  value__) noexcept;

/// @brief Field Basic value: I32(0)
static ::GlobalNamespace::BuilderResourceType const Basic;

/// @brief Field Count value: I32(3)
static ::GlobalNamespace::BuilderResourceType const Count;

/// @brief Field Decorative value: I32(1)
static ::GlobalNamespace::BuilderResourceType const Decorative;

/// @brief Field Functional value: I32(2)
static ::GlobalNamespace::BuilderResourceType const Functional;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1627};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderResourceType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderResourceType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
