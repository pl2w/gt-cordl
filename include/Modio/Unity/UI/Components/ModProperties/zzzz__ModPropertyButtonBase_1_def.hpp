#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyButtonBase_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyButtonBase_1)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
namespace Modio::Unity::UI::Components {
class IPropertyMonoBehaviourEvents;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
template<typename T>
class ModPropertyButtonBase_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1, "Modio.Unity.UI.Components.ModProperties", "ModPropertyButtonBase`1");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyButtonBase`1<T>
class CORDL_TYPE ModPropertyButtonBase_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _addedListener, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__addedListener, put=__cordl_internal_set__addedListener)) bool  _addedListener;

/// @brief Field _button, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button>  _button;

/// @brief Field _ignoreWhileDisabled, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__ignoreWhileDisabled, put=__cordl_internal_set__ignoreWhileDisabled)) bool  _ignoreWhileDisabled;

/// @brief Field _mod, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mod, put=__cordl_internal_set__mod)) ::Modio::Mods::Mod*  _mod;

/// @brief Field _onClick, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__onClick, put=__cordl_internal_set__onClick)) ::UnityEngine::Events::UnityEvent_1<T>*  _onClick;

/// @brief Convert operator to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr operator  ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*() noexcept;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

/// @brief Method GetProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T GetProperty(::Modio::Mods::Mod*  mod) ;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyButtonBase_1<T>* New_ctor() ;

/// @brief Method OnButtonClick, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnButtonClick() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnEnable() ;

/// @brief Method OnModUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Start() ;

constexpr bool const& __cordl_internal_get__addedListener() const;

constexpr bool& __cordl_internal_get__addedListener() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button() ;

constexpr bool const& __cordl_internal_get__ignoreWhileDisabled() const;

constexpr bool& __cordl_internal_get__ignoreWhileDisabled() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__mod() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__mod() ;

constexpr ::UnityEngine::Events::UnityEvent_1<T>* const& __cordl_internal_get__onClick() const;

constexpr ::UnityEngine::Events::UnityEvent_1<T>*& __cordl_internal_get__onClick() ;

constexpr void __cordl_internal_set__addedListener(bool  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__ignoreWhileDisabled(bool  value) ;

constexpr void __cordl_internal_set__mod(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set__onClick(::UnityEngine::Events::UnityEvent_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents* i___Modio__Unity__UI__Components__IPropertyMonoBehaviourEvents() noexcept;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyButtonBase_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyButtonBase_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyButtonBase_1(ModPropertyButtonBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyButtonBase_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyButtonBase_1(ModPropertyButtonBase_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27213};

/// [SerializeField]
/// @brief Field _button, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____button;

/// [SerializeField]
/// [Tooltip("If true, button presses are ignored while the Component or GameObject are disabled.")]
/// @brief Field _ignoreWhileDisabled, offset: 0x18, size: 0x1, def value: None
 bool  ____ignoreWhileDisabled;

/// [Space]
/// [SerializeField]
/// @brief Field _onClick, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<T>*  ____onClick;

/// @brief Field _mod, offset: 0x28, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____mod;

/// @brief Field _addedListener, offset: 0x30, size: 0x1, def value: None
 bool  ____addedListener;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Unity::UI::Components::ModProperties
