#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AudioOutCapture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioOutCapture)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class AudioOutCapture;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::AudioOutCapture*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::AudioOutCapture*, "Photon.Voice.Unity", "AudioOutCapture");
// Dependencies UnityEngine.MonoBehaviour
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.AudioOutCapture
class CORDL_TYPE AudioOutCapture : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnAudioFrame, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAudioFrame, put=__cordl_internal_set_OnAudioFrame)) ::System::Action_2<::ArrayW<float_t>,int32_t>*  OnAudioFrame;

static inline ::Photon::Voice::Unity::AudioOutCapture* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0xa75a938, size 0x1c, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t>  frame, int32_t  channels) ;

constexpr ::System::Action_2<::ArrayW<float_t>,int32_t>* const& __cordl_internal_get_OnAudioFrame() const;

constexpr ::System::Action_2<::ArrayW<float_t>,int32_t>*& __cordl_internal_get_OnAudioFrame() ;

constexpr void __cordl_internal_set_OnAudioFrame(::System::Action_2<::ArrayW<float_t>,int32_t>*  value) ;

/// @brief Method .ctor, addr 0xa75a954, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnAudioFrame, addr 0xa75a7d8, size 0xb0, virtual false, abstract: false, final false
inline void add_OnAudioFrame(::System::Action_2<::ArrayW<float_t>,int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnAudioFrame, addr 0xa75a888, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnAudioFrame(::System::Action_2<::ArrayW<float_t>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioOutCapture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioOutCapture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioOutCapture(AudioOutCapture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioOutCapture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioOutCapture(AudioOutCapture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28512};

/// [CompilerGenerated]
/// @brief Field OnAudioFrame, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<::ArrayW<float_t>,int32_t>*  ___OnAudioFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::AudioOutCapture, ___OnAudioFrame) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::AudioOutCapture) == 0x28, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
