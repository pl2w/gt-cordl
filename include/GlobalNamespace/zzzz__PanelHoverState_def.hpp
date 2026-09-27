#pragma once
// IWYU pragma private; include "GlobalNamespace/PanelHoverState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PanelHoverState)
namespace GlobalNamespace {
class PanelHoverState___c;
}
namespace Oculus::Interaction {
class Grabbable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PanelHoverState;
}
namespace GlobalNamespace {
class PanelHoverState___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PanelHoverState*);
MARK_REF_T(::GlobalNamespace::PanelHoverState___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PanelHoverState*, "", "PanelHoverState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PanelHoverState___c*, "", "PanelHoverState/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PanelHoverState
class CORDL_TYPE PanelHoverState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::PanelHoverState___c;

 __declspec(property(get=get_Hovered)) bool  Hovered;

/// @brief Field WhenStateChanged, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenStateChanged, put=__cordl_internal_set_WhenStateChanged)) ::System::Action_1<bool>*  WhenStateChanged;

/// @brief Field grabbables, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbables, put=__cordl_internal_set_grabbables)) ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::Grabbable>>*  grabbables;

/// @brief Field hovered, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_hovered, put=__cordl_internal_set_hovered)) bool  hovered;

static inline ::GlobalNamespace::PanelHoverState* New_ctor() ;

/// @brief Method Update, addr 0xa427f74, size 0x178, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_WhenStateChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_WhenStateChanged() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::Grabbable>>* const& __cordl_internal_get_grabbables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::Grabbable>>*& __cordl_internal_get_grabbables() ;

constexpr bool const& __cordl_internal_get_hovered() const;

constexpr bool& __cordl_internal_get_hovered() ;

constexpr void __cordl_internal_set_WhenStateChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_grabbables(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::Grabbable>>*  value) ;

constexpr void __cordl_internal_set_hovered(bool  value) ;

/// @brief Method .ctor, addr 0xa4280ec, size 0x13c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenStateChanged, addr 0xa427e14, size 0xb0, virtual false, abstract: false, final false
inline void add_WhenStateChanged(::System::Action_1<bool>*  value) ;

/// @brief Method get_Hovered, addr 0xa427e0c, size 0x8, virtual false, abstract: false, final false
inline bool get_Hovered() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenStateChanged, addr 0xa427ec4, size 0xb0, virtual false, abstract: false, final false
inline void remove_WhenStateChanged(::System::Action_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PanelHoverState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PanelHoverState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PanelHoverState(PanelHoverState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PanelHoverState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PanelHoverState(PanelHoverState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28244};

/// @brief Field grabbables, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::Grabbable>>*  ___grabbables;

/// @brief Field hovered, offset: 0x28, size: 0x1, def value: None
 bool  ___hovered;

/// [CompilerGenerated]
/// @brief Field WhenStateChanged, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___WhenStateChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PanelHoverState, ___grabbables) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelHoverState, ___hovered) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PanelHoverState, ___WhenStateChanged) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PanelHoverState) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PanelHoverState/<>c
class CORDL_TYPE PanelHoverState___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::PanelHoverState___c*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Action_1<bool>*  __9__8_0;

static inline ::GlobalNamespace::PanelHoverState___c* New_ctor() ;

/// @brief Method <.ctor>b__8_0, addr 0xa428298, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__8_0(bool  _p0_) ;

/// @brief Method .ctor, addr 0xa428290, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::PanelHoverState___c* getStaticF___9() ;

static inline ::System::Action_1<bool>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::GlobalNamespace::PanelHoverState___c*  value) ;

static inline void setStaticF___9__8_0(::System::Action_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PanelHoverState___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PanelHoverState___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PanelHoverState___c(PanelHoverState___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PanelHoverState___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PanelHoverState___c(PanelHoverState___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28243};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PanelHoverState___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
