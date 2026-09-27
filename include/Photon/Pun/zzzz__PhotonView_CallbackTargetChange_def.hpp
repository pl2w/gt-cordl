#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonView_CallbackTargetChange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PhotonView_CallbackTargetChange)
namespace Photon::Pun {
class IPhotonViewCallback;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
struct PhotonView_CallbackTargetChange;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PhotonView_CallbackTargetChange);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonView_CallbackTargetChange, "Photon.Pun", "PhotonView/CallbackTargetChange");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Pun.PhotonView/CallbackTargetChange
struct CORDL_TYPE PhotonView_CallbackTargetChange {
public:
// Declarations
/// @brief Method .ctor, addr 0xa72b27c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Photon::Pun::IPhotonViewCallback*  obj, ::System::Type*  type, bool  add) ;

// Ctor Parameters []
// @brief default ctor
constexpr PhotonView_CallbackTargetChange() ;

// Ctor Parameters [CppParam { name: "obj", ty: "::Photon::Pun::IPhotonViewCallback*", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }, CppParam { name: "add", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr PhotonView_CallbackTargetChange(::Photon::Pun::IPhotonViewCallback*  obj, ::System::Type*  type, bool  add) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29710};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field obj, offset: 0x0, size: 0x8, def value: None
 ::Photon::Pun::IPhotonViewCallback*  obj;

/// @brief Field type, offset: 0x8, size: 0x8, def value: None
 ::System::Type*  type;

/// @brief Field add, offset: 0x10, size: 0x1, def value: None
 bool  add;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonView_CallbackTargetChange, obj) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonView_CallbackTargetChange, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonView_CallbackTargetChange, add) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonView_CallbackTargetChange) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
