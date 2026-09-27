#pragma once
// IWYU pragma private; include "System/Buffers/Text/Utf8Parser_TimeSpanSplitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Utf8Parser_TimeSpanSplitter)
namespace GlobalNamespace {
struct Utf8Parser_ComponentParseResult;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct Utf8Parser_TimeSpanSplitter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Utf8Parser_TimeSpanSplitter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Utf8Parser_TimeSpanSplitter, "System.Buffers.Text", "Utf8Parser/TimeSpanSplitter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Buffers.Text.Utf8Parser/TimeSpanSplitter
struct CORDL_TYPE Utf8Parser_TimeSpanSplitter {
public:
// Declarations
/// @brief Method ParseComponent, addr 0xa27e7b8, size 0x1b8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Utf8Parser_ComponentParseResult ParseComponent(::System::ReadOnlySpan_1<uint8_t>  source, bool  neverParseAsFraction, ::by_ref<int32_t>  srcIndex, ::by_ref<uint32_t>  value) ;

/// @brief Method TrySplitTimeSpan, addr 0xa27e030, size 0x290, virtual false, abstract: false, final false
inline bool TrySplitTimeSpan(::System::ReadOnlySpan_1<uint8_t>  source, bool  periodUsedToSeparateDay, ::by_ref<int32_t>  bytesConsumed) ;

// Ctor Parameters []
// @brief default ctor
constexpr Utf8Parser_TimeSpanSplitter() ;

// Ctor Parameters [CppParam { name: "V1", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "V2", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "V3", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "V4", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "V5", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsNegative", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Separators", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr Utf8Parser_TimeSpanSplitter(uint32_t  V1, uint32_t  V2, uint32_t  V3, uint32_t  V4, uint32_t  V5, bool  IsNegative, uint32_t  Separators) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6981};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field V1, offset: 0x0, size: 0x4, def value: None
 uint32_t  V1;

/// @brief Field V2, offset: 0x4, size: 0x4, def value: None
 uint32_t  V2;

/// @brief Field V3, offset: 0x8, size: 0x4, def value: None
 uint32_t  V3;

/// @brief Field V4, offset: 0xc, size: 0x4, def value: None
 uint32_t  V4;

/// @brief Field V5, offset: 0x10, size: 0x4, def value: None
 uint32_t  V5;

/// @brief Field IsNegative, offset: 0x14, size: 0x1, def value: None
 bool  IsNegative;

/// @brief Field Separators, offset: 0x18, size: 0x4, def value: None
 uint32_t  Separators;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Utf8Parser_TimeSpanSplitter, V1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Utf8Parser_TimeSpanSplitter, V2) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Utf8Parser_TimeSpanSplitter, V3) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Utf8Parser_TimeSpanSplitter, V4) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Utf8Parser_TimeSpanSplitter, V5) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Utf8Parser_TimeSpanSplitter, IsNegative) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Utf8Parser_TimeSpanSplitter, Separators) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Utf8Parser_TimeSpanSplitter) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
