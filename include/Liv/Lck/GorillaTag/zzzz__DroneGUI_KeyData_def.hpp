#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneGUI_KeyData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DroneGUI_KeyData)
// Forward declare root types
namespace GlobalNamespace {
struct DroneGUI_KeyData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DroneGUI_KeyData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DroneGUI_KeyData, "Liv.Lck.GorillaTag", "DroneGUI/KeyData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.DroneGUI/KeyData
struct CORDL_TYPE DroneGUI_KeyData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DroneGUI_KeyData() ;

// Ctor Parameters [CppParam { name: "Letter", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsActive", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Show", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr DroneGUI_KeyData(::StringW  Letter, bool  IsActive, bool  Show) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29604};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Letter, offset: 0x0, size: 0x8, def value: None
 ::StringW  Letter;

/// @brief Field IsActive, offset: 0x8, size: 0x1, def value: None
 bool  IsActive;

/// @brief Field Show, offset: 0x9, size: 0x1, def value: None
 bool  Show;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DroneGUI_KeyData, Letter) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneGUI_KeyData, IsActive) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneGUI_KeyData, Show) == 0x9, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DroneGUI_KeyData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
