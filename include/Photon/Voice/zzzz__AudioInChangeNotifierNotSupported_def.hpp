#pragma once
// IWYU pragma private; include "Photon/Voice/AudioInChangeNotifierNotSupported.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AudioInChangeNotifierNotSupported)
namespace Photon::Voice {
class IAudioInChangeNotifier;
}
namespace Photon::Voice {
class ILogger;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
class AudioInChangeNotifierNotSupported;
}
// Write type traits
MARK_REF_T(::Photon::Voice::AudioInChangeNotifierNotSupported*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioInChangeNotifierNotSupported*, "Photon.Voice", "AudioInChangeNotifierNotSupported");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioInChangeNotifierNotSupported
class CORDL_TYPE AudioInChangeNotifierNotSupported : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Error)) ::StringW  Error;

 __declspec(property(get=get_IsSupported)) bool  IsSupported;

/// @brief Convert operator to "::Photon::Voice::IAudioInChangeNotifier"
constexpr operator  ::Photon::Voice::IAudioInChangeNotifier*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa746450, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::AudioInChangeNotifierNotSupported* New_ctor(::System::Action*  callback, ::Photon::Voice::ILogger*  logger) ;

/// @brief Method .ctor, addr 0xa746408, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Action*  callback, ::Photon::Voice::ILogger*  logger) ;

/// @brief Method get_Error, addr 0xa746410, size 0x40, virtual true, abstract: false, final true
inline ::StringW get_Error() ;

/// @brief Method get_IsSupported, addr 0xa746400, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSupported() ;

/// @brief Convert to "::Photon::Voice::IAudioInChangeNotifier"
constexpr ::Photon::Voice::IAudioInChangeNotifier* i___Photon__Voice__IAudioInChangeNotifier() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioInChangeNotifierNotSupported() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioInChangeNotifierNotSupported", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioInChangeNotifierNotSupported(AudioInChangeNotifierNotSupported && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioInChangeNotifierNotSupported", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioInChangeNotifierNotSupported(AudioInChangeNotifierNotSupported const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28408};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::AudioInChangeNotifierNotSupported) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
