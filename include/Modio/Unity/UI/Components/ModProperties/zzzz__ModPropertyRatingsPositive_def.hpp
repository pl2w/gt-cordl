#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyRatingsPositive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyNumberBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModPropertyRatingsPositive)
namespace Modio::Mods {
class Mod;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyRatingsPositive;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsPositive*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsPositive*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyRatingsPositive");
// Dependencies Modio.Unity.UI.Components.ModProperties.ModPropertyNumberBase
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyRatingsPositive
class CORDL_TYPE ModPropertyRatingsPositive : public ::Modio::Unity::UI::Components::ModProperties::ModPropertyNumberBase {
public:
// Declarations
/// @brief Method GetValue, addr 0x9fc7914, size 0x20, virtual true, abstract: false, final false
inline int64_t GetValue(::Modio::Mods::Mod*  mod) ;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsPositive* New_ctor() ;

/// @brief Method .ctor, addr 0x9fc7934, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyRatingsPositive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyRatingsPositive", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyRatingsPositive(ModPropertyRatingsPositive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyRatingsPositive", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyRatingsPositive(ModPropertyRatingsPositive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27239};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsPositive) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
