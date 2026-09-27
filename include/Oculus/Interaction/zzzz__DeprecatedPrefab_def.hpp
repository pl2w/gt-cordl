#pragma once
// IWYU pragma private; include "Oculus/Interaction/DeprecatedPrefab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeprecatedPrefab)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class DeprecatedPrefab;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DeprecatedPrefab*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DeprecatedPrefab*, "Oculus.Interaction", "DeprecatedPrefab");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.DeprecatedPrefab
class CORDL_TYPE DeprecatedPrefab : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _replacement, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__replacement, put=__cordl_internal_set__replacement)) ::UnityW<::UnityEngine::Object>  _replacement;

/// @brief Field _supressWarning, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__supressWarning, put=__cordl_internal_set__supressWarning)) bool  _supressWarning;

/// @brief Field label, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_label, put=setStaticF_label)) ::StringW  label;

static inline ::Oculus::Interaction::DeprecatedPrefab* New_ctor() ;

/// @brief Method Start, addr 0xa48b77c, size 0x214, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__replacement() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__replacement() ;

constexpr bool const& __cordl_internal_get__supressWarning() const;

constexpr bool& __cordl_internal_get__supressWarning() ;

constexpr void __cordl_internal_set__replacement(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__supressWarning(bool  value) ;

/// @brief Method .ctor, addr 0xa48b990, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_label() ;

static inline void setStaticF_label(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeprecatedPrefab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeprecatedPrefab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeprecatedPrefab(DeprecatedPrefab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeprecatedPrefab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeprecatedPrefab(DeprecatedPrefab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16025};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _replacement, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____replacement;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _supressWarning, offset: 0x28, size: 0x1, def value: None
 bool  ____supressWarning;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DeprecatedPrefab, ____replacement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DeprecatedPrefab, ____supressWarning) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DeprecatedPrefab) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
