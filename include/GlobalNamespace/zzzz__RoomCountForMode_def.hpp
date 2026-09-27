#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomCountForMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomCountForMode)
namespace GorillaGameModes {
struct GameModeType;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomCountForMode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoomCountForMode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomCountForMode*, "", "RoomCountForMode");
// Dependencies GorillaGameModes.GameModeType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomCountForMode
class CORDL_TYPE RoomCountForMode : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Mode)) ::GorillaGameModes::GameModeType  Mode;

/// @brief Field count, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GorillaGameModes::GameModeType  mode;

static inline ::GlobalNamespace::RoomCountForMode* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr ::GorillaGameModes::GameModeType const& __cordl_internal_get_mode() const;

constexpr ::GorillaGameModes::GameModeType& __cordl_internal_get_mode() ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_mode(::GorillaGameModes::GameModeType  value) ;

/// @brief Method .ctor, addr 0x5adc1a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x5adc190, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Mode, addr 0x5adc198, size 0x8, virtual false, abstract: false, final false
inline ::GorillaGameModes::GameModeType get_Mode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomCountForMode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomCountForMode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomCountForMode(RoomCountForMode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomCountForMode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomCountForMode(RoomCountForMode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3408};

/// [SerializeField]
/// @brief Field mode, offset: 0x10, size: 0x4, def value: None
 ::GorillaGameModes::GameModeType  ___mode;

/// [SerializeField]
/// @brief Field count, offset: 0x14, size: 0x4, def value: None
 int32_t  ___count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomCountForMode, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomCountForMode, ___count) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomCountForMode) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
