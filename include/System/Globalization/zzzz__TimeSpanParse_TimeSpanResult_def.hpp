#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse_TimeSpanResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TimeSpanParse_TimeSpanResult)
namespace GlobalNamespace {
struct TimeSpanParse_ParseFailureKind;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct TimeSpanParse_TimeSpanResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeSpanParse_TimeSpanResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeSpanParse_TimeSpanResult, "System.Globalization", "TimeSpanParse/TimeSpanResult");
// Dependencies System.TimeSpan
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/TimeSpanResult
struct CORDL_TYPE TimeSpanParse_TimeSpanResult {
public:
// Declarations
/// @brief Method SetFailure, addr 0xa238180, size 0x128, virtual false, abstract: false, final false
inline bool SetFailure(::GlobalNamespace::TimeSpanParse_ParseFailureKind  kind, ::StringW  resourceKey, ::System::Object*  messageArgument, ::StringW  argumentName) ;

/// @brief Method .ctor, addr 0xa237dec, size 0xc, virtual false, abstract: false, final false
inline void _ctor(bool  throwOnFailure) ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanParse_TimeSpanResult() ;

// Ctor Parameters [CppParam { name: "parsedTimeSpan", ty: "::System::TimeSpan", modifiers: "", def_value: None, comment: None }, CppParam { name: "_throwOnFailure", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr TimeSpanParse_TimeSpanResult(::System::TimeSpan  parsedTimeSpan, bool  _throwOnFailure) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6741};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field parsedTimeSpan, offset: 0x0, size: 0x8, def value: None
 ::System::TimeSpan  parsedTimeSpan;

/// @brief Field _throwOnFailure, offset: 0x8, size: 0x1, def value: None
 bool  _throwOnFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanResult, parsedTimeSpan) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TimeSpanResult, _throwOnFailure) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeSpanParse_TimeSpanResult) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
