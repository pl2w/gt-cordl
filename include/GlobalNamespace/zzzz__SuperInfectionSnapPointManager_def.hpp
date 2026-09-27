#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionSnapPointManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SuperInfectionSnapPointManager)
namespace GlobalNamespace {
class GamePlayer;
}
namespace GlobalNamespace {
struct SnapJointType;
}
namespace GlobalNamespace {
class SuperInfectionSnapPoint;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SuperInfectionSnapPointManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SuperInfectionSnapPointManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SuperInfectionSnapPointManager*, "", "SuperInfectionSnapPointManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SuperInfectionSnapPointManager
class CORDL_TYPE SuperInfectionSnapPointManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field SnapPoints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SnapPoints, put=__cordl_internal_set_SnapPoints)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*  SnapPoints;

/// @brief Field snapPointDict, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapPointDict, put=__cordl_internal_set_snapPointDict)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*  snapPointDict;

/// @brief Method Awake, addr 0x5842958, size 0x138, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Clear, addr 0x5842c00, size 0x158, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method DropAllSnappedAuthority, addr 0x583978c, size 0x21c, virtual false, abstract: false, final false
inline void DropAllSnappedAuthority() ;

/// @brief Method FindSnapPoint, addr 0x583aa94, size 0x98, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> FindSnapPoint(::GlobalNamespace::SnapJointType  jointType) ;

/// @brief Method FindSnapPoint, addr 0x5842d58, size 0x98, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> FindSnapPoint(::GlobalNamespace::GamePlayer*  player, ::GlobalNamespace::SnapJointType  jointType) ;

static inline ::GlobalNamespace::SuperInfectionSnapPointManager* New_ctor() ;

/// @brief Method Start, addr 0x5842a90, size 0x170, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* const& __cordl_internal_get_SnapPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*& __cordl_internal_get_SnapPoints() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* const& __cordl_internal_get_snapPointDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*& __cordl_internal_get_snapPointDict() ;

constexpr void __cordl_internal_set_SnapPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*  value) ;

constexpr void __cordl_internal_set_snapPointDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*  value) ;

/// @brief Method .ctor, addr 0x5842df0, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SuperInfectionSnapPointManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionSnapPointManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SuperInfectionSnapPointManager(SuperInfectionSnapPointManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SuperInfectionSnapPointManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SuperInfectionSnapPointManager(SuperInfectionSnapPointManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1798};

/// @brief Field SnapPoints, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*  ___SnapPoints;

/// @brief Field snapPointDict, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*  ___snapPointDict;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SuperInfectionSnapPointManager, ___SnapPoints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SuperInfectionSnapPointManager, ___snapPointDict) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SuperInfectionSnapPointManager) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
