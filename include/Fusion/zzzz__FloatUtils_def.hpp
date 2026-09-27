#pragma once
// IWYU pragma private; include "Fusion/FloatUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatUtils)
// Forward declare root types
namespace Fusion {
class FloatUtils;
}
// Write type traits
MARK_REF_T(::Fusion::FloatUtils*);
DEFINE_IL2CPP_CLASS(::Fusion::FloatUtils*, "Fusion", "FloatUtils");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FloatUtils
class CORDL_TYPE FloatUtils : public ::System::Object {
public:
// Declarations
/// @brief Method Compress, addr 0x5f9e298, size 0x9c, virtual false, abstract: false, final false
static inline int32_t Compress(float_t  f, int32_t  accuracy) ;

/// @brief Method Decompress, addr 0x5f9e334, size 0x70, virtual false, abstract: false, final false
static inline float_t Decompress(int32_t  value, float_t  accuracy) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatUtils(FloatUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatUtils(FloatUtils const& ) = delete;

/// @brief Field DEFAULT_ACCURACY offset 0xffffffff size 0x4
static constexpr int32_t  DEFAULT_ACCURACY{static_cast<int32_t>(0x400)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19042};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FloatUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
