#pragma once
// IWYU pragma private; include "Meta/WitAi/WitRequestFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(WitRequestFactory)
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Data::Configuration {
class WitConfiguration;
}
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntity;
}
namespace Meta::WitAi::Interfaces {
class IDynamicEntitiesProvider;
}
namespace Meta::WitAi::Json {
class WitResponseClass;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace Meta::WitAi {
class WitRequest;
}
// Forward declare root types
namespace Meta::WitAi {
class WitRequestFactory;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::WitRequestFactory*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitRequestFactory*, "Meta.WitAi", "WitRequestFactory");
// [Extension]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitRequestFactory
class CORDL_TYPE WitRequestFactory : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method CreateMessageRequest, addr 0x9e7e818, size 0x9c, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Requests::VoiceServiceRequest* CreateMessageRequest(::Meta::WitAi::Data::Configuration::WitConfiguration*  config, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>  additionalEntityProviders) ;

/// [Extension]
/// @brief Method CreateSpeechRequest, addr 0x9e7e8b4, size 0x114, virtual false, abstract: false, final false
static inline ::Meta::WitAi::WitRequest* CreateSpeechRequest(::Meta::WitAi::Data::Configuration::WitConfiguration*  config, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>  additionalEntityProviders) ;

/// @brief Method GetSetupOptions, addr 0x9e7e688, size 0x190, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Configuration::WitRequestOptions* GetSetupOptions(::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>  additionalDynamicEntities) ;

/// @brief Method HandleWitRequestOptions, addr 0x9e7d8d0, size 0x7f8, virtual false, abstract: false, final false
static inline void HandleWitRequestOptions(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>  additionalEntityProviders) ;

/// @brief Method MergeEntities, addr 0x9e7e0c8, size 0x5c0, virtual false, abstract: false, final false
static inline void MergeEntities(::Meta::WitAi::Json::WitResponseClass*  entities, ::Meta::WitAi::Data::Entities::WitDynamicEntity*  providerEntity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitRequestFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitRequestFactory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitRequestFactory(WitRequestFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitRequestFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitRequestFactory(WitRequestFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25561};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::WitRequestFactory) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
