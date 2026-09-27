#pragma once
// IWYU pragma private; include "Fusion/Statistics/BehaviourStatisticsSnapshot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BehaviourStatisticsSnapshot)
// Forward declare root types
namespace Fusion::Statistics {
class BehaviourStatisticsSnapshot;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::BehaviourStatisticsSnapshot*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::BehaviourStatisticsSnapshot*, "Fusion.Statistics", "BehaviourStatisticsSnapshot");
// Dependencies System.Object
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.BehaviourStatisticsSnapshot
class CORDL_TYPE BehaviourStatisticsSnapshot : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FixedUpdateNetworkExecutionCount, put=set_FixedUpdateNetworkExecutionCount)) int32_t  FixedUpdateNetworkExecutionCount;

 __declspec(property(get=get_FixedUpdateNetworkExecutionTime, put=set_FixedUpdateNetworkExecutionTime)) double_t  FixedUpdateNetworkExecutionTime;

 __declspec(property(get=get_RenderExecutionCount, put=set_RenderExecutionCount)) int32_t  RenderExecutionCount;

 __declspec(property(get=get_RenderExecutionTime, put=set_RenderExecutionTime)) double_t  RenderExecutionTime;

/// @brief Field <FixedUpdateNetworkExecutionCount>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__FixedUpdateNetworkExecutionCount_k__BackingField, put=__cordl_internal_set__FixedUpdateNetworkExecutionCount_k__BackingField)) int32_t  _FixedUpdateNetworkExecutionCount_k__BackingField;

/// @brief Field <FixedUpdateNetworkExecutionTime>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__FixedUpdateNetworkExecutionTime_k__BackingField, put=__cordl_internal_set__FixedUpdateNetworkExecutionTime_k__BackingField)) double_t  _FixedUpdateNetworkExecutionTime_k__BackingField;

/// @brief Field <RenderExecutionCount>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__RenderExecutionCount_k__BackingField, put=__cordl_internal_set__RenderExecutionCount_k__BackingField)) int32_t  _RenderExecutionCount_k__BackingField;

/// @brief Field <RenderExecutionTime>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__RenderExecutionTime_k__BackingField, put=__cordl_internal_set__RenderExecutionTime_k__BackingField)) double_t  _RenderExecutionTime_k__BackingField;

/// [Conditional("DEBUG")]
/// @brief Method AccumulateFixedUpdateNetworkExecutionCount, addr 0x601f160, size 0x10, virtual false, abstract: false, final false
inline void AccumulateFixedUpdateNetworkExecutionCount(int32_t  count) ;

/// [Conditional("DEBUG")]
/// @brief Method AccumulateFixedUpdateNetworkExecutionTime, addr 0x601f180, size 0x10, virtual false, abstract: false, final false
inline void AccumulateFixedUpdateNetworkExecutionTime(double_t  time) ;

/// [Conditional("DEBUG")]
/// @brief Method AccumulateRenderExecutionCount, addr 0x601f170, size 0x10, virtual false, abstract: false, final false
inline void AccumulateRenderExecutionCount(int32_t  count) ;

/// [Conditional("DEBUG")]
/// @brief Method AccumulateRenderExecutionTime, addr 0x601f190, size 0x10, virtual false, abstract: false, final false
inline void AccumulateRenderExecutionTime(double_t  time) ;

/// [Conditional("DEBUG")]
/// @brief Method ClearSnapshot, addr 0x601f114, size 0xc, virtual false, abstract: false, final false
inline void ClearSnapshot() ;

/// [Conditional("DEBUG")]
/// @brief Method CopyFromSnapshot, addr 0x601f0f4, size 0x20, virtual false, abstract: false, final false
inline void CopyFromSnapshot(::Fusion::Statistics::BehaviourStatisticsSnapshot*  snapshot) ;

static inline ::Fusion::Statistics::BehaviourStatisticsSnapshot* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__FixedUpdateNetworkExecutionCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FixedUpdateNetworkExecutionCount_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__FixedUpdateNetworkExecutionTime_k__BackingField() const;

constexpr double_t& __cordl_internal_get__FixedUpdateNetworkExecutionTime_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__RenderExecutionCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__RenderExecutionCount_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__RenderExecutionTime_k__BackingField() const;

constexpr double_t& __cordl_internal_get__RenderExecutionTime_k__BackingField() ;

constexpr void __cordl_internal_set__FixedUpdateNetworkExecutionCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__FixedUpdateNetworkExecutionTime_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__RenderExecutionCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__RenderExecutionTime_k__BackingField(double_t  value) ;

/// @brief Method .ctor, addr 0x601f0b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_FixedUpdateNetworkExecutionCount, addr 0x601f120, size 0x8, virtual false, abstract: false, final false
inline int32_t get_FixedUpdateNetworkExecutionCount() ;

/// [CompilerGenerated]
/// @brief Method get_FixedUpdateNetworkExecutionTime, addr 0x601f140, size 0x8, virtual false, abstract: false, final false
inline double_t get_FixedUpdateNetworkExecutionTime() ;

/// [CompilerGenerated]
/// @brief Method get_RenderExecutionCount, addr 0x601f130, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RenderExecutionCount() ;

/// [CompilerGenerated]
/// @brief Method get_RenderExecutionTime, addr 0x601f150, size 0x8, virtual false, abstract: false, final false
inline double_t get_RenderExecutionTime() ;

/// [CompilerGenerated]
/// @brief Method set_FixedUpdateNetworkExecutionCount, addr 0x601f128, size 0x8, virtual false, abstract: false, final false
inline void set_FixedUpdateNetworkExecutionCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FixedUpdateNetworkExecutionTime, addr 0x601f148, size 0x8, virtual false, abstract: false, final false
inline void set_FixedUpdateNetworkExecutionTime(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RenderExecutionCount, addr 0x601f138, size 0x8, virtual false, abstract: false, final false
inline void set_RenderExecutionCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RenderExecutionTime, addr 0x601f158, size 0x8, virtual false, abstract: false, final false
inline void set_RenderExecutionTime(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BehaviourStatisticsSnapshot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BehaviourStatisticsSnapshot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BehaviourStatisticsSnapshot(BehaviourStatisticsSnapshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BehaviourStatisticsSnapshot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BehaviourStatisticsSnapshot(BehaviourStatisticsSnapshot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19430};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <FixedUpdateNetworkExecutionCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____FixedUpdateNetworkExecutionCount_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <RenderExecutionCount>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____RenderExecutionCount_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <FixedUpdateNetworkExecutionTime>k__BackingField, offset: 0x18, size: 0x8, def value: None
 double_t  ____FixedUpdateNetworkExecutionTime_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <RenderExecutionTime>k__BackingField, offset: 0x20, size: 0x8, def value: None
 double_t  ____RenderExecutionTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::BehaviourStatisticsSnapshot, ____FixedUpdateNetworkExecutionCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::BehaviourStatisticsSnapshot, ____RenderExecutionCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::BehaviourStatisticsSnapshot, ____FixedUpdateNetworkExecutionTime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::BehaviourStatisticsSnapshot, ____RenderExecutionTime_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::BehaviourStatisticsSnapshot) == 0x28, "Size mismatch!");

} // namespace end def Fusion::Statistics
