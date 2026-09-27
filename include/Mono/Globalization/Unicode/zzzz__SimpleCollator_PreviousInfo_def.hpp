#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/SimpleCollator_PreviousInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleCollator_PreviousInfo)
// Forward declare root types
namespace GlobalNamespace {
struct SimpleCollator_PreviousInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimpleCollator_PreviousInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleCollator_PreviousInfo, "Mono.Globalization.Unicode", "SimpleCollator/PreviousInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct CORDL_TYPE SimpleCollator_PreviousInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0xa116d94, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  dummy) ;

// Ctor Parameters []
// @brief default ctor
constexpr SimpleCollator_PreviousInfo() ;

// Ctor Parameters [CppParam { name: "Code", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SortKey", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }]
constexpr SimpleCollator_PreviousInfo(int32_t  Code, uint8_t*  SortKey) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5368};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Code, offset: 0x0, size: 0x4, def value: None
 int32_t  Code;

/// @brief Field SortKey, offset: 0x8, size: 0x8, def value: None
 uint8_t*  SortKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleCollator_PreviousInfo, Code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCollator_PreviousInfo, SortKey) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleCollator_PreviousInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
