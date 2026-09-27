#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/SimpleCollator_Context.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleCollator_Context)
namespace System::Globalization {
struct CompareOptions;
}
// Forward declare root types
namespace GlobalNamespace {
struct SimpleCollator_Context;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimpleCollator_Context);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleCollator_Context, "Mono.Globalization.Unicode", "SimpleCollator/Context");
// Dependencies System.Globalization.CompareOptions
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Globalization.Unicode.SimpleCollator/Context
struct CORDL_TYPE SimpleCollator_Context {
public:
// Declarations
/// @brief Method .ctor, addr 0xa1151f8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::System::Globalization::CompareOptions  opt, uint8_t*  alwaysMatchFlags, uint8_t*  neverMatchFlags, uint8_t*  buffer1, uint8_t*  buffer2, uint8_t*  prev1) ;

// Ctor Parameters []
// @brief default ctor
constexpr SimpleCollator_Context() ;

// Ctor Parameters [CppParam { name: "Option", ty: "::System::Globalization::CompareOptions", modifiers: "", def_value: None, comment: None }, CppParam { name: "NeverMatchFlags", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "AlwaysMatchFlags", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Buffer1", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Buffer2", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "PrevCode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PrevSortKey", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }]
constexpr SimpleCollator_Context(::System::Globalization::CompareOptions  Option, uint8_t*  NeverMatchFlags, uint8_t*  AlwaysMatchFlags, uint8_t*  Buffer1, uint8_t*  Buffer2, int32_t  PrevCode, uint8_t*  PrevSortKey) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5367};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field Option, offset: 0x0, size: 0x4, def value: None
 ::System::Globalization::CompareOptions  Option;

/// @brief Field NeverMatchFlags, offset: 0x8, size: 0x8, def value: None
 uint8_t*  NeverMatchFlags;

/// @brief Field AlwaysMatchFlags, offset: 0x10, size: 0x8, def value: None
 uint8_t*  AlwaysMatchFlags;

/// @brief Field Buffer1, offset: 0x18, size: 0x8, def value: None
 uint8_t*  Buffer1;

/// @brief Field Buffer2, offset: 0x20, size: 0x8, def value: None
 uint8_t*  Buffer2;

/// @brief Field PrevCode, offset: 0x28, size: 0x4, def value: None
 int32_t  PrevCode;

/// @brief Field PrevSortKey, offset: 0x30, size: 0x8, def value: None
 uint8_t*  PrevSortKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleCollator_Context, Option) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCollator_Context, NeverMatchFlags) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCollator_Context, AlwaysMatchFlags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCollator_Context, Buffer1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCollator_Context, Buffer2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCollator_Context, PrevCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleCollator_Context, PrevSortKey) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleCollator_Context) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
