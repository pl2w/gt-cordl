#pragma once
// IWYU pragma private; include "PlayFab/DataModels/FinalizeFileUploadsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FinalizeFileUploadsRequest)
namespace PlayFab::DataModels {
class EntityKey;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::DataModels {
class FinalizeFileUploadsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::DataModels::FinalizeFileUploadsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::DataModels::FinalizeFileUploadsRequest*, "PlayFab.DataModels", "FinalizeFileUploadsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::DataModels {
// Is value type: false
// CS Name: PlayFab.DataModels.FinalizeFileUploadsRequest
class CORDL_TYPE FinalizeFileUploadsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::DataModels::EntityKey*  Entity;

/// @brief Field FileNames, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FileNames, put=__cordl_internal_set_FileNames)) ::System::Collections::Generic::List_1<::StringW>*  FileNames;

static inline ::PlayFab::DataModels::FinalizeFileUploadsRequest* New_ctor() ;

constexpr ::PlayFab::DataModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::DataModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_FileNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_FileNames() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_FileNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa842e94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FinalizeFileUploadsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FinalizeFileUploadsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FinalizeFileUploadsRequest(FinalizeFileUploadsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FinalizeFileUploadsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FinalizeFileUploadsRequest(FinalizeFileUploadsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19853};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::DataModels::EntityKey*  ___Entity;

/// @brief Field FileNames, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___FileNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::DataModels::FinalizeFileUploadsRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::FinalizeFileUploadsRequest, ___FileNames) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::DataModels::FinalizeFileUploadsRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::DataModels
