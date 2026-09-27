#pragma once
// IWYU pragma private; include "GlobalNamespace/OverridePaperDoll.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OverridePaperDoll)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class OverridePaperDoll;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OverridePaperDoll*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OverridePaperDoll*, "", "OverridePaperDoll");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OverridePaperDoll
class CORDL_TYPE OverridePaperDoll : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field replacesHeadMesh, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_replacesHeadMesh, put=__cordl_internal_set_replacesHeadMesh)) bool  replacesHeadMesh;

/// @brief Field rightSideOverride, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightSideOverride, put=__cordl_internal_set_rightSideOverride)) ::UnityW<::UnityEngine::GameObject>  rightSideOverride;

static inline ::GlobalNamespace::OverridePaperDoll* New_ctor() ;

constexpr bool const& __cordl_internal_get_replacesHeadMesh() const;

constexpr bool& __cordl_internal_get_replacesHeadMesh() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightSideOverride() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightSideOverride() ;

constexpr void __cordl_internal_set_replacesHeadMesh(bool  value) ;

constexpr void __cordl_internal_set_rightSideOverride(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5760bac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OverridePaperDoll() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OverridePaperDoll", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OverridePaperDoll(OverridePaperDoll && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OverridePaperDoll", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OverridePaperDoll(OverridePaperDoll const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1343};

/// @brief Field rightSideOverride, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rightSideOverride;

/// @brief Field replacesHeadMesh, offset: 0x28, size: 0x1, def value: None
 bool  ___replacesHeadMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OverridePaperDoll, ___rightSideOverride) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverridePaperDoll, ___replacesHeadMesh) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OverridePaperDoll) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
