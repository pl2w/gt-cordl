#pragma once
// IWYU pragma private; include "KID/Model/UpgradeSessionResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UpgradeSessionResponse)
namespace KID::Model {
class Challenge;
}
namespace KID::Model {
class Session;
}
// Forward declare root types
namespace KID::Model {
class UpgradeSessionResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::UpgradeSessionResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::UpgradeSessionResponse*, "KID.Model", "UpgradeSessionResponse");
// [DataContract(Name = "UpgradeSessionResponse")]
// Dependencies System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.UpgradeSessionResponse
class CORDL_TYPE UpgradeSessionResponse : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "challenge", EmitDefaultValue = false)]
 __declspec(property(get=get_Challenge, put=set_Challenge)) ::KID::Model::Challenge*  Challenge;

/// @brief [DataMember(Name = "session", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Session, put=set_Session)) ::KID::Model::Session*  Session;

/// @brief Field <Challenge>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Challenge_k__BackingField, put=__cordl_internal_set__Challenge_k__BackingField)) ::KID::Model::Challenge*  _Challenge_k__BackingField;

/// @brief Field <Session>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Session_k__BackingField, put=__cordl_internal_set__Session_k__BackingField)) ::KID::Model::Session*  _Session_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::UpgradeSessionResponse* New_ctor() ;

static inline ::KID::Model::UpgradeSessionResponse* New_ctor(::KID::Model::Session*  session, ::KID::Model::Challenge*  challenge) ;

/// @brief Method ToJson, addr 0x9cdaef8, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cdada4, size 0x154, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::KID::Model::Challenge* const& __cordl_internal_get__Challenge_k__BackingField() const;

constexpr ::KID::Model::Challenge*& __cordl_internal_get__Challenge_k__BackingField() ;

constexpr ::KID::Model::Session* const& __cordl_internal_get__Session_k__BackingField() const;

constexpr ::KID::Model::Session*& __cordl_internal_get__Session_k__BackingField() ;

constexpr void __cordl_internal_set__Challenge_k__BackingField(::KID::Model::Challenge*  value) ;

constexpr void __cordl_internal_set__Session_k__BackingField(::KID::Model::Session*  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cdacec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cdacf4, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::KID::Model::Session*  session, ::KID::Model::Challenge*  challenge) ;

/// [CompilerGenerated]
/// @brief Method get_Challenge, addr 0x9cdad94, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::Challenge* get_Challenge() ;

/// [CompilerGenerated]
/// @brief Method get_Session, addr 0x9cdad84, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::Session* get_Session() ;

/// [CompilerGenerated]
/// @brief Method set_Challenge, addr 0x9cdad9c, size 0x8, virtual false, abstract: false, final false
inline void set_Challenge(::KID::Model::Challenge*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Session, addr 0x9cdad8c, size 0x8, virtual false, abstract: false, final false
inline void set_Session(::KID::Model::Session*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpgradeSessionResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpgradeSessionResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpgradeSessionResponse(UpgradeSessionResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpgradeSessionResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpgradeSessionResponse(UpgradeSessionResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31108};

/// [CompilerGenerated]
/// @brief Field <Session>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::KID::Model::Session*  ____Session_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Challenge>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::KID::Model::Challenge*  ____Challenge_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::UpgradeSessionResponse, ____Session_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::UpgradeSessionResponse, ____Challenge_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::KID::Model::UpgradeSessionResponse) == 0x20, "Size mismatch!");

} // namespace end def KID::Model
