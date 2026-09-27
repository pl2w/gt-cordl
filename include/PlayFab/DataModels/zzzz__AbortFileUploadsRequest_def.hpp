#pragma once
// IWYU pragma private; include "PlayFab/DataModels/AbortFileUploadsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbortFileUploadsRequest)
namespace PlayFab::DataModels {
class EntityKey;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::DataModels {
class AbortFileUploadsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::DataModels::AbortFileUploadsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::DataModels::AbortFileUploadsRequest*, "PlayFab.DataModels", "AbortFileUploadsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::DataModels {
// Is value type: false
// CS Name: PlayFab.DataModels.AbortFileUploadsRequest
class CORDL_TYPE AbortFileUploadsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::DataModels::EntityKey*  Entity;

/// @brief Field FileNames, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FileNames, put=__cordl_internal_set_FileNames)) ::System::Collections::Generic::List_1<::StringW>*  FileNames;

/// @brief Field ProfileVersion, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_ProfileVersion, put=__cordl_internal_set_ProfileVersion)) ::System::Nullable_1<int32_t>  ProfileVersion;

static inline ::PlayFab::DataModels::AbortFileUploadsRequest* New_ctor() ;

constexpr ::PlayFab::DataModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::DataModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_FileNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_FileNames() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_ProfileVersion() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_ProfileVersion() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_FileNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_ProfileVersion(::System::Nullable_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0xa842e6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbortFileUploadsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbortFileUploadsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AbortFileUploadsRequest(AbortFileUploadsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbortFileUploadsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbortFileUploadsRequest(AbortFileUploadsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19848};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::DataModels::EntityKey*  ___Entity;

/// @brief Field FileNames, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___FileNames;

/// @brief Field ProfileVersion, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___ProfileVersion;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::DataModels::AbortFileUploadsRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::AbortFileUploadsRequest, ___FileNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::AbortFileUploadsRequest, ___ProfileVersion) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::DataModels::AbortFileUploadsRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::DataModels
