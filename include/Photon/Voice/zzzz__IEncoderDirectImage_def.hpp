#pragma once
// IWYU pragma private; include "Photon/Voice/IEncoderDirectImage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEncoderDirectImage)
namespace Photon::Voice {
template<typename B>
class IEncoderDirect_1;
}
namespace Photon::Voice {
class IEncoder;
}
namespace Photon::Voice {
class ImageBufferNative;
}
namespace Photon::Voice {
struct ImageFormat;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
class IEncoderDirectImage;
}
// Write type traits
MARK_REF_T(::Photon::Voice::IEncoderDirectImage*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::IEncoderDirectImage*, "Photon.Voice", "IEncoderDirectImage");
// Dependencies 
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.IEncoderDirectImage
class CORDL_TYPE IEncoderDirectImage {
public:
// Declarations
 __declspec(property(get=get_ImageFormat)) ::Photon::Voice::ImageFormat  ImageFormat;

/// @brief Convert operator to "::Photon::Voice::IEncoder"
constexpr operator  ::Photon::Voice::IEncoder*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>"
constexpr operator  ::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method get_ImageFormat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Photon::Voice::ImageFormat get_ImageFormat() ;

/// @brief Convert to "::Photon::Voice::IEncoder"
constexpr ::Photon::Voice::IEncoder* i___Photon__Voice__IEncoder() noexcept;

/// @brief Convert to "::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>"
constexpr ::Photon::Voice::IEncoderDirect_1<::Photon::Voice::ImageBufferNative*>* i___Photon__Voice__IEncoderDirect_1___Photon__Voice__ImageBufferNative__() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IEncoderDirectImage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEncoderDirectImage(IEncoderDirectImage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28468};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
