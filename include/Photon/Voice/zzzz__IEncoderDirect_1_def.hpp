#pragma once
// IWYU pragma private; include "Photon/Voice/IEncoderDirect_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEncoderDirect_1)
namespace Photon::Voice {
class IEncoder;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
template<typename B>
class IEncoderDirect_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::IEncoderDirect_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::IEncoderDirect_1, "Photon.Voice", "IEncoderDirect`1");
// Dependencies 
namespace Photon::Voice {
// cpp template
template<typename B>
// Is value type: false
// CS Name: Photon.Voice.IEncoderDirect`1<B>
class CORDL_TYPE IEncoderDirect_1 {
public:
// Declarations
/// @brief Convert operator to "::Photon::Voice::IEncoder"
constexpr operator  ::Photon::Voice::IEncoder*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Input, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Input(B  buf) ;

/// @brief Convert to "::Photon::Voice::IEncoder"
constexpr ::Photon::Voice::IEncoder* i___Photon__Voice__IEncoder() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IEncoderDirect_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEncoderDirect_1(IEncoderDirect_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28467};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
