#pragma once
// IWYU pragma private; include "System/Collections/Generic/HashSet`1_ElementCount.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashSet`1_ElementCount)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct HashSet_1_ElementCount;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::HashSet_1_ElementCount);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::HashSet_1_ElementCount, "System.Collections.Generic", "HashSet`1/ElementCount");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Collections.Generic.HashSet`1/ElementCount<T>
struct CORDL_TYPE HashSet_1_ElementCount {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HashSet_1_ElementCount() ;

// Ctor Parameters [CppParam { name: "uniqueCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "unfoundCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HashSet_1_ElementCount(int32_t  uniqueCount, int32_t  unfoundCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24162};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field uniqueCount, offset: 0x0, size: 0x4, def value: None
 int32_t  uniqueCount;

/// @brief Field unfoundCount, offset: 0x4, size: 0x4, def value: None
 int32_t  unfoundCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
