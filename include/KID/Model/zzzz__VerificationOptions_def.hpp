#pragma once
// IWYU pragma private; include "KID/Model/VerificationOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VerificationOptions)
// Forward declare root types
namespace KID::Model {
class VerificationOptions;
}
// Write type traits
MARK_REF_T(::KID::Model::VerificationOptions*);
DEFINE_IL2CPP_CLASS(::KID::Model::VerificationOptions*, "KID.Model", "VerificationOptions");
// [DataContract(Name = "VerificationOptions")]
// Dependencies System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.VerificationOptions
class CORDL_TYPE VerificationOptions : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "sendEmail", EmitDefaultValue = true)]
 __declspec(property(get=get_SendEmail, put=set_SendEmail)) bool  SendEmail;

/// @brief Field <SendEmail>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__SendEmail_k__BackingField, put=__cordl_internal_set__SendEmail_k__BackingField)) bool  _SendEmail_k__BackingField;

static inline ::KID::Model::VerificationOptions* New_ctor(bool  sendEmail) ;

/// @brief Method ToJson, addr 0x9cdb094, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cdaf8c, size 0x108, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get__SendEmail_k__BackingField() const;

constexpr bool& __cordl_internal_get__SendEmail_k__BackingField() ;

constexpr void __cordl_internal_set__SendEmail_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x9cdaf54, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  sendEmail) ;

/// [CompilerGenerated]
/// @brief Method get_SendEmail, addr 0x9cdaf7c, size 0x8, virtual false, abstract: false, final false
inline bool get_SendEmail() ;

/// [CompilerGenerated]
/// @brief Method set_SendEmail, addr 0x9cdaf84, size 0x8, virtual false, abstract: false, final false
inline void set_SendEmail(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VerificationOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VerificationOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VerificationOptions(VerificationOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VerificationOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VerificationOptions(VerificationOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31110};

/// [CompilerGenerated]
/// @brief Field <SendEmail>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____SendEmail_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::VerificationOptions, ____SendEmail_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::KID::Model::VerificationOptions) == 0x18, "Size mismatch!");

} // namespace end def KID::Model
