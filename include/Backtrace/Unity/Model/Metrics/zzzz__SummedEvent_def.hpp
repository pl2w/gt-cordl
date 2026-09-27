#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/SummedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Model/Metrics/zzzz__EventAggregationBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SummedEvent)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Metrics {
class SummedEvent;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Metrics::SummedEvent*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Metrics::SummedEvent*, "Backtrace.Unity.Model.Metrics", "SummedEvent");
// Dependencies Backtrace.Unity.Model.Metrics.EventAggregationBase
namespace Backtrace::Unity::Model::Metrics {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Metrics.SummedEvent
class CORDL_TYPE SummedEvent : public ::Backtrace::Unity::Model::Metrics::EventAggregationBase {
public:
// Declarations
/// @brief Field Attributes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Attributes, put=__cordl_internal_set_Attributes)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  Attributes;

static inline ::Backtrace::Unity::Model::Metrics::SummedEvent* New_ctor(::StringW  name) ;

static inline ::Backtrace::Unity::Model::Metrics::SummedEvent* New_ctor(::StringW  name, int64_t  timestamp, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method ToJson, addr 0x5f16428, size 0x37c, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* ToJson(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  scopedAttributes) ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& __cordl_internal_get_Attributes() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& __cordl_internal_get_Attributes() ;

constexpr void __cordl_internal_set_Attributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x5f16268, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x5f16378, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, int64_t  timestamp, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SummedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SummedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SummedEvent(SummedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SummedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SummedEvent(SummedEvent const& ) = delete;

/// @brief Field MetricGroupName offset 0xffffffff size 0x8
static constexpr ::ConstString  MetricGroupName{u"metric_group"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27620};

/// @brief Field Attributes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ___Attributes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Metrics::SummedEvent, ___Attributes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Metrics::SummedEvent) == 0x28, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Metrics
