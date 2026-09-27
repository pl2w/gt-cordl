#pragma once
// IWYU pragma private; include "Photon/Voice/IAudioDesc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAudioDesc)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
class IAudioDesc;
}
// Write type traits
MARK_REF_T(::Photon::Voice::IAudioDesc*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::IAudioDesc*, "Photon.Voice", "IAudioDesc");
// Dependencies 
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.IAudioDesc
class CORDL_TYPE IAudioDesc {
public:
// Declarations
 __declspec(property(get=get_Channels)) int32_t  Channels;

 __declspec(property(get=get_Error)) ::StringW  Error;

 __declspec(property(get=get_SamplingRate)) int32_t  SamplingRate;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method get_Channels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Channels() ;

/// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Error() ;

/// @brief Method get_SamplingRate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_SamplingRate() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAudioDesc", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioDesc(IAudioDesc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28441};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
