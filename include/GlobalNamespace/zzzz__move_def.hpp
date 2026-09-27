#pragma once
// IWYU pragma private; include "GlobalNamespace/move.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(move)
// Forward declare root types
namespace GlobalNamespace {
class move;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::move*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::move*, "", "move");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: move
class CORDL_TYPE move : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bounce, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_bounce, put=__cordl_internal_set_bounce)) bool  bounce;

/// @brief Field cnt, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_cnt, put=__cordl_internal_set_cnt)) int32_t  cnt;

/// @brief Field direction, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_direction, put=__cordl_internal_set_direction)) int32_t  direction;

/// @brief Method BounceState, addr 0x5b24080, size 0x64, virtual false, abstract: false, final false
inline void BounceState(::StringW  state) ;

static inline ::GlobalNamespace::move* New_ctor() ;

/// @brief Method Update, addr 0x5b23fa0, size 0xe0, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_bounce() const;

constexpr bool& __cordl_internal_get_bounce() ;

constexpr int32_t const& __cordl_internal_get_cnt() const;

constexpr int32_t& __cordl_internal_get_cnt() ;

constexpr int32_t const& __cordl_internal_get_direction() const;

constexpr int32_t& __cordl_internal_get_direction() ;

constexpr void __cordl_internal_set_bounce(bool  value) ;

constexpr void __cordl_internal_set_cnt(int32_t  value) ;

constexpr void __cordl_internal_set_direction(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b240e4, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr move() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "move", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
move(move && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "move", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
move(move const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3622};

/// @brief Field direction, offset: 0x20, size: 0x4, def value: None
 int32_t  ___direction;

/// @brief Field cnt, offset: 0x24, size: 0x4, def value: None
 int32_t  ___cnt;

/// @brief Field bounce, offset: 0x28, size: 0x1, def value: None
 bool  ___bounce;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::move, ___direction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::move, ___cnt) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::move, ___bounce) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::move) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
