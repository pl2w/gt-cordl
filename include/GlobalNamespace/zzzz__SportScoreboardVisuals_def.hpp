#pragma once
// IWYU pragma private; include "GlobalNamespace/SportScoreboardVisuals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SportScoreboardVisuals)
namespace GlobalNamespace {
class MaterialUVOffsetListSetter;
}
// Forward declare root types
namespace GlobalNamespace {
class SportScoreboardVisuals;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SportScoreboardVisuals*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SportScoreboardVisuals*, "", "SportScoreboardVisuals");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SportScoreboardVisuals
class CORDL_TYPE SportScoreboardVisuals : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TeamIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_TeamIndex, put=__cordl_internal_set_TeamIndex)) int32_t  TeamIndex;

/// @brief Field score10s, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_score10s, put=__cordl_internal_set_score10s)) ::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter>  score10s;

/// @brief Field score1s, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_score1s, put=__cordl_internal_set_score1s)) ::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter>  score1s;

/// @brief Method Awake, addr 0x5986cc0, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SportScoreboardVisuals* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_TeamIndex() const;

constexpr int32_t& __cordl_internal_get_TeamIndex() ;

constexpr ::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter> const& __cordl_internal_get_score10s() const;

constexpr ::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter>& __cordl_internal_get_score10s() ;

constexpr ::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter> const& __cordl_internal_get_score1s() const;

constexpr ::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter>& __cordl_internal_get_score1s() ;

constexpr void __cordl_internal_set_TeamIndex(int32_t  value) ;

constexpr void __cordl_internal_set_score10s(::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter>  value) ;

constexpr void __cordl_internal_set_score1s(::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter>  value) ;

/// @brief Method .ctor, addr 0x5986d20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SportScoreboardVisuals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SportScoreboardVisuals", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SportScoreboardVisuals(SportScoreboardVisuals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SportScoreboardVisuals", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SportScoreboardVisuals(SportScoreboardVisuals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2551};

/// [SerializeField]
/// @brief Field score1s, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter>  ___score1s;

/// [SerializeField]
/// @brief Field score10s, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MaterialUVOffsetListSetter>  ___score10s;

/// [SerializeField]
/// @brief Field TeamIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___TeamIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SportScoreboardVisuals, ___score1s) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SportScoreboardVisuals, ___score10s) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SportScoreboardVisuals, ___TeamIndex) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SportScoreboardVisuals) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
