#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonSignalInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonSignalInfo)
namespace GlobalNamespace {
class NetPlayer;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
// Forward declare root types
namespace GlobalNamespace {
struct PhotonSignalInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PhotonSignalInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonSignalInfo, "", "PhotonSignalInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PhotonSignalInfo
struct CORDL_TYPE PhotonSignalInfo {
public:
// Declarations
 __declspec(property(get=get_sentServerTime)) double_t  sentServerTime;

/// @brief Method ToString, addr 0x5abeb30, size 0xdc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5abeaf0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::NetPlayer*  sender, int32_t  timestamp) ;

/// @brief Method get_sentServerTime, addr 0x5abeb18, size 0x18, virtual false, abstract: false, final false
inline double_t get_sentServerTime() ;

/// @brief Method op_Implicit, addr 0x5abec0c, size 0x4c, virtual false, abstract: false, final false
static inline ::Photon::Pun::PhotonMessageInfo op_Implicit___Photon__Pun__PhotonMessageInfo(::GlobalNamespace::PhotonSignalInfo  psi) ;

// Ctor Parameters []
// @brief default ctor
constexpr PhotonSignalInfo() ;

// Ctor Parameters [CppParam { name: "timestamp", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sender", ty: "::GlobalNamespace::NetPlayer*", modifiers: "", def_value: None, comment: None }]
constexpr PhotonSignalInfo(int32_t  timestamp, ::GlobalNamespace::NetPlayer*  sender) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3331};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field timestamp, offset: 0x0, size: 0x4, def value: None
 int32_t  timestamp;

/// @brief Field sender, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  sender;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonSignalInfo, timestamp) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonSignalInfo, sender) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonSignalInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
