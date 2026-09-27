#pragma once
// IWYU pragma private; include "GlobalNamespace/ApprovedAgeCollectionMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ApprovedAgeCollectionMethods)
// Forward declare root types
namespace GlobalNamespace {
struct ApprovedAgeCollectionMethods;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ApprovedAgeCollectionMethods);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ApprovedAgeCollectionMethods, "", "ApprovedAgeCollectionMethods");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ApprovedAgeCollectionMethods
struct CORDL_TYPE ApprovedAgeCollectionMethods {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ApprovedAgeCollectionMethods_Unwrapped
enum struct __ApprovedAgeCollectionMethods_Unwrapped : int32_t {
__E_DATE_OF_BIRTH = static_cast<int32_t>(0x0),
__E_AGE_SLIDER = static_cast<int32_t>(0x1),
__E_PLATFORM_ACCOUNT = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ApprovedAgeCollectionMethods_Unwrapped () const noexcept {
return static_cast<__ApprovedAgeCollectionMethods_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ApprovedAgeCollectionMethods() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ApprovedAgeCollectionMethods(int32_t  value__) noexcept;

/// @brief Field AGE_SLIDER value: I32(1)
static ::GlobalNamespace::ApprovedAgeCollectionMethods const AGE_SLIDER;

/// @brief Field DATE_OF_BIRTH value: I32(0)
static ::GlobalNamespace::ApprovedAgeCollectionMethods const DATE_OF_BIRTH;

/// @brief Field PLATFORM_ACCOUNT value: I32(2)
static ::GlobalNamespace::ApprovedAgeCollectionMethods const PLATFORM_ACCOUNT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2869};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ApprovedAgeCollectionMethods, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ApprovedAgeCollectionMethods) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
