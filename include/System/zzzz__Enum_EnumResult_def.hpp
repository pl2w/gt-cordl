#pragma once
// IWYU pragma private; include "System/Enum_EnumResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Enum_ParseFailureKind_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Enum_EnumResult)
namespace GlobalNamespace {
struct Enum_ParseFailureKind;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct Enum_EnumResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Enum_EnumResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Enum_EnumResult, "System", "Enum/EnumResult");
// Dependencies System.Enum::ParseFailureKind
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Enum/EnumResult
struct CORDL_TYPE Enum_EnumResult {
public:
// Declarations
/// @brief Method GetEnumParseException, addr 0xa3140c0, size 0x17c, virtual false, abstract: false, final false
inline ::System::Exception* GetEnumParseException() ;

/// @brief Method Init, addr 0xa313a08, size 0x48, virtual false, abstract: false, final false
inline void Init(bool  canMethodThrow) ;

/// @brief Method SetFailure, addr 0xa314298, size 0x6c, virtual false, abstract: false, final false
inline void SetFailure(::GlobalNamespace::Enum_ParseFailureKind  failure, ::StringW  failureMessageID, ::System::Object*  failureMessageFormatArgument) ;

/// @brief Method SetFailure, addr 0xa31423c, size 0x5c, virtual false, abstract: false, final false
inline void SetFailure(::GlobalNamespace::Enum_ParseFailureKind  failure, ::StringW  failureParameter) ;

/// @brief Method SetFailure, addr 0xa314838, size 0x10, virtual false, abstract: false, final false
inline void SetFailure(::System::Exception*  unhandledException) ;

// Ctor Parameters []
// @brief default ctor
constexpr Enum_EnumResult() ;

// Ctor Parameters [CppParam { name: "parsedEnum", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "canThrow", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_failure", ty: "::GlobalNamespace::Enum_ParseFailureKind", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_failureMessageID", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_failureParameter", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_innerException", ty: "::System::Exception*", modifiers: "", def_value: None, comment: None }]
constexpr Enum_EnumResult(::System::Object*  parsedEnum, bool  canThrow, ::GlobalNamespace::Enum_ParseFailureKind  m_failure, ::StringW  m_failureMessageID, ::StringW  m_failureParameter, ::System::Object*  m_failureMessageFormatArgument, ::System::Exception*  m_innerException) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5680};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field parsedEnum, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  parsedEnum;

/// @brief Field canThrow, offset: 0x8, size: 0x1, def value: None
 bool  canThrow;

/// @brief Field m_failure, offset: 0xc, size: 0x4, def value: None
 ::GlobalNamespace::Enum_ParseFailureKind  m_failure;

/// @brief Field m_failureMessageID, offset: 0x10, size: 0x8, def value: None
 ::StringW  m_failureMessageID;

/// @brief Field m_failureParameter, offset: 0x18, size: 0x8, def value: None
 ::StringW  m_failureParameter;

/// @brief Field m_failureMessageFormatArgument, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  m_failureMessageFormatArgument;

/// @brief Field m_innerException, offset: 0x28, size: 0x8, def value: None
 ::System::Exception*  m_innerException;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Enum_EnumResult, parsedEnum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Enum_EnumResult, canThrow) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Enum_EnumResult, m_failure) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Enum_EnumResult, m_failureMessageID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Enum_EnumResult, m_failureParameter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Enum_EnumResult, m_failureMessageFormatArgument) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Enum_EnumResult, m_innerException) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Enum_EnumResult) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
