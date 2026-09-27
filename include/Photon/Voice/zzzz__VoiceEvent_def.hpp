#pragma once
// IWYU pragma private; include "Photon/Voice/VoiceEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceEvent)
// Forward declare root types
namespace Photon::Voice {
class VoiceEvent;
}
// Write type traits
MARK_REF_T(::Photon::Voice::VoiceEvent*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::VoiceEvent*, "Photon.Voice", "VoiceEvent");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.VoiceEvent
class CORDL_TYPE VoiceEvent : public ::System::Object {
public:
// Declarations
static inline ::Photon::Voice::VoiceEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xa756fbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceEvent(VoiceEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceEvent(VoiceEvent const& ) = delete;

/// @brief Field Code offset 0xffffffff size 0x1
static constexpr uint8_t  Code{static_cast<uint8_t>(0xcau)};

/// @brief Field FrameCode offset 0xffffffff size 0x1
static constexpr uint8_t  FrameCode{static_cast<uint8_t>(0xcbu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28501};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::VoiceEvent) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
