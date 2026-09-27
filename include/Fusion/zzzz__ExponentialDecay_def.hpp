#pragma once
// IWYU pragma private; include "Fusion/ExponentialDecay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ExponentialDecay)
// Forward declare root types
namespace Fusion {
class ExponentialDecay;
}
// Write type traits
MARK_REF_T(::Fusion::ExponentialDecay*);
DEFINE_IL2CPP_CLASS(::Fusion::ExponentialDecay*, "Fusion", "ExponentialDecay");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ExponentialDecay
class CORDL_TYPE ExponentialDecay : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Fraction, put=set_Fraction)) double_t  Fraction;

 __declspec(property(get=get_Rate)) double_t  Rate;

 __declspec(property(get=get_Time, put=set_Time)) double_t  Time;

 __declspec(property(get=get_TimeScale, put=set_TimeScale)) double_t  TimeScale;

/// @brief Field <Fraction>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Fraction_k__BackingField, put=__cordl_internal_set__Fraction_k__BackingField)) double_t  _Fraction_k__BackingField;

/// @brief Field <TimeScale>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__TimeScale_k__BackingField, put=__cordl_internal_set__TimeScale_k__BackingField)) double_t  _TimeScale_k__BackingField;

/// @brief Field <Time>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Time_k__BackingField, put=__cordl_internal_set__Time_k__BackingField)) double_t  _Time_k__BackingField;

/// @brief Method Calculate, addr 0x5f9e5d8, size 0x6c, virtual false, abstract: false, final false
inline double_t Calculate(double_t  elapsed) ;

/// @brief Method CalculateLimit, addr 0x5f9e644, size 0x1c, virtual false, abstract: false, final false
inline double_t CalculateLimit(double_t  period) ;

static inline ::Fusion::ExponentialDecay* New_ctor(double_t  fraction, double_t  time) ;

constexpr double_t const& __cordl_internal_get__Fraction_k__BackingField() const;

constexpr double_t& __cordl_internal_get__Fraction_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__TimeScale_k__BackingField() const;

constexpr double_t& __cordl_internal_get__TimeScale_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__Time_k__BackingField() const;

constexpr double_t& __cordl_internal_get__Time_k__BackingField() ;

constexpr void __cordl_internal_set__Fraction_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__TimeScale_k__BackingField(double_t  value) ;

constexpr void __cordl_internal_set__Time_k__BackingField(double_t  value) ;

/// @brief Method .ctor, addr 0x5f9e660, size 0x94, virtual false, abstract: false, final false
inline void _ctor(double_t  fraction, double_t  time) ;

/// [CompilerGenerated]
/// @brief Method get_Fraction, addr 0x5f9e538, size 0x8, virtual false, abstract: false, final false
inline double_t get_Fraction() ;

/// @brief Method get_Rate, addr 0x5f9e568, size 0x70, virtual false, abstract: false, final false
inline double_t get_Rate() ;

/// [CompilerGenerated]
/// @brief Method get_Time, addr 0x5f9e548, size 0x8, virtual false, abstract: false, final false
inline double_t get_Time() ;

/// [CompilerGenerated]
/// @brief Method get_TimeScale, addr 0x5f9e558, size 0x8, virtual false, abstract: false, final false
inline double_t get_TimeScale() ;

/// [CompilerGenerated]
/// @brief Method set_Fraction, addr 0x5f9e540, size 0x8, virtual false, abstract: false, final false
inline void set_Fraction(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Time, addr 0x5f9e550, size 0x8, virtual false, abstract: false, final false
inline void set_Time(double_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TimeScale, addr 0x5f9e560, size 0x8, virtual false, abstract: false, final false
inline void set_TimeScale(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExponentialDecay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExponentialDecay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExponentialDecay(ExponentialDecay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExponentialDecay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExponentialDecay(ExponentialDecay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19044};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Fraction>k__BackingField, offset: 0x10, size: 0x8, def value: None
 double_t  ____Fraction_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Time>k__BackingField, offset: 0x18, size: 0x8, def value: None
 double_t  ____Time_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <TimeScale>k__BackingField, offset: 0x20, size: 0x8, def value: None
 double_t  ____TimeScale_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::ExponentialDecay, ____Fraction_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::ExponentialDecay, ____Time_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::ExponentialDecay, ____TimeScale_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::ExponentialDecay) == 0x28, "Size mismatch!");

} // namespace end def Fusion
