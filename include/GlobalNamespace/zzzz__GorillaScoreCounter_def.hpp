#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaScoreCounter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaScoreCounter)
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaScoreCounter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaScoreCounter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaScoreCounter*, "", "GorillaScoreCounter");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaScoreCounter
class CORDL_TYPE GorillaScoreCounter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field attribute, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_attribute, put=__cordl_internal_set_attribute)) ::StringW  attribute;

/// @brief Field isRedTeam, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRedTeam, put=__cordl_internal_set_isRedTeam)) bool  isRedTeam;

/// @brief Field text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::UnityEngine::UI::Text>  text;

/// @brief Method Awake, addr 0x58029e0, size 0xac, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaScoreCounter* New_ctor() ;

/// @brief Method Update, addr 0x5802a8c, size 0x130, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::StringW const& __cordl_internal_get_attribute() const;

constexpr ::StringW& __cordl_internal_get_attribute() ;

constexpr bool const& __cordl_internal_get_isRedTeam() const;

constexpr bool& __cordl_internal_get_isRedTeam() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_text() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_text() ;

constexpr void __cordl_internal_set_attribute(::StringW  value) ;

constexpr void __cordl_internal_set_isRedTeam(bool  value) ;

constexpr void __cordl_internal_set_text(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x5802bbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaScoreCounter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaScoreCounter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaScoreCounter(GorillaScoreCounter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaScoreCounter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaScoreCounter(GorillaScoreCounter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1680};

/// @brief Field isRedTeam, offset: 0x20, size: 0x1, def value: None
 bool  ___isRedTeam;

/// @brief Field text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___text;

/// @brief Field attribute, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___attribute;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaScoreCounter, ___isRedTeam) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreCounter, ___text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreCounter, ___attribute) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaScoreCounter) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
