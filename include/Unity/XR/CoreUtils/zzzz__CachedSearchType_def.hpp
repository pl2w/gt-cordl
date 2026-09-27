#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/CachedSearchType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CachedSearchType)
// Forward declare root types
namespace Unity::XR::CoreUtils {
struct CachedSearchType;
}
// Write type traits
MARK_VAL_T(::Unity::XR::CoreUtils::CachedSearchType);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::CachedSearchType, "Unity.XR.CoreUtils", "CachedSearchType");
// [Flags]
// Dependencies 
namespace Unity::XR::CoreUtils {
// Is value type: true
// CS Name: Unity.XR.CoreUtils.CachedSearchType
struct CORDL_TYPE CachedSearchType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CachedSearchType_Unwrapped
enum struct __CachedSearchType_Unwrapped : int32_t {
__E_Children = static_cast<int32_t>(0x1),
__E_Self = static_cast<int32_t>(0x2),
__E_Parents = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CachedSearchType_Unwrapped () const noexcept {
return static_cast<__CachedSearchType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CachedSearchType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CachedSearchType(int32_t  value__) noexcept;

/// @brief Field Children value: I32(1)
static ::Unity::XR::CoreUtils::CachedSearchType const Children;

/// @brief Field Parents value: I32(4)
static ::Unity::XR::CoreUtils::CachedSearchType const Parents;

/// @brief Field Self value: I32(2)
static ::Unity::XR::CoreUtils::CachedSearchType const Self;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30381};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::CoreUtils::CachedSearchType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::CoreUtils::CachedSearchType) == 0x4, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
