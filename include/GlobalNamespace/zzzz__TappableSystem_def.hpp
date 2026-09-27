#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTSystem_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TappableSystem)
namespace GlobalNamespace {
class Tappable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class TappableSystem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TappableSystem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TappableSystem*, "", "TappableSystem");
// Dependencies GTSystem`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: TappableSystem
class CORDL_TYPE TappableSystem : public ::GlobalNamespace::GTSystem_1<::UnityW<::GlobalNamespace::Tappable>> {
public:
// Declarations
static inline ::GlobalNamespace::TappableSystem* New_ctor() ;

/// [PunRPC]
/// @brief Method SendOnTapRPC, addr 0x59612c8, size 0x194, virtual false, abstract: false, final false
inline void SendOnTapRPC(int32_t  key, float_t  tapStrength, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method .ctor, addr 0x596145c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TappableSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TappableSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TappableSystem(TappableSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TappableSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TappableSystem(TappableSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2357};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TappableSystem) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
