#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsGraphBase_FusionStatBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionStatsGraphBase_FusionStatBuffer)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
struct FusionStatsGraphBase_FusionStatBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer, "Fusion.Statistics", "FusionStatsGraphBase/FusionStatBuffer");
// [DefaultMember("Item")]
// Dependencies System.DateTime, System.TimeSpan
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Statistics.FusionStatsGraphBase/FusionStatBuffer
struct CORDL_TYPE FusionStatsGraphBase_FusionStatBuffer {
public:
// Declarations
 __declspec(property(get=get_AverageValue)) float_t  AverageValue;

 __declspec(property(get=get_Index)) int32_t  Index;

 __declspec(property(get=get_Item)) float_t  Item[];

 __declspec(property(get=get_LatestValue)) float_t  LatestValue;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_MaxValue)) float_t  MaxValue;

/// @brief Method Add, addr 0x60f7b4c, size 0xe8, virtual false, abstract: false, final false
inline void Add(float_t  value, ::by_ref<::System::DateTime>  now) ;

/// @brief Method AddOnBuffer, addr 0x60f7c34, size 0xfc, virtual false, abstract: false, final false
inline void AddOnBuffer(float_t  value) ;

/// @brief Method CalculateMax, addr 0x60f7d30, size 0x64, virtual false, abstract: false, final false
inline float_t CalculateMax() ;

/// @brief Method SetAccumulateTime, addr 0x60f7aa8, size 0x6c, virtual false, abstract: false, final false
inline void SetAccumulateTime(int32_t  accumulateTimeMs) ;

/// @brief Method SetIgnoreZeroOnAverage, addr 0x60f7b14, size 0x8, virtual false, abstract: false, final false
inline void SetIgnoreZeroOnAverage(bool  value) ;

/// @brief Method .ctor, addr 0x60f79a4, size 0x104, virtual false, abstract: false, final false
inline void _ctor(int32_t  size, bool  ignoreZeroOnAverage, int32_t  accumulateTimeMs) ;

/// @brief Method get_AverageValue, addr 0x60f7de8, size 0x30, virtual false, abstract: false, final false
inline float_t get_AverageValue() ;

/// @brief Method get_Index, addr 0x60f797c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Index() ;

/// @brief Method get_Item, addr 0x60f7b1c, size 0x30, virtual false, abstract: false, final false
inline float_t get_Item(int32_t  index) ;

/// @brief Method get_LatestValue, addr 0x60f7d94, size 0x54, virtual false, abstract: false, final false
inline float_t get_LatestValue() ;

/// @brief Method get_Length, addr 0x60f7984, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_MaxValue, addr 0x60f799c, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxValue() ;

// Ctor Parameters []
// @brief default ctor
constexpr FusionStatsGraphBase_FusionStatBuffer() ;

// Ctor Parameters [CppParam { name: "_buffer", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_zeroCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ignoreZeroOnAverage", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_accumulateTimeSpan", ty: "::System::TimeSpan", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sum", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_max", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_accumulated", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_lastBufferInsertTime", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }]
constexpr FusionStatsGraphBase_FusionStatBuffer(::ArrayW<float_t>  _buffer, int32_t  _index, int32_t  _count, int32_t  _zeroCount, bool  _ignoreZeroOnAverage, ::System::TimeSpan  _accumulateTimeSpan, float_t  _sum, float_t  _max, float_t  _accumulated, ::System::DateTime  _lastBufferInsertTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23490};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field _buffer, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<float_t>  _buffer;

/// @brief Field _index, offset: 0x8, size: 0x4, def value: None
 int32_t  _index;

/// @brief Field _count, offset: 0xc, size: 0x4, def value: None
 int32_t  _count;

/// @brief Field _zeroCount, offset: 0x10, size: 0x4, def value: None
 int32_t  _zeroCount;

/// @brief Field _ignoreZeroOnAverage, offset: 0x14, size: 0x1, def value: None
 bool  _ignoreZeroOnAverage;

/// @brief Field _accumulateTimeSpan, offset: 0x18, size: 0x8, def value: None
 ::System::TimeSpan  _accumulateTimeSpan;

/// @brief Field _sum, offset: 0x20, size: 0x4, def value: None
 float_t  _sum;

/// @brief Field _max, offset: 0x24, size: 0x4, def value: None
 float_t  _max;

/// @brief Field _accumulated, offset: 0x28, size: 0x4, def value: None
 float_t  _accumulated;

/// @brief Field _lastBufferInsertTime, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  _lastBufferInsertTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer, _buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer, _index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer, _count) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer, _zeroCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer, _ignoreZeroOnAverage) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer, _accumulateTimeSpan) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer, _sum) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer, _max) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer, _accumulated) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer, _lastBufferInsertTime) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
