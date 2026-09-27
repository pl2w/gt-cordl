#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyCanAffordPurchase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ModPropertyCanAffordPurchase)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyCanAffordPurchase;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyCanAffordPurchase");
// Dependencies System.Object, UnityEngine.GameObject
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyCanAffordPurchase
class CORDL_TYPE ModPropertyCanAffordPurchase : public ::System::Object {
public:
// Declarations
/// @brief Field _activateWhenCanAfford, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__activateWhenCanAfford, put=__cordl_internal_set__activateWhenCanAfford)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _activateWhenCanAfford;

/// @brief Field _activateWhenCanNotAfford, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__activateWhenCanNotAfford, put=__cordl_internal_set__activateWhenCanNotAfford)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _activateWhenCanNotAfford;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc5bbc, size 0x128, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__activateWhenCanAfford() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__activateWhenCanAfford() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__activateWhenCanNotAfford() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__activateWhenCanNotAfford() ;

constexpr void __cordl_internal_set__activateWhenCanAfford(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__activateWhenCanNotAfford(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x9fc5ce4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyCanAffordPurchase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyCanAffordPurchase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyCanAffordPurchase(ModPropertyCanAffordPurchase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyCanAffordPurchase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyCanAffordPurchase(ModPropertyCanAffordPurchase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27217};

/// [SerializeField]
/// @brief Field _activateWhenCanAfford, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____activateWhenCanAfford;

/// [SerializeField]
/// @brief Field _activateWhenCanNotAfford, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____activateWhenCanNotAfford;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase, ____activateWhenCanAfford) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase, ____activateWhenCanNotAfford) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyCanAffordPurchase) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
