#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIMod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioUIMod)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components {
class IModioUIPropertiesOwner;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUIMod;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUIMod*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUIMod*, "Modio.Unity.UI.Components", "ModioUIMod");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUIMod
class CORDL_TYPE ModioUIMod : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Mod, put=set_Mod)) ::Modio::Mods::Mod*  Mod;

/// @brief Field <Mod>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Mod_k__BackingField, put=__cordl_internal_set__Mod_k__BackingField)) ::Modio::Mods::Mod*  _Mod_k__BackingField;

/// @brief Field onClickOrSubmit, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onClickOrSubmit, put=__cordl_internal_set_onClickOrSubmit)) ::UnityEngine::Events::UnityEvent_1<::Modio::Mods::Mod*>*  onClickOrSubmit;

/// @brief Field onDisplayMoreInfo, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDisplayMoreInfo, put=__cordl_internal_set_onDisplayMoreInfo)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  onDisplayMoreInfo;

/// @brief Field onModUpdate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onModUpdate, put=__cordl_internal_set_onModUpdate)) ::UnityEngine::Events::UnityEvent*  onModUpdate;

/// @brief Convert operator to "::Modio::Unity::UI::Components::IModioUIPropertiesOwner"
constexpr operator  ::Modio::Unity::UI::Components::IModioUIPropertiesOwner*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr operator  ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

/// @brief Method AddUpdatePropertiesListener, addr 0x9fba6a8, size 0x18, virtual true, abstract: false, final true
inline void AddUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener) ;

static inline ::Modio::Unity::UI::Components::ModioUIMod* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fba618, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisplayMoreInfoClicked, addr 0x9fba74c, size 0x5c, virtual false, abstract: false, final false
inline void OnDisplayMoreInfoClicked() ;

/// @brief Method OnModUpdated, addr 0x9fba6d8, size 0x14, virtual false, abstract: false, final false
inline void OnModUpdated() ;

/// @brief Method OnPointerClick, addr 0x9fba6ec, size 0x4, virtual true, abstract: false, final true
inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnSubmit, addr 0x9fba6f0, size 0x5c, virtual true, abstract: false, final true
inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method RemoveUpdatePropertiesListener, addr 0x9fba6c0, size 0x18, virtual true, abstract: false, final true
inline void RemoveUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener) ;

/// @brief Method SetMod, addr 0x9fb9ba8, size 0x10c, virtual false, abstract: false, final false
inline void SetMod(::Modio::Mods::Mod*  mod) ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__Mod_k__BackingField() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__Mod_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Mods::Mod*>* const& __cordl_internal_get_onClickOrSubmit() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Mods::Mod*>*& __cordl_internal_get_onClickOrSubmit() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>* const& __cordl_internal_get_onDisplayMoreInfo() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*& __cordl_internal_get_onDisplayMoreInfo() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onModUpdate() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onModUpdate() ;

constexpr void __cordl_internal_set__Mod_k__BackingField(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set_onClickOrSubmit(::UnityEngine::Events::UnityEvent_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set_onDisplayMoreInfo(::UnityEngine::Events::UnityEvent_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  value) ;

constexpr void __cordl_internal_set_onModUpdate(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x9fba7a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Mod, addr 0x9fba608, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::Mod* get_Mod() ;

/// @brief Convert to "::Modio::Unity::UI::Components::IModioUIPropertiesOwner"
constexpr ::Modio::Unity::UI::Components::IModioUIPropertiesOwner* i___Modio__Unity__UI__Components__IModioUIPropertiesOwner() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Mod, addr 0x9fba610, size 0x8, virtual false, abstract: false, final false
inline void set_Mod(::Modio::Mods::Mod*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIMod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIMod", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIMod(ModioUIMod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIMod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIMod(ModioUIMod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27148};

/// @brief Field onModUpdate, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onModUpdate;

/// @brief Field onClickOrSubmit, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Modio::Mods::Mod*>*  ___onClickOrSubmit;

/// @brief Field onDisplayMoreInfo, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Modio::Unity::UI::Components::ModioUIMod>>*  ___onDisplayMoreInfo;

/// [CompilerGenerated]
/// @brief Field <Mod>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____Mod_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMod, ___onModUpdate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMod, ___onClickOrSubmit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMod, ___onDisplayMoreInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUIMod, ____Mod_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUIMod) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
