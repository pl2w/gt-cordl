#pragma once
// IWYU pragma private; include "GlobalNamespace/VoxelMaterialManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelMaterialManager)
namespace GlobalNamespace {
struct VoxelMaterialManager_LightingProfile;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class VoxelMaterialManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoxelMaterialManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoxelMaterialManager*, "", "VoxelMaterialManager");
// Dependencies UnityEngine.Material, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoxelMaterialManager
class CORDL_TYPE VoxelMaterialManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LightingProfile = ::GlobalNamespace::VoxelMaterialManager_LightingProfile;

/// @brief Field _timeOfDayIndex, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeOfDayIndex, put=__cordl_internal_set__timeOfDayIndex)) int32_t  _timeOfDayIndex;

/// @brief Field backlightBrightness, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_backlightBrightness, put=__cordl_internal_set_backlightBrightness)) float_t  backlightBrightness;

/// @brief Field lightingProfiles, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightingProfiles, put=__cordl_internal_set_lightingProfiles)) ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelMaterialManager_LightingProfile>*  lightingProfiles;

/// @brief Field lightmapNames, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightmapNames, put=__cordl_internal_set_lightmapNames)) ::System::Collections::Generic::List_1<::StringW>*  lightmapNames;

/// @brief Field shadowBrightness, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_shadowBrightness, put=__cordl_internal_set_shadowBrightness)) float_t  shadowBrightness;

/// @brief Field startingIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingIndex, put=__cordl_internal_set_startingIndex)) int32_t  startingIndex;

/// @brief Field voxelMats, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_voxelMats, put=__cordl_internal_set_voxelMats)) ::ArrayW<::UnityW<::UnityEngine::Material>>  voxelMats;

static inline ::GlobalNamespace::VoxelMaterialManager* New_ctor() ;

/// @brief Method OnEnable, addr 0x5dfb238, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetLightingProfile, addr 0x5dfb240, size 0x17c, virtual false, abstract: false, final false
inline void SetLightingProfile(int32_t  index) ;

/// @brief Method Update, addr 0x5dfb3bc, size 0x88, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateMaterial, addr 0x5dfb444, size 0x100, virtual false, abstract: false, final false
inline void UpdateMaterial() ;

constexpr int32_t const& __cordl_internal_get__timeOfDayIndex() const;

constexpr int32_t& __cordl_internal_get__timeOfDayIndex() ;

constexpr float_t const& __cordl_internal_get_backlightBrightness() const;

constexpr float_t& __cordl_internal_get_backlightBrightness() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelMaterialManager_LightingProfile>* const& __cordl_internal_get_lightingProfiles() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelMaterialManager_LightingProfile>*& __cordl_internal_get_lightingProfiles() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_lightmapNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_lightmapNames() ;

constexpr float_t const& __cordl_internal_get_shadowBrightness() const;

constexpr float_t& __cordl_internal_get_shadowBrightness() ;

constexpr int32_t const& __cordl_internal_get_startingIndex() const;

constexpr int32_t& __cordl_internal_get_startingIndex() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_voxelMats() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_voxelMats() ;

constexpr void __cordl_internal_set__timeOfDayIndex(int32_t  value) ;

constexpr void __cordl_internal_set_backlightBrightness(float_t  value) ;

constexpr void __cordl_internal_set_lightingProfiles(::System::Collections::Generic::List_1<::GlobalNamespace::VoxelMaterialManager_LightingProfile>*  value) ;

constexpr void __cordl_internal_set_lightmapNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_shadowBrightness(float_t  value) ;

constexpr void __cordl_internal_set_startingIndex(int32_t  value) ;

constexpr void __cordl_internal_set_voxelMats(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

/// @brief Method .ctor, addr 0x5dfb544, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelMaterialManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelMaterialManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelMaterialManager(VoxelMaterialManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelMaterialManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelMaterialManager(VoxelMaterialManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{503};

/// @brief Field voxelMats, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___voxelMats;

/// @brief Field lightmapNames, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___lightmapNames;

/// @brief Field lightingProfiles, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::VoxelMaterialManager_LightingProfile>*  ___lightingProfiles;

/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field shadowBrightness, offset: 0x38, size: 0x4, def value: None
 float_t  ___shadowBrightness;

/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field backlightBrightness, offset: 0x3c, size: 0x4, def value: None
 float_t  ___backlightBrightness;

/// [SerializeField]
/// @brief Field startingIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ___startingIndex;

/// @brief Field _timeOfDayIndex, offset: 0x44, size: 0x4, def value: None
 int32_t  ____timeOfDayIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoxelMaterialManager, ___voxelMats) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelMaterialManager, ___lightmapNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelMaterialManager, ___lightingProfiles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelMaterialManager, ___shadowBrightness) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelMaterialManager, ___backlightBrightness) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelMaterialManager, ___startingIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoxelMaterialManager, ____timeOfDayIndex) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoxelMaterialManager) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
