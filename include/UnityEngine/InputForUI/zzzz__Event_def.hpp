#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/Event.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputForUI/zzzz__CommandEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_Type_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProperties_def.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_def.hpp"
#include "UnityEngine/InputForUI/zzzz__TextInputEvent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Event)
namespace GlobalNamespace {
struct Event_MapAsEventModifiers;
}
namespace GlobalNamespace {
struct Event_MapAsEventSource;
}
namespace GlobalNamespace {
struct Event_MapAsObject;
}
namespace GlobalNamespace {
struct Event_Type;
}
namespace System {
class Object;
}
namespace UnityEngine::InputForUI {
struct CommandEvent;
}
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
namespace UnityEngine::InputForUI {
struct EventSource;
}
namespace UnityEngine::InputForUI {
template<typename TOutputType>
class Event_IMapFn_1;
}
namespace UnityEngine::InputForUI {
class IEventProperties;
}
namespace UnityEngine::InputForUI {
struct IMECompositionEvent;
}
namespace UnityEngine::InputForUI {
struct KeyEvent;
}
namespace UnityEngine::InputForUI {
struct NavigationEvent;
}
namespace UnityEngine::InputForUI {
struct PointerEvent;
}
namespace UnityEngine::InputForUI {
struct TextInputEvent;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
template<typename TOutputType>
class Event_IMapFn_1;
}
namespace UnityEngine::InputForUI {
struct Event;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::InputForUI::Event_IMapFn_1);
MARK_VAL_T(::UnityEngine::InputForUI::Event);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::InputForUI::Event_IMapFn_1, "UnityEngine.InputForUI", "Event/IMapFn`1");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputForUI::Event, "UnityEngine.InputForUI", "Event");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies UnityEngine.InputForUI.CommandEvent, UnityEngine.InputForUI.Event::IMapFn`1<TOutputType>, UnityEngine.InputForUI.Event::Type, UnityEngine.InputForUI.KeyEvent, UnityEngine.InputForUI.NavigationEvent, UnityEngine.InputForUI.PointerEvent, UnityEngine.InputForUI.TextInputEvent
namespace UnityEngine::InputForUI {
// Is value type: true
// CS Name: UnityEngine.InputForUI.Event
struct CORDL_TYPE Event {
public:
// Declarations
using MapAsEventModifiers = ::GlobalNamespace::Event_MapAsEventModifiers;

using MapAsEventSource = ::GlobalNamespace::Event_MapAsEventSource;

using MapAsObject = ::GlobalNamespace::Event_MapAsObject;

using Type = ::GlobalNamespace::Event_Type;

template<typename TOutputType>
using IMapFn_1 = ::UnityEngine::InputForUI::Event_IMapFn_1<TOutputType>;

/// @brief Field TypesWithState, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TypesWithState, put=setStaticF_TypesWithState)) ::ArrayW<::GlobalNamespace::Event_Type>  TypesWithState;

/// @brief Field _commandEvent, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get__commandEvent, put=__cordl_internal_set__commandEvent)) ::UnityEngine::InputForUI::CommandEvent  _commandEvent;

/// @brief Field _keyEvent, offset 0x10, size 0x48 
 __declspec(property(get=__cordl_internal_get__keyEvent, put=__cordl_internal_set__keyEvent)) ::UnityEngine::InputForUI::KeyEvent  _keyEvent;

/// @brief Field _managedEvent, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get__managedEvent, put=__cordl_internal_set__managedEvent)) ::System::Object*  _managedEvent;

/// @brief Field _navigationEvent, offset 0x10, size 0x28 
 __declspec(property(get=__cordl_internal_get__navigationEvent, put=__cordl_internal_set__navigationEvent)) ::UnityEngine::InputForUI::NavigationEvent  _navigationEvent;

/// @brief Field _pointerEvent, offset 0x10, size 0x80 
 __declspec(property(get=__cordl_internal_get__pointerEvent, put=__cordl_internal_set__pointerEvent)) ::UnityEngine::InputForUI::PointerEvent  _pointerEvent;

/// @brief Field _textInputEvent, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get__textInputEvent, put=__cordl_internal_set__textInputEvent)) ::UnityEngine::InputForUI::TextInputEvent  _textInputEvent;

/// @brief Field _type, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__type, put=__cordl_internal_set__type)) ::GlobalNamespace::Event_Type  _type;

 __declspec(property(get=get_asCommandEvent)) ::UnityEngine::InputForUI::CommandEvent  asCommandEvent;

 __declspec(property(get=get_asIMECompositionEvent)) ::UnityEngine::InputForUI::IMECompositionEvent  asIMECompositionEvent;

 __declspec(property(get=get_asKeyEvent)) ::UnityEngine::InputForUI::KeyEvent  asKeyEvent;

 __declspec(property(get=get_asNavigationEvent)) ::UnityEngine::InputForUI::NavigationEvent  asNavigationEvent;

 __declspec(property(get=get_asObject)) ::UnityEngine::InputForUI::IEventProperties*  asObject;

 __declspec(property(get=get_asPointerEvent)) ::UnityEngine::InputForUI::PointerEvent  asPointerEvent;

 __declspec(property(get=get_asTextInputEvent)) ::UnityEngine::InputForUI::TextInputEvent  asTextInputEvent;

 __declspec(property(get=get_eventModifiers)) ::UnityEngine::InputForUI::EventModifiers  eventModifiers;

 __declspec(property(get=get_eventSource)) ::UnityEngine::InputForUI::EventSource  eventSource;

 __declspec(property(get=get_type)) ::GlobalNamespace::Event_Type  type;

/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
constexpr operator  ::UnityEngine::InputForUI::IEventProperties*() ;

/// @brief Method CompareType, addr 0xb65d4a8, size 0xe0, virtual false, abstract: false, final false
static inline int32_t CompareType(::UnityEngine::InputForUI::Event  a, ::UnityEngine::InputForUI::Event  b) ;

/// @brief Method Ensure, addr 0xb65d6d4, size 0x90, virtual false, abstract: false, final false
inline void Ensure(::GlobalNamespace::Event_Type  t) ;

/// @brief Method From, addr 0xb65df98, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::InputForUI::Event From(::UnityEngine::InputForUI::CommandEvent  commandEvent) ;

/// @brief Method From, addr 0xb65de14, size 0xd4, virtual false, abstract: false, final false
static inline ::UnityEngine::InputForUI::Event From(::UnityEngine::InputForUI::IMECompositionEvent  imeCompositionEvent) ;

/// @brief Method From, addr 0xb65db28, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::InputForUI::Event From(::UnityEngine::InputForUI::KeyEvent  keyEvent) ;

/// @brief Method From, addr 0xb65e080, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::InputForUI::Event From(::UnityEngine::InputForUI::NavigationEvent  navigationEvent) ;

/// @brief Method From, addr 0xb65dc30, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::InputForUI::Event From(::UnityEngine::InputForUI::PointerEvent  pointerEvent) ;

/// @brief Method From, addr 0xb65dd2c, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::InputForUI::Event From(::UnityEngine::InputForUI::TextInputEvent  textInputEvent) ;

/// @brief Method Map, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOutputType,typename TMapType>
requires(::cordl_internals::type_constraint<TMapType, ::UnityEngine::InputForUI::Event_IMapFn_1<TOutputType>*> && ::cordl_internals::default_constructor_constraint<TMapType>)
inline TOutputType Map() ;

/// @brief Method Map, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOutputType,typename TMapType>
requires(::cordl_internals::type_constraint<TMapType, ::UnityEngine::InputForUI::Event_IMapFn_1<TOutputType>*>)
inline TOutputType Map(TMapType  fn) ;

/// @brief Method ToString, addr 0xb65d764, size 0x168, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::UnityEngine::InputForUI::CommandEvent const& __cordl_internal_get__commandEvent() const;

constexpr ::UnityEngine::InputForUI::CommandEvent& __cordl_internal_get__commandEvent() ;

constexpr ::UnityEngine::InputForUI::KeyEvent const& __cordl_internal_get__keyEvent() const;

constexpr ::UnityEngine::InputForUI::KeyEvent& __cordl_internal_get__keyEvent() ;

constexpr ::System::Object* const& __cordl_internal_get__managedEvent() const;

constexpr ::System::Object*& __cordl_internal_get__managedEvent() ;

constexpr ::UnityEngine::InputForUI::NavigationEvent const& __cordl_internal_get__navigationEvent() const;

constexpr ::UnityEngine::InputForUI::NavigationEvent& __cordl_internal_get__navigationEvent() ;

constexpr ::UnityEngine::InputForUI::PointerEvent const& __cordl_internal_get__pointerEvent() const;

constexpr ::UnityEngine::InputForUI::PointerEvent& __cordl_internal_get__pointerEvent() ;

constexpr ::UnityEngine::InputForUI::TextInputEvent const& __cordl_internal_get__textInputEvent() const;

constexpr ::UnityEngine::InputForUI::TextInputEvent& __cordl_internal_get__textInputEvent() ;

constexpr ::GlobalNamespace::Event_Type const& __cordl_internal_get__type() const;

constexpr ::GlobalNamespace::Event_Type& __cordl_internal_get__type() ;

constexpr void __cordl_internal_set__commandEvent(::UnityEngine::InputForUI::CommandEvent  value) ;

constexpr void __cordl_internal_set__keyEvent(::UnityEngine::InputForUI::KeyEvent  value) ;

constexpr void __cordl_internal_set__managedEvent(::System::Object*  value) ;

constexpr void __cordl_internal_set__navigationEvent(::UnityEngine::InputForUI::NavigationEvent  value) ;

constexpr void __cordl_internal_set__pointerEvent(::UnityEngine::InputForUI::PointerEvent  value) ;

constexpr void __cordl_internal_set__textInputEvent(::UnityEngine::InputForUI::TextInputEvent  value) ;

constexpr void __cordl_internal_set__type(::GlobalNamespace::Event_Type  value) ;

static inline ::ArrayW<::GlobalNamespace::Event_Type> getStaticF_TypesWithState() ;

/// @brief Method get_asCommandEvent, addr 0xb65e010, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::InputForUI::CommandEvent get_asCommandEvent() ;

/// @brief Method get_asIMECompositionEvent, addr 0xb65dee8, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::InputForUI::IMECompositionEvent get_asIMECompositionEvent() ;

/// @brief Method get_asKeyEvent, addr 0xb65dbbc, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::InputForUI::KeyEvent get_asKeyEvent() ;

/// @brief Method get_asNavigationEvent, addr 0xb65e114, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::InputForUI::NavigationEvent get_asNavigationEvent() ;

/// @brief Method get_asObject, addr 0xb65d5fc, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::InputForUI::IEventProperties* get_asObject() ;

/// @brief Method get_asPointerEvent, addr 0xb65dcb8, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::InputForUI::PointerEvent get_asPointerEvent() ;

/// @brief Method get_asTextInputEvent, addr 0xb65dda4, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::InputForUI::TextInputEvent get_asTextInputEvent() ;

/// @brief Method get_eventModifiers, addr 0xb65d668, size 0x6c, virtual true, abstract: false, final true
inline ::UnityEngine::InputForUI::EventModifiers get_eventModifiers() ;

/// @brief Method get_eventSource, addr 0xb65d588, size 0x6c, virtual true, abstract: false, final true
inline ::UnityEngine::InputForUI::EventSource get_eventSource() ;

/// @brief Method get_type, addr 0xb65d5f4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Event_Type get_type() ;

/// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
constexpr ::UnityEngine::InputForUI::IEventProperties* i___UnityEngine__InputForUI__IEventProperties() ;

static inline void setStaticF_TypesWithState(::ArrayW<::GlobalNamespace::Event_Type>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Event() ;

// Ctor Parameters [CppParam { name: "_type", ty: "::GlobalNamespace::Event_Type", modifiers: "", def_value: None, comment: None }, CppParam { name: "_managedEvent", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_keyEvent", ty: "::UnityEngine::InputForUI::KeyEvent", modifiers: "", def_value: None, comment: None }, CppParam { name: "_pointerEvent", ty: "::UnityEngine::InputForUI::PointerEvent", modifiers: "", def_value: None, comment: None }, CppParam { name: "_textInputEvent", ty: "::UnityEngine::InputForUI::TextInputEvent", modifiers: "", def_value: None, comment: None }, CppParam { name: "_commandEvent", ty: "::UnityEngine::InputForUI::CommandEvent", modifiers: "", def_value: None, comment: None }, CppParam { name: "_navigationEvent", ty: "::UnityEngine::InputForUI::NavigationEvent", modifiers: "", def_value: None, comment: None }]
constexpr Event(::GlobalNamespace::Event_Type  _type, ::System::Object*  _managedEvent, ::UnityEngine::InputForUI::KeyEvent  _keyEvent, ::UnityEngine::InputForUI::PointerEvent  _pointerEvent, ::UnityEngine::InputForUI::TextInputEvent  _textInputEvent, ::UnityEngine::InputForUI::CommandEvent  _commandEvent, ::UnityEngine::InputForUI::NavigationEvent  _navigationEvent) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____type_padding[0x0];
/// @brief Field _type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Event_Type  ____type;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____type_padding_forAlignment[0x0];
/// @brief Field _type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Event_Type  ____type_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____managedEvent_padding[0x8];
/// @brief Field _managedEvent, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  ____managedEvent;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____managedEvent_padding_forAlignment[0x8];
/// @brief Field _managedEvent, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  ____managedEvent_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ____keyEvent_padding[0x10];
/// @brief Field _keyEvent, offset: 0x10, size: 0x48, def value: None
 ::UnityEngine::InputForUI::KeyEvent  ____keyEvent;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ____keyEvent_padding_forAlignment[0x10];
/// @brief Field _keyEvent, offset: 0x10, size: 0x48, def value: None
 ::UnityEngine::InputForUI::KeyEvent  ____keyEvent_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ____pointerEvent_padding[0x10];
/// @brief Field _pointerEvent, offset: 0x10, size: 0x80, def value: None
 ::UnityEngine::InputForUI::PointerEvent  ____pointerEvent;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ____pointerEvent_padding_forAlignment[0x10];
/// @brief Field _pointerEvent, offset: 0x10, size: 0x80, def value: None
 ::UnityEngine::InputForUI::PointerEvent  ____pointerEvent_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ____textInputEvent_padding[0x10];
/// @brief Field _textInputEvent, offset: 0x10, size: 0x20, def value: None
 ::UnityEngine::InputForUI::TextInputEvent  ____textInputEvent;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ____textInputEvent_padding_forAlignment[0x10];
/// @brief Field _textInputEvent, offset: 0x10, size: 0x20, def value: None
 ::UnityEngine::InputForUI::TextInputEvent  ____textInputEvent_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ____commandEvent_padding[0x10];
/// @brief Field _commandEvent, offset: 0x10, size: 0x20, def value: None
 ::UnityEngine::InputForUI::CommandEvent  ____commandEvent;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ____commandEvent_padding_forAlignment[0x10];
/// @brief Field _commandEvent, offset: 0x10, size: 0x20, def value: None
 ::UnityEngine::InputForUI::CommandEvent  ____commandEvent_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ____navigationEvent_padding[0x10];
/// @brief Field _navigationEvent, offset: 0x10, size: 0x28, def value: None
 ::UnityEngine::InputForUI::NavigationEvent  ____navigationEvent;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ____navigationEvent_padding_forAlignment[0x10];
/// @brief Field _navigationEvent, offset: 0x10, size: 0x28, def value: None
 ::UnityEngine::InputForUI::NavigationEvent  ____navigationEvent_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31860};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputForUI::Event) == 0x90, "Size mismatch!");

} // namespace end def UnityEngine::InputForUI
// Dependencies UnityEngine.InputForUI.IEventProperties
namespace UnityEngine::InputForUI {
// cpp template
template<typename TOutputType>
// Is value type: false
// CS Name: UnityEngine.InputForUI.Event/IMapFn`1<TOutputType>
class CORDL_TYPE Event_IMapFn_1 {
public:
// Declarations
/// @brief Method Map, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename TEventType>
requires(::cordl_internals::type_constraint<TEventType, ::UnityEngine::InputForUI::IEventProperties*>)
inline TOutputType Map(::by_ref<TEventType>  ev) ;

// Ctor Parameters [CppParam { name: "", ty: "Event_IMapFn_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Event_IMapFn_1(Event_IMapFn_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31856};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputForUI
