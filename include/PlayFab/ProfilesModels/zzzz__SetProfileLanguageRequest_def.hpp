#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/SetProfileLanguageRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetProfileLanguageRequest)
namespace PlayFab::ProfilesModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::ProfilesModels {
class SetProfileLanguageRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::SetProfileLanguageRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::SetProfileLanguageRequest*, "PlayFab.ProfilesModels", "SetProfileLanguageRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.SetProfileLanguageRequest
class CORDL_TYPE SetProfileLanguageRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::ProfilesModels::EntityKey*  Entity;

/// @brief Field ExpectedVersion, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_ExpectedVersion, put=__cordl_internal_set_ExpectedVersion)) ::System::Nullable_1<int32_t>  ExpectedVersion;

/// @brief Field Language, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Language, put=__cordl_internal_set_Language)) ::StringW  Language;

static inline ::PlayFab::ProfilesModels::SetProfileLanguageRequest* New_ctor() ;

constexpr ::PlayFab::ProfilesModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::ProfilesModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_ExpectedVersion() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_ExpectedVersion() ;

constexpr ::StringW const& __cordl_internal_get_Language() const;

constexpr ::StringW& __cordl_internal_get_Language() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::ProfilesModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_ExpectedVersion(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_Language(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840788, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetProfileLanguageRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetProfileLanguageRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetProfileLanguageRequest(SetProfileLanguageRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetProfileLanguageRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetProfileLanguageRequest(SetProfileLanguageRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19579};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::ProfilesModels::EntityKey*  ___Entity;

/// @brief Field ExpectedVersion, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___ExpectedVersion;

/// @brief Field Language, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Language;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::SetProfileLanguageRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::SetProfileLanguageRequest, ___ExpectedVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::SetProfileLanguageRequest, ___Language) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::SetProfileLanguageRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
