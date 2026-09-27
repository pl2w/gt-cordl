#pragma once
// IWYU pragma private; include "GlobalNamespace/MatchGTPlayerRotation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MatchGTPlayerRotation)
// Forward declare root types
namespace GlobalNamespace {
class MatchGTPlayerRotation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MatchGTPlayerRotation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatchGTPlayerRotation*, "", "MatchGTPlayerRotation");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MatchGTPlayerRotation
class CORDL_TYPE MatchGTPlayerRotation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field matchPosition, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_matchPosition, put=__cordl_internal_set_matchPosition)) bool  matchPosition;

/// @brief Field matchRotation, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_matchRotation, put=__cordl_internal_set_matchRotation)) bool  matchRotation;

/// @brief Method LateUpdate, addr 0x567bf50, size 0x17c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::MatchGTPlayerRotation* New_ctor() ;

constexpr bool const& __cordl_internal_get_matchPosition() const;

constexpr bool& __cordl_internal_get_matchPosition() ;

constexpr bool const& __cordl_internal_get_matchRotation() const;

constexpr bool& __cordl_internal_get_matchRotation() ;

constexpr void __cordl_internal_set_matchPosition(bool  value) ;

constexpr void __cordl_internal_set_matchRotation(bool  value) ;

/// @brief Method .ctor, addr 0x567c0cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchGTPlayerRotation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchGTPlayerRotation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchGTPlayerRotation(MatchGTPlayerRotation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchGTPlayerRotation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchGTPlayerRotation(MatchGTPlayerRotation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{863};

/// @brief Field matchPosition, offset: 0x20, size: 0x1, def value: None
 bool  ___matchPosition;

/// @brief Field matchRotation, offset: 0x21, size: 0x1, def value: None
 bool  ___matchRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MatchGTPlayerRotation, ___matchPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatchGTPlayerRotation, ___matchRotation) == 0x21, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MatchGTPlayerRotation) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
