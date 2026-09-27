#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IVoiceServiceRequestProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVoiceServiceRequestProvider)
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Configuration {
class WitRuntimeConfiguration;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class IVoiceServiceRequestProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*, "Meta.WitAi.Interfaces", "IVoiceServiceRequestProvider");
// Dependencies 
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.IVoiceServiceRequestProvider
class CORDL_TYPE IVoiceServiceRequestProvider {
public:
// Declarations
/// @brief Method CreateRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* CreateRequest(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  requestSettings, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceServiceRequestProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceServiceRequestProvider(IVoiceServiceRequestProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25665};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Interfaces
