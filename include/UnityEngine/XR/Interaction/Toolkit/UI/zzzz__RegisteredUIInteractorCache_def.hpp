#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/RegisteredUIInteractorCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RegisteredUIInteractorCache)
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class IUIInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class XRUIInputModule;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class RegisteredUIInteractorCache;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*, "UnityEngine.XR.Interaction.Toolkit.UI", "RegisteredUIInteractorCache");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache
class CORDL_TYPE RegisteredUIInteractorCache : public ::System::Object {
public:
// Declarations
/// @brief Field m_BaseInteractor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BaseInteractor, put=__cordl_internal_set_m_BaseInteractor)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  m_BaseInteractor;

/// @brief Field m_InputModule, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputModule, put=__cordl_internal_set_m_InputModule)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>  m_InputModule;

/// @brief Field m_RegisteredInputModule, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RegisteredInputModule, put=__cordl_internal_set_m_RegisteredInputModule)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>  m_RegisteredInputModule;

/// @brief Field m_UiInteractor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UiInteractor, put=__cordl_internal_set_m_UiInteractor)) ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  m_UiInteractor;

/// @brief Method FindOrCreateXRUIInputModule, addr 0xb432fa0, size 0x2cc, virtual false, abstract: false, final false
inline void FindOrCreateXRUIInputModule() ;

/// @brief Method IsOverUIGameObject, addr 0xb43384c, size 0xec, virtual false, abstract: false, final false
inline bool IsOverUIGameObject() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* New_ctor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  uiInteractor) ;

/// @brief Method RegisterOrUnregisterXRUIInputModule, addr 0xb432d50, size 0xe4, virtual false, abstract: false, final false
inline void RegisterOrUnregisterXRUIInputModule(bool  enabled) ;

/// @brief Method RegisterWithXRUIInputModule, addr 0xb432e34, size 0xe0, virtual false, abstract: false, final false
inline void RegisterWithXRUIInputModule() ;

/// @brief Method TryGetCurrentUIGameObject, addr 0xb433938, size 0x158, virtual false, abstract: false, final false
inline bool TryGetCurrentUIGameObject(bool  useAnyPointerId, ::by_ref<::UnityEngine::GameObject*>  currentGameObject) ;

/// @brief Method TryGetUIModel, addr 0xb433628, size 0x110, virtual false, abstract: false, final false
inline bool TryGetUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model) ;

/// @brief Method UnregisterFromXRUIInputModule, addr 0xb432f14, size 0x8c, virtual false, abstract: false, final false
inline void UnregisterFromXRUIInputModule() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> const& __cordl_internal_get_m_BaseInteractor() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>& __cordl_internal_get_m_BaseInteractor() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> const& __cordl_internal_get_m_InputModule() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>& __cordl_internal_get_m_InputModule() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule> const& __cordl_internal_get_m_RegisteredInputModule() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>& __cordl_internal_get_m_RegisteredInputModule() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* const& __cordl_internal_get_m_UiInteractor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*& __cordl_internal_get_m_UiInteractor() ;

constexpr void __cordl_internal_set_m_BaseInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  value) ;

constexpr void __cordl_internal_set_m_InputModule(::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>  value) ;

constexpr void __cordl_internal_set_m_RegisteredInputModule(::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>  value) ;

constexpr void __cordl_internal_set_m_UiInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  value) ;

/// @brief Method .ctor, addr 0xb432c78, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  uiInteractor) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegisteredUIInteractorCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegisteredUIInteractorCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RegisteredUIInteractorCache(RegisteredUIInteractorCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegisteredUIInteractorCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegisteredUIInteractorCache(RegisteredUIInteractorCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11290};

/// @brief Field m_InputModule, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>  ___m_InputModule;

/// @brief Field m_RegisteredInputModule, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule>  ___m_RegisteredInputModule;

/// @brief Field m_UiInteractor, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  ___m_UiInteractor;

/// @brief Field m_BaseInteractor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  ___m_BaseInteractor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache, ___m_InputModule) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache, ___m_RegisteredInputModule) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache, ___m_UiInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache, ___m_BaseInteractor) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
