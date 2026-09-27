#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/SummedEventsSubmissionQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Model/Metrics/zzzz__MetricsSubmissionQueue_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SummedEventsSubmissionQueue)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace Backtrace::Unity::Model::JsonData {
class AttributeProvider;
}
namespace Backtrace::Unity::Model::Metrics {
class SummedEvent;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Metrics {
class SummedEventsSubmissionQueue;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*, "Backtrace.Unity.Model.Metrics", "SummedEventsSubmissionQueue");
// Dependencies Backtrace.Unity.Model.Metrics.MetricsSubmissionQueue`1<T>
namespace Backtrace::Unity::Model::Metrics {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Metrics.SummedEventsSubmissionQueue
class CORDL_TYPE SummedEventsSubmissionQueue : public ::Backtrace::Unity::Model::Metrics::MetricsSubmissionQueue_1<::Backtrace::Unity::Model::Metrics::SummedEvent*> {
public:
// Declarations
/// @brief Field _attributeProvider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__attributeProvider, put=__cordl_internal_set__attributeProvider)) ::Backtrace::Unity::Model::JsonData::AttributeProvider*  _attributeProvider;

/// @brief Method GetEventsPayload, addr 0x5f169ec, size 0x3a4, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Json::BacktraceJObject*>* GetEventsPayload(::System::Collections::Generic::ICollection_1<::Backtrace::Unity::Model::Metrics::SummedEvent*>*  events) ;

static inline ::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue* New_ctor(::StringW  submissionUrl, ::Backtrace::Unity::Model::JsonData::AttributeProvider*  attributeProvider) ;

/// @brief Method OnMaximumAttemptsReached, addr 0x5f16e18, size 0x374, virtual true, abstract: false, final false
inline void OnMaximumAttemptsReached(::System::Collections::Generic::ICollection_1<::Backtrace::Unity::Model::Metrics::SummedEvent*>*  events) ;

/// @brief Method StartWithEvent, addr 0x5f16940, size 0xac, virtual true, abstract: false, final false
inline void StartWithEvent(::StringW  eventName) ;

constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider* const& __cordl_internal_get__attributeProvider() const;

constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider*& __cordl_internal_get__attributeProvider() ;

constexpr void __cordl_internal_set__attributeProvider(::Backtrace::Unity::Model::JsonData::AttributeProvider*  value) ;

/// @brief Method .ctor, addr 0x5f168b4, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::StringW  submissionUrl, ::Backtrace::Unity::Model::JsonData::AttributeProvider*  attributeProvider) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SummedEventsSubmissionQueue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SummedEventsSubmissionQueue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SummedEventsSubmissionQueue(SummedEventsSubmissionQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SummedEventsSubmissionQueue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SummedEventsSubmissionQueue(SummedEventsSubmissionQueue const& ) = delete;

/// @brief Field Name offset 0xffffffff size 0x8
static constexpr ::ConstString  Name{u"summed_events"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27621};

/// @brief Field _attributeProvider, offset: 0x58, size: 0x8, def value: None
 ::Backtrace::Unity::Model::JsonData::AttributeProvider*  ____attributeProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue, ____attributeProvider) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue) == 0x60, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Metrics
