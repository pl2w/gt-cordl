#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigationMoveEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_Direction_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NavigationMoveEvent)
namespace GlobalNamespace {
struct NavigationMoveEvent_Direction;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
struct NavigationDeviceType;
}
namespace UnityEngine::UIElements {
class NavigationMoveEvent___c;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigationMoveEvent;
}
namespace UnityEngine::UIElements {
class NavigationMoveEvent___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::NavigationMoveEvent*);
MARK_REF_T(::UnityEngine::UIElements::NavigationMoveEvent___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::NavigationMoveEvent*, "UnityEngine.UIElements", "NavigationMoveEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::NavigationMoveEvent___c*, "UnityEngine.UIElements", "NavigationMoveEvent/<>c");
// Dependencies UnityEngine.UIElements.NavigationEventBase`1<T>, UnityEngine.UIElements.NavigationMoveEvent::Direction, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.NavigationMoveEvent
class CORDL_TYPE NavigationMoveEvent : public ::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationMoveEvent*> {
public:
// Declarations
using Direction = ::GlobalNamespace::NavigationMoveEvent_Direction;

using __c = ::UnityEngine::UIElements::NavigationMoveEvent___c;

/// @brief Field <direction>k__BackingField, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__direction_k__BackingField, put=__cordl_internal_set__direction_k__BackingField)) ::GlobalNamespace::NavigationMoveEvent_Direction  _direction_k__BackingField;

/// @brief Field <move>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__move_k__BackingField, put=__cordl_internal_set__move_k__BackingField)) ::UnityEngine::Vector2  _move_k__BackingField;

 __declspec(property(get=get_direction, put=set_direction)) ::GlobalNamespace::NavigationMoveEvent_Direction  direction;

 __declspec(property(put=set_move)) ::UnityEngine::Vector2  move;

/// @brief Method DetermineMoveDirection, addr 0xb898b84, size 0x54, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NavigationMoveEvent_Direction DetermineMoveDirection(float_t  x, float_t  y, float_t  deadZone) ;

/// @brief Method GetPooled, addr 0xb895328, size 0xac, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::NavigationMoveEvent* GetPooled(::GlobalNamespace::NavigationMoveEvent_Direction  direction, ::UnityEngine::UIElements::NavigationDeviceType  deviceType, ::UnityEngine::EventModifiers  modifiers) ;

/// @brief Method GetPooled, addr 0xb898bf0, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::NavigationMoveEvent* GetPooled(::GlobalNamespace::NavigationMoveEvent_Direction  direction, ::UnityEngine::EventModifiers  modifiers) ;

/// @brief Method GetPooled, addr 0xb8953d4, size 0x100, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::NavigationMoveEvent* GetPooled(::UnityEngine::Vector2  moveVector, ::UnityEngine::UIElements::NavigationDeviceType  deviceType, ::UnityEngine::EventModifiers  modifiers) ;

/// @brief Method Init, addr 0xb898c98, size 0x50, virtual true, abstract: false, final false
inline void Init() ;

/// @brief Method LocalInit, addr 0xb898ce8, size 0x54, virtual false, abstract: false, final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::NavigationMoveEvent* New_ctor() ;

/// @brief Method PostDispatch, addr 0xb898d8c, size 0x148, virtual true, abstract: false, final false
inline void PostDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

constexpr ::GlobalNamespace::NavigationMoveEvent_Direction const& __cordl_internal_get__direction_k__BackingField() const;

constexpr ::GlobalNamespace::NavigationMoveEvent_Direction& __cordl_internal_get__direction_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__move_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__move_k__BackingField() ;

constexpr void __cordl_internal_set__direction_k__BackingField(::GlobalNamespace::NavigationMoveEvent_Direction  value) ;

constexpr void __cordl_internal_set__move_k__BackingField(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0xb898d3c, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_direction, addr 0xb898bd8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::NavigationMoveEvent_Direction get_direction() ;

/// [CompilerGenerated]
/// @brief Method set_direction, addr 0xb898be0, size 0x8, virtual false, abstract: false, final false
inline void set_direction(::GlobalNamespace::NavigationMoveEvent_Direction  value) ;

/// [CompilerGenerated]
/// @brief Method set_move, addr 0xb898be8, size 0x8, virtual false, abstract: false, final false
inline void set_move(::UnityEngine::Vector2  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavigationMoveEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavigationMoveEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavigationMoveEvent(NavigationMoveEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavigationMoveEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavigationMoveEvent(NavigationMoveEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7670};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <direction>k__BackingField, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::NavigationMoveEvent_Direction  ____direction_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <move>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____move_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::NavigationMoveEvent, ____direction_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::NavigationMoveEvent, ____move_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::NavigationMoveEvent) == 0x78, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.NavigationMoveEvent/<>c
class CORDL_TYPE NavigationMoveEvent___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::NavigationMoveEvent___c*  __9;

static inline ::UnityEngine::UIElements::NavigationMoveEvent___c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0xb898f44, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::NavigationMoveEvent* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0xb898f3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::NavigationMoveEvent___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::NavigationMoveEvent___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavigationMoveEvent___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavigationMoveEvent___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavigationMoveEvent___c(NavigationMoveEvent___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavigationMoveEvent___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavigationMoveEvent___c(NavigationMoveEvent___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7669};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::NavigationMoveEvent___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
