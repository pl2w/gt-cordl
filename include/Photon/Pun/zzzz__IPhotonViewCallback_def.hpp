#pragma once
// IWYU pragma private; include "Photon/Pun/IPhotonViewCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPhotonViewCallback)
// Forward declare root types
namespace Photon::Pun {
class IPhotonViewCallback;
}
// Write type traits
MARK_REF_T(::Photon::Pun::IPhotonViewCallback*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::IPhotonViewCallback*, "Photon.Pun", "IPhotonViewCallback");
// Dependencies 
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.IPhotonViewCallback
class CORDL_TYPE IPhotonViewCallback {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IPhotonViewCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPhotonViewCallback(IPhotonViewCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29692};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Pun
