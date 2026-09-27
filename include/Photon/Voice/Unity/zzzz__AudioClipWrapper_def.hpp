#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AudioClipWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioClipWrapper)
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
template<typename T>
class IAudioReader_1;
}
namespace Photon::Voice {
template<typename T>
class IDataReader_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class AudioClipWrapper;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::AudioClipWrapper*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::AudioClipWrapper*, "Photon.Voice.Unity", "AudioClipWrapper");
// Dependencies System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.AudioClipWrapper
class CORDL_TYPE AudioClipWrapper : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Channels)) int32_t  Channels;

 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

 __declspec(property(get=get_Loop, put=set_Loop)) bool  Loop;

 __declspec(property(get=get_SamplingRate)) int32_t  SamplingRate;

/// @brief Field <Error>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field <Loop>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__Loop_k__BackingField, put=__cordl_internal_set__Loop_k__BackingField)) bool  _Loop_k__BackingField;

/// @brief Field audioClip, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClip, put=__cordl_internal_set_audioClip)) ::UnityW<::UnityEngine::AudioClip>  audioClip;

/// @brief Field playing, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_playing, put=__cordl_internal_set_playing)) bool  playing;

/// @brief Field readPos, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_readPos, put=__cordl_internal_set_readPos)) int32_t  readPos;

/// @brief Field startTime, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) float_t  startTime;

/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr operator  ::Photon::Voice::IAudioDesc*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IAudioReader_1<float_t>"
constexpr operator  ::Photon::Voice::IAudioReader_1<float_t>*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IDataReader_1<float_t>"
constexpr operator  ::Photon::Voice::IDataReader_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa75a7d4, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::Unity::AudioClipWrapper* New_ctor(::UnityEngine::AudioClip*  audioClip) ;

/// @brief Method Read, addr 0xa75a684, size 0x110, virtual true, abstract: false, final true
inline bool Read(::ArrayW<float_t>  buffer) ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Loop_k__BackingField() const;

constexpr bool& __cordl_internal_get__Loop_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioClip() ;

constexpr bool const& __cordl_internal_get_playing() const;

constexpr bool& __cordl_internal_get_playing() ;

constexpr int32_t const& __cordl_internal_get_readPos() const;

constexpr int32_t& __cordl_internal_get_readPos() ;

constexpr float_t const& __cordl_internal_get_startTime() const;

constexpr float_t& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Loop_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_playing(bool  value) ;

constexpr void __cordl_internal_set_readPos(int32_t  value) ;

constexpr void __cordl_internal_set_startTime(float_t  value) ;

/// @brief Method .ctor, addr 0xa75a63c, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AudioClip*  audioClip) ;

/// @brief Method get_Channels, addr 0xa75a7ac, size 0x18, virtual true, abstract: false, final true
inline int32_t get_Channels() ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0xa75a7c4, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Error() ;

/// [CompilerGenerated]
/// @brief Method get_Loop, addr 0xa75a62c, size 0x8, virtual false, abstract: false, final false
inline bool get_Loop() ;

/// @brief Method get_SamplingRate, addr 0xa75a794, size 0x18, virtual true, abstract: false, final true
inline int32_t get_SamplingRate() ;

/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* i___Photon__Voice__IAudioDesc() noexcept;

/// @brief Convert to "::Photon::Voice::IAudioReader_1<float_t>"
constexpr ::Photon::Voice::IAudioReader_1<float_t>* i___Photon__Voice__IAudioReader_1_float_t_() noexcept;

/// @brief Convert to "::Photon::Voice::IDataReader_1<float_t>"
constexpr ::Photon::Voice::IDataReader_1<float_t>* i___Photon__Voice__IDataReader_1_float_t_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0xa75a7cc, size 0x8, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Loop, addr 0xa75a634, size 0x8, virtual false, abstract: false, final false
inline void set_Loop(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioClipWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioClipWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClipWrapper(AudioClipWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClipWrapper(AudioClipWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28511};

/// @brief Field audioClip, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___audioClip;

/// @brief Field readPos, offset: 0x18, size: 0x4, def value: None
 int32_t  ___readPos;

/// @brief Field startTime, offset: 0x1c, size: 0x4, def value: None
 float_t  ___startTime;

/// [CompilerGenerated]
/// @brief Field <Loop>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____Loop_k__BackingField;

/// @brief Field playing, offset: 0x21, size: 0x1, def value: None
 bool  ___playing;

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::AudioClipWrapper, ___audioClip) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioClipWrapper, ___readPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioClipWrapper, ___startTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioClipWrapper, ____Loop_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioClipWrapper, ___playing) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AudioClipWrapper, ____Error_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::AudioClipWrapper) == 0x30, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
