#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSMapBoundary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTrigger_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CMSMapBoundary)
namespace GT_CustomMapSupportRuntime {
class TriggerSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::CustomMapSupport {
class CMSMapBoundary;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::CustomMapSupport::CMSMapBoundary*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::CustomMapSupport::CMSMapBoundary*, "GorillaTagScripts.CustomMapSupport", "CMSMapBoundary");
// Dependencies GorillaTagScripts.CustomMapSupport.CMSTrigger
namespace GorillaTagScripts::CustomMapSupport {
// Is value type: false
// CS Name: GorillaTagScripts.CustomMapSupport.CMSMapBoundary
class CORDL_TYPE CMSMapBoundary : public ::GorillaTagScripts::CustomMapSupport::CMSTrigger {
public:
// Declarations
/// @brief Field ShouldTagPlayer, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShouldTagPlayer, put=__cordl_internal_set_ShouldTagPlayer)) bool  ShouldTagPlayer;

/// @brief Field TeleportPoints, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_TeleportPoints, put=__cordl_internal_set_TeleportPoints)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  TeleportPoints;

/// @brief Method CopyTriggerSettings, addr 0x5bd86a8, size 0x1d4, virtual true, abstract: false, final false
inline void CopyTriggerSettings(::GT_CustomMapSupportRuntime::TriggerSettings*  settings) ;

static inline ::GorillaTagScripts::CustomMapSupport::CMSMapBoundary* New_ctor() ;

/// @brief Method Trigger, addr 0x5bd8b60, size 0x1f8, virtual true, abstract: false, final false
inline void Trigger(double_t  triggerTime, bool  originatedLocally, bool  ignoreTriggerCount) ;

constexpr bool const& __cordl_internal_get_ShouldTagPlayer() const;

constexpr bool& __cordl_internal_get_ShouldTagPlayer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_TeleportPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_TeleportPoints() ;

constexpr void __cordl_internal_set_ShouldTagPlayer(bool  value) ;

constexpr void __cordl_internal_set_TeleportPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

/// @brief Method .ctor, addr 0x5bd8d58, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CMSMapBoundary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CMSMapBoundary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CMSMapBoundary(CMSMapBoundary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CMSMapBoundary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CMSMapBoundary(CMSMapBoundary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4027};

/// [Tooltip("Teleport points used to return the player to the map. Chosen at random.")]
/// [SerializeField]
/// [NotNull]
/// @brief Field TeleportPoints, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___TeleportPoints;

/// @brief Field ShouldTagPlayer, offset: 0x78, size: 0x1, def value: None
 bool  ___ShouldTagPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSMapBoundary, ___TeleportPoints) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSMapBoundary, ___ShouldTagPlayer) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::CustomMapSupport::CMSMapBoundary) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts::CustomMapSupport
