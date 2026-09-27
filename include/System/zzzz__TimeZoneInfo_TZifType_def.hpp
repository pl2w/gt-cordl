#pragma once
// IWYU pragma private; include "System/TimeZoneInfo_TZifType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeZoneInfo_TZifType)
// Forward declare root types
namespace GlobalNamespace {
struct TimeZoneInfo_TZifType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeZoneInfo_TZifType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeZoneInfo_TZifType, "System", "TimeZoneInfo/TZifType");
// Dependencies System.TimeSpan
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.TimeZoneInfo/TZifType
struct CORDL_TYPE TimeZoneInfo_TZifType {
public:
// Declarations
/// @brief Method .ctor, addr 0xa21de6c, size 0x13c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data, int32_t  index) ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo_TZifType() ;

// Ctor Parameters [CppParam { name: "UtcOffset", ty: "::System::TimeSpan", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsDst", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AbbreviationIndex", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr TimeZoneInfo_TZifType(::System::TimeSpan  UtcOffset, bool  IsDst, uint8_t  AbbreviationIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5415};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field UtcOffset, offset: 0x0, size: 0x8, def value: None
 ::System::TimeSpan  UtcOffset;

/// @brief Field IsDst, offset: 0x8, size: 0x1, def value: None
 bool  IsDst;

/// @brief Field AbbreviationIndex, offset: 0x9, size: 0x1, def value: None
 uint8_t  AbbreviationIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TZifType, UtcOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TZifType, IsDst) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TZifType, AbbreviationIndex) == 0x9, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeZoneInfo_TZifType) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
