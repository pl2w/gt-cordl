#pragma once
// IWYU pragma private; include "Photon/Voice/IDecoderDirect_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDecoderDirect_1)
namespace Photon::Voice {
class IDecoder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
template<typename B>
class IDecoderDirect_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::IDecoderDirect_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::IDecoderDirect_1, "Photon.Voice", "IDecoderDirect`1");
// Dependencies 
namespace Photon::Voice {
// cpp template
template<typename B>
// Is value type: false
// CS Name: Photon.Voice.IDecoderDirect`1<B>
class CORDL_TYPE IDecoderDirect_1 {
public:
// Declarations
 __declspec(property(get=get_Output, put=set_Output)) ::System::Action_1<B>*  Output;

/// @brief Convert operator to "::Photon::Voice::IDecoder"
constexpr operator  ::Photon::Voice::IDecoder*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method get_Output, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Action_1<B>* get_Output() ;

/// @brief Convert to "::Photon::Voice::IDecoder"
constexpr ::Photon::Voice::IDecoder* i___Photon__Voice__IDecoder() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Output, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Output(::System::Action_1<B>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IDecoderDirect_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDecoderDirect_1(IDecoderDirect_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28470};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
