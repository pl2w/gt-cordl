#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderAttachPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BuilderAttachPoint)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts {
class BuilderAttachPoint;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderAttachPoint*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderAttachPoint*, "GorillaTagScripts", "BuilderAttachPoint");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderAttachPoint
class CORDL_TYPE BuilderAttachPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field center, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityW<::UnityEngine::Transform>  center;

/// @brief Method Awake, addr 0x5b84268, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTagScripts::BuilderAttachPoint* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_center() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_center() ;

constexpr void __cordl_internal_set_center(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5b842f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderAttachPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderAttachPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderAttachPoint(BuilderAttachPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderAttachPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderAttachPoint(BuilderAttachPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3927};

/// @brief Field center, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___center;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderAttachPoint, ___center) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderAttachPoint) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts
