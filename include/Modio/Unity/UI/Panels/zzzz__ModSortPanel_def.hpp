#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModSortPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ModSortPanel)
namespace GlobalNamespace {
struct ModSortPanel__ApplySort_d__4;
}
namespace GlobalNamespace {
struct ModioPanelBase_GainedFocusCause;
}
namespace Modio::Unity::UI::Panels {
class ModSortPanel___c;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModSortPanel;
}
namespace Modio::Unity::UI::Panels {
class ModSortPanel___c;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModSortPanel*);
MARK_REF_T(::Modio::Unity::UI::Panels::ModSortPanel___c*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModSortPanel*, "Modio.Unity.UI.Panels", "ModSortPanel");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModSortPanel___c*, "Modio.Unity.UI.Panels", "ModSortPanel/<>c");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase, UnityEngine.UI.Toggle
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModSortPanel
class CORDL_TYPE ModSortPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
using _ApplySort_d__4 = ::GlobalNamespace::ModSortPanel__ApplySort_d__4;

using __c = ::Modio::Unity::UI::Panels::ModSortPanel___c;

/// @brief Field _toggles, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggles, put=__cordl_internal_set__toggles)) ::ArrayW<::UnityW<::UnityEngine::UI::Toggle>>  _toggles;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.ModSortPanel::<ApplySort>d__4))]
/// @brief Method ApplySort, addr 0x9fac840, size 0xa8, virtual false, abstract: false, final false
inline void ApplySort() ;

/// @brief Method Awake, addr 0x9fac56c, size 0x64, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DoDefaultSelection, addr 0x9fac5d0, size 0x15c, virtual true, abstract: false, final false
inline void DoDefaultSelection() ;

static inline ::Modio::Unity::UI::Panels::ModSortPanel* New_ctor() ;

/// @brief Method OnGainedFocus, addr 0x9fac72c, size 0x114, virtual true, abstract: false, final false
inline void OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  selectionBehaviour) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Toggle>> const& __cordl_internal_get__toggles() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Toggle>>& __cordl_internal_get__toggles() ;

constexpr void __cordl_internal_set__toggles(::ArrayW<::UnityW<::UnityEngine::UI::Toggle>>  value) ;

/// @brief Method .ctor, addr 0x9fac8e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModSortPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModSortPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModSortPanel(ModSortPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModSortPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModSortPanel(ModSortPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27088};

/// @brief Field _toggles, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Toggle>>  ____toggles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModSortPanel, ____toggles) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModSortPanel) == 0x60, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModSortPanel/<>c
class CORDL_TYPE ModSortPanel___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Unity::UI::Panels::ModSortPanel___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>*  __9__2_0;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>*  __9__4_0;

static inline ::Modio::Unity::UI::Panels::ModSortPanel___c* New_ctor() ;

/// @brief Method <ApplySort>b__4_0, addr 0x9fac974, size 0x14, virtual false, abstract: false, final false
inline bool _ApplySort_b__4_0(::UnityEngine::UI::Toggle*  toggle) ;

/// @brief Method <DoDefaultSelection>b__2_0, addr 0x9fac960, size 0x14, virtual false, abstract: false, final false
inline bool _DoDefaultSelection_b__2_0(::UnityEngine::UI::Toggle*  t) ;

/// @brief Method .ctor, addr 0x9fac958, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Unity::UI::Panels::ModSortPanel___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>* getStaticF___9__2_0() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>* getStaticF___9__4_0() ;

static inline void setStaticF___9(::Modio::Unity::UI::Panels::ModSortPanel___c*  value) ;

static inline void setStaticF___9__2_0(::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>*  value) ;

static inline void setStaticF___9__4_0(::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModSortPanel___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModSortPanel___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModSortPanel___c(ModSortPanel___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModSortPanel___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModSortPanel___c(ModSortPanel___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27086};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::ModSortPanel___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
