#pragma once
// IWYU pragma private; include "Photon/Voice/IResettable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IResettable)
// Forward declare root types
namespace Photon::Voice {
class IResettable;
}
// Write type traits
MARK_REF_T(::Photon::Voice::IResettable*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::IResettable*, "Photon.Voice", "IResettable");
// Dependencies 
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.IResettable
class CORDL_TYPE IResettable {
public:
// Declarations
/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "IResettable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IResettable(IResettable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28440};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
