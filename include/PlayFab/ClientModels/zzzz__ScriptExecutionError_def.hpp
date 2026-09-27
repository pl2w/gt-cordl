#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ScriptExecutionError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ScriptExecutionError)
// Forward declare root types
namespace PlayFab::ClientModels {
class ScriptExecutionError;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ScriptExecutionError*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ScriptExecutionError*, "PlayFab.ClientModels", "ScriptExecutionError");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ScriptExecutionError
class CORDL_TYPE ScriptExecutionError : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Error, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field Message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

/// @brief Field StackTrace, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_StackTrace, put=__cordl_internal_set_StackTrace)) ::StringW  StackTrace;

static inline ::PlayFab::ClientModels::ScriptExecutionError* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr ::StringW const& __cordl_internal_get_StackTrace() const;

constexpr ::StringW& __cordl_internal_get_StackTrace() ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

constexpr void __cordl_internal_set_StackTrace(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e210, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptExecutionError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptExecutionError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptExecutionError(ScriptExecutionError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptExecutionError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptExecutionError(ScriptExecutionError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20213};

/// @brief Field Error, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Error;

/// @brief Field Message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Message;

/// @brief Field StackTrace, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___StackTrace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ScriptExecutionError, ___Error) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ScriptExecutionError, ___Message) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ScriptExecutionError, ___StackTrace) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ScriptExecutionError) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
