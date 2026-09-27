#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AudioInEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__DeviceEnumeratorBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AudioInEnumerator)
namespace Photon::Voice {
class ILogger;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class AudioInEnumerator;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::AudioInEnumerator*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::AudioInEnumerator*, "Photon.Voice.Unity", "AudioInEnumerator");
// Dependencies Photon.Voice.DeviceEnumeratorBase
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.AudioInEnumerator
class CORDL_TYPE AudioInEnumerator : public ::Photon::Voice::DeviceEnumeratorBase {
public:
// Declarations
 __declspec(property(get=get_Error)) ::StringW  Error;

/// @brief Method Dispose, addr 0xa75ab30, size 0x4, virtual true, abstract: false, final false
inline void Dispose() ;

static inline ::Photon::Voice::Unity::AudioInEnumerator* New_ctor(::Photon::Voice::ILogger*  logger) ;

/// @brief Method Refresh, addr 0xa75a9a8, size 0x180, virtual true, abstract: false, final false
inline void Refresh() ;

/// @brief Method .ctor, addr 0xa75a984, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::ILogger*  logger) ;

/// @brief Method get_Error, addr 0xa75ab28, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Error() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioInEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioInEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioInEnumerator(AudioInEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioInEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioInEnumerator(AudioInEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28514};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::Unity::AudioInEnumerator) == 0x28, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
