#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPlayerCounter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaPlayerCounter)
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaPlayerCounter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaPlayerCounter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPlayerCounter*, "", "GorillaPlayerCounter");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPlayerCounter
class CORDL_TYPE GorillaPlayerCounter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field attribute, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_attribute, put=__cordl_internal_set_attribute)) ::StringW  attribute;

/// @brief Field isRedTeam, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRedTeam, put=__cordl_internal_set_isRedTeam)) bool  isRedTeam;

/// @brief Field text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::UnityW<::UnityEngine::UI::Text>  text;

/// @brief Method Awake, addr 0x5802714, size 0x68, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaPlayerCounter* New_ctor() ;

/// @brief Method Update, addr 0x580277c, size 0x25c, virtual false, abstract: false, final false
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

/// @brief Method .ctor, addr 0x58029d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPlayerCounter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerCounter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPlayerCounter(GorillaPlayerCounter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlayerCounter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPlayerCounter(GorillaPlayerCounter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1679};

/// @brief Field isRedTeam, offset: 0x20, size: 0x1, def value: None
 bool  ___isRedTeam;

/// @brief Field text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___text;

/// @brief Field attribute, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___attribute;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPlayerCounter, ___isRedTeam) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerCounter, ___text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlayerCounter, ___attribute) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPlayerCounter) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
