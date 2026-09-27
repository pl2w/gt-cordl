#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeakerVoiceToLoudnessConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SpeakerVoiceToLoudnessConfig_SerializedConfig_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpeakerVoiceToLoudnessConfig)
namespace GlobalNamespace {
struct SpeakerVoiceToLoudnessConfig_SerializedConfig;
}
namespace GlobalNamespace {
template<typename T>
class StaticArrayBag_1;
}
namespace GorillaNetworking {
class PlayFabTitleDataCache;
}
namespace PlayFab {
class PlayFabError;
}
// Forward declare root types
namespace GlobalNamespace {
class SpeakerVoiceToLoudnessConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpeakerVoiceToLoudnessConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpeakerVoiceToLoudnessConfig*, "", "SpeakerVoiceToLoudnessConfig");
// Dependencies SpeakerVoiceToLoudnessConfig::SerializedConfig, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpeakerVoiceToLoudnessConfig
class CORDL_TYPE SpeakerVoiceToLoudnessConfig : public ::System::Object {
public:
// Declarations
using SerializedConfig = ::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig;

/// @brief Field StaticArrays, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StaticArrays, put=setStaticF_StaticArrays)) ::GlobalNamespace::StaticArrayBag_1<float_t>*  StaticArrays;

/// @brief Field k_config, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_config, put=setStaticF_k_config)) ::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig  k_config;

/// @brief Method OnTitleDataCacheError, addr 0x59869b8, size 0x4, virtual false, abstract: false, final false
static inline void OnTitleDataCacheError(::PlayFab::PlayFabError*  errorMsg) ;

/// @brief Method OnTitleDataCacheReady, addr 0x59866ec, size 0xf8, virtual false, abstract: false, final false
static inline void OnTitleDataCacheReady(::GorillaNetworking::PlayFabTitleDataCache*  titleDataCache) ;

/// @brief Method OnTitleDataCacheResponse, addr 0x59867e4, size 0x1d4, virtual false, abstract: false, final false
static inline void OnTitleDataCacheResponse(::StringW  json) ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method StaticLoad, addr 0x5986678, size 0x74, virtual false, abstract: false, final false
static inline void StaticLoad() ;

static inline ::GlobalNamespace::StaticArrayBag_1<float_t>* getStaticF_StaticArrays() ;

static inline ::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig getStaticF_k_config() ;

/// @brief Method get_EnableLoudnessLimit, addr 0x59865c8, size 0x58, virtual false, abstract: false, final false
static inline bool get_EnableLoudnessLimit() ;

/// @brief Method get_LoudnessLimitThreshold, addr 0x5986620, size 0x58, virtual false, abstract: false, final false
static inline float_t get_LoudnessLimitThreshold() ;

static inline void setStaticF_StaticArrays(::GlobalNamespace::StaticArrayBag_1<float_t>*  value) ;

static inline void setStaticF_k_config(::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpeakerVoiceToLoudnessConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpeakerVoiceToLoudnessConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpeakerVoiceToLoudnessConfig(SpeakerVoiceToLoudnessConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpeakerVoiceToLoudnessConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpeakerVoiceToLoudnessConfig(SpeakerVoiceToLoudnessConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2549};

/// @brief Field k_titleDataKey offset 0xffffffff size 0x8
static constexpr ::ConstString  k_titleDataKey{u"SpeakerVoiceToLoudnessConfig"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SpeakerVoiceToLoudnessConfig) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
