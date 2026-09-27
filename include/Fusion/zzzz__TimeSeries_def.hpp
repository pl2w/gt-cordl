#pragma once
// IWYU pragma private; include "Fusion/TimeSeries.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSeries)
namespace Fusion {
template<typename T>
class RingBuffer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Fusion {
class TimeSeries;
}
// Write type traits
MARK_REF_T(::Fusion::TimeSeries*);
DEFINE_IL2CPP_CLASS(::Fusion::TimeSeries*, "Fusion", "TimeSeries");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.TimeSeries
class CORDL_TYPE TimeSeries : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Avg)) double_t  Avg;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Dev)) double_t  Dev;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsFull)) bool  IsFull;

 __declspec(property(get=get_Latest)) double_t  Latest;

 __declspec(property(get=get_Max)) double_t  Max;

 __declspec(property(get=get_MeanAbsDev)) double_t  MeanAbsDev;

 __declspec(property(get=get_Median)) double_t  Median;

 __declspec(property(get=get_MedianAbsDev)) double_t  MedianAbsDev;

 __declspec(property(get=get_Min)) double_t  Min;

 __declspec(property(get=get_Var)) double_t  Var;

/// @brief Field _mean, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__mean, put=__cordl_internal_set__mean)) double_t  _mean;

/// @brief Field _samples, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__samples, put=__cordl_internal_set__samples)) ::Fusion::RingBuffer_1<double_t>*  _samples;

/// @brief Field _varSum, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__varSum, put=__cordl_internal_set__varSum)) double_t  _varSum;

/// @brief Method Add, addr 0x5fa72dc, size 0x164, virtual false, abstract: false, final false
inline void Add(double_t  value) ;

/// @brief Method Clear, addr 0x5fa749c, size 0x54, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Fill, addr 0x5fa7440, size 0x5c, virtual false, abstract: false, final false
inline void Fill(double_t  value) ;

/// @brief Method FindMedian, addr 0x5fa7004, size 0xf8, virtual false, abstract: false, final false
static inline double_t FindMedian(::System::Collections::Generic::List_1<double_t>*  list) ;

/// @brief Method FindMedian, addr 0x5fa6d04, size 0x78, virtual false, abstract: false, final false
static inline double_t FindMedian(::System::Collections::Generic::IEnumerable_1<double_t>*  values) ;

/// @brief Method InverseCdfNormal, addr 0x5fa7524, size 0x94, virtual false, abstract: false, final false
static inline double_t InverseCdfNormal(double_t  p) ;

static inline ::Fusion::TimeSeries* New_ctor(int32_t  capacity) ;

/// @brief Method QuantileNormal, addr 0x5fa74f0, size 0x34, virtual false, abstract: false, final false
inline double_t QuantileNormal(double_t  p) ;

/// @brief Method Smoothed, addr 0x5fa70fc, size 0x110, virtual false, abstract: false, final false
inline double_t Smoothed(double_t  alpha) ;

/// [CompilerGenerated]
/// @brief Method <InverseCdfNormal>g__Polynomial|34_0, addr 0x5fa75b8, size 0xc0, virtual false, abstract: false, final false
static inline double_t _InverseCdfNormal_g__Polynomial_34_0(double_t  x) ;

constexpr double_t const& __cordl_internal_get__mean() const;

constexpr double_t& __cordl_internal_get__mean() ;

constexpr ::Fusion::RingBuffer_1<double_t>* const& __cordl_internal_get__samples() const;

constexpr ::Fusion::RingBuffer_1<double_t>*& __cordl_internal_get__samples() ;

constexpr double_t const& __cordl_internal_get__varSum() const;

constexpr double_t& __cordl_internal_get__varSum() ;

constexpr void __cordl_internal_set__mean(double_t  value) ;

constexpr void __cordl_internal_set__samples(::Fusion::RingBuffer_1<double_t>*  value) ;

constexpr void __cordl_internal_set__varSum(double_t  value) ;

/// @brief Method .ctor, addr 0x5fa720c, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Avg, addr 0x5fa6a84, size 0x8, virtual false, abstract: false, final false
inline double_t get_Avg() ;

/// @brief Method get_Capacity, addr 0x5fa692c, size 0x50, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x5fa68dc, size 0x50, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Dev, addr 0x5fa6ad4, size 0x80, virtual false, abstract: false, final false
inline double_t get_Dev() ;

/// @brief Method get_IsEmpty, addr 0x5fa697c, size 0x50, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsFull, addr 0x5fa69cc, size 0x50, virtual false, abstract: false, final false
inline bool get_IsFull() ;

/// @brief Method get_Latest, addr 0x5fa6a1c, size 0x68, virtual false, abstract: false, final false
inline double_t get_Latest() ;

/// @brief Method get_Max, addr 0x5fa6c28, size 0xd4, virtual false, abstract: false, final false
inline double_t get_Max() ;

/// @brief Method get_MeanAbsDev, addr 0x5fa6d7c, size 0xec, virtual false, abstract: false, final false
inline double_t get_MeanAbsDev() ;

/// @brief Method get_Median, addr 0x5fa6cfc, size 0x8, virtual false, abstract: false, final false
inline double_t get_Median() ;

/// @brief Method get_MedianAbsDev, addr 0x5fa6e68, size 0x19c, virtual false, abstract: false, final false
inline double_t get_MedianAbsDev() ;

/// @brief Method get_Min, addr 0x5fa6b54, size 0xd4, virtual false, abstract: false, final false
inline double_t get_Min() ;

/// @brief Method get_Var, addr 0x5fa6a8c, size 0x48, virtual false, abstract: false, final false
inline double_t get_Var() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSeries() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSeries", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSeries(TimeSeries && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSeries", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSeries(TimeSeries const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19110};

/// @brief Field _mean, offset: 0x10, size: 0x8, def value: None
 double_t  ____mean;

/// @brief Field _varSum, offset: 0x18, size: 0x8, def value: None
 double_t  ____varSum;

/// @brief Field _samples, offset: 0x20, size: 0x8, def value: None
 ::Fusion::RingBuffer_1<double_t>*  ____samples;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::TimeSeries, ____mean) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::TimeSeries, ____varSum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::TimeSeries, ____samples) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::TimeSeries) == 0x28, "Size mismatch!");

} // namespace end def Fusion
