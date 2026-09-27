#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSPlayAnimationTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTrigger_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CMSPlayAnimationTrigger)
namespace GT_CustomMapSupportRuntime {
class TriggerSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts::CustomMapSupport {
class CMSPlayAnimationTrigger;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger*, "GorillaTagScripts.CustomMapSupport", "CMSPlayAnimationTrigger");
// Dependencies GorillaTagScripts.CustomMapSupport.CMSTrigger
namespace GorillaTagScripts::CustomMapSupport {
// Is value type: false
// CS Name: GorillaTagScripts.CustomMapSupport.CMSPlayAnimationTrigger
class CORDL_TYPE CMSPlayAnimationTrigger : public ::GorillaTagScripts::CustomMapSupport::CMSTrigger {
public:
// Declarations
/// @brief Field animatedObjects, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_animatedObjects, put=__cordl_internal_set_animatedObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  animatedObjects;

/// @brief Field animationName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_animationName, put=__cordl_internal_set_animationName)) ::StringW  animationName;

/// @brief Method CopyTriggerSettings, addr 0x5bd96ac, size 0x1d4, virtual true, abstract: false, final false
inline void CopyTriggerSettings(::GT_CustomMapSupportRuntime::TriggerSettings*  settings) ;

static inline ::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger* New_ctor() ;

/// @brief Method Trigger, addr 0x5bd9880, size 0x1ec, virtual true, abstract: false, final false
inline void Trigger(double_t  triggerTime, bool  originatedLocally, bool  ignoreTriggerCount) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_animatedObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_animatedObjects() ;

constexpr ::StringW const& __cordl_internal_get_animationName() const;

constexpr ::StringW& __cordl_internal_get_animationName() ;

constexpr void __cordl_internal_set_animatedObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_animationName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5bd9a6c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CMSPlayAnimationTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CMSPlayAnimationTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CMSPlayAnimationTrigger(CMSPlayAnimationTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CMSPlayAnimationTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CMSPlayAnimationTrigger(CMSPlayAnimationTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4029};

/// @brief Field animatedObjects, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___animatedObjects;

/// @brief Field animationName, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___animationName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger, ___animatedObjects) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger, ___animationName) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::CustomMapSupport::CMSPlayAnimationTrigger) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts::CustomMapSupport
