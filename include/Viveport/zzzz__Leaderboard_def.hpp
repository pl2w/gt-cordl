#pragma once
// IWYU pragma private; include "Viveport/Leaderboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Leaderboard)
// Forward declare root types
namespace Viveport {
class Leaderboard;
}
// Write type traits
MARK_REF_T(::Viveport::Leaderboard*);
DEFINE_IL2CPP_CLASS(::Viveport::Leaderboard*, "Viveport", "Leaderboard");
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.Leaderboard
class CORDL_TYPE Leaderboard : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Rank, put=set_Rank)) int32_t  Rank;

 __declspec(property(get=get_Score, put=set_Score)) int32_t  Score;

 __declspec(property(get=get_UserName, put=set_UserName)) ::StringW  UserName;

/// @brief Field <Rank>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Rank_k__BackingField, put=__cordl_internal_set__Rank_k__BackingField)) int32_t  _Rank_k__BackingField;

/// @brief Field <Score>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Score_k__BackingField, put=__cordl_internal_set__Score_k__BackingField)) int32_t  _Score_k__BackingField;

/// @brief Field <UserName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserName_k__BackingField, put=__cordl_internal_set__UserName_k__BackingField)) ::StringW  _UserName_k__BackingField;

static inline ::Viveport::Leaderboard* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__Rank_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Rank_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Score_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Score_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__UserName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__UserName_k__BackingField() ;

constexpr void __cordl_internal_set__Rank_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Score_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__UserName_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b4c008, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Rank, addr 0x5b4bfd8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Rank() ;

/// [CompilerGenerated]
/// @brief Method get_Score, addr 0x5b4bfe8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Score() ;

/// [CompilerGenerated]
/// @brief Method get_UserName, addr 0x5b4bff8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_UserName() ;

/// [CompilerGenerated]
/// @brief Method set_Rank, addr 0x5b4bfe0, size 0x8, virtual false, abstract: false, final false
inline void set_Rank(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Score, addr 0x5b4bff0, size 0x8, virtual false, abstract: false, final false
inline void set_Score(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_UserName, addr 0x5b4c000, size 0x8, virtual false, abstract: false, final false
inline void set_UserName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Leaderboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Leaderboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Leaderboard(Leaderboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Leaderboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Leaderboard(Leaderboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3757};

/// [CompilerGenerated]
/// @brief Field <Rank>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Rank_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Score>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____Score_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UserName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____UserName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::Leaderboard, ____Rank_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Viveport::Leaderboard, ____Score_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Viveport::Leaderboard, ____UserName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Viveport::Leaderboard) == 0x20, "Size mismatch!");

} // namespace end def Viveport
