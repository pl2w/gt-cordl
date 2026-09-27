#pragma once
// IWYU pragma private; include "GorillaTagScripts/ChristmasTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ChristmasTree)
namespace Fusion {
struct NetworkBool;
}
namespace GorillaTagScripts {
class AttachPoint;
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
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GorillaTagScripts {
class ChristmasTree;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::ChristmasTree*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ChristmasTree*, "GorillaTagScripts", "ChristmasTree");
// [NetworkBehaviourWeaved(1)]
// Dependencies Fusion.NetworkBool, NetworkComponent, UnityEngine.Material, UnityEngine.MeshRenderer
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.ChristmasTree
class CORDL_TYPE ChristmasTree : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
/// [Networked]
/// @brief [NetworkedWeaved(0, 1)]
 __declspec(property(get=get_Data, put=set_Data)) ::Fusion::NetworkBool  Data;

/// @brief Field _Data, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::Fusion::NetworkBool  _Data;

/// @brief Field attachPointsList, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachPointsList, put=__cordl_internal_set_attachPointsList)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*  attachPointsList;

/// @brief Field hangers, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hangers, put=__cordl_internal_set_hangers)) ::UnityW<::UnityEngine::GameObject>  hangers;

/// @brief Field isActive, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Field lightRenderers, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightRenderers, put=__cordl_internal_set_lightRenderers)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  lightRenderers;

/// @brief Field lights, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lights, put=__cordl_internal_set_lights)) ::UnityW<::UnityEngine::GameObject>  lights;

/// @brief Field lightsOffMaterial, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightsOffMaterial, put=__cordl_internal_set_lightsOffMaterial)) ::UnityW<::UnityEngine::Material>  lightsOffMaterial;

/// @brief Field lightsOnMaterials, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightsOnMaterials, put=__cordl_internal_set_lightsOnMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  lightsOnMaterials;

/// @brief Field spinSpeed, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinSpeed, put=__cordl_internal_set_spinSpeed)) float_t  spinSpeed;

/// @brief Field spinTheTop, offset 0xd2, size 0x1 
 __declspec(property(get=__cordl_internal_get_spinTheTop, put=__cordl_internal_set_spinTheTop)) bool  spinTheTop;

/// @brief Field topOrnament, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_topOrnament, put=__cordl_internal_set_topOrnament)) ::UnityW<::UnityEngine::GameObject>  topOrnament;

/// @brief Field wasActive, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasActive, put=__cordl_internal_set_wasActive)) bool  wasActive;

/// @brief Method Awake, addr 0x5bb58e4, size 0x250, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5bb63d4, size 0x20, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5bb63f4, size 0x24, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GorillaTagScripts::ChristmasTree* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5bb5bf8, size 0x2c8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ReadDataFusion, addr 0x5bb61ec, size 0x48, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5bb629c, size 0xa8, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Update, addr 0x5bb5b34, size 0xc4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateHangers, addr 0x5bb5ec0, size 0x1a4, virtual false, abstract: false, final false
inline void UpdateHangers() ;

/// @brief Method WriteDataFusion, addr 0x5bb61c4, size 0x28, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5bb6234, size 0x68, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get__Data() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get__Data() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>* const& __cordl_internal_get_attachPointsList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*& __cordl_internal_get_attachPointsList() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hangers() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hangers() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_lightRenderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_lightRenderers() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_lights() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_lights() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_lightsOffMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_lightsOffMaterial() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_lightsOnMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_lightsOnMaterials() ;

constexpr float_t const& __cordl_internal_get_spinSpeed() const;

constexpr float_t& __cordl_internal_get_spinSpeed() ;

constexpr bool const& __cordl_internal_get_spinTheTop() const;

constexpr bool& __cordl_internal_get_spinTheTop() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_topOrnament() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_topOrnament() ;

constexpr bool const& __cordl_internal_get_wasActive() const;

constexpr bool& __cordl_internal_get_wasActive() ;

constexpr void __cordl_internal_set__Data(::Fusion::NetworkBool  value) ;

constexpr void __cordl_internal_set_attachPointsList(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*  value) ;

constexpr void __cordl_internal_set_hangers(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

constexpr void __cordl_internal_set_lightRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_lights(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_lightsOffMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_lightsOnMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_spinSpeed(float_t  value) ;

constexpr void __cordl_internal_set_spinTheTop(bool  value) ;

constexpr void __cordl_internal_set_topOrnament(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_wasActive(bool  value) ;

/// @brief Method .ctor, addr 0x5bb6344, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x5bb610c, size 0x5c, virtual false, abstract: false, final false
inline ::Fusion::NetworkBool get_Data() ;

/// @brief Method set_Data, addr 0x5bb6168, size 0x5c, virtual false, abstract: false, final false
inline void set_Data(::Fusion::NetworkBool  value) ;

/// @brief Method updateLight, addr 0x5bb6064, size 0xa8, virtual false, abstract: false, final false
inline void updateLight(bool  enable) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChristmasTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChristmasTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChristmasTree(ChristmasTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChristmasTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChristmasTree(ChristmasTree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3964};

/// @brief Field hangers, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___hangers;

/// @brief Field lights, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___lights;

/// @brief Field topOrnament, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___topOrnament;

/// @brief Field spinSpeed, offset: 0xb8, size: 0x4, def value: None
 float_t  ___spinSpeed;

/// @brief Field attachPointsList, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*  ___attachPointsList;

/// @brief Field lightRenderers, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___lightRenderers;

/// @brief Field wasActive, offset: 0xd0, size: 0x1, def value: None
 bool  ___wasActive;

/// @brief Field isActive, offset: 0xd1, size: 0x1, def value: None
 bool  ___isActive;

/// @brief Field spinTheTop, offset: 0xd2, size: 0x1, def value: None
 bool  ___spinTheTop;

/// [SerializeField]
/// @brief Field lightsOffMaterial, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___lightsOffMaterial;

/// [SerializeField]
/// @brief Field lightsOnMaterials, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___lightsOnMaterials;

/// [WeaverGenerated]
/// [DefaultForProperty("Data", 0, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0xe8, size: 0x4, def value: None
 ::Fusion::NetworkBool  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ChristmasTree, ___hangers) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ChristmasTree, ___lights) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ChristmasTree, ___topOrnament) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ChristmasTree, ___spinSpeed) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ChristmasTree, ___attachPointsList) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ChristmasTree, ___lightRenderers) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ChristmasTree, ___wasActive) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ChristmasTree, ___isActive) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ChristmasTree, ___spinTheTop) == 0xd2, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ChristmasTree, ___lightsOffMaterial) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ChristmasTree, ___lightsOnMaterials) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ChristmasTree, ____Data) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ChristmasTree) == 0xf0, "Size mismatch!");

} // namespace end def GorillaTagScripts
