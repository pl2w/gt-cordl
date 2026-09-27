#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertySubscribed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModPropertySubscribed)
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
class ModPropertySubscribed;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscribed*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscribed*, "Modio.Unity.UI.Components.ModProperties", "ModPropertySubscribed");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertySubscribed
class CORDL_TYPE ModPropertySubscribed : public ::System::Object {
public:
// Declarations
/// @brief Field _notSubscribedActive, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__notSubscribedActive, put=__cordl_internal_set__notSubscribedActive)) ::UnityW<::UnityEngine::GameObject>  _notSubscribedActive;

/// @brief Field _subscribedActive, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__subscribedActive, put=__cordl_internal_set__subscribedActive)) ::UnityW<::UnityEngine::GameObject>  _subscribedActive;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertySubscribed* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc7c44, size 0xe4, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__notSubscribedActive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__notSubscribedActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__subscribedActive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__subscribedActive() ;

constexpr void __cordl_internal_set__notSubscribedActive(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__subscribedActive(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9fc7d28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertySubscribed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertySubscribed", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertySubscribed(ModPropertySubscribed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertySubscribed", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertySubscribed(ModPropertySubscribed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27241};

/// [SerializeField]
/// @brief Field _notSubscribedActive, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____notSubscribedActive;

/// [SerializeField]
/// @brief Field _subscribedActive, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____subscribedActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscribed, ____notSubscribedActive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscribed, ____subscribedActive) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertySubscribed) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
