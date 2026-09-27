#pragma once
// IWYU pragma private; include "Utilities/AverageCalculator_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AverageCalculator_1)
// Forward declare root types
namespace Utilities {
template<typename T>
class AverageCalculator_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Utilities::AverageCalculator_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Utilities::AverageCalculator_1, "Utilities", "AverageCalculator`1");
// Dependencies System.Object
namespace Utilities {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Utilities.AverageCalculator`1<T>
class CORDL_TYPE AverageCalculator_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Average)) T  Average;

/// @brief Field m_average, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_average, put=__cordl_internal_set_m_average)) T  m_average;

/// @brief Field m_index, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_index, put=__cordl_internal_set_m_index)) int32_t  m_index;

/// @brief Field m_samples, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_samples, put=__cordl_internal_set_m_samples)) ::ArrayW<T>  m_samples;

/// @brief Field m_total, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_total, put=__cordl_internal_set_m_total)) T  m_total;

/// @brief Method AddSample, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AddSample(T  sample) ;

/// @brief Method DefaultTypeValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T DefaultTypeValue() ;

/// @brief Method Divide, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T Divide(T  value, int32_t  sampleCount) ;

/// @brief Method MinusEquals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T MinusEquals(T  value, T  sample) ;

/// @brief Method Multiply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T Multiply(T  value, int32_t  sampleCount) ;

static inline ::Utilities::AverageCalculator_1<T>* New_ctor(int32_t  sampleCount) ;

/// @brief Method PlusEquals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T PlusEquals(T  value, T  sample) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

constexpr T const& __cordl_internal_get_m_average() const;

constexpr T& __cordl_internal_get_m_average() ;

constexpr int32_t const& __cordl_internal_get_m_index() const;

constexpr int32_t& __cordl_internal_get_m_index() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_m_samples() const;

constexpr ::ArrayW<T>& __cordl_internal_get_m_samples() ;

constexpr T const& __cordl_internal_get_m_total() const;

constexpr T& __cordl_internal_get_m_total() ;

constexpr void __cordl_internal_set_m_average(T  value) ;

constexpr void __cordl_internal_set_m_index(int32_t  value) ;

constexpr void __cordl_internal_set_m_samples(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_m_total(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleCount) ;

/// @brief Method get_Average, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Average() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AverageCalculator_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AverageCalculator_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AverageCalculator_1(AverageCalculator_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AverageCalculator_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AverageCalculator_1(AverageCalculator_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3870};

/// @brief Field m_samples, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___m_samples;

/// @brief Field m_average, offset: 0x18, size: 0x8, def value: None
 T  ___m_average;

/// @brief Field m_total, offset: 0x20, size: 0x8, def value: None
 T  ___m_total;

/// @brief Field m_index, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Utilities
