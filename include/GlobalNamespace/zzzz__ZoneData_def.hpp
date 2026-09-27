#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ZoneData)
// Forward declare root types
namespace GlobalNamespace {
class ZoneData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ZoneData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneData*, "", "ZoneData");
// Dependencies GTZone, System.Object, UnityEngine.GameObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneData
class CORDL_TYPE ZoneData : public ::System::Object {
public:
// Declarations
/// @brief Field CameraFarClipPlane, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_CameraFarClipPlane, put=__cordl_internal_set_CameraFarClipPlane)) float_t  CameraFarClipPlane;

/// @brief Field active, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) bool  active;

/// @brief Field rootGameObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rootGameObjects, put=__cordl_internal_set_rootGameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  rootGameObjects;

/// @brief Field sceneName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneName, put=__cordl_internal_set_sceneName)) ::StringW  sceneName;

/// @brief Field zone, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

static inline ::GlobalNamespace::ZoneData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_CameraFarClipPlane() const;

constexpr float_t& __cordl_internal_get_CameraFarClipPlane() ;

constexpr bool const& __cordl_internal_get_active() const;

constexpr bool& __cordl_internal_get_active() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_rootGameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_rootGameObjects() ;

constexpr ::StringW const& __cordl_internal_get_sceneName() const;

constexpr ::StringW& __cordl_internal_get_sceneName() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_CameraFarClipPlane(float_t  value) ;

constexpr void __cordl_internal_set_active(bool  value) ;

constexpr void __cordl_internal_set_rootGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_sceneName(::StringW  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x56b8f18, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneData(ZoneData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneData(ZoneData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{960};

/// @brief Field zone, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// @brief Field sceneName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sceneName;

/// @brief Field CameraFarClipPlane, offset: 0x20, size: 0x4, def value: None
 float_t  ___CameraFarClipPlane;

/// @brief Field rootGameObjects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___rootGameObjects;

/// @brief Field active, offset: 0x30, size: 0x1, def value: None
 bool  ___active;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneData, ___zone) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneData, ___sceneName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneData, ___CameraFarClipPlane) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneData, ___rootGameObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneData, ___active) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
