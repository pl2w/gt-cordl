#pragma once
// IWYU pragma private; include "Utilities/DoubleAverages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Utilities/zzzz__AverageCalculator_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DoubleAverages)
// Forward declare root types
namespace Utilities {
class DoubleAverages;
}
// Write type traits
MARK_REF_T(::Utilities::DoubleAverages*);
DEFINE_IL2CPP_CLASS(::Utilities::DoubleAverages*, "Utilities", "DoubleAverages");
// Dependencies Utilities.AverageCalculator`1<T>
namespace Utilities {
// Is value type: false
// CS Name: Utilities.DoubleAverages
class CORDL_TYPE DoubleAverages : public ::Utilities::AverageCalculator_1<double_t> {
public:
// Declarations
/// @brief Method Divide, addr 0x5b70f84, size 0xc, virtual true, abstract: false, final false
inline double_t Divide(double_t  value, int32_t  sampleCount) ;

/// @brief Method MinusEquals, addr 0x5b70f7c, size 0x8, virtual true, abstract: false, final false
inline double_t MinusEquals(double_t  value, double_t  sample) ;

/// @brief Method Multiply, addr 0x5b70f90, size 0xc, virtual true, abstract: false, final false
inline double_t Multiply(double_t  value, int32_t  sampleCount) ;

static inline ::Utilities::DoubleAverages* New_ctor(int32_t  sampleCount) ;

/// @brief Method PlusEquals, addr 0x5b70f74, size 0x8, virtual true, abstract: false, final false
inline double_t PlusEquals(double_t  value, double_t  sample) ;

/// @brief Method .ctor, addr 0x5b70f0c, size 0x68, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleCount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DoubleAverages() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DoubleAverages", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DoubleAverages(DoubleAverages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DoubleAverages", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DoubleAverages(DoubleAverages const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3871};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Utilities::DoubleAverages) == 0x30, "Size mismatch!");

} // namespace end def Utilities
