#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioDebugTestPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioDebugTestPanel)
namespace GlobalNamespace {
struct ModioPanelBase_GainedFocusCause;
}
namespace Modio::Unity::UI::Panels {
class ModioDebugMenu;
}
namespace Modio::Unity::UI::Panels {
class ModioDebugTestPanel___c;
}
namespace Modio {
class ModioDebugMenuAttribute;
}
namespace Modio {
class ModioSettings;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModioDebugTestPanel;
}
namespace Modio::Unity::UI::Panels {
class ModioDebugTestPanel___c;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModioDebugTestPanel*);
MARK_REF_T(::Modio::Unity::UI::Panels::ModioDebugTestPanel___c*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioDebugTestPanel*, "Modio.Unity.UI.Panels", "ModioDebugTestPanel");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioDebugTestPanel___c*, "Modio.Unity.UI.Panels", "ModioDebugTestPanel/<>c");
// Dependencies Modio.IModioServiceSettings, Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioDebugTestPanel
class CORDL_TYPE ModioDebugTestPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
using __c = ::Modio::Unity::UI::Panels::ModioDebugTestPanel___c;

/// @brief Field _hasDoneHookup, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasDoneHookup, put=__cordl_internal_set__hasDoneHookup)) bool  _hasDoneHookup;

/// @brief Field _modioDebugMenu, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__modioDebugMenu, put=__cordl_internal_set__modioDebugMenu)) ::UnityW<::Modio::Unity::UI::Panels::ModioDebugMenu>  _modioDebugMenu;

/// @brief Field _settings, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::Modio::ModioSettings*  _settings;

/// @brief Method Awake, addr 0x9fa7184, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FindAllHookups, addr 0x9fa7560, size 0x3f0, virtual false, abstract: false, final false
inline void FindAllHookups() ;

static inline ::Modio::Unity::UI::Panels::ModioDebugTestPanel* New_ctor() ;

/// @brief Method OnDisable, addr 0x9fa7460, size 0xa4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fa71ec, size 0x274, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGainedFocus, addr 0x9fa7504, size 0x5c, virtual true, abstract: false, final false
inline void OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  selectionBehaviour) ;

/// [CompilerGenerated]
/// @brief Method <FindAllHookups>b__7_1, addr 0x9fa7958, size 0x58, virtual false, abstract: false, final false
inline bool _FindAllHookups_b__7_1() ;

/// [CompilerGenerated]
/// @brief Method <FindAllHookups>b__7_2, addr 0x9fa79b0, size 0x68, virtual false, abstract: false, final false
inline void _FindAllHookups_b__7_2(bool  on) ;

/// [CompilerGenerated]
/// @brief Method <FindAllHookups>b__7_3, addr 0x9fa7a18, size 0x58, virtual false, abstract: false, final false
inline ::StringW _FindAllHookups_b__7_3() ;

/// [CompilerGenerated]
/// @brief Method <FindAllHookups>b__7_4, addr 0x9fa7a70, size 0x68, virtual false, abstract: false, final false
inline void _FindAllHookups_b__7_4(::StringW  regex) ;

/// [CompilerGenerated]
/// @brief Method <FindAllHookups>b__7_5, addr 0x9fa7ad8, size 0x58, virtual false, abstract: false, final false
inline bool _FindAllHookups_b__7_5() ;

/// [CompilerGenerated]
/// @brief Method <FindAllHookups>b__7_6, addr 0x9fa7b30, size 0x68, virtual false, abstract: false, final false
inline void _FindAllHookups_b__7_6(bool  on) ;

/// [CompilerGenerated]
/// @brief Method <FindAllHookups>b__7_7, addr 0x9fa7b98, size 0x58, virtual false, abstract: false, final false
inline ::StringW _FindAllHookups_b__7_7() ;

/// [CompilerGenerated]
/// @brief Method <FindAllHookups>b__7_8, addr 0x9fa7bf0, size 0x68, virtual false, abstract: false, final false
inline void _FindAllHookups_b__7_8(::StringW  regex) ;

/// [CompilerGenerated]
/// @brief Method <FindAllHookups>g__Get|7_9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Modio::IModioServiceSettings*> && ::cordl_internals::default_constructor_constraint<T>)
inline T _FindAllHookups_g__Get_7_9() ;

constexpr bool const& __cordl_internal_get__hasDoneHookup() const;

constexpr bool& __cordl_internal_get__hasDoneHookup() ;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioDebugMenu> const& __cordl_internal_get__modioDebugMenu() const;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioDebugMenu>& __cordl_internal_get__modioDebugMenu() ;

constexpr ::Modio::ModioSettings* const& __cordl_internal_get__settings() const;

constexpr ::Modio::ModioSettings*& __cordl_internal_get__settings() ;

constexpr void __cordl_internal_set__hasDoneHookup(bool  value) ;

constexpr void __cordl_internal_set__modioDebugMenu(::UnityW<::Modio::Unity::UI::Panels::ModioDebugMenu>  value) ;

constexpr void __cordl_internal_set__settings(::Modio::ModioSettings*  value) ;

/// @brief Method .ctor, addr 0x9fa7950, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioDebugTestPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioDebugTestPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioDebugTestPanel(ModioDebugTestPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioDebugTestPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioDebugTestPanel(ModioDebugTestPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27067};

/// @brief Field _hasDoneHookup, offset: 0x58, size: 0x1, def value: None
 bool  ____hasDoneHookup;

/// @brief Field _modioDebugMenu, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Panels::ModioDebugMenu>  ____modioDebugMenu;

/// @brief Field _settings, offset: 0x68, size: 0x8, def value: None
 ::Modio::ModioSettings*  ____settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModioDebugTestPanel, ____hasDoneHookup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioDebugTestPanel, ____modioDebugMenu) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioDebugTestPanel, ____settings) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModioDebugTestPanel) == 0x70, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioDebugTestPanel/<>c
class CORDL_TYPE ModioDebugTestPanel___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Unity::UI::Panels::ModioDebugTestPanel___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::Modio::ModioDebugMenuAttribute*,bool>*  __9__7_0;

static inline ::Modio::Unity::UI::Panels::ModioDebugTestPanel___c* New_ctor() ;

/// @brief Method <FindAllHookups>b__7_0, addr 0x9fa7cc8, size 0x14, virtual false, abstract: false, final false
inline bool _FindAllHookups_b__7_0(::Modio::ModioDebugMenuAttribute*  attribute) ;

/// @brief Method .ctor, addr 0x9fa7cc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Unity::UI::Panels::ModioDebugTestPanel___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::ModioDebugMenuAttribute*,bool>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::Modio::Unity::UI::Panels::ModioDebugTestPanel___c*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::Modio::ModioDebugMenuAttribute*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioDebugTestPanel___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioDebugTestPanel___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioDebugTestPanel___c(ModioDebugTestPanel___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioDebugTestPanel___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioDebugTestPanel___c(ModioDebugTestPanel___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27066};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::ModioDebugTestPanel___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
