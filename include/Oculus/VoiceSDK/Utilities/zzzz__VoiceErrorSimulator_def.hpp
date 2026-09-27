#pragma once
// IWYU pragma private; include "Oculus/VoiceSDK/Utilities/VoiceErrorSimulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/zzzz__VoiceService_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(VoiceErrorSimulator)
namespace Meta::WitAi::Requests {
struct VoiceErrorSimulationType;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace Meta::WitAi::TTS {
class TTSService;
}
namespace Oculus::VoiceSDK::Utilities {
struct VoiceErrorRequestType;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
// Forward declare root types
namespace Oculus::VoiceSDK::Utilities {
class VoiceErrorSimulator;
}
// Write type traits
MARK_REF_T(::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*);
DEFINE_IL2CPP_CLASS(::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*, "Oculus.VoiceSDK.Utilities", "VoiceErrorSimulator");
// Dependencies Meta.WitAi.VoiceService, UnityEngine.MonoBehaviour
namespace Oculus::VoiceSDK::Utilities {
// Is value type: false
// CS Name: Oculus.VoiceSDK.Utilities.VoiceErrorSimulator
class CORDL_TYPE VoiceErrorSimulator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _requests, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__requests, put=__cordl_internal_set__requests)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType,::Meta::WitAi::Requests::VoiceErrorSimulationType>*  _requests;

/// @brief Field ttsService, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ttsService, put=__cordl_internal_set_ttsService)) ::UnityW<::Meta::WitAi::TTS::TTSService>  ttsService;

/// @brief Field voiceServices, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceServices, put=__cordl_internal_set_voiceServices)) ::ArrayW<::UnityW<::Meta::WitAi::VoiceService>>  voiceServices;

static inline ::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator* New_ctor() ;

/// @brief Method OnDisable, addr 0xb9440a4, size 0x8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb943e64, size 0x24, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshServices, addr 0xb943fa0, size 0x104, virtual true, abstract: false, final false
inline void RefreshServices() ;

/// @brief Method SetListeners, addr 0xb943e88, size 0x118, virtual false, abstract: false, final false
inline void SetListeners(bool  add) ;

/// @brief Method SimulateError, addr 0xb9440ac, size 0x8c, virtual false, abstract: false, final false
inline void SimulateError(::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType  requestType, ::Meta::WitAi::Requests::VoiceErrorSimulationType  simulationType) ;

/// @brief Method SimulateVoiceRequestError, addr 0xb944138, size 0x144, virtual false, abstract: false, final false
inline void SimulateVoiceRequestError(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType,::Meta::WitAi::Requests::VoiceErrorSimulationType>* const& __cordl_internal_get__requests() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType,::Meta::WitAi::Requests::VoiceErrorSimulationType>*& __cordl_internal_get__requests() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get_ttsService() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get_ttsService() ;

constexpr ::ArrayW<::UnityW<::Meta::WitAi::VoiceService>> const& __cordl_internal_get_voiceServices() const;

constexpr ::ArrayW<::UnityW<::Meta::WitAi::VoiceService>>& __cordl_internal_get_voiceServices() ;

constexpr void __cordl_internal_set__requests(::System::Collections::Concurrent::ConcurrentDictionary_2<::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType,::Meta::WitAi::Requests::VoiceErrorSimulationType>*  value) ;

constexpr void __cordl_internal_set_ttsService(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set_voiceServices(::ArrayW<::UnityW<::Meta::WitAi::VoiceService>>  value) ;

/// @brief Method .ctor, addr 0xb94427c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceErrorSimulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceErrorSimulator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceErrorSimulator(VoiceErrorSimulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceErrorSimulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceErrorSimulator(VoiceErrorSimulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31687};

/// @brief Field voiceServices, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Meta::WitAi::VoiceService>>  ___voiceServices;

/// @brief Field ttsService, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  ___ttsService;

/// @brief Field _requests, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType,::Meta::WitAi::Requests::VoiceErrorSimulationType>*  ____requests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator, ___voiceServices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator, ___ttsService) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator, ____requests) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator) == 0x38, "Size mismatch!");

} // namespace end def Oculus::VoiceSDK::Utilities
