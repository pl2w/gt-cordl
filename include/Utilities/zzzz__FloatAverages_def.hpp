#pragma once
// IWYU pragma private; include "Utilities/FloatAverages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Utilities/zzzz__AverageCalculator_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatAverages)
// Forward declare root types
namespace Utilities {
class FloatAverages;
}
// Write type traits
MARK_REF_T(::Utilities::FloatAverages*);
DEFINE_IL2CPP_CLASS(::Utilities::FloatAverages*, "Utilities", "FloatAverages");
// Dependencies Utilities.AverageCalculator`1<T>
namespace Utilities {
// Is value type: false
// CS Name: Utilities.FloatAverages
class CORDL_TYPE FloatAverages : public ::Utilities::AverageCalculator_1<float_t> {
public:
// Declarations
/// @brief Method Divide, addr 0x5b71014, size 0xc, virtual true, abstract: false, final false
inline float_t Divide(float_t  value, int32_t  sampleCount) ;

/// @brief Method MinusEquals, addr 0x5b7100c, size 0x8, virtual true, abstract: false, final false
inline float_t MinusEquals(float_t  value, float_t  sample) ;

/// @brief Method Multiply, addr 0x5b71020, size 0xc, virtual true, abstract: false, final false
inline float_t Multiply(float_t  value, int32_t  sampleCount) ;

static inline ::Utilities::FloatAverages* New_ctor(int32_t  sampleCount) ;

/// @brief Method PlusEquals, addr 0x5b71004, size 0x8, virtual true, abstract: false, final false
inline float_t PlusEquals(float_t  value, float_t  sample) ;

/// @brief Method .ctor, addr 0x5b70f9c, size 0x68, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleCount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatAverages() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatAverages", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatAverages(FloatAverages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatAverages", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatAverages(FloatAverages const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3872};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Utilities::FloatAverages) == 0x28, "Size mismatch!");

} // namespace end def Utilities
