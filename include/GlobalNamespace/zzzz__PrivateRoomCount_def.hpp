#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivateRoomCount.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RoomCountForMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateRoomCount)
namespace GlobalNamespace {
struct GTZone;
}
namespace GorillaGameModes {
struct GameModeType;
}
// Forward declare root types
namespace GlobalNamespace {
class PrivateRoomCount;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PrivateRoomCount*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PrivateRoomCount*, "", "PrivateRoomCount");
// Dependencies RoomCountForMode, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PrivateRoomCount
class CORDL_TYPE PrivateRoomCount : public ::System::Object {
public:
// Declarations
/// @brief Field count, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field modeCountOverrides, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_modeCountOverrides, put=__cordl_internal_set_modeCountOverrides)) ::ArrayW<::GlobalNamespace::RoomCountForMode*>  modeCountOverrides;

/// @brief Method GetRoomCount, addr 0x5adc048, size 0x8, virtual false, abstract: false, final false
inline int32_t GetRoomCount() ;

/// @brief Method GetRoomCount, addr 0x5adc050, size 0x6c, virtual false, abstract: false, final false
inline int32_t GetRoomCount(::GorillaGameModes::GameModeType  mode) ;

/// @brief Method GetRoomCount, addr 0x5adc0bc, size 0x8, virtual true, abstract: false, final false
inline int32_t GetRoomCount(::GlobalNamespace::GTZone  zone, ::GorillaGameModes::GameModeType  mode) ;

static inline ::GlobalNamespace::PrivateRoomCount* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr ::ArrayW<::GlobalNamespace::RoomCountForMode*> const& __cordl_internal_get_modeCountOverrides() const;

constexpr ::ArrayW<::GlobalNamespace::RoomCountForMode*>& __cordl_internal_get_modeCountOverrides() ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_modeCountOverrides(::ArrayW<::GlobalNamespace::RoomCountForMode*>  value) ;

/// @brief Method .ctor, addr 0x5adc0c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrivateRoomCount() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrivateRoomCount", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PrivateRoomCount(PrivateRoomCount && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrivateRoomCount", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrivateRoomCount(PrivateRoomCount const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3405};

/// [SerializeField]
/// @brief Field count, offset: 0x10, size: 0x4, def value: None
 int32_t  ___count;

/// [SerializeField]
/// @brief Field modeCountOverrides, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RoomCountForMode*>  ___modeCountOverrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrivateRoomCount, ___count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivateRoomCount, ___modeCountOverrides) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PrivateRoomCount) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
