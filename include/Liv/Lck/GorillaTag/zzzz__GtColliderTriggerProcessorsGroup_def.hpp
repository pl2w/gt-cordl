#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtColliderTriggerProcessorsGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GtColliderTriggerProcessorsGroup)
namespace Liv::Lck::GorillaTag {
class GtColliderTriggerProcessor;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtColliderTriggerProcessorsGroup;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup*, "Liv.Lck.GorillaTag", "GtColliderTriggerProcessorsGroup");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtColliderTriggerProcessorsGroup
class CORDL_TYPE GtColliderTriggerProcessorsGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _currentTriggerProcessor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentTriggerProcessor, put=__cordl_internal_set__currentTriggerProcessor)) ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>  _currentTriggerProcessor;

/// @brief Method ClearAllTriggers, addr 0x9d226d0, size 0xc, virtual false, abstract: false, final false
inline void ClearAllTriggers() ;

/// @brief Method GetCurrentTriggerProcessor, addr 0x9d226c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor> GetCurrentTriggerProcessor() ;

static inline ::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup* New_ctor() ;

/// @brief Method SetCurrentTriggerProcessor, addr 0x9d226c0, size 0x8, virtual false, abstract: false, final false
inline void SetCurrentTriggerProcessor(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*  triggerProcessor) ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor> const& __cordl_internal_get__currentTriggerProcessor() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>& __cordl_internal_get__currentTriggerProcessor() ;

constexpr void __cordl_internal_set__currentTriggerProcessor(::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>  value) ;

/// @brief Method .ctor, addr 0x9d226dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtColliderTriggerProcessorsGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtColliderTriggerProcessorsGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtColliderTriggerProcessorsGroup(GtColliderTriggerProcessorsGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtColliderTriggerProcessorsGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtColliderTriggerProcessorsGroup(GtColliderTriggerProcessorsGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29627};

/// @brief Field _currentTriggerProcessor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>  ____currentTriggerProcessor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup, ____currentTriggerProcessor) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
