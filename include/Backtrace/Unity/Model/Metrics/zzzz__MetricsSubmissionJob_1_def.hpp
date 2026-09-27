#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/MetricsSubmissionJob_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MetricsSubmissionJob_1)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Metrics {
template<typename T>
class MetricsSubmissionJob_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1, "Backtrace.Unity.Model.Metrics", "MetricsSubmissionJob`1");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Metrics {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Backtrace.Unity.Model.Metrics.MetricsSubmissionJob`1<T>
class CORDL_TYPE MetricsSubmissionJob_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Events, put=set_Events)) ::System::Collections::Generic::ICollection_1<T>*  Events;

 __declspec(property(get=get_NextInvokeTime, put=set_NextInvokeTime)) double_t  NextInvokeTime;

 __declspec(property(get=get_NumberOfAttempts, put=set_NumberOfAttempts)) uint32_t  NumberOfAttempts;

/// @brief Field <Events>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Events_k__BackingField, put=__cordl_internal_set__Events_k__BackingField)) ::System::Collections::Generic::ICollection_1<T>*  _Events_k__BackingField;

/// @brief Field <NextInvokeTime>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__NextInvokeTime_k__BackingField, put=__cordl_internal_set__NextInvokeTime_k__BackingField)) double_t  _NextInvokeTime_k__BackingField;

/// @brief Field <NumberOfAttempts>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__NumberOfAttempts_k__BackingField, put=__cordl_internal_set__NumberOfAttempts_k__BackingField)) uint32_t  _NumberOfAttempts_k__BackingField;

static inline ::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1<T>* New_ctor() ;

constexpr ::System::Collections::Generic::ICollection_1<T>* const& __cordl_internal_get__Events_k__BackingField() const;

constexpr ::System::Collections::Generic::ICollection_1<T>*& __cordl_internal_get__Events_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__NextInvokeTime_k__BackingField() const;

constexpr double_t& __cordl_internal_get__NextInvokeTime_k__BackingField() ;

constexpr uint32_t const& __cordl_internal_get__NumberOfAttempts_k__BackingField() const;

constexpr uint32_t& __cordl_internal_get__NumberOfAttempts_k__BackingField() ;

constexpr void __cordl_internal_set__Events_k__BackingField(::System::Collections::Generic::ICollection_1<T>*  value) ;

constexpr void __cordl_internal_set__NextInvokeTime_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__NumberOfAttempts_k__BackingField(uint32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Events, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::ICollection_1<T>* get_Events() ;

/// [CompilerGenerated]
/// @brief Method get_NextInvokeTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline double_t get_NextInvokeTime() ;

/// [CompilerGenerated]
/// @brief Method get_NumberOfAttempts, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline uint32_t get_NumberOfAttempts() ;

/// [CompilerGenerated]
/// @brief Method set_Events, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Events(::System::Collections::Generic::ICollection_1<T>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_NextInvokeTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_NextInvokeTime(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_NumberOfAttempts, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_NumberOfAttempts(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetricsSubmissionJob_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetricsSubmissionJob_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetricsSubmissionJob_1(MetricsSubmissionJob_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetricsSubmissionJob_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetricsSubmissionJob_1(MetricsSubmissionJob_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27617};

/// [CompilerGenerated]
/// @brief Field <NextInvokeTime>k__BackingField, offset: 0x10, size: 0x8, def value: None
 double_t  ____NextInvokeTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Events>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::ICollection_1<T>*  ____Events_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <NumberOfAttempts>k__BackingField, offset: 0x20, size: 0x4, def value: None
 uint32_t  ____NumberOfAttempts_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Model::Metrics
