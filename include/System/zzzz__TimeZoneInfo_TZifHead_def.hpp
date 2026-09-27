#pragma once
// IWYU pragma private; include "System/TimeZoneInfo_TZifHead.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TimeZoneInfo_TZVersion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeZoneInfo_TZifHead)
// Forward declare root types
namespace GlobalNamespace {
struct TimeZoneInfo_TZifHead;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeZoneInfo_TZifHead);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeZoneInfo_TZifHead, "System", "TimeZoneInfo/TZifHead");
// Dependencies System.TimeZoneInfo::TZVersion
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.TimeZoneInfo/TZifHead
struct CORDL_TYPE TimeZoneInfo_TZifHead {
public:
// Declarations
/// @brief Method .ctor, addr 0xa21dcc0, size 0x1ac, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data, int32_t  index) ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo_TZifHead() ;

// Ctor Parameters [CppParam { name: "Magic", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Version", ty: "::GlobalNamespace::TimeZoneInfo_TZVersion", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsGmtCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsStdCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LeapCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TimeCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TypeCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CharCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr TimeZoneInfo_TZifHead(uint32_t  Magic, ::GlobalNamespace::TimeZoneInfo_TZVersion  Version, uint32_t  IsGmtCount, uint32_t  IsStdCount, uint32_t  LeapCount, uint32_t  TimeCount, uint32_t  TypeCount, uint32_t  CharCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5416};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Magic, offset: 0x0, size: 0x4, def value: None
 uint32_t  Magic;

/// @brief Field Version, offset: 0x4, size: 0x1, def value: None
 ::GlobalNamespace::TimeZoneInfo_TZVersion  Version;

/// @brief Field IsGmtCount, offset: 0x8, size: 0x4, def value: None
 uint32_t  IsGmtCount;

/// @brief Field IsStdCount, offset: 0xc, size: 0x4, def value: None
 uint32_t  IsStdCount;

/// @brief Field LeapCount, offset: 0x10, size: 0x4, def value: None
 uint32_t  LeapCount;

/// @brief Field TimeCount, offset: 0x14, size: 0x4, def value: None
 uint32_t  TimeCount;

/// @brief Field TypeCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  TypeCount;

/// @brief Field CharCount, offset: 0x1c, size: 0x4, def value: None
 uint32_t  CharCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TZifHead, Magic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TZifHead, Version) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TZifHead, IsGmtCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TZifHead, IsStdCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TZifHead, LeapCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TZifHead, TimeCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TZifHead, TypeCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TZifHead, CharCount) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeZoneInfo_TZifHead) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
