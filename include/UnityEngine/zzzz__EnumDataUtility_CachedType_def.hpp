#pragma once
// IWYU pragma private; include "UnityEngine/EnumDataUtility_CachedType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnumDataUtility_CachedType)
// Forward declare root types
namespace GlobalNamespace {
struct EnumDataUtility_CachedType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EnumDataUtility_CachedType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnumDataUtility_CachedType, "UnityEngine", "EnumDataUtility/CachedType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.EnumDataUtility/CachedType
struct CORDL_TYPE EnumDataUtility_CachedType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnumDataUtility_CachedType_Unwrapped
enum struct __EnumDataUtility_CachedType_Unwrapped : int32_t {
__E_ExcludeObsolete = static_cast<int32_t>(0x0),
__E_IncludeObsoleteExceptErrors = static_cast<int32_t>(0x1),
__E_IncludeAllObsolete = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnumDataUtility_CachedType_Unwrapped () const noexcept {
return static_cast<__EnumDataUtility_CachedType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnumDataUtility_CachedType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EnumDataUtility_CachedType(int32_t  value__) noexcept;

/// @brief Field ExcludeObsolete value: I32(0)
static ::GlobalNamespace::EnumDataUtility_CachedType const ExcludeObsolete;

/// @brief Field IncludeAllObsolete value: I32(2)
static ::GlobalNamespace::EnumDataUtility_CachedType const IncludeAllObsolete;

/// @brief Field IncludeObsoleteExceptErrors value: I32(1)
static ::GlobalNamespace::EnumDataUtility_CachedType const IncludeObsoleteExceptErrors;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15072};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnumDataUtility_CachedType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnumDataUtility_CachedType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
