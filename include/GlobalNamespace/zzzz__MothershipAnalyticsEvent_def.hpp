#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipAnalyticsEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipAnalyticsEvent)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipAnalyticsEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipAnalyticsEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipAnalyticsEvent*, "", "MothershipAnalyticsEvent");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipAnalyticsEvent
class CORDL_TYPE MothershipAnalyticsEvent : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_body, put=set_body)) ::StringW  body;

 __declspec(property(get=get_custom_tags, put=set_custom_tags)) ::StringW  custom_tags;

 __declspec(property(get=get_event_name, put=set_event_name)) ::StringW  event_name;

 __declspec(property(get=get_event_timestamp, put=set_event_timestamp)) ::StringW  event_timestamp;

 __declspec(property(get=get_mothership_player_id, put=set_mothership_player_id)) ::StringW  mothership_player_id;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5586f44, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x5587040, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x5586fb0, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipAnalyticsEvent* New_ctor() ;

static inline ::GlobalNamespace::MothershipAnalyticsEvent* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x5587998, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5586e0c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x5586e6c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipAnalyticsEvent*  obj) ;

/// @brief Method get_body, addr 0x55873f8, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_body() ;

/// @brief Method get_custom_tags, addr 0x5587594, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_custom_tags() ;

/// @brief Method get_event_name, addr 0x558725c, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_event_name() ;

/// @brief Method get_event_timestamp, addr 0x5587730, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_event_timestamp() ;

/// @brief Method get_mothership_player_id, addr 0x55878cc, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_mothership_player_id() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_body, addr 0x5587328, size 0xd0, virtual false, abstract: false, final false
inline void set_body(::StringW  value) ;

/// @brief Method set_custom_tags, addr 0x55874c4, size 0xd0, virtual false, abstract: false, final false
inline void set_custom_tags(::StringW  value) ;

/// @brief Method set_event_name, addr 0x558718c, size 0xd0, virtual false, abstract: false, final false
inline void set_event_name(::StringW  value) ;

/// @brief Method set_event_timestamp, addr 0x5587660, size 0xd0, virtual false, abstract: false, final false
inline void set_event_timestamp(::StringW  value) ;

/// @brief Method set_mothership_player_id, addr 0x55877fc, size 0xd0, virtual false, abstract: false, final false
inline void set_mothership_player_id(::StringW  value) ;

/// @brief Method swigRelease, addr 0x5586eac, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipAnalyticsEvent*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipAnalyticsEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipAnalyticsEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipAnalyticsEvent(MothershipAnalyticsEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipAnalyticsEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipAnalyticsEvent(MothershipAnalyticsEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9296};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipAnalyticsEvent, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipAnalyticsEvent, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipAnalyticsEvent) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
