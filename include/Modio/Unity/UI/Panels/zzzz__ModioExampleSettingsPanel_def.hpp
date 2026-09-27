#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioExampleSettingsPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioExampleSettingsPanel)
namespace GlobalNamespace {
struct ModioPanelBase_GainedFocusCause;
}
namespace Modio::Authentication {
class IModioAuthService;
}
namespace Modio::Unity::UI::Panels {
class ModioDebugMenu;
}
namespace Modio::Unity::UI::Panels {
class ModioExampleSettingsPanel___c;
}
namespace Modio::Unity::UI::Panels {
class ModioExampleSettingsPanel___c__DisplayClass5_0;
}
namespace Modio {
class IModioServiceSettings;
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
class ModioExampleSettingsPanel;
}
namespace Modio::Unity::UI::Panels {
class ModioExampleSettingsPanel___c;
}
namespace Modio::Unity::UI::Panels {
class ModioExampleSettingsPanel___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*);
MARK_REF_T(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*);
MARK_REF_T(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel*, "Modio.Unity.UI.Panels", "ModioExampleSettingsPanel");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*, "Modio.Unity.UI.Panels", "ModioExampleSettingsPanel/<>c");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0*, "Modio.Unity.UI.Panels", "ModioExampleSettingsPanel/<>c__DisplayClass5_0");
// Dependencies Modio.IModioServiceSettings, Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioExampleSettingsPanel
class CORDL_TYPE ModioExampleSettingsPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
using __c = ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c;

using __c__DisplayClass5_0 = ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0;

/// @brief Field _debugMenu, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugMenu, put=__cordl_internal_set__debugMenu)) ::UnityW<::Modio::Unity::UI::Panels::ModioDebugMenu>  _debugMenu;

/// @brief Field _hasDoneSetup, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasDoneSetup, put=__cordl_internal_set__hasDoneSetup)) bool  _hasDoneSetup;

/// @brief Field _settings, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::Modio::ModioSettings*  _settings;

static inline ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel* New_ctor() ;

/// @brief Method OnEnable, addr 0x9fa854c, size 0x1c4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGainedFocus, addr 0x9fa8710, size 0x34, virtual true, abstract: false, final false
inline void OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  selectionBehaviour) ;

/// @brief Method ProductionUrl, addr 0x9fa9874, size 0x74, virtual false, abstract: false, final false
inline ::StringW ProductionUrl(int64_t  gameId) ;

/// @brief Method SetupButtons, addr 0x9fa8744, size 0x10e8, virtual false, abstract: false, final false
inline void SetupButtons() ;

/// @brief Method StagingUrl, addr 0x9fa9834, size 0x40, virtual false, abstract: false, final false
inline ::StringW StagingUrl() ;

/// @brief Method TestUrl, addr 0x9fa98e8, size 0x74, virtual false, abstract: false, final false
inline ::StringW TestUrl(int64_t  gameId) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_0, addr 0x9fa99c8, size 0x18, virtual false, abstract: false, final false
inline int64_t _SetupButtons_b__5_0() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_1, addr 0x9fa99e0, size 0x108, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_1(int64_t  id) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_10, addr 0x9fa9dcc, size 0x18, virtual false, abstract: false, final false
inline ::StringW _SetupButtons_b__5_10() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_11, addr 0x9fa9de4, size 0x18, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_11(::StringW  isoCode) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_12, addr 0x9fa9dfc, size 0x58, virtual false, abstract: false, final false
inline bool _SetupButtons_b__5_12() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_13, addr 0x9fa9e54, size 0x68, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_13(bool  on) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_14, addr 0x9fa9ebc, size 0x58, virtual false, abstract: false, final false
inline bool _SetupButtons_b__5_14() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_15, addr 0x9fa9f14, size 0x68, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_15(bool  on) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_16, addr 0x9fa9f7c, size 0x58, virtual false, abstract: false, final false
inline bool _SetupButtons_b__5_16() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_17, addr 0x9fa9fd4, size 0x68, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_17(bool  on) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_18, addr 0x9faa03c, size 0x58, virtual false, abstract: false, final false
inline bool _SetupButtons_b__5_18() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_19, addr 0x9faa094, size 0x68, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_19(bool  on) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_2, addr 0x9fa9ae8, size 0x18, virtual false, abstract: false, final false
inline ::StringW _SetupButtons_b__5_2() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_20, addr 0x9faa0fc, size 0x58, virtual false, abstract: false, final false
inline int32_t _SetupButtons_b__5_20() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_21, addr 0x9faa154, size 0x64, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_21(int32_t  on) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_22, addr 0x9faa1b8, size 0x58, virtual false, abstract: false, final false
inline bool _SetupButtons_b__5_22() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_23, addr 0x9faa210, size 0x68, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_23(bool  on) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_24, addr 0x9faa278, size 0x58, virtual false, abstract: false, final false
inline ::StringW _SetupButtons_b__5_24() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_25, addr 0x9faa2d0, size 0x68, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_25(::StringW  regex) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_26, addr 0x9faa338, size 0x58, virtual false, abstract: false, final false
inline bool _SetupButtons_b__5_26() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_27, addr 0x9faa390, size 0x68, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_27(bool  on) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_28, addr 0x9faa3f8, size 0x58, virtual false, abstract: false, final false
inline ::StringW _SetupButtons_b__5_28() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_29, addr 0x9faa450, size 0x68, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_29(::StringW  regex) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_3, addr 0x9fa9b00, size 0x18, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_3(::StringW  key) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_30, addr 0x9faa4b8, size 0x60, virtual false, abstract: false, final false
inline bool _SetupButtons_b__5_30() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_31, addr 0x9faa518, size 0x168, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_31(bool  on) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_32, addr 0x9faa680, size 0x8c, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_32() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_33, addr 0x9faa70c, size 0xc4, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_33() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_4, addr 0x9fa9b18, size 0xa4, virtual false, abstract: false, final false
inline bool _SetupButtons_b__5_4() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_5, addr 0x9fa9bbc, size 0x68, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_5(bool  production) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_6, addr 0x9fa9c24, size 0x5c, virtual false, abstract: false, final false
inline bool _SetupButtons_b__5_6() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_7, addr 0x9fa9c80, size 0x88, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_7(bool  staging) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_8, addr 0x9fa9d08, size 0x5c, virtual false, abstract: false, final false
inline bool _SetupButtons_b__5_8() ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>b__5_9, addr 0x9fa9d64, size 0x68, virtual false, abstract: false, final false
inline void _SetupButtons_b__5_9(bool  test) ;

/// [CompilerGenerated]
/// @brief Method <SetupButtons>g__Get|5_35, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Modio::IModioServiceSettings*> && ::cordl_internals::default_constructor_constraint<T>)
inline T _SetupButtons_g__Get_5_35() ;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioDebugMenu> const& __cordl_internal_get__debugMenu() const;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioDebugMenu>& __cordl_internal_get__debugMenu() ;

constexpr bool const& __cordl_internal_get__hasDoneSetup() const;

constexpr bool& __cordl_internal_get__hasDoneSetup() ;

constexpr ::Modio::ModioSettings* const& __cordl_internal_get__settings() const;

constexpr ::Modio::ModioSettings*& __cordl_internal_get__settings() ;

constexpr void __cordl_internal_set__debugMenu(::UnityW<::Modio::Unity::UI::Panels::ModioDebugMenu>  value) ;

constexpr void __cordl_internal_set__hasDoneSetup(bool  value) ;

constexpr void __cordl_internal_set__settings(::Modio::ModioSettings*  value) ;

/// @brief Method .ctor, addr 0x9fa995c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioExampleSettingsPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioExampleSettingsPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioExampleSettingsPanel(ModioExampleSettingsPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioExampleSettingsPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioExampleSettingsPanel(ModioExampleSettingsPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27075};

/// @brief Field _hasDoneSetup, offset: 0x58, size: 0x1, def value: None
 bool  ____hasDoneSetup;

/// @brief Field _settings, offset: 0x60, size: 0x8, def value: None
 ::Modio::ModioSettings*  ____settings;

/// @brief Field _debugMenu, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Panels::ModioDebugMenu>  ____debugMenu;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel, ____hasDoneSetup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel, ____settings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel, ____debugMenu) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel) == 0x70, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioExampleSettingsPanel/<>c__DisplayClass5_0
class CORDL_TYPE ModioExampleSettingsPanel___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel>  __4__this;

/// @brief Field modioAuthPlatform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_modioAuthPlatform, put=__cordl_internal_set_modioAuthPlatform)) ::Modio::Authentication::IModioAuthService*  modioAuthPlatform;

static inline ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <SetupButtons>b__37, addr 0x9faa8cc, size 0x58, virtual false, abstract: false, final false
inline bool _SetupButtons_b__37() ;

/// @brief Method <SetupButtons>b__38, addr 0x9faa924, size 0xd8, virtual false, abstract: false, final false
inline void _SetupButtons_b__38(bool  on) ;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel>& __cordl_internal_get___4__this() ;

constexpr ::Modio::Authentication::IModioAuthService* const& __cordl_internal_get_modioAuthPlatform() const;

constexpr ::Modio::Authentication::IModioAuthService*& __cordl_internal_get_modioAuthPlatform() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel>  value) ;

constexpr void __cordl_internal_set_modioAuthPlatform(::Modio::Authentication::IModioAuthService*  value) ;

/// @brief Method .ctor, addr 0x9fa982c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioExampleSettingsPanel___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioExampleSettingsPanel___c__DisplayClass5_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioExampleSettingsPanel___c__DisplayClass5_0(ModioExampleSettingsPanel___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioExampleSettingsPanel___c__DisplayClass5_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioExampleSettingsPanel___c__DisplayClass5_0(ModioExampleSettingsPanel___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27074};

/// @brief Field modioAuthPlatform, offset: 0x10, size: 0x8, def value: None
 ::Modio::Authentication::IModioAuthService*  ___modioAuthPlatform;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Panels::ModioExampleSettingsPanel>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0, ___modioAuthPlatform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c__DisplayClass5_0) == 0x20, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioExampleSettingsPanel/<>c
class CORDL_TYPE ModioExampleSettingsPanel___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*  __9;

/// @brief Field <>9__5_34, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_34, put=setStaticF___9__5_34)) ::System::Func_2<::Modio::ModioDebugMenuAttribute*,bool>*  __9__5_34;

/// @brief Field <>9__5_36, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_36, put=setStaticF___9__5_36)) ::System::Func_2<::Modio::IModioServiceSettings*,bool>*  __9__5_36;

static inline ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c* New_ctor() ;

/// @brief Method <SetupButtons>b__5_34, addr 0x9faa8b8, size 0x14, virtual false, abstract: false, final false
inline bool _SetupButtons_b__5_34(::Modio::ModioDebugMenuAttribute*  attribute) ;

/// @brief Method <SetupButtons>b__5_36, addr 0x9faa840, size 0x78, virtual false, abstract: false, final false
inline bool _SetupButtons_b__5_36(::Modio::IModioServiceSettings*  s) ;

/// @brief Method .ctor, addr 0x9faa838, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::ModioDebugMenuAttribute*,bool>* getStaticF___9__5_34() ;

static inline ::System::Func_2<::Modio::IModioServiceSettings*,bool>* getStaticF___9__5_36() ;

static inline void setStaticF___9(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c*  value) ;

static inline void setStaticF___9__5_34(::System::Func_2<::Modio::ModioDebugMenuAttribute*,bool>*  value) ;

static inline void setStaticF___9__5_36(::System::Func_2<::Modio::IModioServiceSettings*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioExampleSettingsPanel___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioExampleSettingsPanel___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioExampleSettingsPanel___c(ModioExampleSettingsPanel___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioExampleSettingsPanel___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioExampleSettingsPanel___c(ModioExampleSettingsPanel___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27073};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::ModioExampleSettingsPanel___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
