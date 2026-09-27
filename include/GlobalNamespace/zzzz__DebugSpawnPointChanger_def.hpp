#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugSpawnPointChanger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DebugSpawnPointChanger_GeoTriggersGroup_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugSpawnPointChanger)
namespace GlobalNamespace {
struct DebugSpawnPointChanger_GeoTriggersGroup;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class DebugSpawnPointChanger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DebugSpawnPointChanger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugSpawnPointChanger*, "", "DebugSpawnPointChanger");
// Dependencies DebugSpawnPointChanger::GeoTriggersGroup, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DebugSpawnPointChanger
class CORDL_TYPE DebugSpawnPointChanger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GeoTriggersGroup = ::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup;

/// @brief Field lastLocationIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastLocationIndex, put=__cordl_internal_set_lastLocationIndex)) int32_t  lastLocationIndex;

/// @brief Field levelTriggers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelTriggers, put=__cordl_internal_set_levelTriggers)) ::ArrayW<::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup>  levelTriggers;

/// @brief Method AttachSpawnPoint, addr 0x5798758, size 0x2ec, virtual false, abstract: false, final false
inline void AttachSpawnPoint(::GlobalNamespace::VRRig*  rig, ::ArrayW<::UnityEngine::Transform*>  spawnPts, int32_t  locationIndex) ;

/// @brief Method ChangePoint, addr 0x5798a44, size 0x130, virtual false, abstract: false, final false
inline void ChangePoint(int32_t  index) ;

/// @brief Method GetPlausibleJumpLocation, addr 0x5798b74, size 0xdc, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetPlausibleJumpLocation() ;

/// @brief Method JumpTo, addr 0x5798c50, size 0x4c, virtual false, abstract: false, final false
inline void JumpTo(int32_t  canJumpIndex) ;

static inline ::GlobalNamespace::DebugSpawnPointChanger* New_ctor() ;

/// @brief Method SetLastLocation, addr 0x5798c9c, size 0x78, virtual false, abstract: false, final false
inline void SetLastLocation(::StringW  levelName) ;

/// [CompilerGenerated]
/// @brief Method <GetPlausibleJumpLocation>b__5_0, addr 0x5798d1c, size 0x34, virtual false, abstract: false, final false
inline ::StringW _GetPlausibleJumpLocation_b__5_0(int32_t  index) ;

constexpr int32_t const& __cordl_internal_get_lastLocationIndex() const;

constexpr int32_t& __cordl_internal_get_lastLocationIndex() ;

constexpr ::ArrayW<::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup> const& __cordl_internal_get_levelTriggers() const;

constexpr ::ArrayW<::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup>& __cordl_internal_get_levelTriggers() ;

constexpr void __cordl_internal_set_lastLocationIndex(int32_t  value) ;

constexpr void __cordl_internal_set_levelTriggers(::ArrayW<::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup>  value) ;

/// @brief Method .ctor, addr 0x5798d14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugSpawnPointChanger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugSpawnPointChanger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugSpawnPointChanger(DebugSpawnPointChanger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugSpawnPointChanger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugSpawnPointChanger(DebugSpawnPointChanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1466};

/// [SerializeField]
/// @brief Field levelTriggers, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup>  ___levelTriggers;

/// @brief Field lastLocationIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___lastLocationIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugSpawnPointChanger, ___levelTriggers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugSpawnPointChanger, ___lastLocationIndex) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugSpawnPointChanger) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
