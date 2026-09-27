#pragma once
// IWYU pragma private; include "GlobalNamespace/ErrorContent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ErrorContent)
// Forward declare root types
namespace GlobalNamespace {
class ErrorContent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ErrorContent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ErrorContent*, "", "ErrorContent");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ErrorContent
class CORDL_TYPE ErrorContent : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

 __declspec(property(get=get_Message, put=set_Message)) ::StringW  Message;

/// @brief Field <Error>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field <Message>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Message_k__BackingField, put=__cordl_internal_set__Message_k__BackingField)) ::StringW  _Message_k__BackingField;

static inline ::GlobalNamespace::ErrorContent* New_ctor() ;

/// @brief Method ToString, addr 0x5a26230, size 0x6c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Message_k__BackingField() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Message_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a2629c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0x5a26220, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Error() ;

/// [CompilerGenerated]
/// @brief Method get_Message, addr 0x5a26210, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Message() ;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0x5a26228, size 0x8, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Message, addr 0x5a26218, size 0x8, virtual false, abstract: false, final false
inline void set_Message(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorContent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorContent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorContent(ErrorContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorContent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorContent(ErrorContent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2881};

/// [CompilerGenerated]
/// @brief Field <Message>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Message_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ErrorContent, ____Message_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ErrorContent, ____Error_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ErrorContent) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
