#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerHandDataSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__DataSource_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ControllerHandDataSource)
namespace GlobalNamespace {
template<typename TData>
struct DataSource_1_UpdateModeFlags;
}
namespace Oculus::Interaction::Input {
class ControllerDataAsset;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class DataSource_1;
}
namespace Oculus::Interaction::Input {
class HandDataAsset;
}
namespace Oculus::Interaction::Input {
class HandDataSourceConfig;
}
namespace Oculus::Interaction::Input {
class IDataSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class ControllerHandDataSource;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::ControllerHandDataSource*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ControllerHandDataSource*, "Oculus.Interaction.Input", "ControllerHandDataSource");
// Dependencies Oculus.Interaction.Input.DataSource`1<TData>, UnityEngine.Transform
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.ControllerHandDataSource
class CORDL_TYPE ControllerHandDataSource : public ::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::HandDataAsset*> {
public:
// Declarations
 __declspec(property(get=get_Config)) ::Oculus::Interaction::Input::HandDataSourceConfig*  Config;

 __declspec(property(get=get_DataAsset)) ::Oculus::Interaction::Input::HandDataAsset*  DataAsset;

 __declspec(property(get=get_Joints)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  Joints;

 __declspec(property(get=get_Root, put=set_Root)) ::UnityW<::UnityEngine::Transform>  Root;

 __declspec(property(get=get_RootIsLocal, put=set_RootIsLocal)) bool  RootIsLocal;

/// @brief Field _config, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::Oculus::Interaction::Input::HandDataSourceConfig*  _config;

/// @brief Field _controllerSource, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerSource, put=__cordl_internal_set__controllerSource)) ::UnityW<::Oculus::Interaction::Input::ControllerDataAsset*>  _controllerSource;

/// @brief Field _handDataAsset, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__handDataAsset, put=__cordl_internal_set__handDataAsset)) ::Oculus::Interaction::Input::HandDataAsset*  _handDataAsset;

/// @brief Field _jointTransforms, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointTransforms, put=__cordl_internal_set__jointTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _jointTransforms;

/// @brief Field _openXRJointTransforms, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__openXRJointTransforms, put=__cordl_internal_set__openXRJointTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _openXRJointTransforms;

/// @brief Field _openXRRoot, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__openXRRoot, put=__cordl_internal_set__openXRRoot)) ::UnityW<::UnityEngine::Transform>  _openXRRoot;

/// @brief Field _root, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__root, put=__cordl_internal_set__root)) ::UnityW<::UnityEngine::Transform>  _root;

/// @brief Field _rootIsLocal, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__rootIsLocal, put=__cordl_internal_set__rootIsLocal)) bool  _rootIsLocal;

/// @brief Method Awake, addr 0xa504f70, size 0xdc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllControllerHandDataSource, addr 0xa5055ec, size 0x90, virtual false, abstract: false, final false
inline void InjectAllControllerHandDataSource(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*  controllerSource, ::ArrayW<::UnityEngine::Transform*>  jointTransforms) ;

/// [Obsolete("Use InjectJointTransforms instead")]
/// @brief Method InjectBones, addr 0xa505684, size 0x8, virtual false, abstract: false, final false
inline void InjectBones(::ArrayW<::UnityEngine::Transform*>  joints) ;

/// @brief Method InjectControllerSource, addr 0xa50567c, size 0x8, virtual false, abstract: false, final false
inline void InjectControllerSource(::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*  controllerSource) ;

/// @brief Method InjectJointTransforms, addr 0xa50568c, size 0x8, virtual false, abstract: false, final false
inline void InjectJointTransforms(::ArrayW<::UnityEngine::Transform*>  jointTransforms) ;

static inline ::Oculus::Interaction::Input::ControllerHandDataSource* New_ctor() ;

/// @brief Method Start, addr 0xa50504c, size 0xa0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateConfig, addr 0xa5050ec, size 0xdc, virtual false, abstract: false, final false
inline void UpdateConfig() ;

/// @brief Method UpdateData, addr 0xa5051c8, size 0x424, virtual true, abstract: false, final false
inline void UpdateData() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__21_0, addr 0xa505894, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__21_0() ;

constexpr ::Oculus::Interaction::Input::HandDataSourceConfig* const& __cordl_internal_get__config() const;

constexpr ::Oculus::Interaction::Input::HandDataSourceConfig*& __cordl_internal_get__config() ;

constexpr ::UnityW<::Oculus::Interaction::Input::ControllerDataAsset*> const& __cordl_internal_get__controllerSource() const;

constexpr ::UnityW<::Oculus::Interaction::Input::ControllerDataAsset*>& __cordl_internal_get__controllerSource() ;

constexpr ::Oculus::Interaction::Input::HandDataAsset* const& __cordl_internal_get__handDataAsset() const;

constexpr ::Oculus::Interaction::Input::HandDataAsset*& __cordl_internal_get__handDataAsset() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__jointTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__jointTransforms() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__openXRJointTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__openXRJointTransforms() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__openXRRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__openXRRoot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__root() ;

constexpr bool const& __cordl_internal_get__rootIsLocal() const;

constexpr bool& __cordl_internal_get__rootIsLocal() ;

constexpr void __cordl_internal_set__config(::Oculus::Interaction::Input::HandDataSourceConfig*  value) ;

constexpr void __cordl_internal_set__controllerSource(::UnityW<::Oculus::Interaction::Input::ControllerDataAsset*>  value) ;

constexpr void __cordl_internal_set__handDataAsset(::Oculus::Interaction::Input::HandDataAsset*  value) ;

constexpr void __cordl_internal_set__jointTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__openXRJointTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__openXRRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__root(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__rootIsLocal(bool  value) ;

/// @brief Method .ctor, addr 0xa505694, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Config, addr 0xa504f00, size 0x70, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandDataSourceConfig* get_Config() ;

/// @brief Method get_DataAsset, addr 0xa504ef8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Interaction::Input::HandDataAsset* get_DataAsset() ;

/// @brief Method get_Joints, addr 0xa504ef0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_Joints() ;

/// @brief Method get_Root, addr 0xa504ed0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Root() ;

/// @brief Method get_RootIsLocal, addr 0xa504ee0, size 0x8, virtual false, abstract: false, final false
inline bool get_RootIsLocal() ;

/// @brief Method set_Root, addr 0xa504ed8, size 0x8, virtual false, abstract: false, final false
inline void set_Root(::UnityEngine::Transform*  value) ;

/// @brief Method set_RootIsLocal, addr 0xa504ee8, size 0x8, virtual false, abstract: false, final false
inline void set_RootIsLocal(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerHandDataSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerHandDataSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerHandDataSource(ControllerHandDataSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerHandDataSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerHandDataSource(ControllerHandDataSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16455};

/// [SerializeField]
/// @brief Field _controllerSource, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Input::ControllerDataAsset*>  ____controllerSource;

/// [SerializeField]
/// @brief Field _root, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____root;

/// [SerializeField]
/// @brief Field _openXRRoot, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____openXRRoot;

/// [SerializeField]
/// @brief Field _rootIsLocal, offset: 0x60, size: 0x1, def value: None
 bool  ____rootIsLocal;

/// [SerializeField]
/// [FormerlySerializedAs("_bones")]
/// [FormerlySerializedAs("_joints")]
/// @brief Field _jointTransforms, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____jointTransforms;

/// [SerializeField]
/// @brief Field _openXRJointTransforms, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____openXRJointTransforms;

/// @brief Field _config, offset: 0x78, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HandDataSourceConfig*  ____config;

/// @brief Field _handDataAsset, offset: 0x80, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HandDataAsset*  ____handDataAsset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::ControllerHandDataSource, ____controllerSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerHandDataSource, ____root) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerHandDataSource, ____openXRRoot) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerHandDataSource, ____rootIsLocal) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerHandDataSource, ____jointTransforms) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerHandDataSource, ____openXRJointTransforms) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerHandDataSource, ____config) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerHandDataSource, ____handDataAsset) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::ControllerHandDataSource) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
