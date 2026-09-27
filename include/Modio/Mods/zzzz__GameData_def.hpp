#pragma once
// IWYU pragma private; include "Modio/Mods/GameData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__GameTagCategory_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GameData)
// Forward declare root types
namespace Modio::Mods {
class GameData;
}
// Write type traits
MARK_REF_T(::Modio::Mods::GameData*);
DEFINE_IL2CPP_CLASS(::Modio::Mods::GameData*, "Modio.Mods", "GameData");
// Dependencies Modio.Mods.GameTagCategory, System.Object
namespace Modio::Mods {
// Is value type: false
// CS Name: Modio.Mods.GameData
class CORDL_TYPE GameData : public ::System::Object {
public:
// Declarations
/// @brief Field Categories, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Categories, put=__cordl_internal_set_Categories)) ::ArrayW<::Modio::Mods::GameTagCategory*>  Categories;

static inline ::Modio::Mods::GameData* New_ctor() ;

constexpr ::ArrayW<::Modio::Mods::GameTagCategory*> const& __cordl_internal_get_Categories() const;

constexpr ::ArrayW<::Modio::Mods::GameTagCategory*>& __cordl_internal_get_Categories() ;

constexpr void __cordl_internal_set_Categories(::ArrayW<::Modio::Mods::GameTagCategory*>  value) ;

/// @brief Method .ctor, addr 0xa026914, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameData(GameData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameData(GameData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17566};

/// @brief Field Categories, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Modio::Mods::GameTagCategory*>  ___Categories;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::GameData, ___Categories) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::GameData) == 0x18, "Size mismatch!");

} // namespace end def Modio::Mods
