#pragma once
// IWYU pragma private; include "System/Data/Common/ObjectStorage_Families.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectStorage_Families)
// Forward declare root types
namespace GlobalNamespace {
struct ObjectStorage_Families;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ObjectStorage_Families);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjectStorage_Families, "System.Data.Common", "ObjectStorage/Families");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Data.Common.ObjectStorage/Families
struct CORDL_TYPE ObjectStorage_Families {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ObjectStorage_Families_Unwrapped
enum struct __ObjectStorage_Families_Unwrapped : int32_t {
__E_DATETIME = static_cast<int32_t>(0x0),
__E_NUMBER = static_cast<int32_t>(0x1),
__E_STRING = static_cast<int32_t>(0x2),
__E_BOOLEAN = static_cast<int32_t>(0x3),
__E_ARRAY = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ObjectStorage_Families_Unwrapped () const noexcept {
return static_cast<__ObjectStorage_Families_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ObjectStorage_Families() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ObjectStorage_Families(int32_t  value__) noexcept;

/// @brief Field ARRAY value: I32(4)
static ::GlobalNamespace::ObjectStorage_Families const ARRAY;

/// @brief Field BOOLEAN value: I32(3)
static ::GlobalNamespace::ObjectStorage_Families const BOOLEAN;

/// @brief Field DATETIME value: I32(0)
static ::GlobalNamespace::ObjectStorage_Families const DATETIME;

/// @brief Field NUMBER value: I32(1)
static ::GlobalNamespace::ObjectStorage_Families const NUMBER;

/// @brief Field STRING value: I32(2)
static ::GlobalNamespace::ObjectStorage_Families const STRING;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21110};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjectStorage_Families, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObjectStorage_Families) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
