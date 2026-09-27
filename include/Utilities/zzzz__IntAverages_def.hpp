#pragma once
// IWYU pragma private; include "Utilities/IntAverages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Utilities/zzzz__AverageCalculator_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntAverages)
// Forward declare root types
namespace Utilities {
class IntAverages;
}
// Write type traits
MARK_REF_T(::Utilities::IntAverages*);
DEFINE_IL2CPP_CLASS(::Utilities::IntAverages*, "Utilities", "IntAverages");
// Dependencies Utilities.AverageCalculator`1<T>
namespace Utilities {
// Is value type: false
// CS Name: Utilities.IntAverages
class CORDL_TYPE IntAverages : public ::Utilities::AverageCalculator_1<int32_t> {
public:
// Declarations
/// @brief Method Divide, addr 0x5b710b0, size 0x8, virtual true, abstract: false, final false
inline int32_t Divide(int32_t  value, int32_t  samples) ;

/// @brief Method MinusEquals, addr 0x5b710a8, size 0x8, virtual true, abstract: false, final false
inline int32_t MinusEquals(int32_t  value, int32_t  samples) ;

/// @brief Method Multiply, addr 0x5b710b8, size 0x8, virtual true, abstract: false, final false
inline int32_t Multiply(int32_t  value, int32_t  samples) ;

static inline ::Utilities::IntAverages* New_ctor(int32_t  sampleCount) ;

/// @brief Method PlusEquals, addr 0x5b710a0, size 0x8, virtual true, abstract: false, final false
inline int32_t PlusEquals(int32_t  value, int32_t  samples) ;

/// @brief Method .ctor, addr 0x5b71038, size 0x68, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleCount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntAverages() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntAverages", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IntAverages(IntAverages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntAverages", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntAverages(IntAverages const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3874};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Utilities::IntAverages) == 0x28, "Size mismatch!");

} // namespace end def Utilities
