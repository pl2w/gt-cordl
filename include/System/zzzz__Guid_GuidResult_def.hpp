#pragma once
// IWYU pragma private; include "System/Guid_GuidResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_GuidParseThrowStyle_def.hpp"
#include "System/zzzz__Guid_ParseFailureKind_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Guid_GuidResult)
namespace GlobalNamespace {
struct Guid_GuidParseThrowStyle;
}
namespace GlobalNamespace {
struct Guid_ParseFailureKind;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct Guid_GuidResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Guid_GuidResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Guid_GuidResult, "System", "Guid/GuidResult");
// Dependencies System.Guid, System.Guid::GuidParseThrowStyle, System.Guid::ParseFailureKind
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Guid/GuidResult
struct CORDL_TYPE Guid_GuidResult {
public:
// Declarations
/// @brief Method GetGuidParseException, addr 0xa2d5a64, size 0x184, virtual false, abstract: false, final false
inline ::System::Exception* GetGuidParseException() ;

/// @brief Method Init, addr 0xa2d802c, size 0x8, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::Guid_GuidParseThrowStyle  canThrow) ;

/// @brief Method SetFailure, addr 0xa2d5fd4, size 0x10, virtual false, abstract: false, final false
inline void SetFailure(::GlobalNamespace::Guid_ParseFailureKind  failure, ::StringW  failureMessageID) ;

/// @brief Method SetFailure, addr 0xa2d6ea4, size 0xc, virtual false, abstract: false, final false
inline void SetFailure(::GlobalNamespace::Guid_ParseFailureKind  failure, ::StringW  failureMessageID, ::System::Object*  failureMessageFormatArgument) ;

/// @brief Method SetFailure, addr 0xa2d6afc, size 0x9c, virtual false, abstract: false, final false
inline void SetFailure(::GlobalNamespace::Guid_ParseFailureKind  failure, ::StringW  failureMessageID, ::System::Object*  failureMessageFormatArgument, ::StringW  failureArgumentName, ::System::Exception*  innerException) ;

/// @brief Method SetFailure, addr 0xa2d72a8, size 0x10, virtual false, abstract: false, final false
inline void SetFailure(::System::Exception*  nativeException) ;

// Ctor Parameters []
// @brief default ctor
constexpr Guid_GuidResult() ;

// Ctor Parameters [CppParam { name: "_parsedGuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "_throwStyle", ty: "::GlobalNamespace::Guid_GuidParseThrowStyle", modifiers: "", def_value: None, comment: None }, CppParam { name: "_failure", ty: "::GlobalNamespace::Guid_ParseFailureKind", modifiers: "", def_value: None, comment: None }, CppParam { name: "_failureMessageID", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_failureArgumentName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_innerException", ty: "::System::Exception*", modifiers: "", def_value: None, comment: None }]
constexpr Guid_GuidResult(::System::Guid  _parsedGuid, ::GlobalNamespace::Guid_GuidParseThrowStyle  _throwStyle, ::GlobalNamespace::Guid_ParseFailureKind  _failure, ::StringW  _failureMessageID, ::System::Object*  _failureMessageFormatArgument, ::StringW  _failureArgumentName, ::System::Exception*  _innerException) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5510};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field _parsedGuid, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  _parsedGuid;

/// @brief Field _throwStyle, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::Guid_GuidParseThrowStyle  _throwStyle;

/// @brief Field _failure, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::Guid_ParseFailureKind  _failure;

/// @brief Field _failureMessageID, offset: 0x18, size: 0x8, def value: None
 ::StringW  _failureMessageID;

/// @brief Field _failureMessageFormatArgument, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  _failureMessageFormatArgument;

/// @brief Field _failureArgumentName, offset: 0x28, size: 0x8, def value: None
 ::StringW  _failureArgumentName;

/// @brief Field _innerException, offset: 0x30, size: 0x8, def value: None
 ::System::Exception*  _innerException;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Guid_GuidResult, _parsedGuid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Guid_GuidResult, _throwStyle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Guid_GuidResult, _failure) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Guid_GuidResult, _failureMessageID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Guid_GuidResult, _failureMessageFormatArgument) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Guid_GuidResult, _failureArgumentName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Guid_GuidResult, _innerException) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Guid_GuidResult) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
