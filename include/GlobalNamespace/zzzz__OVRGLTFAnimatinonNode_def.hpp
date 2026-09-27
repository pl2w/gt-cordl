#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAnimatinonNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_InputNodeState_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFAnimatinonNode)
namespace GlobalNamespace {
class OVRGLTFAccessor;
}
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_InputNodeState;
}
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_OVRGLTFTransformType;
}
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_OVRInterpolationType;
}
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_ThumbstickDirection;
}
namespace GlobalNamespace {
class OVRGLTFAnimationNodeMorphTargetHandler;
}
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRGLTFAnimatinonNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRGLTFAnimatinonNode*, "", "OVRGLTFAnimatinonNode");
// Dependencies OVRGLTFAnimatinonNode::InputNodeState, OVRGLTFInputNode, System.Object, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGLTFAnimatinonNode
class CORDL_TYPE OVRGLTFAnimatinonNode : public ::System::Object {
public:
// Declarations
using InputNodeState = ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState;

using OVRGLTFTransformType = ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType;

using OVRInterpolationType = ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType;

using ThumbstickDirection = ::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection;

/// @brief Field CardDirections, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CardDirections, put=setStaticF_CardDirections)) ::ArrayW<::UnityEngine::Vector2>  CardDirections;

/// @brief Field InputNodeKeyFrames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InputNodeKeyFrames, put=setStaticF_InputNodeKeyFrames)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,int32_t>*  InputNodeKeyFrames;

/// @brief Field ThumbStickKeyFrames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ThumbStickKeyFrames, put=setStaticF_ThumbStickKeyFrames)) ::System::Collections::Generic::List_1<int32_t>*  ThumbStickKeyFrames;

/// @brief Field m_additiveWeightIndex, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_additiveWeightIndex, put=__cordl_internal_set_m_additiveWeightIndex)) int32_t  m_additiveWeightIndex;

/// @brief Field m_gameObj, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_gameObj, put=__cordl_internal_set_m_gameObj)) ::UnityW<::UnityEngine::GameObject>  m_gameObj;

/// @brief Field m_inputNodeState, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_inputNodeState, put=__cordl_internal_set_m_inputNodeState)) ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState  m_inputNodeState;

/// @brief Field m_intputNodeType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_intputNodeType, put=__cordl_internal_set_m_intputNodeType)) ::GlobalNamespace::OVRGLTFInputNode  m_intputNodeType;

/// @brief Field m_jsonData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_jsonData, put=__cordl_internal_set_m_jsonData)) ::OVRSimpleJSON::JSONNode*  m_jsonData;

/// @brief Field m_morphTargetHandler, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_morphTargetHandler, put=__cordl_internal_set_m_morphTargetHandler)) ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*  m_morphTargetHandler;

/// @brief Field m_rotations, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_rotations, put=__cordl_internal_set_m_rotations)) ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  m_rotations;

/// @brief Field m_scales, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_scales, put=__cordl_internal_set_m_scales)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  m_scales;

/// @brief Field m_translations, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_translations, put=__cordl_internal_set_m_translations)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  m_translations;

/// @brief Field m_weights, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_weights, put=__cordl_internal_set_m_weights)) ::System::Collections::Generic::List_1<float_t>*  m_weights;

/// @brief Method AddChannel, addr 0xa5b87d8, size 0x198, virtual false, abstract: false, final false
inline void AddChannel(::OVRSimpleJSON::JSONNode*  channel, ::OVRSimpleJSON::JSONNode*  samplers, ::GlobalNamespace::OVRGLTFAccessor*  dataAccessor) ;

/// @brief Method CloneQuaternion, addr 0xa5b87d4, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion CloneQuaternion(::UnityEngine::Quaternion  q) ;

/// @brief Method CloneVector3, addr 0xa5b87d0, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CloneVector3(::UnityEngine::Vector3  v) ;

/// @brief Method CopyData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void CopyData(::by_ref<::System::Collections::Generic::List_1<T>*>  dest, ::ArrayW<T>  src) ;

/// @brief Method GetCardinalThumbsticks, addr 0xa5b9a80, size 0x1b0, virtual false, abstract: false, final false
inline ::System::Tuple_2<::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection,::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection>* GetCardinalThumbsticks(::UnityEngine::Vector2  joystick) ;

/// @brief Method GetCardinalWeights, addr 0xa5b9c30, size 0x154, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCardinalWeights(::UnityEngine::Vector2  joystick, ::System::Tuple_2<::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection,::GlobalNamespace::OVRGLTFAnimatinonNode_ThumbstickDirection>*  cardinals) ;

/// @brief Method GetTransformType, addr 0xa5b8970, size 0x174, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType GetTransformType(::StringW  transform) ;

static inline ::GlobalNamespace::OVRGLTFAnimatinonNode* New_ctor(::GlobalNamespace::OVRGLTFInputNode  inputNodeType, ::UnityEngine::GameObject*  gameObj, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*  morphTargetHandler) ;

/// @brief Method ProcessAnimationSampler, addr 0xa5b8ae4, size 0x57c, virtual false, abstract: false, final false
inline void ProcessAnimationSampler(::OVRSimpleJSON::JSONNode*  samplerNode, int32_t  nodeId, ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRGLTFTransformType  transformType, ::OVRSimpleJSON::JSONNode*  extras, ::GlobalNamespace::OVRGLTFAccessor*  _dataAccessor) ;

/// @brief Method SetScale, addr 0xa5b91ec, size 0xfc, virtual false, abstract: false, final false
inline void SetScale(::UnityEngine::Vector3  scale) ;

/// @brief Method ToOVRInterpolationType, addr 0xa5b9d84, size 0x144, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRGLTFAnimatinonNode_OVRInterpolationType ToOVRInterpolationType(::StringW  interpolationType) ;

/// @brief Method UpdatePose, addr 0xa5b9060, size 0x18c, virtual false, abstract: false, final false
inline void UpdatePose(bool  down) ;

/// @brief Method UpdatePose, addr 0xa5b9720, size 0x360, virtual false, abstract: false, final false
inline void UpdatePose(::UnityEngine::Vector2  joystick) ;

/// @brief Method UpdatePose, addr 0xa5b92e8, size 0x42c, virtual false, abstract: false, final false
inline void UpdatePose(float_t  t, bool  applyDeadZone) ;

constexpr int32_t const& __cordl_internal_get_m_additiveWeightIndex() const;

constexpr int32_t& __cordl_internal_get_m_additiveWeightIndex() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_gameObj() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_gameObj() ;

constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState const& __cordl_internal_get_m_inputNodeState() const;

constexpr ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState& __cordl_internal_get_m_inputNodeState() ;

constexpr ::GlobalNamespace::OVRGLTFInputNode const& __cordl_internal_get_m_intputNodeType() const;

constexpr ::GlobalNamespace::OVRGLTFInputNode& __cordl_internal_get_m_intputNodeType() ;

constexpr ::OVRSimpleJSON::JSONNode* const& __cordl_internal_get_m_jsonData() const;

constexpr ::OVRSimpleJSON::JSONNode*& __cordl_internal_get_m_jsonData() ;

constexpr ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* const& __cordl_internal_get_m_morphTargetHandler() const;

constexpr ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*& __cordl_internal_get_m_morphTargetHandler() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* const& __cordl_internal_get_m_rotations() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*& __cordl_internal_get_m_rotations() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_m_scales() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_m_scales() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_m_translations() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_m_translations() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_m_weights() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_m_weights() ;

constexpr void __cordl_internal_set_m_additiveWeightIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_gameObj(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_inputNodeState(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState  value) ;

constexpr void __cordl_internal_set_m_intputNodeType(::GlobalNamespace::OVRGLTFInputNode  value) ;

constexpr void __cordl_internal_set_m_jsonData(::OVRSimpleJSON::JSONNode*  value) ;

constexpr void __cordl_internal_set_m_morphTargetHandler(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*  value) ;

constexpr void __cordl_internal_set_m_rotations(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  value) ;

constexpr void __cordl_internal_set_m_scales(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_m_translations(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_m_weights(::System::Collections::Generic::List_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa5b8474, size 0x35c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRGLTFInputNode  inputNodeType, ::UnityEngine::GameObject*  gameObj, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*  morphTargetHandler) ;

static inline ::ArrayW<::UnityEngine::Vector2> getStaticF_CardDirections() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,int32_t>* getStaticF_InputNodeKeyFrames() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_ThumbStickKeyFrames() ;

static inline void setStaticF_CardDirections(::ArrayW<::UnityEngine::Vector2>  value) ;

static inline void setStaticF_InputNodeKeyFrames(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,int32_t>*  value) ;

static inline void setStaticF_ThumbStickKeyFrames(::System::Collections::Generic::List_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRGLTFAnimatinonNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimatinonNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRGLTFAnimatinonNode(OVRGLTFAnimatinonNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimatinonNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRGLTFAnimatinonNode(OVRGLTFAnimatinonNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11904};

/// @brief Field m_intputNodeType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRGLTFInputNode  ___m_intputNodeType;

/// @brief Field m_jsonData, offset: 0x18, size: 0x8, def value: None
 ::OVRSimpleJSON::JSONNode*  ___m_jsonData;

/// @brief Field m_gameObj, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_gameObj;

/// @brief Field m_inputNodeState, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState  ___m_inputNodeState;

/// @brief Field m_morphTargetHandler, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*  ___m_morphTargetHandler;

/// @brief Field m_translations, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___m_translations;

/// @brief Field m_rotations, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  ___m_rotations;

/// @brief Field m_scales, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___m_scales;

/// @brief Field m_weights, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___m_weights;

/// @brief Field m_additiveWeightIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  ___m_additiveWeightIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_intputNodeType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_jsonData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_gameObj) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_inputNodeState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_morphTargetHandler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_translations) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_rotations) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_scales) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_weights) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode, ___m_additiveWeightIndex) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRGLTFAnimatinonNode) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
