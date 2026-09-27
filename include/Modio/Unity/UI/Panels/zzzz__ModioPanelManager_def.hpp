#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioPanelManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioPanelManager)
namespace GlobalNamespace {
struct ModioPanelBase_GainedFocusCause;
}
namespace Modio::Unity::UI::Panels {
class ModioPanelBase;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModioPanelManager;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModioPanelManager*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioPanelManager*, "Modio.Unity.UI.Panels", "ModioPanelManager");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase, UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioPanelManager
class CORDL_TYPE ModioPanelManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CurrentFocusedPanel)) ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  CurrentFocusedPanel;

/// @brief Field _allPotentialPanels, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__allPotentialPanels, put=__cordl_internal_set__allPotentialPanels)) ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>*  _allPotentialPanels;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Modio::Unity::UI::Panels::ModioPanelManager>  _instance;

/// @brief Field _openWindows, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__openWindows, put=__cordl_internal_set__openWindows)) ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>*  _openWindows;

/// @brief Method Awake, addr 0x9fab700, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClosePanel, addr 0x9faaeb0, size 0x17c, virtual false, abstract: false, final false
inline void ClosePanel(::Modio::Unity::UI::Panels::ModioPanelBase*  modioPanelBase) ;

/// @brief Method GetInstance, addr 0x9faab6c, size 0x174, virtual false, abstract: false, final false
static inline ::UnityW<::Modio::Unity::UI::Panels::ModioPanelManager> GetInstance() ;

/// @brief Method GetPanelOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Modio::Unity::UI::Panels::ModioPanelBase*>)
static inline T GetPanelOfType() ;

/// @brief Method LateUpdate, addr 0x9fab878, size 0xa8, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Modio::Unity::UI::Panels::ModioPanelManager* New_ctor() ;

/// @brief Method OpenPanel, addr 0x9faada4, size 0x10c, virtual false, abstract: false, final false
inline void OpenPanel(::Modio::Unity::UI::Panels::ModioPanelBase*  modioPanelBase) ;

/// @brief Method PopFocusSuppression, addr 0x9fab7e4, size 0x94, virtual false, abstract: false, final false
inline void PopFocusSuppression(::GlobalNamespace::ModioPanelBase_GainedFocusCause  gainedFocusCause) ;

/// @brief Method PushFocusSuppression, addr 0x9fab758, size 0x8c, virtual false, abstract: false, final false
inline void PushFocusSuppression() ;

/// @brief Method RegisterPanel, addr 0x9faace0, size 0xac, virtual false, abstract: false, final false
inline void RegisterPanel(::Modio::Unity::UI::Panels::ModioPanelBase*  modioPanelBase) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>* const& __cordl_internal_get__allPotentialPanels() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>*& __cordl_internal_get__allPotentialPanels() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>* const& __cordl_internal_get__openWindows() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>*& __cordl_internal_get__openWindows() ;

constexpr void __cordl_internal_set__allPotentialPanels(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>*  value) ;

constexpr void __cordl_internal_set__openWindows(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>*  value) ;

/// @brief Method .ctor, addr 0x9fab920, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Modio::Unity::UI::Panels::ModioPanelManager> getStaticF__instance() ;

/// @brief Method get_CurrentFocusedPanel, addr 0x9fab688, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase> get_CurrentFocusedPanel() ;

static inline void setStaticF__instance(::UnityW<::Modio::Unity::UI::Panels::ModioPanelManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioPanelManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioPanelManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioPanelManager(ModioPanelManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioPanelManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioPanelManager(ModioPanelManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27078};

/// @brief Field _allPotentialPanels, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>*  ____allPotentialPanels;

/// @brief Field _openWindows, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>*  ____openWindows;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModioPanelManager, ____allPotentialPanels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioPanelManager, ____openWindows) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModioPanelManager) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
