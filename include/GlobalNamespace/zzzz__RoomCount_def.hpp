#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomCount.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PrivateRoomCount_def.hpp"
#include "GlobalNamespace/zzzz__RoomCountForZone_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomCount)
namespace GlobalNamespace {
struct GTZone;
}
namespace GorillaGameModes {
struct GameModeType;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomCount;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoomCount*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomCount*, "", "RoomCount");
// Dependencies PrivateRoomCount, RoomCountForZone
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomCount
class CORDL_TYPE RoomCount : public ::GlobalNamespace::PrivateRoomCount {
public:
// Declarations
/// @brief Field zoneCountOverrides, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneCountOverrides, put=__cordl_internal_set_zoneCountOverrides)) ::ArrayW<::GlobalNamespace::RoomCountForZone*>  zoneCountOverrides;

/// @brief Method GetRoomCount, addr 0x5adc0cc, size 0x6c, virtual false, abstract: false, final false
inline int32_t GetRoomCount(::GlobalNamespace::GTZone  zone) ;

/// @brief Method GetRoomCount, addr 0x5adc138, size 0x38, virtual true, abstract: false, final false
inline int32_t GetRoomCount(::GlobalNamespace::GTZone  zone, ::GorillaGameModes::GameModeType  mode) ;

static inline ::GlobalNamespace::RoomCount* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::RoomCountForZone*> const& __cordl_internal_get_zoneCountOverrides() const;

constexpr ::ArrayW<::GlobalNamespace::RoomCountForZone*>& __cordl_internal_get_zoneCountOverrides() ;

constexpr void __cordl_internal_set_zoneCountOverrides(::ArrayW<::GlobalNamespace::RoomCountForZone*>  value) ;

/// @brief Method .ctor, addr 0x5adc170, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomCount() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomCount", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomCount(RoomCount && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomCount", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomCount(RoomCount const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3406};

/// [SerializeField]
/// @brief Field zoneCountOverrides, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RoomCountForZone*>  ___zoneCountOverrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomCount, ___zoneCountOverrides) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomCount) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
