#pragma once
// IWYU pragma private; include "System/Diagnostics/Tracing/EventSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventSource)
namespace GlobalNamespace {
struct EventSource_EventData;
}
namespace System::Diagnostics::Tracing {
struct EventKeywords;
}
namespace System::Diagnostics::Tracing {
struct EventLevel;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Diagnostics::Tracing {
class EventSource;
}
// Write type traits
MARK_REF_T(::System::Diagnostics::Tracing::EventSource*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::Tracing::EventSource*, "System.Diagnostics.Tracing", "EventSource");
// Dependencies System.Object
namespace System::Diagnostics::Tracing {
// Is value type: false
// CS Name: System.Diagnostics.Tracing.EventSource
class CORDL_TYPE EventSource : public ::System::Object {
public:
// Declarations
using EventData = ::GlobalNamespace::EventSource_EventData;

 __declspec(property(put=set_Name)) ::StringW  Name;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa26026c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xa2602d8, size 0x4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0xa2601c4, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method IsEnabled, addr 0xa26025c, size 0x8, virtual false, abstract: false, final false
inline bool IsEnabled() ;

/// @brief Method IsEnabled, addr 0xa260264, size 0x8, virtual false, abstract: false, final false
inline bool IsEnabled(::System::Diagnostics::Tracing::EventLevel  level, ::System::Diagnostics::Tracing::EventKeywords  keywords) ;

static inline ::System::Diagnostics::Tracing::EventSource* New_ctor() ;

static inline ::System::Diagnostics::Tracing::EventSource* New_ctor(::System::Guid  eventSourceGuid, ::StringW  eventSourceName) ;

static inline ::System::Diagnostics::Tracing::EventSource* New_ctor(::StringW  eventSourceName) ;

/// @brief Method WriteEvent, addr 0xa2602dc, size 0x44, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId) ;

/// @brief Method WriteEvent, addr 0xa2603e0, size 0x94, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, ::StringW  arg1) ;

/// @brief Method WriteEvent, addr 0xa260888, size 0x10c, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3) ;

/// @brief Method WriteEvent, addr 0xa260324, size 0xbc, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, int32_t  arg1) ;

/// @brief Method WriteEvent, addr 0xa260474, size 0x108, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, int32_t  arg1, int32_t  arg2) ;

/// @brief Method WriteEvent, addr 0xa26057c, size 0x15c, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, int32_t  arg1, int32_t  arg2, int32_t  arg3) ;

/// @brief Method WriteEvent, addr 0xa2606d8, size 0xbc, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, int64_t  arg1) ;

/// @brief Method WriteEvent, addr 0xa260794, size 0xf4, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, int64_t  arg1, ::StringW  arg2) ;

/// @brief Method WriteEvent, addr 0xa260320, size 0x4, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// [CLSCompliant(false)]
/// @brief Method WriteEventCore, addr 0xa260994, size 0x4, virtual false, abstract: false, final false
inline void WriteEventCore(int32_t  eventId, int32_t  eventDataCount, ::GlobalNamespace::EventSource_EventData*  data) ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xa260120, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa260194, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  eventSourceGuid, ::StringW  eventSourceName) ;

/// @brief Method .ctor, addr 0xa260164, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  eventSourceName) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0xa260254, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventSource(EventSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventSource(EventSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6799};

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::Tracing::EventSource, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Diagnostics::Tracing::EventSource) == 0x18, "Size mismatch!");

} // namespace end def System::Diagnostics::Tracing
