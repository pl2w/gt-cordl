#pragma once
// IWYU pragma private; include "Viveport/UserStats_AchievementDisplayAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserStats_AchievementDisplayAttribute)
// Forward declare root types
namespace GlobalNamespace {
struct UserStats_AchievementDisplayAttribute;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UserStats_AchievementDisplayAttribute);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UserStats_AchievementDisplayAttribute, "Viveport", "UserStats/AchievementDisplayAttribute");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Viveport.UserStats/AchievementDisplayAttribute
struct CORDL_TYPE UserStats_AchievementDisplayAttribute {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UserStats_AchievementDisplayAttribute_Unwrapped
enum struct __UserStats_AchievementDisplayAttribute_Unwrapped : int32_t {
__E_Name = static_cast<int32_t>(0x0),
__E_Desc = static_cast<int32_t>(0x1),
__E_Hidden = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UserStats_AchievementDisplayAttribute_Unwrapped () const noexcept {
return static_cast<__UserStats_AchievementDisplayAttribute_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UserStats_AchievementDisplayAttribute() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UserStats_AchievementDisplayAttribute(int32_t  value__) noexcept;

/// @brief Field Desc value: I32(1)
static ::GlobalNamespace::UserStats_AchievementDisplayAttribute const Desc;

/// @brief Field Hidden value: I32(2)
static ::GlobalNamespace::UserStats_AchievementDisplayAttribute const Hidden;

/// @brief Field Name value: I32(0)
static ::GlobalNamespace::UserStats_AchievementDisplayAttribute const Name;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3769};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UserStats_AchievementDisplayAttribute, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UserStats_AchievementDisplayAttribute) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
