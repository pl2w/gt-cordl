#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/UniqueEventsSubmissionQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Model/Metrics/zzzz__MetricsSubmissionQueue_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UniqueEventsSubmissionQueue)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace Backtrace::Unity::Model::JsonData {
class AttributeProvider;
}
namespace Backtrace::Unity::Model::Metrics {
class UniqueEvent;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Metrics {
class UniqueEventsSubmissionQueue;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*, "Backtrace.Unity.Model.Metrics", "UniqueEventsSubmissionQueue");
// Dependencies Backtrace.Unity.Model.Metrics.MetricsSubmissionQueue`1<T>
namespace Backtrace::Unity::Model::Metrics {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Metrics.UniqueEventsSubmissionQueue
class CORDL_TYPE UniqueEventsSubmissionQueue : public ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<::Backtrace::Unity::Model::Metrics::UniqueEvent*> {
public:
// Declarations
/// @brief Field _attributeProvider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__attributeProvider, put=__cordl_internal_set__attributeProvider)) ::Backtrace::Unity::Model::JsonData::AttributeProvider*  _attributeProvider;

/// @brief Method GetEventsPayload, addr 0x5f175f4, size 0x39c, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Json::BacktraceJObject*>* GetEventsPayload(::System::Collections::Generic::ICollection_1<::Backtrace::Unity::Model::Metrics::UniqueEvent*>*  events) ;

/// @brief Method GetUniqueEventAttributes, addr 0x5f175dc, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* GetUniqueEventAttributes() ;

static inline ::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue* New_ctor(::StringW  submissionUrl, ::Backtrace::Unity::Model::JsonData::AttributeProvider*  attributeProvider) ;

/// @brief Method StartWithEvent, addr 0x5f17470, size 0x16c, virtual true, abstract: false, final false
inline void StartWithEvent(::StringW  eventName) ;

constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider* const& __cordl_internal_get__attributeProvider() const;

constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider*& __cordl_internal_get__attributeProvider() ;

constexpr void __cordl_internal_set__attributeProvider(::Backtrace::Unity::Model::JsonData::AttributeProvider*  value) ;

/// @brief Method .ctor, addr 0x5f173e4, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::StringW  submissionUrl, ::Backtrace::Unity::Model::JsonData::AttributeProvider*  attributeProvider) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniqueEventsSubmissionQueue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniqueEventsSubmissionQueue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniqueEventsSubmissionQueue(UniqueEventsSubmissionQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniqueEventsSubmissionQueue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniqueEventsSubmissionQueue(UniqueEventsSubmissionQueue const& ) = delete;

/// @brief Field Name offset 0xffffffff size 0x8
static constexpr ::ConstString  Name{u"unique_events"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27623};

/// @brief Field _attributeProvider, offset: 0x58, size: 0x8, def value: None
 ::Backtrace::Unity::Model::JsonData::AttributeProvider*  ____attributeProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue, ____attributeProvider) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue) == 0x60, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Metrics
