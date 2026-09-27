#pragma once
// IWYU pragma private; include "Viveport/Internal/EAchievementDisplayAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EAchievementDisplayAttribute)
// Forward declare root types
namespace Viveport::Internal {
struct EAchievementDisplayAttribute;
}
// Write type traits
MARK_VAL_T(::Viveport::Internal::EAchievementDisplayAttribute);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::EAchievementDisplayAttribute, "Viveport.Internal", "EAchievementDisplayAttribute");
// Dependencies 
namespace Viveport::Internal {
// Is value type: true
// CS Name: Viveport.Internal.EAchievementDisplayAttribute
struct CORDL_TYPE EAchievementDisplayAttribute {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EAchievementDisplayAttribute_Unwrapped
enum struct __EAchievementDisplayAttribute_Unwrapped : int32_t {
__E_k_EAchievementDisplayAttributeName = static_cast<int32_t>(0x0),
__E_k_EAchievementDisplayAttributeDesc = static_cast<int32_t>(0x1),
__E_k_EAchievementDisplayAttributeHidden = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EAchievementDisplayAttribute_Unwrapped () const noexcept {
return static_cast<__EAchievementDisplayAttribute_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EAchievementDisplayAttribute() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EAchievementDisplayAttribute(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3800};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EAchievementDisplayAttributeDesc value: I32(1)
static ::Viveport::Internal::EAchievementDisplayAttribute const k_EAchievementDisplayAttributeDesc;

/// @brief Field k_EAchievementDisplayAttributeHidden value: I32(2)
static ::Viveport::Internal::EAchievementDisplayAttribute const k_EAchievementDisplayAttributeHidden;

/// @brief Field k_EAchievementDisplayAttributeName value: I32(0)
static ::Viveport::Internal::EAchievementDisplayAttribute const k_EAchievementDisplayAttributeName;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Viveport::Internal::EAchievementDisplayAttribute, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Viveport::Internal::EAchievementDisplayAttribute) == 0x4, "Size mismatch!");

} // namespace end def Viveport::Internal
