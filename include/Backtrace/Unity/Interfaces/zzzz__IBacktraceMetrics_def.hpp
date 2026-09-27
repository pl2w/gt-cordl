#pragma once
// IWYU pragma private; include "Backtrace/Unity/Interfaces/IBacktraceMetrics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBacktraceMetrics)
namespace Backtrace::Unity::Model::Attributes {
class IScopeAttributeProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Backtrace::Unity::Interfaces {
class IBacktraceMetrics;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Interfaces::IBacktraceMetrics*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Interfaces::IBacktraceMetrics*, "Backtrace.Unity.Interfaces", "IBacktraceMetrics");
// Dependencies 
namespace Backtrace::Unity::Interfaces {
// Is value type: false
// CS Name: Backtrace.Unity.Interfaces.IBacktraceMetrics
class CORDL_TYPE IBacktraceMetrics {
public:
// Declarations
 __declspec(property(get=get_MaximumSummedEvents, put=set_MaximumSummedEvents)) uint32_t  MaximumSummedEvents;

 __declspec(property(get=get_MaximumUniqueEvents, put=set_MaximumUniqueEvents)) uint32_t  MaximumUniqueEvents;

 __declspec(property(get=get_SummedEventsSubmissionUrl, put=set_SummedEventsSubmissionUrl)) ::StringW  SummedEventsSubmissionUrl;

 __declspec(property(get=get_UniqueEventsSubmissionUrl, put=set_UniqueEventsSubmissionUrl)) ::StringW  UniqueEventsSubmissionUrl;

/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr operator  ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*() noexcept;

/// @brief Method AddSummedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool AddSummedEvent(::StringW  metricsGroupName) ;

/// @brief Method AddSummedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool AddSummedEvent(::StringW  metricsGroupName, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Send() ;

/// @brief Method get_MaximumSummedEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline uint32_t get_MaximumSummedEvents() ;

/// @brief Method get_MaximumUniqueEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline uint32_t get_MaximumUniqueEvents() ;

/// @brief Method get_SummedEventsSubmissionUrl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_SummedEventsSubmissionUrl() ;

/// @brief Method get_UniqueEventsSubmissionUrl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_UniqueEventsSubmissionUrl() ;

/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider* i___Backtrace__Unity__Model__Attributes__IScopeAttributeProvider() noexcept;

/// @brief Method set_MaximumSummedEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_MaximumSummedEvents(uint32_t  value) ;

/// @brief Method set_MaximumUniqueEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_MaximumUniqueEvents(uint32_t  value) ;

/// @brief Method set_SummedEventsSubmissionUrl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_SummedEventsSubmissionUrl(::StringW  value) ;

/// @brief Method set_UniqueEventsSubmissionUrl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_UniqueEventsSubmissionUrl(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IBacktraceMetrics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBacktraceMetrics(IBacktraceMetrics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27662};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Interfaces
