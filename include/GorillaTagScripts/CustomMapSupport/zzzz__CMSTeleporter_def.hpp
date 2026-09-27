#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSTeleporter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTrigger_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CMSTeleporter)
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
class CMSTeleporter;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::CustomMapSupport::CMSTeleporter*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::CustomMapSupport::CMSTeleporter*, "GorillaTagScripts.CustomMapSupport", "CMSTeleporter");
// Dependencies GorillaTagScripts.CustomMapSupport.CMSTrigger
namespace GorillaTagScripts::CustomMapSupport {
// Is value type: false
// CS Name: GorillaTagScripts.CustomMapSupport.CMSTeleporter
class CORDL_TYPE CMSTeleporter : public ::GorillaTagScripts::CustomMapSupport::CMSTrigger {
public:
// Declarations
/// @brief Field TeleportPoints, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_TeleportPoints, put=__cordl_internal_set_TeleportPoints)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  TeleportPoints;

/// @brief Field maintainVelocity, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_maintainVelocity, put=__cordl_internal_set_maintainVelocity)) bool  maintainVelocity;

/// @brief Field matchTeleportPointRotation, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_matchTeleportPointRotation, put=__cordl_internal_set_matchTeleportPointRotation)) bool  matchTeleportPointRotation;

/// @brief Method CopyTriggerSettings, addr 0x5bdca70, size 0x1d4, virtual true, abstract: false, final false
inline void CopyTriggerSettings(::GT_CustomMapSupportRuntime::TriggerSettings*  settings) ;

static inline ::GorillaTagScripts::CustomMapSupport::CMSTeleporter* New_ctor() ;

/// @brief Method Trigger, addr 0x5bdcc44, size 0x198, virtual true, abstract: false, final false
inline void Trigger(double_t  triggerTime, bool  originatedLocally, bool  ignoreTriggerCount) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_TeleportPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_TeleportPoints() ;

constexpr bool const& __cordl_internal_get_maintainVelocity() const;

constexpr bool& __cordl_internal_get_maintainVelocity() ;

constexpr bool const& __cordl_internal_get_matchTeleportPointRotation() const;

constexpr bool& __cordl_internal_get_matchTeleportPointRotation() ;

constexpr void __cordl_internal_set_TeleportPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_maintainVelocity(bool  value) ;

constexpr void __cordl_internal_set_matchTeleportPointRotation(bool  value) ;

/// @brief Method .ctor, addr 0x5bdcddc, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CMSTeleporter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CMSTeleporter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CMSTeleporter(CMSTeleporter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CMSTeleporter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CMSTeleporter(CMSTeleporter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4032};

/// [Tooltip("Teleport points used to return the player to the map. Chosen at random.")]
/// [SerializeField]
/// [NotNull]
/// @brief Field TeleportPoints, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___TeleportPoints;

/// @brief Field matchTeleportPointRotation, offset: 0x78, size: 0x1, def value: None
 bool  ___matchTeleportPointRotation;

/// @brief Field maintainVelocity, offset: 0x79, size: 0x1, def value: None
 bool  ___maintainVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTeleporter, ___TeleportPoints) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTeleporter, ___matchTeleportPointRotation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::CustomMapSupport::CMSTeleporter, ___maintainVelocity) == 0x79, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::CustomMapSupport::CMSTeleporter) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts::CustomMapSupport
