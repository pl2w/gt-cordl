#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/UniqueEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Model/Metrics/zzzz__EventAggregationBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniqueEvent)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Metrics {
class UniqueEvent;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Metrics::UniqueEvent*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Metrics::UniqueEvent*, "Backtrace.Unity.Model.Metrics", "UniqueEvent");
// Dependencies Backtrace.Unity.Model.Metrics.EventAggregationBase
namespace Backtrace::Unity::Model::Metrics {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Metrics.UniqueEvent
class CORDL_TYPE UniqueEvent : public ::Backtrace::Unity::Model::Metrics::EventAggregationBase {
public:
// Declarations
/// @brief Field Attributes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Attributes, put=__cordl_internal_set_Attributes)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  Attributes;

static inline ::Backtrace::Unity::Model::Metrics::UniqueEvent* New_ctor(::StringW  name, int64_t  timestamp, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method ToJson, addr 0x5f172c8, size 0xb4, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* ToJson() ;

/// @brief Method UpdateTimestamp, addr 0x5f171e0, size 0xe8, virtual false, abstract: false, final false
inline void UpdateTimestamp(int64_t  timestamp, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& __cordl_internal_get_Attributes() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& __cordl_internal_get_Attributes() ;

constexpr void __cordl_internal_set_Attributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x5f1718c, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, int64_t  timestamp, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniqueEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniqueEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniqueEvent(UniqueEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniqueEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniqueEvent(UniqueEvent const& ) = delete;

/// @brief Field UniqueEventName offset 0xffffffff size 0x8
static constexpr ::ConstString  UniqueEventName{u"unique"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27622};

/// @brief Field Attributes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ___Attributes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Metrics::UniqueEvent, ___Attributes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Metrics::UniqueEvent) == 0x28, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Metrics
