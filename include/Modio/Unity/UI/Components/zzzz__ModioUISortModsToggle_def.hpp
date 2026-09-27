#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUISortModsToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__SortModsBy_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioUISortModsToggle)
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUISortModsToggle;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUISortModsToggle*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUISortModsToggle*, "Modio.Unity.UI.Components", "ModioUISortModsToggle");
// Dependencies Modio.Mods.SortModsBy, UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUISortModsToggle
class CORDL_TYPE ModioUISortModsToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field SortModsBy, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SortModsBy, put=__cordl_internal_set_SortModsBy)) ::Modio::Mods::SortModsBy  SortModsBy;

static inline ::Modio::Unity::UI::Components::ModioUISortModsToggle* New_ctor() ;

constexpr ::Modio::Mods::SortModsBy const& __cordl_internal_get_SortModsBy() const;

constexpr ::Modio::Mods::SortModsBy& __cordl_internal_get_SortModsBy() ;

constexpr void __cordl_internal_set_SortModsBy(::Modio::Mods::SortModsBy  value) ;

/// @brief Method .ctor, addr 0x9fbc100, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUISortModsToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUISortModsToggle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUISortModsToggle(ModioUISortModsToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUISortModsToggle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUISortModsToggle(ModioUISortModsToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27155};

/// @brief Field SortModsBy, offset: 0x20, size: 0x4, def value: None
 ::Modio::Mods::SortModsBy  ___SortModsBy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISortModsToggle, ___SortModsBy) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUISortModsToggle) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
