#pragma once
// IWYU pragma private; include "System/ComponentModel/WarningException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WarningException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::ComponentModel {
class WarningException;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::WarningException*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::WarningException*, "System.ComponentModel", "WarningException");
// Dependencies System.SystemException
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.WarningException
class CORDL_TYPE WarningException : public ::System::SystemException {
public:
// Declarations
 __declspec(property(get=get_HelpTopic)) ::StringW  HelpTopic;

 __declspec(property(get=get_HelpUrl)) ::StringW  HelpUrl;

/// @brief Field <HelpTopic>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__HelpTopic_k__BackingField, put=__cordl_internal_set__HelpTopic_k__BackingField)) ::StringW  _HelpTopic_k__BackingField;

/// @brief Field <HelpUrl>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__HelpUrl_k__BackingField, put=__cordl_internal_set__HelpUrl_k__BackingField)) ::StringW  _HelpUrl_k__BackingField;

/// @brief Method GetObjectData, addr 0xad6be38, size 0xac, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::ComponentModel::WarningException* New_ctor() ;

static inline ::System::ComponentModel::WarningException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::ComponentModel::WarningException* New_ctor(::StringW  message) ;

static inline ::System::ComponentModel::WarningException* New_ctor(::StringW  message, ::StringW  helpUrl) ;

static inline ::System::ComponentModel::WarningException* New_ctor(::StringW  message, ::StringW  helpUrl, ::StringW  helpTopic) ;

static inline ::System::ComponentModel::WarningException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

constexpr ::StringW const& __cordl_internal_get__HelpTopic_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__HelpTopic_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__HelpUrl_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__HelpUrl_k__BackingField() ;

constexpr void __cordl_internal_set__HelpTopic_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__HelpUrl_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xad6bc54, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad6bcc4, size 0x164, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0xad6bca8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xad6bcb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::StringW  helpUrl) ;

/// @brief Method .ctor, addr 0xad6bc64, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::StringW  helpUrl, ::StringW  helpTopic) ;

/// @brief Method .ctor, addr 0xad6bcbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

/// [CompilerGenerated]
/// @brief Method get_HelpTopic, addr 0xad6be30, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_HelpTopic() ;

/// [CompilerGenerated]
/// @brief Method get_HelpUrl, addr 0xad6be28, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_HelpUrl() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WarningException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WarningException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WarningException(WarningException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WarningException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WarningException(WarningException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10242};

/// [CompilerGenerated]
/// @brief Field <HelpUrl>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____HelpUrl_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HelpTopic>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::StringW  ____HelpTopic_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::WarningException, ____HelpUrl_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::WarningException, ____HelpTopic_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::WarningException) == 0xa0, "Size mismatch!");

} // namespace end def System::ComponentModel
