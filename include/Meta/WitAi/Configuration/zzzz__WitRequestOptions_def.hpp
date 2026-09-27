#pragma once
// IWYU pragma private; include "Meta/WitAi/Configuration/WitRequestOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestOptions_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitRequestOptions)
namespace Meta::WitAi::Interfaces {
class IDynamicEntitiesProvider;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestOptions_QueryParam;
}
namespace Meta::WitAi {
class WitRequest;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Configuration::WitRequestOptions*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Configuration::WitRequestOptions*, "Meta.WitAi.Configuration", "WitRequestOptions");
// Dependencies Meta.WitAi.Requests.VoiceServiceRequestOptions
namespace Meta::WitAi::Configuration {
// Is value type: false
// CS Name: Meta.WitAi.Configuration.WitRequestOptions
class CORDL_TYPE WitRequestOptions : public ::Meta::WitAi::Requests::VoiceServiceRequestOptions {
public:
// Declarations
/// @brief Field <OpIdRegistry>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__OpIdRegistry_k__BackingField, put=setStaticF__OpIdRegistry_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _OpIdRegistry_k__BackingField;

/// @brief Field dynamicEntities, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_dynamicEntities, put=__cordl_internal_set_dynamicEntities)) ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*  dynamicEntities;

/// @brief Field nBestIntents, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_nBestIntents, put=__cordl_internal_set_nBestIntents)) int32_t  nBestIntents;

/// @brief Field onResponse, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onResponse, put=__cordl_internal_set_onResponse)) ::System::Action_1<::Meta::WitAi::WitRequest*>*  onResponse;

/// @brief Field tag, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_tag, put=__cordl_internal_set_tag)) ::StringW  tag;

static inline ::Meta::WitAi::Configuration::WitRequestOptions* New_ctor(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams) ;

static inline ::Meta::WitAi::Configuration::WitRequestOptions* New_ctor(::StringW  newRequestId, ::StringW  newClientUserId, ::StringW  newOperationId, /* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams) ;

/// @brief Method ToJsonString, addr 0x9e967c4, size 0x340, virtual false, abstract: false, final false
inline ::StringW ToJsonString() ;

constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* const& __cordl_internal_get_dynamicEntities() const;

constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*& __cordl_internal_get_dynamicEntities() ;

constexpr int32_t const& __cordl_internal_get_nBestIntents() const;

constexpr int32_t& __cordl_internal_get_nBestIntents() ;

constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>* const& __cordl_internal_get_onResponse() const;

constexpr ::System::Action_1<::Meta::WitAi::WitRequest*>*& __cordl_internal_get_onResponse() ;

constexpr ::StringW const& __cordl_internal_get_tag() const;

constexpr ::StringW& __cordl_internal_get_tag() ;

constexpr void __cordl_internal_set_dynamicEntities(::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*  value) ;

constexpr void __cordl_internal_set_nBestIntents(int32_t  value) ;

constexpr void __cordl_internal_set_onResponse(::System::Action_1<::Meta::WitAi::WitRequest*>*  value) ;

constexpr void __cordl_internal_set_tag(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e967a8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams) ;

/// @brief Method .ctor, addr 0x9e90998, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::StringW  newRequestId, ::StringW  newClientUserId, ::StringW  newOperationId, /* [ParamArray] */ ::ArrayW<::Meta::WitAi::Requests::VoiceServiceRequestOptions_QueryParam*>  newParams) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF__OpIdRegistry_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_OpIdRegistry, addr 0x9e96b04, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_OpIdRegistry() ;

static inline void setStaticF__OpIdRegistry_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequestOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequestOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequestOptions(WitRequestOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequestOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequestOptions(WitRequestOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25690};

/// @brief Field dynamicEntities, offset: 0x50, size: 0x8, def value: None
 ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*  ___dynamicEntities;

/// @brief Field nBestIntents, offset: 0x58, size: 0x4, def value: None
 int32_t  ___nBestIntents;

/// [Obsolete("Use WitConfiguration.editorVersionTag or WitConfiguration.buildVersionTag")]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field tag, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___tag;

/// @brief Field onResponse, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::WitRequest*>*  ___onResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Configuration::WitRequestOptions, ___dynamicEntities) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRequestOptions, ___nBestIntents) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRequestOptions, ___tag) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitRequestOptions, ___onResponse) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Configuration::WitRequestOptions) == 0x70, "Size mismatch!");

} // namespace end def Meta::WitAi::Configuration
