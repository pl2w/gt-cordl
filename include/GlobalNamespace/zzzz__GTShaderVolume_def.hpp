#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTShaderVolume)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GTShaderVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTShaderVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTShaderVolume*, "", "GTShaderVolume");
// [ExecuteAlways]
// Dependencies ShaderHashId, UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTShaderVolume
class CORDL_TYPE GTShaderVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ShaderData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ShaderData, put=setStaticF_ShaderData)) ::ArrayW<::UnityEngine::Matrix4x4>  ShaderData;

/// @brief Field _GT_ShaderVolumes, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__GT_ShaderVolumes, put=setStaticF__GT_ShaderVolumes)) ::GlobalNamespace::ShaderHashId  _GT_ShaderVolumes;

/// @brief Field _GT_ShaderVolumesActive, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__GT_ShaderVolumesActive, put=setStaticF__GT_ShaderVolumesActive)) ::GlobalNamespace::ShaderHashId  _GT_ShaderVolumesActive;

/// @brief Field gVolumes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gVolumes, put=setStaticF_gVolumes)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTShaderVolume>>*  gVolumes;

static inline ::GlobalNamespace::GTShaderVolume* New_ctor() ;

/// @brief Method OnDisable, addr 0x56bd314, size 0x80, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56bd1b8, size 0x15c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SyncVolumeData, addr 0x56bd394, size 0x2c8, virtual false, abstract: false, final false
static inline void SyncVolumeData() ;

/// @brief Method .ctor, addr 0x56bd65c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Matrix4x4> getStaticF_ShaderData() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__GT_ShaderVolumes() ;

static inline ::GlobalNamespace::ShaderHashId getStaticF__GT_ShaderVolumesActive() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTShaderVolume>>* getStaticF_gVolumes() ;

static inline void setStaticF_ShaderData(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

static inline void setStaticF__GT_ShaderVolumes(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF__GT_ShaderVolumesActive(::GlobalNamespace::ShaderHashId  value) ;

static inline void setStaticF_gVolumes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTShaderVolume>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTShaderVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTShaderVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTShaderVolume(GTShaderVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTShaderVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTShaderVolume(GTShaderVolume const& ) = delete;

/// @brief Field MAX_VOLUMES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_VOLUMES{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{987};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTShaderVolume) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
