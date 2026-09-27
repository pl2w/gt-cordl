#pragma once
// IWYU pragma private; include "Fusion/Statistics/LagCompensationStatisticsSnapshot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LagCompensationStatisticsSnapshot)
// Forward declare root types
namespace Fusion::Statistics {
class LagCompensationStatisticsSnapshot;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::LagCompensationStatisticsSnapshot*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::LagCompensationStatisticsSnapshot*, "Fusion.Statistics", "LagCompensationStatisticsSnapshot");
// Dependencies System.Object
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.LagCompensationStatisticsSnapshot
class CORDL_TYPE LagCompensationStatisticsSnapshot : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AddOnBVHTime, put=set_AddOnBVHTime)) double_t  AddOnBVHTime;

 __declspec(property(get=get_AddOnBufferTime, put=set_AddOnBufferTime)) double_t  AddOnBufferTime;

 __declspec(property(get=get_AdvanceBufferTime, put=set_AdvanceBufferTime)) double_t  AdvanceBufferTime;

 __declspec(property(get=get_BVHMaxDeep, put=set_BVHMaxDeep)) int32_t  BVHMaxDeep;

 __declspec(property(get=get_BVHNodesCount, put=set_BVHNodesCount)) int32_t  BVHNodesCount;

 __declspec(property(get=get_HitboxesCount, put=set_HitboxesCount)) int32_t  HitboxesCount;

 __declspec(property(get=get_RefitBVHTime, put=set_RefitBVHTime)) double_t  RefitBVHTime;

 __declspec(property(get=get_TotalElapsedTime)) double_t  TotalElapsedTime;

 __declspec(property(get=get_UpdateBVHTime, put=set_UpdateBVHTime)) double_t  UpdateBVHTime;

 __declspec(property(get=get_UpdateBufferTime, put=set_UpdateBufferTime)) double_t  UpdateBufferTime;

/// @brief Field <AddOnBVHTime>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__AddOnBVHTime_k__BackingField, put=__cordl_internal_set__AddOnBVHTime_k__BackingField)) double_t  _AddOnBVHTime_k__BackingField;

/// @brief Field <AddOnBufferTime>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__AddOnBufferTime_k__BackingField, put=__cordl_internal_set__AddOnBufferTime_k__BackingField)) double_t  _AddOnBufferTime_k__BackingField;

/// @brief Field <AdvanceBufferTime>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__AdvanceBufferTime_k__BackingField, put=__cordl_internal_set__AdvanceBufferTime_k__BackingField)) double_t  _AdvanceBufferTime_k__BackingField;

/// @brief Field <BVHMaxDeep>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__BVHMaxDeep_k__BackingField, put=__cordl_internal_set__BVHMaxDeep_k__BackingField)) int32_t  _BVHMaxDeep_k__BackingField;

/// @brief Field <BVHNodesCount>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__BVHNodesCount_k__BackingField, put=__cordl_internal_set__BVHNodesCount_k__BackingField)) int32_t  _BVHNodesCount_k__BackingField;

/// @brief Field <HitboxesCount>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__HitboxesCount_k__BackingField, put=__cordl_internal_set__HitboxesCount_k__BackingField)) int32_t  _HitboxesCount_k__BackingField;

/// @brief Field <RefitBVHTime>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__RefitBVHTime_k__BackingField, put=__cordl_internal_set__RefitBVHTime_k__BackingField)) double_t  _RefitBVHTime_k__BackingField;

/// @brief Field <UpdateBVHTime>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpdateBVHTime_k__BackingField, put=__cordl_internal_set__UpdateBVHTime_k__BackingField)) double_t  _UpdateBVHTime_k__BackingField;

/// @brief Field <UpdateBufferTime>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpdateBufferTime_k__BackingField, put=__cordl_internal_set__UpdateBufferTime_k__BackingField)) double_t  _UpdateBufferTime_k__BackingField;

/// @brief Method ClearSnapshot, addr 0x601fc18, size 0x18, virtual false, abstract: false, final false
inline void ClearSnapshot() ;

/// @brief Method CopyFromSnapshot, addr 0x601fbe0, size 0x38, virtual false, abstract: false, final false
inline void CopyFromSnapshot(::Fusion::Statistics::LagCompensationStatisticsSnapshot*  snapshot) ;

static inline ::Fusion::Statistics::LagCompensationStatisticsSnapshot* New_ctor() ;

/// [Conditional("DEBUG")]
/// @brief Method SetAddOnBVHTime, addr 0x601b7a4, size 0x20, virtual false, abstract: false, final false
inline void SetAddOnBVHTime(double_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method SetAddOnBufferTime, addr 0x601b784, size 0x20, virtual false, abstract: false, final false
inline void SetAddOnBufferTime(double_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method SetAdvanceBufferTime, addr 0x601fd44, size 0x20, virtual false, abstract: false, final false
inline void SetAdvanceBufferTime(double_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method SetBVHMaxDeep, addr 0x601fce4, size 0x20, virtual false, abstract: false, final false
inline void SetBVHMaxDeep(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method SetBVHNodeCount, addr 0x601fd04, size 0x20, virtual false, abstract: false, final false
inline void SetBVHNodeCount(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method SetHitboxesCount, addr 0x601fd24, size 0x20, virtual false, abstract: false, final false
inline void SetHitboxesCount(int32_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method SetRefitBVHTime, addr 0x601fd64, size 0x20, virtual false, abstract: false, final false
inline void SetRefitBVHTime(double_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method SetUpdateBVHTime, addr 0x601bb10, size 0x20, virtual false, abstract: false, final false
inline void SetUpdateBVHTime(double_t  value, bool  overrideValue) ;

/// [Conditional("DEBUG")]
/// @brief Method SetUpdateBufferTime, addr 0x601baf0, size 0x20, virtual false, abstract: false, final false
inline void SetUpdateBufferTime(double_t  value, bool  overrideValue) ;

constexpr double_t const& __cordl_internal_get__AddOnBVHTime_k__BackingField() const;

constexpr double_t& __cordl_internal_get__AddOnBVHTime_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__AddOnBufferTime_k__BackingField() const;

constexpr double_t& __cordl_internal_get__AddOnBufferTime_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__AdvanceBufferTime_k__BackingField() const;

constexpr double_t& __cordl_internal_get__AdvanceBufferTime_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__BVHMaxDeep_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__BVHMaxDeep_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__BVHNodesCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__BVHNodesCount_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__HitboxesCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__HitboxesCount_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__RefitBVHTime_k__BackingField() const;

constexpr double_t& __cordl_internal_get__RefitBVHTime_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__UpdateBVHTime_k__BackingField() const;

constexpr double_t& __cordl_internal_get__UpdateBVHTime_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__UpdateBufferTime_k__BackingField() const;

constexpr double_t& __cordl_internal_get__UpdateBufferTime_k__BackingField() ;

constexpr void __cordl_internal_set__AddOnBVHTime_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__AddOnBufferTime_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__AdvanceBufferTime_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__BVHMaxDeep_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__BVHNodesCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__HitboxesCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__RefitBVHTime_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__UpdateBVHTime_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__UpdateBufferTime_k__BackingField(double_t  value) ;

/// @brief Method .ctor, addr 0x601fb98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_AddOnBVHTime, addr 0x601fc94, size 0x8, virtual false, abstract: false, final false
inline double_t get_AddOnBVHTime() ;

/// [CompilerGenerated]
/// @brief Method get_AddOnBufferTime, addr 0x601fc84, size 0x8, virtual false, abstract: false, final false
inline double_t get_AddOnBufferTime() ;

/// [CompilerGenerated]
/// @brief Method get_AdvanceBufferTime, addr 0x601fcc4, size 0x8, virtual false, abstract: false, final false
inline double_t get_AdvanceBufferTime() ;

/// [CompilerGenerated]
/// @brief Method get_BVHMaxDeep, addr 0x601fc54, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BVHMaxDeep() ;

/// [CompilerGenerated]
/// @brief Method get_BVHNodesCount, addr 0x601fc64, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BVHNodesCount() ;

/// [CompilerGenerated]
/// @brief Method get_HitboxesCount, addr 0x601fc74, size 0x8, virtual false, abstract: false, final false
inline int32_t get_HitboxesCount() ;

/// [CompilerGenerated]
/// @brief Method get_RefitBVHTime, addr 0x601fcd4, size 0x8, virtual false, abstract: false, final false
inline double_t get_RefitBVHTime() ;

/// @brief Method get_TotalElapsedTime, addr 0x601fc30, size 0x24, virtual false, abstract: false, final false
inline double_t get_TotalElapsedTime() ;

/// [CompilerGenerated]
/// @brief Method get_UpdateBVHTime, addr 0x601fca4, size 0x8, virtual false, abstract: false, final false
inline double_t get_UpdateBVHTime() ;

/// [CompilerGenerated]
/// @brief Method get_UpdateBufferTime, addr 0x601fcb4, size 0x8, virtual false, abstract: false, final false
inline double_t get_UpdateBufferTime() ;

/// [CompilerGenerated]
/// @brief Method set_AddOnBVHTime, addr 0x601fc9c, size 0x8, virtual false, abstract: false, final false
inline void set_AddOnBVHTime(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_AddOnBufferTime, addr 0x601fc8c, size 0x8, virtual false, abstract: false, final false
inline void set_AddOnBufferTime(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_AdvanceBufferTime, addr 0x601fccc, size 0x8, virtual false, abstract: false, final false
inline void set_AdvanceBufferTime(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BVHMaxDeep, addr 0x601fc5c, size 0x8, virtual false, abstract: false, final false
inline void set_BVHMaxDeep(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BVHNodesCount, addr 0x601fc6c, size 0x8, virtual false, abstract: false, final false
inline void set_BVHNodesCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_HitboxesCount, addr 0x601fc7c, size 0x8, virtual false, abstract: false, final false
inline void set_HitboxesCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RefitBVHTime, addr 0x601fcdc, size 0x8, virtual false, abstract: false, final false
inline void set_RefitBVHTime(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_UpdateBVHTime, addr 0x601fcac, size 0x8, virtual false, abstract: false, final false
inline void set_UpdateBVHTime(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_UpdateBufferTime, addr 0x601fcbc, size 0x8, virtual false, abstract: false, final false
inline void set_UpdateBufferTime(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LagCompensationStatisticsSnapshot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LagCompensationStatisticsSnapshot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LagCompensationStatisticsSnapshot(LagCompensationStatisticsSnapshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LagCompensationStatisticsSnapshot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LagCompensationStatisticsSnapshot(LagCompensationStatisticsSnapshot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19434};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <BVHMaxDeep>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____BVHMaxDeep_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <BVHNodesCount>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____BVHNodesCount_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <HitboxesCount>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____HitboxesCount_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <AddOnBufferTime>k__BackingField, offset: 0x20, size: 0x8, def value: None
 double_t  ____AddOnBufferTime_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <AddOnBVHTime>k__BackingField, offset: 0x28, size: 0x8, def value: None
 double_t  ____AddOnBVHTime_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <UpdateBVHTime>k__BackingField, offset: 0x30, size: 0x8, def value: None
 double_t  ____UpdateBVHTime_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <UpdateBufferTime>k__BackingField, offset: 0x38, size: 0x8, def value: None
 double_t  ____UpdateBufferTime_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <AdvanceBufferTime>k__BackingField, offset: 0x40, size: 0x8, def value: None
 double_t  ____AdvanceBufferTime_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <RefitBVHTime>k__BackingField, offset: 0x48, size: 0x8, def value: None
 double_t  ____RefitBVHTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::LagCompensationStatisticsSnapshot, ____BVHMaxDeep_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::LagCompensationStatisticsSnapshot, ____BVHNodesCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::LagCompensationStatisticsSnapshot, ____HitboxesCount_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::LagCompensationStatisticsSnapshot, ____AddOnBufferTime_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::LagCompensationStatisticsSnapshot, ____AddOnBVHTime_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::LagCompensationStatisticsSnapshot, ____UpdateBVHTime_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::LagCompensationStatisticsSnapshot, ____UpdateBufferTime_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::LagCompensationStatisticsSnapshot, ____AdvanceBufferTime_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::LagCompensationStatisticsSnapshot, ____RefitBVHTime_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::LagCompensationStatisticsSnapshot) == 0x50, "Size mismatch!");

} // namespace end def Fusion::Statistics
