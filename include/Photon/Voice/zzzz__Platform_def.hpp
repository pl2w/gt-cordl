#pragma once
// IWYU pragma private; include "Photon/Voice/Platform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Platform)
namespace Photon::Voice {
struct DeviceInfo;
}
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
class IAudioInChangeNotifier;
}
namespace Photon::Voice {
class IDeviceEnumerator;
}
namespace Photon::Voice {
class IEncoder;
}
namespace Photon::Voice {
class ILogger;
}
namespace Photon::Voice {
struct VoiceInfo;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice {
class Platform;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Platform*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Platform*, "Photon.Voice", "Platform");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.Platform
class CORDL_TYPE Platform : public ::System::Object {
public:
// Declarations
/// @brief Method CreateAudioInChangeNotifier, addr 0xa746c88, size 0x54, virtual false, abstract: false, final false
static inline ::Photon::Voice::IAudioInChangeNotifier* CreateAudioInChangeNotifier(::System::Action*  callback, ::Photon::Voice::ILogger*  logger) ;

/// @brief Method CreateAudioInEnumerator, addr 0xa746c30, size 0x58, virtual false, abstract: false, final false
static inline ::Photon::Voice::IDeviceEnumerator* CreateAudioInEnumerator(::Photon::Voice::ILogger*  logger) ;

/// @brief Method CreateDefaultAudioEncoder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Photon::Voice::IEncoder* CreateDefaultAudioEncoder(::Photon::Voice::ILogger*  logger, ::Photon::Voice::VoiceInfo  info) ;

/// @brief Method CreateDefaultAudioSource, addr 0xa746cdc, size 0xe8, virtual false, abstract: false, final false
static inline ::Photon::Voice::IAudioDesc* CreateDefaultAudioSource(::Photon::Voice::ILogger*  logger, ::Photon::Voice::DeviceInfo  dev, int32_t  samplingRate, int32_t  channels, ::System::Object*  otherParams) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Platform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Platform(Platform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Platform(Platform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28426};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::Platform) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
