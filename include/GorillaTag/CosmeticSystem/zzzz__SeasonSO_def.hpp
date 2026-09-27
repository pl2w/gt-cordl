#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/SeasonSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTDateTimeSerializable_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SeasonSO)
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
class SeasonSO;
}
// Write type traits
MARK_REF_T(::GorillaTag::CosmeticSystem::SeasonSO*);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::SeasonSO*, "GorillaTag.CosmeticSystem", "SeasonSO");
// [CreateAssetMenu(fileName = "UntitledSeason_SeasonSO", menuName = "- Gorilla Tag/SeasonSO", order = 0)]
// Dependencies GTDateTimeSerializable, UnityEngine.ScriptableObject
namespace GorillaTag::CosmeticSystem {
// Is value type: false
// CS Name: GorillaTag.CosmeticSystem.SeasonSO
class CORDL_TYPE SeasonSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field releaseDate, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_releaseDate, put=__cordl_internal_set_releaseDate)) ::GlobalNamespace::GTDateTimeSerializable  releaseDate;

/// @brief Field seasonName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_seasonName, put=__cordl_internal_set_seasonName)) ::StringW  seasonName;

static inline ::GorillaTag::CosmeticSystem::SeasonSO* New_ctor() ;

constexpr ::GlobalNamespace::GTDateTimeSerializable const& __cordl_internal_get_releaseDate() const;

constexpr ::GlobalNamespace::GTDateTimeSerializable& __cordl_internal_get_releaseDate() ;

constexpr ::StringW const& __cordl_internal_get_seasonName() const;

constexpr ::StringW& __cordl_internal_get_seasonName() ;

constexpr void __cordl_internal_set_releaseDate(::GlobalNamespace::GTDateTimeSerializable  value) ;

constexpr void __cordl_internal_set_seasonName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5d4caec, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SeasonSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SeasonSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SeasonSO(SeasonSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SeasonSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SeasonSO(SeasonSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4762};

/// [Delayed]
/// @brief Field releaseDate, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::GTDateTimeSerializable  ___releaseDate;

/// [Delayed]
/// @brief Field seasonName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___seasonName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::SeasonSO, ___releaseDate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::SeasonSO, ___seasonName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::SeasonSO) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
