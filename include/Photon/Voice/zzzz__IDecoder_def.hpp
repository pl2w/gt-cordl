#pragma once
// IWYU pragma private; include "Photon/Voice/IDecoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IDecoder)
namespace Photon::Voice {
struct FrameBuffer;
}
namespace Photon::Voice {
struct VoiceInfo;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
class IDecoder;
}
// Write type traits
MARK_REF_T(::Photon::Voice::IDecoder*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::IDecoder*, "Photon.Voice", "IDecoder");
// Dependencies 
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.IDecoder
class CORDL_TYPE IDecoder {
public:
// Declarations
 __declspec(property(get=get_Error)) ::StringW  Error;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Input, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Input(::by_ref<::Photon::Voice::FrameBuffer>  buf) ;

/// @brief Method Open, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Open(::Photon::Voice::VoiceInfo  info) ;

/// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Error() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IDecoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDecoder(IDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28469};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
