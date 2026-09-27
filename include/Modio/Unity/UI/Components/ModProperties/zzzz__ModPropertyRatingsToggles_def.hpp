#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyRatingsToggles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyRatingsToggles)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyRatingsToggles;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyRatingsToggles");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyRatingsToggles
class CORDL_TYPE ModPropertyRatingsToggles : public ::System::Object {
public:
// Declarations
/// @brief Field _mod, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__mod, put=__cordl_internal_set__mod)) ::Modio::Mods::Mod*  _mod;

/// @brief Field _negativeVoteToggle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__negativeVoteToggle, put=__cordl_internal_set__negativeVoteToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _negativeVoteToggle;

/// @brief Field _positiveVoteToggle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__positiveVoteToggle, put=__cordl_internal_set__positiveVoteToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _positiveVoteToggle;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

/// @brief Method NegativeToggleValueChanged, addr 0x9fc7bb0, size 0x8c, virtual false, abstract: false, final false
inline void NegativeToggleValueChanged(bool  toggleValue) ;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc7944, size 0x1e4, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

/// @brief Method PositiveToggleValueChanged, addr 0x9fc7b28, size 0x88, virtual false, abstract: false, final false
inline void PositiveToggleValueChanged(bool  arg0) ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__mod() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__mod() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__negativeVoteToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__negativeVoteToggle() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__positiveVoteToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__positiveVoteToggle() ;

constexpr void __cordl_internal_set__mod(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set__negativeVoteToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__positiveVoteToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

/// @brief Method .ctor, addr 0x9fc7c3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyRatingsToggles() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyRatingsToggles", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyRatingsToggles(ModPropertyRatingsToggles && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyRatingsToggles", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyRatingsToggles(ModPropertyRatingsToggles const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27240};

/// [SerializeField]
/// @brief Field _positiveVoteToggle, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____positiveVoteToggle;

/// [SerializeField]
/// @brief Field _negativeVoteToggle, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____negativeVoteToggle;

/// @brief Field _mod, offset: 0x20, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____mod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles, ____positiveVoteToggle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles, ____negativeVoteToggle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles, ____mod) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyRatingsToggles) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
