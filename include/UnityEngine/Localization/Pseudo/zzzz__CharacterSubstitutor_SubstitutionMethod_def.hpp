#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/CharacterSubstitutor_SubstitutionMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CharacterSubstitutor_SubstitutionMethod)
// Forward declare root types
namespace GlobalNamespace {
struct CharacterSubstitutor_SubstitutionMethod;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod, "UnityEngine.Localization.Pseudo", "CharacterSubstitutor/SubstitutionMethod");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.Pseudo.CharacterSubstitutor/SubstitutionMethod
struct CORDL_TYPE CharacterSubstitutor_SubstitutionMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CharacterSubstitutor_SubstitutionMethod_Unwrapped
enum struct __CharacterSubstitutor_SubstitutionMethod_Unwrapped : int32_t {
__E_ToUpper = static_cast<int32_t>(0x0),
__E_ToLower = static_cast<int32_t>(0x1),
__E_List = static_cast<int32_t>(0x2),
__E_Map = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CharacterSubstitutor_SubstitutionMethod_Unwrapped () const noexcept {
return static_cast<__CharacterSubstitutor_SubstitutionMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CharacterSubstitutor_SubstitutionMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CharacterSubstitutor_SubstitutionMethod(int32_t  value__) noexcept;

/// @brief Field List value: I32(2)
static ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod const List;

/// @brief Field Map value: I32(3)
static ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod const Map;

/// @brief Field ToLower value: I32(1)
static ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod const ToLower;

/// @brief Field ToUpper value: I32(0)
static ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod const ToUpper;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25122};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
