#pragma once
// IWYU pragma private; include "GlobalNamespace/EKIDFeatures.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EKIDFeatures)
// Forward declare root types
namespace GlobalNamespace {
struct EKIDFeatures;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EKIDFeatures);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EKIDFeatures, "", "EKIDFeatures");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EKIDFeatures
struct CORDL_TYPE EKIDFeatures {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EKIDFeatures_Unwrapped
enum struct __EKIDFeatures_Unwrapped : int32_t {
__E_Multiplayer = static_cast<int32_t>(0x0),
__E_Custom_Nametags = static_cast<int32_t>(0x1),
__E_Voice_Chat = static_cast<int32_t>(0x2),
__E_Mods = static_cast<int32_t>(0x3),
__E_Groups = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EKIDFeatures_Unwrapped () const noexcept {
return static_cast<__EKIDFeatures_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EKIDFeatures() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EKIDFeatures(int32_t  value__) noexcept;

/// @brief Field Custom_Nametags value: I32(1)
static ::GlobalNamespace::EKIDFeatures const Custom_Nametags;

/// @brief Field Groups value: I32(4)
static ::GlobalNamespace::EKIDFeatures const Groups;

/// @brief Field Mods value: I32(3)
static ::GlobalNamespace::EKIDFeatures const Mods;

/// @brief Field Multiplayer value: I32(0)
static ::GlobalNamespace::EKIDFeatures const Multiplayer;

/// @brief Field Voice_Chat value: I32(2)
static ::GlobalNamespace::EKIDFeatures const Voice_Chat;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2897};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EKIDFeatures, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EKIDFeatures) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
