#pragma once
// IWYU pragma private; include "GorillaGameModes/GameModeString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameModeString)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GorillaGameModes {
class GameModeString;
}
// Write type traits
MARK_REF_T(::GorillaGameModes::GameModeString*);
DEFINE_IL2CPP_CLASS(::GorillaGameModes::GameModeString*, "GorillaGameModes", "GameModeString");
// Dependencies System.Object
namespace GorillaGameModes {
// Is value type: false
// CS Name: GorillaGameModes.GameModeString
class CORDL_TYPE GameModeString : public ::System::Object {
public:
// Declarations
/// @brief Field gameType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameType, put=__cordl_internal_set_gameType)) ::StringW  gameType;

/// @brief Field modFileId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_modFileId, put=__cordl_internal_set_modFileId)) ::StringW  modFileId;

/// @brief Field modId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_modId, put=__cordl_internal_set_modId)) ::StringW  modId;

/// @brief Field queue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_queue, put=__cordl_internal_set_queue)) ::StringW  queue;

/// @brief Field zone, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::StringW  zone;

/// @brief Method DoesPropertyStringContainGameMode, addr 0x5b722a4, size 0x84, virtual false, abstract: false, final false
static inline bool DoesPropertyStringContainGameMode(::StringW  propertyString, ::StringW  gameMode) ;

/// @brief Method FromString, addr 0x5b7210c, size 0x190, virtual false, abstract: false, final false
static inline ::GorillaGameModes::GameModeString* FromString(::StringW  gameModeString) ;

/// @brief Method GameTypeFromPropertyString, addr 0x5b72328, size 0x120, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> GameTypeFromPropertyString(::StringW  propertyString) ;

static inline ::GorillaGameModes::GameModeString* New_ctor() ;

/// @brief Method ToString, addr 0x5b71f74, size 0x198, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_gameType() const;

constexpr ::StringW& __cordl_internal_get_gameType() ;

constexpr ::StringW const& __cordl_internal_get_modFileId() const;

constexpr ::StringW& __cordl_internal_get_modFileId() ;

constexpr ::StringW const& __cordl_internal_get_modId() const;

constexpr ::StringW& __cordl_internal_get_modId() ;

constexpr ::StringW const& __cordl_internal_get_queue() const;

constexpr ::StringW& __cordl_internal_get_queue() ;

constexpr ::StringW const& __cordl_internal_get_zone() const;

constexpr ::StringW& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_gameType(::StringW  value) ;

constexpr void __cordl_internal_set_modFileId(::StringW  value) ;

constexpr void __cordl_internal_set_modId(::StringW  value) ;

constexpr void __cordl_internal_set_queue(::StringW  value) ;

constexpr void __cordl_internal_set_zone(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b7229c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameModeString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameModeString", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameModeString(GameModeString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameModeString", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameModeString(GameModeString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3886};

/// @brief Field zone, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___zone;

/// @brief Field queue, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___queue;

/// @brief Field gameType, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___gameType;

/// @brief Field modId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___modId;

/// @brief Field modFileId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___modFileId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaGameModes::GameModeString, ___zone) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeString, ___queue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeString, ___gameType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeString, ___modId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeString, ___modFileId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaGameModes::GameModeString) == 0x38, "Size mismatch!");

} // namespace end def GorillaGameModes
