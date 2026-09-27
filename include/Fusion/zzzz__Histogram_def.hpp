#pragma once
// IWYU pragma private; include "Fusion/Histogram.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Histogram)
namespace Fusion {
template<typename T>
class RingBuffer_1;
}
namespace GlobalNamespace {
struct Histogram_QuantileEstimator;
}
namespace GlobalNamespace {
struct Histogram___c__DisplayClass26_0;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Fusion {
class Histogram;
}
// Write type traits
MARK_REF_T(::Fusion::Histogram*);
DEFINE_IL2CPP_CLASS(::Fusion::Histogram*, "Fusion", "Histogram");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Histogram
class CORDL_TYPE Histogram : public ::System::Object {
public:
// Declarations
using QuantileEstimator = ::GlobalNamespace::Histogram_QuantileEstimator;

using __c__DisplayClass26_0 = ::GlobalNamespace::Histogram___c__DisplayClass26_0;

 __declspec(property(get=get_Count)) double_t  Count;

/// @brief Field bins, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bins, put=__cordl_internal_set_bins)) ::Fusion::RingBuffer_1<double_t>*  bins;

/// @brief Field count, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) double_t  count;

/// @brief Field maxExp, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxExp, put=__cordl_internal_set_maxExp)) int32_t  maxExp;

/// @brief Field minExp, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_minExp, put=__cordl_internal_set_minExp)) int32_t  minExp;

/// @brief Field resolution, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_resolution, put=__cordl_internal_set_resolution)) int32_t  resolution;

/// @brief Field zeroCount, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_zeroCount, put=__cordl_internal_set_zeroCount)) double_t  zeroCount;

/// @brief Method Base, addr 0x5f9ef08, size 0x8, virtual false, abstract: false, final false
inline double_t Base() ;

/// @brief Method Base, addr 0x5fa0520, size 0x74, virtual false, abstract: false, final false
static inline double_t Base(int32_t  resolution) ;

/// @brief Method BinExponent, addr 0x5f9ef54, size 0xc, virtual false, abstract: false, final false
inline int32_t BinExponent(int32_t  index) ;

/// @brief Method BinIndex, addr 0x5f9f714, size 0x28, virtual false, abstract: false, final false
inline int32_t BinIndex(int32_t  exponent) ;

/// @brief Method BinLowerBound, addr 0x5f9ef60, size 0x10, virtual false, abstract: false, final false
inline double_t BinLowerBound(int32_t  index) ;

/// @brief Method BinMidpoint, addr 0x5f9f9a0, size 0x54, virtual false, abstract: false, final false
inline double_t BinMidpoint(int32_t  index) ;

/// @brief Method Capacity, addr 0x5f9ea08, size 0xa8, virtual false, abstract: false, final false
static inline int32_t Capacity(double_t  contrast, int32_t  resolution) ;

/// @brief Method Clear, addr 0x5f9ef70, size 0x64, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Contrast, addr 0x5f9e8a4, size 0x84, virtual false, abstract: false, final false
static inline double_t Contrast(double_t  min, double_t  max) ;

/// @brief Method CopySign, addr 0x5fa0594, size 0x14, virtual false, abstract: false, final false
static inline double_t CopySign(double_t  x, double_t  s) ;

/// @brief Method Downsample, addr 0x5f9f310, size 0x404, virtual false, abstract: false, final false
inline int32_t Downsample(int32_t  desiredMinExp, int32_t  desiredMaxExp) ;

/// @brief Method Exponent, addr 0x5fa037c, size 0x11c, virtual false, abstract: false, final false
static inline int32_t Exponent(int32_t  resolution, double_t  value) ;

/// @brief Method Exponent, addr 0x5f9f308, size 0x8, virtual false, abstract: false, final false
inline int32_t Exponent(double_t  value) ;

/// @brief Method FrExp, addr 0x5fa05a8, size 0x118, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<double_t,int32_t> FrExp(double_t  value) ;

/// @brief Method LowerBound, addr 0x5fa0498, size 0x88, virtual false, abstract: false, final false
static inline double_t LowerBound(int32_t  resolution, int32_t  exp) ;

/// @brief Method MaxRelativeQuantileError, addr 0x5f9ef38, size 0x1c, virtual false, abstract: false, final false
inline double_t MaxRelativeQuantileError() ;

/// @brief Method MaxRelativeQuantileError, addr 0x5fa0364, size 0x18, virtual false, abstract: false, final false
static inline double_t MaxRelativeQuantileError(int32_t  resolution) ;

/// @brief Method MaxRelativeSampleError, addr 0x5f9ef10, size 0x28, virtual false, abstract: false, final false
inline double_t MaxRelativeSampleError() ;

/// @brief Method MaxRelativeSampleError, addr 0x5fa0340, size 0x24, virtual false, abstract: false, final false
static inline double_t MaxRelativeSampleError(int32_t  resolution) ;

/// @brief Method Mean, addr 0x5f9f850, size 0x150, virtual false, abstract: false, final false
inline double_t Mean() ;

/// @brief Method MeanGeometric, addr 0x5f9f9f4, size 0x1b0, virtual false, abstract: false, final false
inline double_t MeanGeometric() ;

/// @brief Method MeanHarmonic, addr 0x5f9fba4, size 0x160, virtual false, abstract: false, final false
inline double_t MeanHarmonic() ;

static inline ::Fusion::Histogram* New_ctor() ;

static inline ::Fusion::Histogram* New_ctor(int32_t  capacity) ;

static inline ::Fusion::Histogram* New_ctor(double_t  contrast, int32_t  resolution) ;

static inline ::Fusion::Histogram* New_ctor(double_t  min, double_t  max, double_t  error) ;

/// @brief Method Normalize, addr 0x5f9f73c, size 0x10, virtual false, abstract: false, final false
inline void Normalize() ;

/// @brief Method Print, addr 0x5f9eab0, size 0x458, virtual false, abstract: false, final false
inline void Print() ;

/// @brief Method Quantile, addr 0x5f9fe7c, size 0x8, virtual false, abstract: false, final false
inline double_t Quantile(double_t  fraction) ;

/// @brief Method QuantileWithEstimator, addr 0x5f9fe84, size 0x494, virtual false, abstract: false, final false
inline double_t QuantileWithEstimator(double_t  fraction, ::GlobalNamespace::Histogram_QuantileEstimator  estimator) ;

/// @brief Method Record, addr 0x5f9efd4, size 0x8, virtual false, abstract: false, final false
inline void Record(double_t  value) ;

/// @brief Method Record, addr 0x5f9efdc, size 0x32c, virtual false, abstract: false, final false
inline void Record(double_t  value, double_t  count) ;

/// @brief Method Rescale, addr 0x5f9f74c, size 0x104, virtual false, abstract: false, final false
inline void Rescale(double_t  scaleFactor) ;

/// @brief Method Resolution, addr 0x5f9e928, size 0xa4, virtual false, abstract: false, final false
static inline int32_t Resolution(double_t  error) ;

/// @brief Method Variance, addr 0x5f9fd04, size 0x178, virtual false, abstract: false, final false
inline double_t Variance() ;

/// [CompilerGenerated]
/// @brief Method <QuantileWithEstimator>g__Upsample|26_0, addr 0x5fa0318, size 0x28, virtual false, abstract: false, final false
static inline double_t _QuantileWithEstimator_g__Upsample_26_0(double_t  cutCount, ::by_ref<::GlobalNamespace::Histogram___c__DisplayClass26_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Fusion::RingBuffer_1<double_t>* const& __cordl_internal_get_bins() const;

constexpr ::Fusion::RingBuffer_1<double_t>*& __cordl_internal_get_bins() ;

constexpr double_t const& __cordl_internal_get_count() const;

constexpr double_t& __cordl_internal_get_count() ;

constexpr int32_t const& __cordl_internal_get_maxExp() const;

constexpr int32_t& __cordl_internal_get_maxExp() ;

constexpr int32_t const& __cordl_internal_get_minExp() const;

constexpr int32_t& __cordl_internal_get_minExp() ;

constexpr int32_t const& __cordl_internal_get_resolution() const;

constexpr int32_t& __cordl_internal_get_resolution() ;

constexpr double_t const& __cordl_internal_get_zeroCount() const;

constexpr double_t& __cordl_internal_get_zeroCount() ;

constexpr void __cordl_internal_set_bins(::Fusion::RingBuffer_1<double_t>*  value) ;

constexpr void __cordl_internal_set_count(double_t  value) ;

constexpr void __cordl_internal_set_maxExp(int32_t  value) ;

constexpr void __cordl_internal_set_minExp(int32_t  value) ;

constexpr void __cordl_internal_set_resolution(int32_t  value) ;

constexpr void __cordl_internal_set_zeroCount(double_t  value) ;

/// @brief Method .ctor, addr 0x5f9e6fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f9e704, size 0x158, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x5f9e9cc, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(double_t  contrast, int32_t  resolution) ;

/// @brief Method .ctor, addr 0x5f9e85c, size 0x48, virtual false, abstract: false, final false
inline void _ctor(double_t  min, double_t  max, double_t  error) ;

/// @brief Method get_Count, addr 0x5f9e6f4, size 0x8, virtual false, abstract: false, final false
inline double_t get_Count() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Histogram() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Histogram", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Histogram(Histogram && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Histogram", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Histogram(Histogram const& ) = delete;

/// @brief Field MaxCapacity offset 0xffffffff size 0x4
static constexpr int32_t  MaxCapacity{static_cast<int32_t>(0x800)};

/// @brief Field MaxResolution offset 0xffffffff size 0x4
static constexpr int32_t  MaxResolution{static_cast<int32_t>(0x14)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19047};

/// @brief Field resolution, offset: 0x10, size: 0x4, def value: None
 int32_t  ___resolution;

/// @brief Field minExp, offset: 0x14, size: 0x4, def value: None
 int32_t  ___minExp;

/// @brief Field maxExp, offset: 0x18, size: 0x4, def value: None
 int32_t  ___maxExp;

/// @brief Field count, offset: 0x20, size: 0x8, def value: None
 double_t  ___count;

/// @brief Field zeroCount, offset: 0x28, size: 0x8, def value: None
 double_t  ___zeroCount;

/// @brief Field bins, offset: 0x30, size: 0x8, def value: None
 ::Fusion::RingBuffer_1<double_t>*  ___bins;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Histogram, ___resolution) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Histogram, ___minExp) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::Histogram, ___maxExp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Histogram, ___count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Histogram, ___zeroCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Histogram, ___bins) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::Histogram) == 0x38, "Size mismatch!");

} // namespace end def Fusion
