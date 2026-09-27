#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/PhotonPortDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonPortDefinition)
// Forward declare root types
namespace Fusion::Photon::Realtime {
struct PhotonPortDefinition;
}
// Write type traits
MARK_VAL_T(::Fusion::Photon::Realtime::PhotonPortDefinition);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::PhotonPortDefinition, "Fusion.Photon.Realtime", "PhotonPortDefinition");
// Dependencies 
namespace Fusion::Photon::Realtime {
// Is value type: true
// CS Name: Fusion.Photon.Realtime.PhotonPortDefinition
struct CORDL_TYPE PhotonPortDefinition {
public:
// Declarations
/// @brief Field AlternativeUdpPorts, offset 0xffffffff, size 0x6 
 __declspec(property(get=getStaticF_AlternativeUdpPorts, put=setStaticF_AlternativeUdpPorts)) ::Fusion::Photon::Realtime::PhotonPortDefinition  AlternativeUdpPorts;

static inline ::Fusion::Photon::Realtime::PhotonPortDefinition getStaticF_AlternativeUdpPorts() ;

static inline void setStaticF_AlternativeUdpPorts(::Fusion::Photon::Realtime::PhotonPortDefinition  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PhotonPortDefinition() ;

// Ctor Parameters [CppParam { name: "NameServerPort", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MasterServerPort", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GameServerPort", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr PhotonPortDefinition(uint16_t  NameServerPort, uint16_t  MasterServerPort, uint16_t  GameServerPort) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28050};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x6};

/// @brief Field NameServerPort, offset: 0x0, size: 0x2, def value: None
 uint16_t  NameServerPort;

/// @brief Field MasterServerPort, offset: 0x2, size: 0x2, def value: None
 uint16_t  MasterServerPort;

/// @brief Field GameServerPort, offset: 0x4, size: 0x2, def value: None
 uint16_t  GameServerPort;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::PhotonPortDefinition, NameServerPort) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::PhotonPortDefinition, MasterServerPort) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::PhotonPortDefinition, GameServerPort) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::PhotonPortDefinition) == 0x6, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
