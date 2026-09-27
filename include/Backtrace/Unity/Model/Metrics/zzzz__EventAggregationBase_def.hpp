#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Metrics/EventAggregationBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventAggregationBase)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Metrics {
class EventAggregationBase;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Metrics::EventAggregationBase*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Metrics::EventAggregationBase*, "Backtrace.Unity.Model.Metrics", "EventAggregationBase");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Metrics {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Metrics.EventAggregationBase
class CORDL_TYPE EventAggregationBase : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_Timestamp, put=set_Timestamp)) int64_t  Timestamp;

/// @brief Field <Name>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <Timestamp>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Timestamp_k__BackingField, put=__cordl_internal_set__Timestamp_k__BackingField)) int64_t  _Timestamp_k__BackingField;

static inline ::Backtrace::Unity::Model::Metrics::EventAggregationBase* New_ctor(::StringW  name, int64_t  timestamp) ;

/// @brief Method ToBaseObject, addr 0x5f15efc, size 0xc8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* ToBaseObject(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__Timestamp_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__Timestamp_k__BackingField() ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Timestamp_k__BackingField(int64_t  value) ;

/// @brief Method .ctor, addr 0x5f15ec0, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, int64_t  timestamp) ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0x5f15eb0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_Timestamp, addr 0x5f15ea0, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Timestamp() ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0x5f15eb8, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Timestamp, addr 0x5f15ea8, size 0x8, virtual false, abstract: false, final false
inline void set_Timestamp(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventAggregationBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventAggregationBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventAggregationBase(EventAggregationBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventAggregationBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventAggregationBase(EventAggregationBase const& ) = delete;

/// @brief Field AttributesName offset 0xffffffff size 0x8
static constexpr ::ConstString  AttributesName{u"attributes"};

/// @brief Field TimestampName offset 0xffffffff size 0x8
static constexpr ::ConstString  TimestampName{u"timestamp"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27616};

/// [CompilerGenerated]
/// @brief Field <Timestamp>k__BackingField, offset: 0x10, size: 0x8, def value: None
 int64_t  ____Timestamp_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Metrics::EventAggregationBase, ____Timestamp_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Metrics::EventAggregationBase, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Metrics::EventAggregationBase) == 0x20, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Metrics
