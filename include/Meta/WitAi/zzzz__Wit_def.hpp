#pragma once
// IWYU pragma private; include "Meta/WitAi/Wit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/zzzz__VoiceService_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Wit)
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Configuration {
class WitRuntimeConfiguration;
}
namespace Meta::WitAi::Interfaces {
class ITranscriptionProvider;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace Meta::WitAi {
class IWitRuntimeConfigProvider;
}
namespace Meta::WitAi {
class IWitRuntimeConfigSetter;
}
namespace Meta::WitAi {
class WitService;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Meta::WitAi {
class Wit;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Wit*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Wit*, "Meta.WitAi", "Wit");
// Dependencies Meta.WitAi.VoiceService
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.Wit
class CORDL_TYPE Wit : public ::Meta::WitAi::VoiceService {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_IsRequestActive)) bool  IsRequestActive;

 __declspec(property(get=get_MicActive)) bool  MicActive;

 __declspec(property(get=get_RuntimeConfiguration, put=set_RuntimeConfiguration)) ::Meta::WitAi::Configuration::WitRuntimeConfiguration*  RuntimeConfiguration;

 __declspec(property(get=get_ShouldSendMicData)) bool  ShouldSendMicData;

 __declspec(property(get=get_TranscriptionProvider, put=set_TranscriptionProvider)) ::Meta::WitAi::Interfaces::ITranscriptionProvider*  TranscriptionProvider;

/// @brief Field witRuntimeConfiguration, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_witRuntimeConfiguration, put=__cordl_internal_set_witRuntimeConfiguration)) ::Meta::WitAi::Configuration::WitRuntimeConfiguration*  witRuntimeConfiguration;

/// @brief Field witService, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_witService, put=__cordl_internal_set_witService)) ::UnityW<::Meta::WitAi::WitService>  witService;

/// @brief Convert operator to "::Meta::WitAi::IWitRuntimeConfigProvider"
constexpr operator  ::Meta::WitAi::IWitRuntimeConfigProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IWitRuntimeConfigSetter"
constexpr operator  ::Meta::WitAi::IWitRuntimeConfigSetter*() noexcept;

/// @brief Method Activate, addr 0x9e78df8, size 0x48, virtual true, abstract: false, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method Activate, addr 0x9e78a40, size 0x5c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method ActivateImmediately, addr 0x9e7923c, size 0x48, virtual true, abstract: false, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method Awake, addr 0x9e79474, size 0xb0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Deactivate, addr 0x9e79394, size 0x20, virtual true, abstract: false, final false
inline void Deactivate() ;

/// @brief Method DeactivateAndAbortRequest, addr 0x9e79404, size 0x20, virtual true, abstract: false, final false
inline void DeactivateAndAbortRequest() ;

/// @brief Method GetActivateAudioError, addr 0x9e789ac, size 0x94, virtual true, abstract: false, final false
inline ::StringW GetActivateAudioError() ;

/// @brief Method GetSendError, addr 0x9e78760, size 0x24c, virtual true, abstract: false, final false
inline ::StringW GetSendError() ;

static inline ::Meta::WitAi::Wit* New_ctor() ;

constexpr ::Meta::WitAi::Configuration::WitRuntimeConfiguration* const& __cordl_internal_get_witRuntimeConfiguration() const;

constexpr ::Meta::WitAi::Configuration::WitRuntimeConfiguration*& __cordl_internal_get_witRuntimeConfiguration() ;

constexpr ::UnityW<::Meta::WitAi::WitService> const& __cordl_internal_get_witService() const;

constexpr ::UnityW<::Meta::WitAi::WitService>& __cordl_internal_get_witService() ;

constexpr void __cordl_internal_set_witRuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  value) ;

constexpr void __cordl_internal_set_witService(::UnityW<::Meta::WitAi::WitService>  value) ;

/// @brief Method .ctor, addr 0x9e79524, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0x9e780bc, size 0xc8, virtual true, abstract: false, final false
inline bool get_Active() ;

/// @brief Method get_IsRequestActive, addr 0x9e78198, size 0xc0, virtual true, abstract: false, final false
inline bool get_IsRequestActive() ;

/// @brief Method get_MicActive, addr 0x9e78680, size 0x84, virtual true, abstract: false, final false
inline bool get_MicActive() ;

/// @brief Method get_RuntimeConfiguration, addr 0x9e780ac, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Configuration::WitRuntimeConfiguration* get_RuntimeConfiguration() ;

/// @brief Method get_ShouldSendMicData, addr 0x9e78720, size 0x40, virtual true, abstract: false, final false
inline bool get_ShouldSendMicData() ;

/// @brief Method get_TranscriptionProvider, addr 0x9e782b8, size 0x18, virtual true, abstract: false, final false
inline ::Meta::WitAi::Interfaces::ITranscriptionProvider* get_TranscriptionProvider() ;

/// @brief Convert to "::Meta::WitAi::IWitRuntimeConfigProvider"
constexpr ::Meta::WitAi::IWitRuntimeConfigProvider* i___Meta__WitAi__IWitRuntimeConfigProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::IWitRuntimeConfigSetter"
constexpr ::Meta::WitAi::IWitRuntimeConfigSetter* i___Meta__WitAi__IWitRuntimeConfigSetter() noexcept;

/// @brief Method set_RuntimeConfiguration, addr 0x9e780b4, size 0x8, virtual true, abstract: false, final true
inline void set_RuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  value) ;

/// @brief Method set_TranscriptionProvider, addr 0x9e782d0, size 0x14, virtual true, abstract: false, final false
inline void set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Wit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Wit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Wit(Wit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Wit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Wit(Wit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25548};

/// [SerializeField]
/// @brief Field witRuntimeConfiguration, offset: 0x70, size: 0x8, def value: None
 ::Meta::WitAi::Configuration::WitRuntimeConfiguration*  ___witRuntimeConfiguration;

/// @brief Field witService, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::WitService>  ___witService;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Wit, ___witRuntimeConfiguration) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Wit, ___witService) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Wit) == 0x80, "Size mismatch!");

} // namespace end def Meta::WitAi
