#pragma once
// IWYU pragma private; include "Liv/Lck/Telemetry/LckTelemetryEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Core/zzzz__LckTelemetryEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckTelemetryEvent)
namespace Liv::Lck::Core {
struct LckTelemetryEventType;
}
namespace Liv::Lck::Telemetry {
class LckTelemetryEvent___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Telemetry {
class LckTelemetryEvent;
}
namespace Liv::Lck::Telemetry {
class LckTelemetryEvent___c;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Telemetry::LckTelemetryEvent*);
MARK_REF_T(::Liv::Lck::Telemetry::LckTelemetryEvent___c*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Telemetry::LckTelemetryEvent*, "Liv.Lck.Telemetry", "LckTelemetryEvent");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Telemetry::LckTelemetryEvent___c*, "Liv.Lck.Telemetry", "LckTelemetryEvent/<>c");
// Dependencies Liv.Lck.Core.LckTelemetryEventType, System.Object
namespace Liv::Lck::Telemetry {
// Is value type: false
// CS Name: Liv.Lck.Telemetry.LckTelemetryEvent
class CORDL_TYPE LckTelemetryEvent : public ::System::Object {
public:
// Declarations
using __c = ::Liv::Lck::Telemetry::LckTelemetryEvent___c;

 __declspec(property(get=get_Context, put=set_Context)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  Context;

 __declspec(property(get=get_EventType, put=set_EventType)) ::Liv::Lck::Core::LckTelemetryEventType  EventType;

/// @brief Field <Context>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Context_k__BackingField, put=__cordl_internal_set__Context_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _Context_k__BackingField;

/// @brief Field <EventType>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__EventType_k__BackingField, put=__cordl_internal_set__EventType_k__BackingField)) ::Liv::Lck::Core::LckTelemetryEventType  _EventType_k__BackingField;

static inline ::Liv::Lck::Telemetry::LckTelemetryEvent* New_ctor(::Liv::Lck::Core::LckTelemetryEventType  eventType) ;

static inline ::Liv::Lck::Telemetry::LckTelemetryEvent* New_ctor(::Liv::Lck::Core::LckTelemetryEventType  eventType, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  context) ;

/// @brief Method ToString, addr 0x9d4bbe8, size 0x2c0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get__Context_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get__Context_k__BackingField() ;

constexpr ::Liv::Lck::Core::LckTelemetryEventType const& __cordl_internal_get__EventType_k__BackingField() const;

constexpr ::Liv::Lck::Core::LckTelemetryEventType& __cordl_internal_get__EventType_k__BackingField() ;

constexpr void __cordl_internal_set__Context_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set__EventType_k__BackingField(::Liv::Lck::Core::LckTelemetryEventType  value) ;

/// @brief Method .ctor, addr 0x9d4bb88, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::Core::LckTelemetryEventType  eventType) ;

/// @brief Method .ctor, addr 0x9d4bbb0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::Core::LckTelemetryEventType  eventType, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  context) ;

/// [CompilerGenerated]
/// @brief Method get_Context, addr 0x9d4bb78, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* get_Context() ;

/// [CompilerGenerated]
/// @brief Method get_EventType, addr 0x9d4bb68, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::Core::LckTelemetryEventType get_EventType() ;

/// [CompilerGenerated]
/// @brief Method set_Context, addr 0x9d4bb80, size 0x8, virtual false, abstract: false, final false
inline void set_Context(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_EventType, addr 0x9d4bb70, size 0x8, virtual false, abstract: false, final false
inline void set_EventType(::Liv::Lck::Core::LckTelemetryEventType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckTelemetryEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckTelemetryEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckTelemetryEvent(LckTelemetryEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckTelemetryEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckTelemetryEvent(LckTelemetryEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24908};

/// [CompilerGenerated]
/// @brief Field <EventType>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Liv::Lck::Core::LckTelemetryEventType  ____EventType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Context>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ____Context_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Telemetry::LckTelemetryEvent, ____EventType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Telemetry::LckTelemetryEvent, ____Context_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Telemetry::LckTelemetryEvent) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Telemetry
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Telemetry {
// Is value type: false
// CS Name: Liv.Lck.Telemetry.LckTelemetryEvent/<>c
class CORDL_TYPE LckTelemetryEvent___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::Telemetry::LckTelemetryEvent___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,::StringW>*  __9__10_0;

static inline ::Liv::Lck::Telemetry::LckTelemetryEvent___c* New_ctor() ;

/// @brief Method <ToString>b__10_0, addr 0x9d4bf18, size 0x74, virtual false, abstract: false, final false
inline ::StringW _ToString_b__10_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>  kvp) ;

/// @brief Method .ctor, addr 0x9d4bf10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::Telemetry::LckTelemetryEvent___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,::StringW>* getStaticF___9__10_0() ;

static inline void setStaticF___9(::Liv::Lck::Telemetry::LckTelemetryEvent___c*  value) ;

static inline void setStaticF___9__10_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckTelemetryEvent___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckTelemetryEvent___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckTelemetryEvent___c(LckTelemetryEvent___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckTelemetryEvent___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckTelemetryEvent___c(LckTelemetryEvent___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24907};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Telemetry::LckTelemetryEvent___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Telemetry
