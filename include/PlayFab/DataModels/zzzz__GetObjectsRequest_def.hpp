#pragma once
// IWYU pragma private; include "PlayFab/DataModels/GetObjectsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
CORDL_MODULE_EXPORT(GetObjectsRequest)
namespace PlayFab::DataModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::DataModels {
class GetObjectsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::DataModels::GetObjectsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::DataModels::GetObjectsRequest*, "PlayFab.DataModels", "GetObjectsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::DataModels {
// Is value type: false
// CS Name: PlayFab.DataModels.GetObjectsRequest
class CORDL_TYPE GetObjectsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::DataModels::EntityKey*  Entity;

/// @brief Field EscapeObject, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_EscapeObject, put=__cordl_internal_set_EscapeObject)) ::System::Nullable_1<bool>  EscapeObject;

static inline ::PlayFab::DataModels::GetObjectsRequest* New_ctor() ;

constexpr ::PlayFab::DataModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::DataModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_EscapeObject() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_EscapeObject() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_EscapeObject(::System::Nullable_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa842ebc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetObjectsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetObjectsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetObjectsRequest(GetObjectsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetObjectsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetObjectsRequest(GetObjectsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19858};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::DataModels::EntityKey*  ___Entity;

/// @brief Field EscapeObject, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___EscapeObject;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::DataModels::GetObjectsRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::GetObjectsRequest, ___EscapeObject) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::DataModels::GetObjectsRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::DataModels
