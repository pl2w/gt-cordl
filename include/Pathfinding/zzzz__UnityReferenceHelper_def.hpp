#pragma once
// IWYU pragma private; include "Pathfinding/UnityReferenceHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityReferenceHelper)
// Forward declare root types
namespace Pathfinding {
class UnityReferenceHelper;
}
// Write type traits
MARK_REF_T(::Pathfinding::UnityReferenceHelper*);
DEFINE_IL2CPP_CLASS(::Pathfinding::UnityReferenceHelper*, "Pathfinding", "UnityReferenceHelper");
// [ExecuteInEditMode]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_unity_reference_helper.php")]
// Dependencies UnityEngine.MonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.UnityReferenceHelper
class CORDL_TYPE UnityReferenceHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field guid, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_guid, put=__cordl_internal_set_guid)) ::StringW  guid;

/// @brief Method Awake, addr 0x5ebbedc, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetGUID, addr 0x5ebbed4, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetGUID() ;

static inline ::Pathfinding::UnityReferenceHelper* New_ctor() ;

/// @brief Method Reset, addr 0x5ebbee0, size 0x24c, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::StringW const& __cordl_internal_get_guid() const;

constexpr ::StringW& __cordl_internal_get_guid() ;

constexpr void __cordl_internal_set_guid(::StringW  value) ;

/// @brief Method .ctor, addr 0x5ebc12c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityReferenceHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityReferenceHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityReferenceHelper(UnityReferenceHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityReferenceHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityReferenceHelper(UnityReferenceHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21423};

/// [HideInInspector]
/// [SerializeField]
/// @brief Field guid, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___guid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::UnityReferenceHelper, ___guid) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::UnityReferenceHelper) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
