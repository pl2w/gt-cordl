#pragma once
// IWYU pragma private; include "Photon/Realtime/ActorProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ActorProperties)
// Forward declare root types
namespace Photon::Realtime {
class ActorProperties;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::ActorProperties*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::ActorProperties*, "Photon.Realtime", "ActorProperties");
// Dependencies System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.ActorProperties
class CORDL_TYPE ActorProperties : public ::System::Object {
public:
// Declarations
static inline ::Photon::Realtime::ActorProperties* New_ctor() ;

/// @brief Method .ctor, addr 0xa7095ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActorProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActorProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActorProperties(ActorProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActorProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActorProperties(ActorProperties const& ) = delete;

/// @brief Field IsInactive offset 0xffffffff size 0x1
static constexpr uint8_t  IsInactive{static_cast<uint8_t>(0xfeu)};

/// @brief Field PlayerName offset 0xffffffff size 0x1
static constexpr uint8_t  PlayerName{static_cast<uint8_t>(0xffu)};

/// @brief Field UserId offset 0xffffffff size 0x1
static constexpr uint8_t  UserId{static_cast<uint8_t>(0xfdu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29872};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Realtime::ActorProperties) == 0x10, "Size mismatch!");

} // namespace end def Photon::Realtime
