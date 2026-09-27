#pragma once
// IWYU pragma private; include "Backtrace/Unity/Services/ReportLimitWatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReportLimitWatcher)
namespace Backtrace::Unity::Model {
class BacktraceReport;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Backtrace::Unity::Services {
class ReportLimitWatcher;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Services::ReportLimitWatcher*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::ReportLimitWatcher*, "Backtrace.Unity.Services", "ReportLimitWatcher");
// Dependencies System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.ReportLimitWatcher
class CORDL_TYPE ReportLimitWatcher : public ::System::Object {
public:
// Declarations
/// @brief Field _displayMessage, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__displayMessage, put=__cordl_internal_set__displayMessage)) bool  _displayMessage;

/// @brief Field _limitHit, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__limitHit, put=__cordl_internal_set__limitHit)) bool  _limitHit;

/// @brief Field _object, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__object, put=__cordl_internal_set__object)) ::System::Object*  _object;

/// @brief Field _queueReportTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__queueReportTime, put=__cordl_internal_set__queueReportTime)) int64_t  _queueReportTime;

/// @brief Field _reportPerMin, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__reportPerMin, put=__cordl_internal_set__reportPerMin)) int32_t  _reportPerMin;

/// @brief Field _reportQueue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__reportQueue, put=__cordl_internal_set__reportQueue)) ::System::Collections::Generic::Queue_1<int64_t>*  _reportQueue;

/// @brief Field _watcherEnable, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__watcherEnable, put=__cordl_internal_set__watcherEnable)) bool  _watcherEnable;

/// @brief Method Clear, addr 0x5f0c25c, size 0xbc, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method DisplayReportLimitHitMessage, addr 0x5f0c318, size 0xbc, virtual false, abstract: false, final false
inline void DisplayReportLimitHitMessage() ;

static inline ::Backtrace::Unity::Services::ReportLimitWatcher* New_ctor(uint32_t  reportPerMin) ;

/// @brief Method Reset, addr 0x5f0c40c, size 0x50, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetClientReportLimit, addr 0x5eff630, size 0x64, virtual false, abstract: false, final false
inline void SetClientReportLimit(uint32_t  reportPerMin) ;

/// @brief Method ShouldDisplayMessage, addr 0x5f0c3ec, size 0x20, virtual false, abstract: false, final false
inline bool ShouldDisplayMessage() ;

/// @brief Method WatchReport, addr 0x5f0c3d4, size 0x18, virtual false, abstract: false, final false
inline bool WatchReport(::Backtrace::Unity::Model::BacktraceReport*  report, bool  displayMessageOnLimitHit) ;

/// @brief Method WatchReport, addr 0x5f01a34, size 0x180, virtual false, abstract: false, final false
inline bool WatchReport(int64_t  timestamp, bool  displayMessageOnLimitHit) ;

constexpr bool const& __cordl_internal_get__displayMessage() const;

constexpr bool& __cordl_internal_get__displayMessage() ;

constexpr bool const& __cordl_internal_get__limitHit() const;

constexpr bool& __cordl_internal_get__limitHit() ;

constexpr ::System::Object* const& __cordl_internal_get__object() const;

constexpr ::System::Object*& __cordl_internal_get__object() ;

constexpr int64_t const& __cordl_internal_get__queueReportTime() const;

constexpr int64_t& __cordl_internal_get__queueReportTime() ;

constexpr int32_t const& __cordl_internal_get__reportPerMin() const;

constexpr int32_t& __cordl_internal_get__reportPerMin() ;

constexpr ::System::Collections::Generic::Queue_1<int64_t>* const& __cordl_internal_get__reportQueue() const;

constexpr ::System::Collections::Generic::Queue_1<int64_t>*& __cordl_internal_get__reportQueue() ;

constexpr bool const& __cordl_internal_get__watcherEnable() const;

constexpr bool& __cordl_internal_get__watcherEnable() ;

constexpr void __cordl_internal_set__displayMessage(bool  value) ;

constexpr void __cordl_internal_set__limitHit(bool  value) ;

constexpr void __cordl_internal_set__object(::System::Object*  value) ;

constexpr void __cordl_internal_set__queueReportTime(int64_t  value) ;

constexpr void __cordl_internal_set__reportPerMin(int32_t  value) ;

constexpr void __cordl_internal_set__reportQueue(::System::Collections::Generic::Queue_1<int64_t>*  value) ;

constexpr void __cordl_internal_set__watcherEnable(bool  value) ;

/// @brief Method .ctor, addr 0x5efe1f8, size 0x108, virtual false, abstract: false, final false
inline void _ctor(uint32_t  reportPerMin) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReportLimitWatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReportLimitWatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReportLimitWatcher(ReportLimitWatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReportLimitWatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReportLimitWatcher(ReportLimitWatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27581};

/// @brief Field _reportQueue, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<int64_t>*  ____reportQueue;

/// @brief Field _object, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ____object;

/// @brief Field _queueReportTime, offset: 0x20, size: 0x8, def value: None
 int64_t  ____queueReportTime;

/// @brief Field _watcherEnable, offset: 0x28, size: 0x1, def value: None
 bool  ____watcherEnable;

/// @brief Field _reportPerMin, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____reportPerMin;

/// @brief Field _displayMessage, offset: 0x30, size: 0x1, def value: None
 bool  ____displayMessage;

/// @brief Field _limitHit, offset: 0x31, size: 0x1, def value: None
 bool  ____limitHit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Services::ReportLimitWatcher, ____reportQueue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::ReportLimitWatcher, ____object) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::ReportLimitWatcher, ____queueReportTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::ReportLimitWatcher, ____watcherEnable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::ReportLimitWatcher, ____reportPerMin) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::ReportLimitWatcher, ____displayMessage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::ReportLimitWatcher, ____limitHit) == 0x31, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Services::ReportLimitWatcher) == 0x38, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
