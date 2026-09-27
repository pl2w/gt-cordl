#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTitleNewsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetTitleNewsRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetTitleNewsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetTitleNewsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetTitleNewsRequest*, "PlayFab.ClientModels", "GetTitleNewsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetTitleNewsRequest
class CORDL_TYPE GetTitleNewsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Count, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_Count, put=__cordl_internal_set_Count)) ::System::Nullable_1<int32_t>  Count;

static inline ::PlayFab::ClientModels::GetTitleNewsRequest* New_ctor() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_Count() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_Count() ;

constexpr void __cordl_internal_set_Count(::System::Nullable_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0xa84de58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTitleNewsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTitleNewsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTitleNewsRequest(GetTitleNewsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTitleNewsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTitleNewsRequest(GetTitleNewsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20090};

/// @brief Field Count, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___Count;

/// @brief Size padding 0x20 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetTitleNewsRequest, ___Count) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetTitleNewsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
