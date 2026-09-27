#pragma once
// IWYU pragma private; include "GorillaTag/Audio/ProcessVoiceDataToLoudness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProcessVoiceDataToLoudness)
namespace GorillaTag::Audio {
class VoiceToLoudness;
}
namespace Photon::Voice {
template<typename T>
class IProcessor_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GorillaTag::Audio {
class ProcessVoiceDataToLoudness;
}
// Write type traits
MARK_REF_T(::GorillaTag::Audio::ProcessVoiceDataToLoudness*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::ProcessVoiceDataToLoudness*, "GorillaTag.Audio", "ProcessVoiceDataToLoudness");
// Dependencies System.Object
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.ProcessVoiceDataToLoudness
class CORDL_TYPE ProcessVoiceDataToLoudness : public ::System::Object {
public:
// Declarations
/// @brief Field _voiceToLoudness, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceToLoudness, put=__cordl_internal_set__voiceToLoudness)) ::UnityW<::GorillaTag::Audio::VoiceToLoudness>  _voiceToLoudness;

/// @brief Convert operator to "::Photon::Voice::IProcessor_1<float_t>"
constexpr operator  ::Photon::Voice::IProcessor_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5d4fe00, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::GorillaTag::Audio::ProcessVoiceDataToLoudness* New_ctor(::GorillaTag::Audio::VoiceToLoudness*  voiceToLoudness) ;

/// @brief Method Process, addr 0x5d4fd98, size 0x68, virtual true, abstract: false, final true
inline ::ArrayW<float_t> Process(::ArrayW<float_t>  buf) ;

constexpr ::UnityW<::GorillaTag::Audio::VoiceToLoudness> const& __cordl_internal_get__voiceToLoudness() const;

constexpr ::UnityW<::GorillaTag::Audio::VoiceToLoudness>& __cordl_internal_get__voiceToLoudness() ;

constexpr void __cordl_internal_set__voiceToLoudness(::UnityW<::GorillaTag::Audio::VoiceToLoudness>  value) ;

/// @brief Method .ctor, addr 0x5d4fccc, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::GorillaTag::Audio::VoiceToLoudness*  voiceToLoudness) ;

/// @brief Convert to "::Photon::Voice::IProcessor_1<float_t>"
constexpr ::Photon::Voice::IProcessor_1<float_t>* i___Photon__Voice__IProcessor_1_float_t_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProcessVoiceDataToLoudness() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProcessVoiceDataToLoudness", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProcessVoiceDataToLoudness(ProcessVoiceDataToLoudness && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProcessVoiceDataToLoudness", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProcessVoiceDataToLoudness(ProcessVoiceDataToLoudness const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4786};

/// @brief Field _voiceToLoudness, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Audio::VoiceToLoudness>  ____voiceToLoudness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::ProcessVoiceDataToLoudness, ____voiceToLoudness) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::ProcessVoiceDataToLoudness) == 0x18, "Size mismatch!");

} // namespace end def GorillaTag::Audio
