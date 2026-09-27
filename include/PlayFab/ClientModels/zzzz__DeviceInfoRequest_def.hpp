#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/DeviceInfoRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeviceInfoRequest)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class DeviceInfoRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::DeviceInfoRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::DeviceInfoRequest*, "PlayFab.ClientModels", "DeviceInfoRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.DeviceInfoRequest
class CORDL_TYPE DeviceInfoRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Info, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Info, put=__cordl_internal_set_Info)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  Info;

static inline ::PlayFab::ClientModels::DeviceInfoRequest* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get_Info() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get_Info() ;

constexpr void __cordl_internal_set_Info(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0xa8436f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeviceInfoRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeviceInfoRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeviceInfoRequest(DeviceInfoRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeviceInfoRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeviceInfoRequest(DeviceInfoRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19988};

/// @brief Field Info, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ___Info;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::DeviceInfoRequest, ___Info) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::DeviceInfoRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
