#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyInstalled.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyInstalled)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyInstalled;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyInstalled");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyInstalled
class CORDL_TYPE ModPropertyInstalled : public ::System::Object {
public:
// Declarations
/// @brief Field _installedActive, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__installedActive, put=__cordl_internal_set__installedActive)) ::UnityW<::UnityEngine::GameObject>  _installedActive;

/// @brief Field _notInstalledActive, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__notInstalledActive, put=__cordl_internal_set__notInstalledActive)) ::UnityW<::UnityEngine::GameObject>  _notInstalledActive;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc6dec, size 0xfc, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__installedActive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__installedActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__notInstalledActive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__notInstalledActive() ;

constexpr void __cordl_internal_set__installedActive(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__notInstalledActive(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9fc6ee8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyInstalled() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyInstalled", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyInstalled(ModPropertyInstalled && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyInstalled", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyInstalled(ModPropertyInstalled const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27231};

/// [SerializeField]
/// @brief Field _notInstalledActive, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____notInstalledActive;

/// [SerializeField]
/// @brief Field _installedActive, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____installedActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled, ____notInstalledActive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled, ____installedActive) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyInstalled) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
