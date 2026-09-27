#pragma once
// IWYU pragma private; include "System/Xml/XmlEventCache_XmlEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlEventCache_XmlEventType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XmlEventCache_XmlEvent)
namespace GlobalNamespace {
struct XmlEventCache_XmlEventType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct XmlEventCache_XmlEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlEventCache_XmlEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlEventCache_XmlEvent, "System.Xml", "XmlEventCache/XmlEvent");
// Dependencies System.Xml.XmlEventCache::XmlEventType
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlEventCache/XmlEvent
struct CORDL_TYPE XmlEventCache_XmlEvent {
public:
// Declarations
 __declspec(property(get=get_EventType)) ::GlobalNamespace::XmlEventCache_XmlEventType  EventType;

 __declspec(property(get=get_Object)) ::System::Object*  Object;

 __declspec(property(get=get_String1)) ::StringW  String1;

 __declspec(property(get=get_String2)) ::StringW  String2;

 __declspec(property(get=get_String3)) ::StringW  String3;

/// @brief Method InitEvent, addr 0xaba099c, size 0x8, virtual false, abstract: false, final false
inline void InitEvent(::GlobalNamespace::XmlEventCache_XmlEventType  eventType) ;

/// @brief Method InitEvent, addr 0xaba0aa0, size 0x10, virtual false, abstract: false, final false
inline void InitEvent(::GlobalNamespace::XmlEventCache_XmlEventType  eventType, ::System::Object*  o) ;

/// @brief Method InitEvent, addr 0xaba09a4, size 0x10, virtual false, abstract: false, final false
inline void InitEvent(::GlobalNamespace::XmlEventCache_XmlEventType  eventType, ::StringW  s1) ;

/// @brief Method InitEvent, addr 0xaba09b4, size 0x38, virtual false, abstract: false, final false
inline void InitEvent(::GlobalNamespace::XmlEventCache_XmlEventType  eventType, ::StringW  s1, ::StringW  s2) ;

/// @brief Method InitEvent, addr 0xaba09ec, size 0x4c, virtual false, abstract: false, final false
inline void InitEvent(::GlobalNamespace::XmlEventCache_XmlEventType  eventType, ::StringW  s1, ::StringW  s2, ::StringW  s3) ;

/// @brief Method InitEvent, addr 0xaba0a38, size 0x68, virtual false, abstract: false, final false
inline void InitEvent(::GlobalNamespace::XmlEventCache_XmlEventType  eventType, ::StringW  s1, ::StringW  s2, ::StringW  s3, ::System::Object*  o) ;

/// @brief Method get_EventType, addr 0xaba0ab0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XmlEventCache_XmlEventType get_EventType() ;

/// @brief Method get_Object, addr 0xaba0ad0, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Object() ;

/// @brief Method get_String1, addr 0xaba0ab8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_String1() ;

/// @brief Method get_String2, addr 0xaba0ac0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_String2() ;

/// @brief Method get_String3, addr 0xaba0ac8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_String3() ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlEventCache_XmlEvent() ;

// Ctor Parameters [CppParam { name: "eventType", ty: "::GlobalNamespace::XmlEventCache_XmlEventType", modifiers: "", def_value: None, comment: None }, CppParam { name: "s1", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "s2", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "s3", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "o", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr XmlEventCache_XmlEvent(::GlobalNamespace::XmlEventCache_XmlEventType  eventType, ::StringW  s1, ::StringW  s2, ::StringW  s3, ::System::Object*  o) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14042};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field eventType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::XmlEventCache_XmlEventType  eventType;

/// @brief Field s1, offset: 0x8, size: 0x8, def value: None
 ::StringW  s1;

/// @brief Field s2, offset: 0x10, size: 0x8, def value: None
 ::StringW  s2;

/// @brief Field s3, offset: 0x18, size: 0x8, def value: None
 ::StringW  s3;

/// @brief Field o, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  o;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlEventCache_XmlEvent, eventType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlEventCache_XmlEvent, s1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlEventCache_XmlEvent, s2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlEventCache_XmlEvent, s3) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlEventCache_XmlEvent, o) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlEventCache_XmlEvent) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
