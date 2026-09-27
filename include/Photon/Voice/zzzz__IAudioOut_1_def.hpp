#pragma once
// IWYU pragma private; include "Photon/Voice/IAudioOut_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAudioOut_1)
// Forward declare root types
namespace Photon::Voice {
template<typename T>
class IAudioOut_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::IAudioOut_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::IAudioOut_1, "Photon.Voice", "IAudioOut`1");
// Dependencies 
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.IAudioOut`1<T>
class CORDL_TYPE IAudioOut_1 {
public:
// Declarations
 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_Lag)) int32_t  Lag;

/// @brief Method Flush, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Flush() ;

/// @brief Method Push, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Push(::ArrayW<T>  frame) ;

/// @brief Method Service, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Service() ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Start(int32_t  frequency, int32_t  channels, int32_t  frameSamplesPerChannel) ;

/// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Stop() ;

/// @brief Method ToggleAudioSource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ToggleAudioSource(bool  toggle) ;

/// @brief Method get_IsPlaying, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsPlaying() ;

/// @brief Method get_Lag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Lag() ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioOut_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioOut_1(IAudioOut_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28396};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
