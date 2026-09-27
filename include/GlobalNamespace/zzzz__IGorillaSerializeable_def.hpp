#pragma once
// IWYU pragma private; include "GlobalNamespace/IGorillaSerializeable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGorillaSerializeable)
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace GlobalNamespace {
class IGorillaSerializeable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGorillaSerializeable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGorillaSerializeable*, "", "IGorillaSerializeable");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGorillaSerializeable
class CORDL_TYPE IGorillaSerializeable {
public:
// Declarations
/// @brief Method OnSerializeRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

// Ctor Parameters [CppParam { name: "", ty: "IGorillaSerializeable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGorillaSerializeable(IGorillaSerializeable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2126};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
