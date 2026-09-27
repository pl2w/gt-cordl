#pragma once
// IWYU pragma private; include "Meta/WitAi/IVoiceActivationHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IVoiceActivationHandler)
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Meta::WitAi {
class IVoiceActivationHandler;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::IVoiceActivationHandler*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::IVoiceActivationHandler*, "Meta.WitAi", "IVoiceActivationHandler");
// Dependencies 
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.IVoiceActivationHandler
class CORDL_TYPE IVoiceActivationHandler {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

/// @brief Method Activate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method Activate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method ActivateImmediately, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method Deactivate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Deactivate() ;

/// @brief Method DeactivateAndAbortRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DeactivateAndAbortRequest() ;

/// @brief Method get_Active, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_Active() ;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceActivationHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceActivationHandler(IVoiceActivationHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25547};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi
