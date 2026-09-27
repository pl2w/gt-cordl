#pragma once
// IWYU pragma private; include "Fusion/StartGameResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__ShutdownReason_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StartGameResult)
namespace Fusion {
struct ShutdownReason;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Fusion {
class StartGameResult;
}
// Write type traits
MARK_REF_T(::Fusion::StartGameResult*);
DEFINE_IL2CPP_CLASS(::Fusion::StartGameResult*, "Fusion", "StartGameResult");
// Dependencies Fusion.ShutdownReason, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.StartGameResult
class CORDL_TYPE StartGameResult : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ErrorMessage, put=set_ErrorMessage)) ::StringW  ErrorMessage;

 __declspec(property(get=get_Ok)) bool  Ok;

 __declspec(property(get=get_ShutdownReason, put=set_ShutdownReason)) ::Fusion::ShutdownReason  ShutdownReason;

 __declspec(property(get=get_StackTrace, put=set_StackTrace)) ::StringW  StackTrace;

/// @brief Field <ErrorMessage>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ErrorMessage_k__BackingField, put=__cordl_internal_set__ErrorMessage_k__BackingField)) ::StringW  _ErrorMessage_k__BackingField;

/// @brief Field <ShutdownReason>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShutdownReason_k__BackingField, put=__cordl_internal_set__ShutdownReason_k__BackingField)) ::Fusion::ShutdownReason  _ShutdownReason_k__BackingField;

/// @brief Field <StackTrace>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__StackTrace_k__BackingField, put=__cordl_internal_set__StackTrace_k__BackingField)) ::StringW  _StackTrace_k__BackingField;

/// @brief Method BuildGameResultFromException, addr 0x5fd4ee0, size 0x2ac, virtual false, abstract: false, final false
static inline ::Fusion::StartGameResult* BuildGameResultFromException(::System::Exception*  e) ;

static inline ::Fusion::StartGameResult* New_ctor(::Fusion::ShutdownReason  reason, ::StringW  message, ::StringW  stackTrace) ;

/// @brief Method ToString, addr 0x5fdccbc, size 0x324, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__ErrorMessage_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ErrorMessage_k__BackingField() ;

constexpr ::Fusion::ShutdownReason const& __cordl_internal_get__ShutdownReason_k__BackingField() const;

constexpr ::Fusion::ShutdownReason& __cordl_internal_get__ShutdownReason_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__StackTrace_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__StackTrace_k__BackingField() ;

constexpr void __cordl_internal_set__ErrorMessage_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ShutdownReason_k__BackingField(::Fusion::ShutdownReason  value) ;

constexpr void __cordl_internal_set__StackTrace_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5fd4530, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Fusion::ShutdownReason  reason, ::StringW  message, ::StringW  stackTrace) ;

/// [CompilerGenerated]
/// @brief Method get_ErrorMessage, addr 0x5fdcc9c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ErrorMessage() ;

/// @brief Method get_Ok, addr 0x5fdcc7c, size 0x10, virtual false, abstract: false, final false
inline bool get_Ok() ;

/// [CompilerGenerated]
/// @brief Method get_ShutdownReason, addr 0x5fdcc8c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::ShutdownReason get_ShutdownReason() ;

/// [CompilerGenerated]
/// @brief Method get_StackTrace, addr 0x5fdccac, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_StackTrace() ;

/// [CompilerGenerated]
/// @brief Method set_ErrorMessage, addr 0x5fdcca4, size 0x8, virtual false, abstract: false, final false
inline void set_ErrorMessage(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ShutdownReason, addr 0x5fdcc94, size 0x8, virtual false, abstract: false, final false
inline void set_ShutdownReason(::Fusion::ShutdownReason  value) ;

/// [CompilerGenerated]
/// @brief Method set_StackTrace, addr 0x5fdccb4, size 0x8, virtual false, abstract: false, final false
inline void set_StackTrace(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StartGameResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StartGameResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StartGameResult(StartGameResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StartGameResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StartGameResult(StartGameResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19276};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ShutdownReason>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Fusion::ShutdownReason  ____ShutdownReason_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ErrorMessage>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____ErrorMessage_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <StackTrace>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____StackTrace_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::StartGameResult, ____ShutdownReason_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameResult, ____ErrorMessage_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::StartGameResult, ____StackTrace_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::StartGameResult) == 0x28, "Size mismatch!");

} // namespace end def Fusion
