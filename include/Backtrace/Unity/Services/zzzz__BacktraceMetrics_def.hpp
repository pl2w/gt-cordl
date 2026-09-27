#pragma once
// IWYU pragma private; include "Backtrace/Unity/Services/BacktraceMetrics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceMetrics)
namespace Backtrace::Unity::Interfaces {
class IBacktraceMetrics;
}
namespace Backtrace::Unity::Model::Attributes {
class IScopeAttributeProvider;
}
namespace Backtrace::Unity::Model::JsonData {
class AttributeProvider;
}
namespace Backtrace::Unity::Model::Metrics {
class SummedEvent;
}
namespace Backtrace::Unity::Model::Metrics {
class SummedEventsSubmissionQueue;
}
namespace Backtrace::Unity::Model::Metrics {
class UniqueEvent;
}
namespace Backtrace::Unity::Model::Metrics {
class UniqueEventsSubmissionQueue;
}
namespace Backtrace::Unity::Model {
class IBacktraceHttpClient;
}
namespace Backtrace::Unity::Services {
class BacktraceMetrics___c__DisplayClass44_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Backtrace::Unity::Services {
class BacktraceMetrics;
}
namespace Backtrace::Unity::Services {
class BacktraceMetrics___c__DisplayClass44_0;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Services::BacktraceMetrics*);
MARK_REF_T(::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::BacktraceMetrics*, "Backtrace.Unity.Services", "BacktraceMetrics");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0*, "Backtrace.Unity.Services", "BacktraceMetrics/<>c__DisplayClass44_0");
// Dependencies System.Guid, System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.BacktraceMetrics
class CORDL_TYPE BacktraceMetrics : public ::System::Object {
public:
// Declarations
using __c__DisplayClass44_0 = ::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0;

 __declspec(property(put=set_IgnoreSslValidation)) bool  IgnoreSslValidation;

 __declspec(property(get=get_MaximumSummedEvents, put=set_MaximumSummedEvents)) uint32_t  MaximumSummedEvents;

 __declspec(property(get=get_MaximumUniqueEvents, put=set_MaximumUniqueEvents)) uint32_t  MaximumUniqueEvents;

/// @brief Field SessionId, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_SessionId, put=__cordl_internal_set_SessionId)) ::System::Guid  SessionId;

 __declspec(property(get=get_StartupUniqueAttributeName, put=set_StartupUniqueAttributeName)) ::StringW  StartupUniqueAttributeName;

 __declspec(property(get=get_SummedEvents)) ::System::Collections::Generic::LinkedList_1<::Backtrace::Unity::Model::Metrics::SummedEvent*>*  SummedEvents;

 __declspec(property(get=get_SummedEventsSubmissionUrl, put=set_SummedEventsSubmissionUrl)) ::StringW  SummedEventsSubmissionUrl;

 __declspec(property(get=get_UniqueEvents)) ::System::Collections::Generic::LinkedList_1<::Backtrace::Unity::Model::Metrics::UniqueEvent*>*  UniqueEvents;

 __declspec(property(get=get_UniqueEventsSubmissionUrl, put=set_UniqueEventsSubmissionUrl)) ::StringW  UniqueEventsSubmissionUrl;

/// @brief Field <StartupUniqueAttributeName>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__StartupUniqueAttributeName_k__BackingField, put=__cordl_internal_set__StartupUniqueAttributeName_k__BackingField)) ::StringW  _StartupUniqueAttributeName_k__BackingField;

/// @brief Field _attributeProvider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__attributeProvider, put=__cordl_internal_set__attributeProvider)) ::Backtrace::Unity::Model::JsonData::AttributeProvider*  _attributeProvider;

/// @brief Field _lastUpdateTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastUpdateTime, put=__cordl_internal_set__lastUpdateTime)) float_t  _lastUpdateTime;

/// @brief Field _object, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__object, put=__cordl_internal_set__object)) ::System::Object*  _object;

/// @brief Field _sessionId, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionId, put=__cordl_internal_set__sessionId)) ::StringW  _sessionId;

/// @brief Field _summedEventsSubmissionQueue, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__summedEventsSubmissionQueue, put=__cordl_internal_set__summedEventsSubmissionQueue)) ::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*  _summedEventsSubmissionQueue;

/// @brief Field _timeIntervalInSec, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeIntervalInSec, put=__cordl_internal_set__timeIntervalInSec)) int64_t  _timeIntervalInSec;

/// @brief Field _uniqueEventsSubmissionQueue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__uniqueEventsSubmissionQueue, put=__cordl_internal_set__uniqueEventsSubmissionQueue)) ::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*  _uniqueEventsSubmissionQueue;

/// @brief Convert operator to "::Backtrace::Unity::Interfaces::IBacktraceMetrics"
constexpr operator  ::Backtrace::Unity::Interfaces::IBacktraceMetrics*() noexcept;

/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr operator  ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*() noexcept;

/// @brief Method AddSummedEvent, addr 0x5f0bf0c, size 0x8, virtual true, abstract: false, final true
inline bool AddSummedEvent(::StringW  metricsGroupName) ;

/// @brief Method AddSummedEvent, addr 0x5f0bf14, size 0xe8, virtual true, abstract: false, final true
inline bool AddSummedEvent(::StringW  metricsGroupName, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method AddUniqueEvent, addr 0x5f0bb94, size 0x8, virtual false, abstract: false, final false
inline bool AddUniqueEvent(::StringW  attributeName) ;

/// @brief Method AddUniqueEvent, addr 0x5f0bb9c, size 0x2e4, virtual false, abstract: false, final false
inline bool AddUniqueEvent(::StringW  attributeName, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Count, addr 0x5f0be88, size 0x84, virtual false, abstract: false, final false
inline int32_t Count() ;

/// @brief Method GetAttributes, addr 0x5f0c174, size 0xc8, virtual true, abstract: false, final true
inline void GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method GetDefaultSubmissionUrl, addr 0x5f0bffc, size 0x178, virtual false, abstract: false, final false
static inline ::StringW GetDefaultSubmissionUrl(::StringW  serviceName, ::StringW  universeName, ::StringW  token) ;

/// @brief Method GetDefaultSummedEventsUrl, addr 0x5efc6dc, size 0x58, virtual false, abstract: false, final false
static inline ::StringW GetDefaultSummedEventsUrl(::StringW  universeName, ::StringW  token) ;

/// @brief Method GetDefaultUniqueEventsUrl, addr 0x5efc684, size 0x58, virtual false, abstract: false, final false
static inline ::StringW GetDefaultUniqueEventsUrl(::StringW  universeName, ::StringW  token) ;

static inline ::Backtrace::Unity::Services::BacktraceMetrics* New_ctor(::Backtrace::Unity::Model::JsonData::AttributeProvider*  attributeProvider, int64_t  timeIntervalInSec, ::StringW  uniqueEventsSubmissionUrl, ::StringW  summedEventsSubmissionUrl) ;

/// @brief Method OverrideHttpClient, addr 0x5f0ba58, size 0x40, virtual false, abstract: false, final false
inline void OverrideHttpClient(::Backtrace::Unity::Model::IBacktraceHttpClient*  client) ;

/// @brief Method Send, addr 0x5f0bb20, size 0x74, virtual true, abstract: false, final true
inline void Send() ;

/// @brief Method SendPendingSubmissionJobs, addr 0x5f0ba98, size 0x88, virtual false, abstract: false, final false
inline void SendPendingSubmissionJobs(float_t  time) ;

/// @brief Method SendStartupEvent, addr 0x5efed40, size 0x70, virtual false, abstract: false, final false
inline void SendStartupEvent() ;

/// @brief Method Tick, addr 0x5efeff0, size 0x2a8, virtual false, abstract: false, final false
inline void Tick(float_t  time) ;

constexpr ::System::Guid const& __cordl_internal_get_SessionId() const;

constexpr ::System::Guid& __cordl_internal_get_SessionId() ;

constexpr ::StringW const& __cordl_internal_get__StartupUniqueAttributeName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__StartupUniqueAttributeName_k__BackingField() ;

constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider* const& __cordl_internal_get__attributeProvider() const;

constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider*& __cordl_internal_get__attributeProvider() ;

constexpr float_t const& __cordl_internal_get__lastUpdateTime() const;

constexpr float_t& __cordl_internal_get__lastUpdateTime() ;

constexpr ::System::Object* const& __cordl_internal_get__object() const;

constexpr ::System::Object*& __cordl_internal_get__object() ;

constexpr ::StringW const& __cordl_internal_get__sessionId() const;

constexpr ::StringW& __cordl_internal_get__sessionId() ;

constexpr ::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue* const& __cordl_internal_get__summedEventsSubmissionQueue() const;

constexpr ::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*& __cordl_internal_get__summedEventsSubmissionQueue() ;

constexpr int64_t const& __cordl_internal_get__timeIntervalInSec() const;

constexpr int64_t& __cordl_internal_get__timeIntervalInSec() ;

constexpr ::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue* const& __cordl_internal_get__uniqueEventsSubmissionQueue() const;

constexpr ::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*& __cordl_internal_get__uniqueEventsSubmissionQueue() ;

constexpr void __cordl_internal_set_SessionId(::System::Guid  value) ;

constexpr void __cordl_internal_set__StartupUniqueAttributeName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__attributeProvider(::Backtrace::Unity::Model::JsonData::AttributeProvider*  value) ;

constexpr void __cordl_internal_set__lastUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set__object(::System::Object*  value) ;

constexpr void __cordl_internal_set__sessionId(::StringW  value) ;

constexpr void __cordl_internal_set__summedEventsSubmissionQueue(::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*  value) ;

constexpr void __cordl_internal_set__timeIntervalInSec(int64_t  value) ;

constexpr void __cordl_internal_set__uniqueEventsSubmissionQueue(::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*  value) ;

/// @brief Method .ctor, addr 0x5efc734, size 0x194, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::JsonData::AttributeProvider*  attributeProvider, int64_t  timeIntervalInSec, ::StringW  uniqueEventsSubmissionUrl, ::StringW  summedEventsSubmissionUrl) ;

/// @brief Method get_MaximumSummedEvents, addr 0x5f0b864, size 0x48, virtual true, abstract: false, final true
inline uint32_t get_MaximumSummedEvents() ;

/// @brief Method get_MaximumUniqueEvents, addr 0x5f0b7d0, size 0x48, virtual true, abstract: false, final true
inline uint32_t get_MaximumUniqueEvents() ;

/// [CompilerGenerated]
/// @brief Method get_StartupUniqueAttributeName, addr 0x5f0b7c0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_StartupUniqueAttributeName() ;

/// @brief Method get_SummedEvents, addr 0x5f0ba40, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::LinkedList_1<::Backtrace::Unity::Model::Metrics::SummedEvent*>* get_SummedEvents() ;

/// @brief Method get_SummedEventsSubmissionUrl, addr 0x5f0b990, size 0x48, virtual true, abstract: false, final true
inline ::StringW get_SummedEventsSubmissionUrl() ;

/// @brief Method get_UniqueEvents, addr 0x5f0ba28, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::LinkedList_1<::Backtrace::Unity::Model::Metrics::UniqueEvent*>* get_UniqueEvents() ;

/// @brief Method get_UniqueEventsSubmissionUrl, addr 0x5f0b8f8, size 0x48, virtual true, abstract: false, final true
inline ::StringW get_UniqueEventsSubmissionUrl() ;

/// @brief Convert to "::Backtrace::Unity::Interfaces::IBacktraceMetrics"
constexpr ::Backtrace::Unity::Interfaces::IBacktraceMetrics* i___Backtrace__Unity__Interfaces__IBacktraceMetrics() noexcept;

/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider* i___Backtrace__Unity__Model__Attributes__IScopeAttributeProvider() noexcept;

/// @brief Method set_IgnoreSslValidation, addr 0x5efc8c8, size 0x12c, virtual false, abstract: false, final false
inline void set_IgnoreSslValidation(bool  value) ;

/// @brief Method set_MaximumSummedEvents, addr 0x5f0b8ac, size 0x4c, virtual true, abstract: false, final true
inline void set_MaximumSummedEvents(uint32_t  value) ;

/// @brief Method set_MaximumUniqueEvents, addr 0x5f0b818, size 0x4c, virtual true, abstract: false, final true
inline void set_MaximumUniqueEvents(uint32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_StartupUniqueAttributeName, addr 0x5f0b7c8, size 0x8, virtual false, abstract: false, final false
inline void set_StartupUniqueAttributeName(::StringW  value) ;

/// @brief Method set_SummedEventsSubmissionUrl, addr 0x5f0b9d8, size 0x50, virtual true, abstract: false, final true
inline void set_SummedEventsSubmissionUrl(::StringW  value) ;

/// @brief Method set_UniqueEventsSubmissionUrl, addr 0x5f0b940, size 0x50, virtual true, abstract: false, final true
inline void set_UniqueEventsSubmissionUrl(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceMetrics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceMetrics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceMetrics(BacktraceMetrics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceMetrics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceMetrics(BacktraceMetrics const& ) = delete;

/// @brief Field ApplicationSessionKey offset 0xffffffff size 0x8
static constexpr ::ConstString  ApplicationSessionKey{u"application.session"};

/// @brief Field DefaultSubmissionUrl offset 0xffffffff size 0x8
static constexpr ::ConstString  DefaultSubmissionUrl{u"https://events.backtrace.io/api/"};

/// @brief Field DefaultTimeIntervalInMin offset 0xffffffff size 0x4
static constexpr uint32_t  DefaultTimeIntervalInMin{static_cast<uint32_t>(0x1eu)};

/// @brief Field DefaultTimeIntervalInSec offset 0xffffffff size 0x4
static constexpr uint32_t  DefaultTimeIntervalInSec{static_cast<uint32_t>(0x708u)};

/// @brief Field DefaultUniqueAttributeName offset 0xffffffff size 0x8
static constexpr ::ConstString  DefaultUniqueAttributeName{u"guid"};

/// @brief Field MaxNumberOfAttempts offset 0xffffffff size 0x4
static constexpr int32_t  MaxNumberOfAttempts{static_cast<int32_t>(0x3)};

/// @brief Field MaxTimeBetweenRequests offset 0xffffffff size 0x4
static constexpr int32_t  MaxTimeBetweenRequests{static_cast<int32_t>(0x12c)};

/// @brief Field StartupEventName offset 0xffffffff size 0x8
static constexpr ::ConstString  StartupEventName{u"Application Launches"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27580};

/// @brief Field SessionId, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ___SessionId;

/// [CompilerGenerated]
/// @brief Field <StartupUniqueAttributeName>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____StartupUniqueAttributeName_k__BackingField;

/// @brief Field _uniqueEventsSubmissionQueue, offset: 0x28, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*  ____uniqueEventsSubmissionQueue;

/// @brief Field _summedEventsSubmissionQueue, offset: 0x30, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*  ____summedEventsSubmissionQueue;

/// @brief Field _timeIntervalInSec, offset: 0x38, size: 0x8, def value: None
 int64_t  ____timeIntervalInSec;

/// @brief Field _lastUpdateTime, offset: 0x40, size: 0x4, def value: None
 float_t  ____lastUpdateTime;

/// @brief Field _attributeProvider, offset: 0x48, size: 0x8, def value: None
 ::Backtrace::Unity::Model::JsonData::AttributeProvider*  ____attributeProvider;

/// @brief Field _object, offset: 0x50, size: 0x8, def value: None
 ::System::Object*  ____object;

/// @brief Field _sessionId, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____sessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Services::BacktraceMetrics, ___SessionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceMetrics, ____StartupUniqueAttributeName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceMetrics, ____uniqueEventsSubmissionQueue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceMetrics, ____summedEventsSubmissionQueue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceMetrics, ____timeIntervalInSec) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceMetrics, ____lastUpdateTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceMetrics, ____attributeProvider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceMetrics, ____object) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceMetrics, ____sessionId) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Services::BacktraceMetrics) == 0x60, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.BacktraceMetrics/<>c__DisplayClass44_0
class CORDL_TYPE BacktraceMetrics___c__DisplayClass44_0 : public ::System::Object {
public:
// Declarations
/// @brief Field attributeName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributeName, put=__cordl_internal_set_attributeName)) ::StringW  attributeName;

static inline ::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0* New_ctor() ;

/// @brief Method <AddUniqueEvent>b__0, addr 0x5f0c23c, size 0x20, virtual false, abstract: false, final false
inline bool _AddUniqueEvent_b__0(::Backtrace::Unity::Model::Metrics::UniqueEvent*  n) ;

constexpr ::StringW const& __cordl_internal_get_attributeName() const;

constexpr ::StringW& __cordl_internal_get_attributeName() ;

constexpr void __cordl_internal_set_attributeName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f0be80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceMetrics___c__DisplayClass44_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceMetrics___c__DisplayClass44_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceMetrics___c__DisplayClass44_0(BacktraceMetrics___c__DisplayClass44_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceMetrics___c__DisplayClass44_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceMetrics___c__DisplayClass44_0(BacktraceMetrics___c__DisplayClass44_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27579};

/// @brief Field attributeName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___attributeName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0, ___attributeName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0) == 0x18, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
