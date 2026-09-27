#pragma once
// IWYU pragma private; include "PlayFab/DataModels/SetObjectsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetObjectsRequest)
namespace PlayFab::DataModels {
class EntityKey;
}
namespace PlayFab::DataModels {
class SetObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::DataModels {
class SetObjectsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::DataModels::SetObjectsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::DataModels::SetObjectsRequest*, "PlayFab.DataModels", "SetObjectsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::DataModels {
// Is value type: false
// CS Name: PlayFab.DataModels.SetObjectsRequest
class CORDL_TYPE SetObjectsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::DataModels::EntityKey*  Entity;

/// @brief Field ExpectedProfileVersion, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_ExpectedProfileVersion, put=__cordl_internal_set_ExpectedProfileVersion)) ::System::Nullable_1<int32_t>  ExpectedProfileVersion;

/// @brief Field Objects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Objects, put=__cordl_internal_set_Objects)) ::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObject*>*  Objects;

static inline ::PlayFab::DataModels::SetObjectsRequest* New_ctor() ;

constexpr ::PlayFab::DataModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::DataModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_ExpectedProfileVersion() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_ExpectedProfileVersion() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObject*>* const& __cordl_internal_get_Objects() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObject*>*& __cordl_internal_get_Objects() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_ExpectedProfileVersion(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_Objects(::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObject*>*  value) ;

/// @brief Method .ctor, addr 0xa842efc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetObjectsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetObjectsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetObjectsRequest(SetObjectsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetObjectsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetObjectsRequest(SetObjectsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19867};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::DataModels::EntityKey*  ___Entity;

/// @brief Field ExpectedProfileVersion, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___ExpectedProfileVersion;

/// @brief Field Objects, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::DataModels::SetObject*>*  ___Objects;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::DataModels::SetObjectsRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::SetObjectsRequest, ___ExpectedProfileVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::SetObjectsRequest, ___Objects) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::DataModels::SetObjectsRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::DataModels
