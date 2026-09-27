#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LogStatement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LogStatement)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class LogStatement;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::LogStatement*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::LogStatement*, "PlayFab.ClientModels", "LogStatement");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.LogStatement
class CORDL_TYPE LogStatement : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Object*  Data;

/// @brief Field Level, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Level, put=__cordl_internal_set_Level)) ::StringW  Level;

/// @brief Field Message, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

static inline ::PlayFab::ClientModels::LogStatement* New_ctor() ;

constexpr ::System::Object* const& __cordl_internal_get_Data() const;

constexpr ::System::Object*& __cordl_internal_get_Data() ;

constexpr ::StringW const& __cordl_internal_get_Level() const;

constexpr ::StringW& __cordl_internal_get_Level() ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr void __cordl_internal_set_Data(::System::Object*  value) ;

constexpr void __cordl_internal_set_Level(::StringW  value) ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e0a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogStatement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogStatement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogStatement(LogStatement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogStatement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogStatement(LogStatement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20164};

/// @brief Field Data, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___Data;

/// @brief Field Level, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Level;

/// @brief Field Message, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::LogStatement, ___Data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LogStatement, ___Level) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::LogStatement, ___Message) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::LogStatement) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
