#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeUtility_AlignOfHelper_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeUtility_AlignOfHelper_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct UnsafeUtility_AlignOfHelper_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::UnsafeUtility_AlignOfHelper_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::UnsafeUtility_AlignOfHelper_1, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility/AlignOfHelper`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<T>
struct CORDL_TYPE UnsafeUtility_AlignOfHelper_1 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeUtility_AlignOfHelper_1() ;

// Ctor Parameters [CppParam { name: "dummy", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeUtility_AlignOfHelper_1(uint8_t  dummy, T  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14753};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field dummy, offset: 0x0, size: 0x1, def value: None
 uint8_t  dummy;

/// @brief Field data, offset: 0x8, size: 0x8, def value: None
 T  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
