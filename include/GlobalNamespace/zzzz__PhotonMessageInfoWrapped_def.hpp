#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonMessageInfoWrapped.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonMessageInfoWrapped)
namespace Fusion {
struct RpcInfo;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
// Forward declare root types
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PhotonMessageInfoWrapped);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonMessageInfoWrapped, "", "PhotonMessageInfoWrapped");
// Dependencies Photon.Pun.PhotonMessageInfo
namespace GlobalNamespace {
// Is value type: true
// CS Name: PhotonMessageInfoWrapped
struct CORDL_TYPE PhotonMessageInfoWrapped {
public:
// Declarations
 __declspec(property(get=get_SentServerTime)) double_t  SentServerTime;

/// @brief Method GetLocalDefault, addr 0x56e7ab0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PhotonMessageInfoWrapped GetLocalDefault() ;

/// @brief Method .ctor, addr 0x56e7834, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::Fusion::RpcInfo  info) ;

/// @brief Method .ctor, addr 0x56e7758, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method .ctor, addr 0x56e7918, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(int32_t  playerID, int32_t  tick) ;

/// @brief Method .ctor, addr 0x56e79c0, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::NetPlayer*  sender) ;

/// @brief Method get_SentServerTime, addr 0x56e7740, size 0x18, virtual false, abstract: false, final false
inline double_t get_SentServerTime() ;

/// @brief Method op_Implicit, addr 0x56e7a94, size 0x1c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PhotonMessageInfoWrapped op_Implicit___GlobalNamespace__PhotonMessageInfoWrapped(::Fusion::RpcInfo  info) ;

/// @brief Method op_Implicit, addr 0x56e7a58, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PhotonMessageInfoWrapped op_Implicit___GlobalNamespace__PhotonMessageInfoWrapped(::Photon::Pun::PhotonMessageInfo  info) ;

// Ctor Parameters []
// @brief default ctor
constexpr PhotonMessageInfoWrapped() ;

// Ctor Parameters [CppParam { name: "senderID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sentTick", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "punInfo", ty: "::Photon::Pun::PhotonMessageInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "Sender", ty: "::GlobalNamespace::NetPlayer*", modifiers: "", def_value: None, comment: None }]
constexpr PhotonMessageInfoWrapped(int32_t  senderID, int32_t  sentTick, ::Photon::Pun::PhotonMessageInfo  punInfo, ::GlobalNamespace::NetPlayer*  Sender) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1112};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field senderID, offset: 0x0, size: 0x4, def value: None
 int32_t  senderID;

/// @brief Field sentTick, offset: 0x4, size: 0x4, def value: None
 int32_t  sentTick;

/// @brief Field punInfo, offset: 0x8, size: 0x18, def value: None
 ::Photon::Pun::PhotonMessageInfo  punInfo;

/// @brief Field Sender, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  Sender;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonMessageInfoWrapped, senderID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonMessageInfoWrapped, sentTick) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonMessageInfoWrapped, punInfo) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonMessageInfoWrapped, Sender) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonMessageInfoWrapped) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
