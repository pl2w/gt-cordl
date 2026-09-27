#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/ObstacleCourseManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__ObstacleCourseData_def.hpp"
CORDL_MODULE_EXPORT(ObstacleCourseManager)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GorillaTagScripts::ObstacleCourse {
struct ObstacleCourseData;
}
namespace GorillaTagScripts::ObstacleCourse {
class ObstacleCourse;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaTagScripts::ObstacleCourse {
class ObstacleCourseManager;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*, "GorillaTagScripts.ObstacleCourse", "ObstacleCourseManager");
// [NetworkBehaviourWeaved(9)]
// Dependencies GorillaTagScripts.ObstacleCourse.ObstacleCourseData, NetworkComponent
namespace GorillaTagScripts::ObstacleCourse {
// Is value type: false
// CS Name: GorillaTagScripts.ObstacleCourse.ObstacleCourseManager
class CORDL_TYPE ObstacleCourseManager : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
/// [Networked]
/// @brief [NetworkedWeaved(0, 9)]
 __declspec(property(get=get_Data, put=set_Data)) ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData  Data;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field _Data, offset 0xac, size 0x24 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData  _Data;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager>  _Instance_k__BackingField;

/// @brief Field <TickRunning>k__BackingField, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field allObstaclesCourses, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_allObstaclesCourses, put=__cordl_internal_set_allObstaclesCourses)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourse>>*  allObstaclesCourses;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x5c17b90, size 0x60, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5c18ae8, size 0x68, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5c18b50, size 0x68, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c17f4c, size 0x10c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5c17d08, size 0x118, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c17bf0, size 0x118, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadDataFusion, addr 0x5c18358, size 0x20c, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5c188ac, size 0x1b4, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Tick, addr 0x5c17e20, size 0x12c, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method WriteDataFusion, addr 0x5c18128, size 0x74, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5c18724, size 0x188, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData const& __cordl_internal_get__Data() const;

constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData& __cordl_internal_get__Data() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourse>>* const& __cordl_internal_get_allObstaclesCourses() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourse>>*& __cordl_internal_get_allObstaclesCourses() ;

constexpr void __cordl_internal_set__Data(::GorillaTagScripts::ObstacleCourse::ObstacleCourseData  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_allObstaclesCourses(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourse>>*  value) ;

/// @brief Method .ctor, addr 0x5c18a60, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager> getStaticF__Instance_k__BackingField() ;

/// @brief Method get_Data, addr 0x5c18058, size 0x68, virtual false, abstract: false, final false
inline ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData get_Data() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x5c17ae0, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5c17b80, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager>  value) ;

/// @brief Method set_Data, addr 0x5c180c0, size 0x68, virtual false, abstract: false, final false
inline void set_Data(::GorillaTagScripts::ObstacleCourse::ObstacleCourseData  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x5c17b28, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5c17b88, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObstacleCourseManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObstacleCourseManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleCourseManager(ObstacleCourseManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleCourseManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleCourseManager(ObstacleCourseManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4113};

/// @brief Field allObstaclesCourses, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourse>>*  ___allObstaclesCourses;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0xa8, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("Data", 0, 9)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0xac, size: 0x24, def value: None
 ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager, ___allObstaclesCourses) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager, ____TickRunning_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager, ____Data) == 0xac, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager) == 0xd0, "Size mismatch!");

} // namespace end def GorillaTagScripts::ObstacleCourse
