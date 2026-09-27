#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IAudioInputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IAudioInputSource)
namespace Meta::WitAi::Data {
class AudioEncoding;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Meta::WitAi::Interfaces {
class IAudioInputSource;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Interfaces::IAudioInputSource*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Interfaces::IAudioInputSource*, "Meta.WitAi.Interfaces", "IAudioInputSource");
// Dependencies 
namespace Meta::WitAi::Interfaces {
// Is value type: false
// CS Name: Meta.WitAi.Interfaces.IAudioInputSource
class CORDL_TYPE IAudioInputSource {
public:
// Declarations
 __declspec(property(get=get_AudioEncoding)) ::Meta::WitAi::Data::AudioEncoding*  AudioEncoding;

 __declspec(property(get=get_IsRecording)) bool  IsRecording;

/// @brief Method StartRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void StartRecording(int32_t  sampleLen) ;

/// @brief Method StopRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void StopRecording() ;

/// [CompilerGenerated]
/// @brief Method add_OnSampleReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStartRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnStartRecording(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStartRecordingFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnStartRecordingFailed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStopRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnStopRecording(::System::Action*  value) ;

/// @brief Method get_AudioEncoding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Data::AudioEncoding* get_AudioEncoding() ;

/// @brief Method get_IsRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsRecording() ;

/// [CompilerGenerated]
/// @brief Method remove_OnSampleReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStartRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnStartRecording(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStartRecordingFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnStartRecordingFailed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStopRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnStopRecording(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioInputSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioInputSource(IAudioInputSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32766};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Interfaces
