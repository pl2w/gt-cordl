#pragma once
// IWYU pragma private; include "Photon/Voice/IServiceable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IServiceable)
namespace Photon::Voice {
class LocalVoice;
}
// Forward declare root types
namespace Photon::Voice {
class IServiceable;
}
// Write type traits
MARK_REF_T(::Photon::Voice::IServiceable*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::IServiceable*, "Photon.Voice", "IServiceable");
// Dependencies 
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.IServiceable
class CORDL_TYPE IServiceable {
public:
// Declarations
/// @brief Method Service, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Service(::Photon::Voice::LocalVoice*  localVoice) ;

// Ctor Parameters [CppParam { name: "", ty: "IServiceable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IServiceable(IServiceable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28435};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
