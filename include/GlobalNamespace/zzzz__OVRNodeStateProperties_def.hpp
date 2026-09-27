#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNodeStateProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRNodeStateProperties)
namespace GlobalNamespace {
struct NodeStatePropertyType;
}
namespace GlobalNamespace {
struct OVRPlugin_Node;
}
namespace GlobalNamespace {
struct OVRPlugin_Step;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRNodeStateProperties;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRNodeStateProperties*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRNodeStateProperties*, "", "OVRNodeStateProperties");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRNodeStateProperties
class CORDL_TYPE OVRNodeStateProperties : public ::System::Object {
public:
// Declarations
/// @brief Field nodeStateList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nodeStateList, put=setStaticF_nodeStateList)) ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*  nodeStateList;

/// @brief Method GetNodeStatePropertyQuaternion, addr 0xa5758b8, size 0x158, virtual false, abstract: false, final false
static inline bool GetNodeStatePropertyQuaternion(::UnityEngine::XR::XRNode  nodeType, ::GlobalNamespace::NodeStatePropertyType  propertyType, ::GlobalNamespace::OVRPlugin_Node  ovrpNodeType, ::GlobalNamespace::OVRPlugin_Step  stepType, ::by_ref<::UnityEngine::Quaternion>  retQuat) ;

/// @brief Method GetNodeStatePropertyVector3, addr 0xa575520, size 0x398, virtual false, abstract: false, final false
static inline bool GetNodeStatePropertyVector3(::UnityEngine::XR::XRNode  nodeType, ::GlobalNamespace::NodeStatePropertyType  propertyType, ::GlobalNamespace::OVRPlugin_Node  ovrpNodeType, ::GlobalNamespace::OVRPlugin_Step  stepType, ::by_ref<::UnityEngine::Vector3>  retVec) ;

/// @brief Method GetUnityXRNodeStateQuaternion, addr 0xa582cb0, size 0xf8, virtual false, abstract: false, final false
static inline bool GetUnityXRNodeStateQuaternion(::UnityEngine::XR::XRNode  nodeType, ::GlobalNamespace::NodeStatePropertyType  propertyType, ::by_ref<::UnityEngine::Quaternion>  retQuat) ;

/// @brief Method GetUnityXRNodeStateVector3, addr 0xa582b30, size 0x180, virtual false, abstract: false, final false
static inline bool GetUnityXRNodeStateVector3(::UnityEngine::XR::XRNode  nodeType, ::GlobalNamespace::NodeStatePropertyType  propertyType, ::by_ref<::UnityEngine::Vector3>  retVec) ;

/// @brief Method IsHmdPresent, addr 0xa580a10, size 0xd8, virtual false, abstract: false, final false
static inline bool IsHmdPresent() ;

/// @brief Method ValidateProperty, addr 0xa582da8, size 0x1dc, virtual false, abstract: false, final false
static inline bool ValidateProperty(::UnityEngine::XR::XRNode  nodeType, ::by_ref<::UnityEngine::XR::XRNodeState>  requestedNodeState) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* getStaticF_nodeStateList() ;

static inline void setStaticF_nodeStateList(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRNodeStateProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRNodeStateProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRNodeStateProperties(OVRNodeStateProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRNodeStateProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRNodeStateProperties(OVRNodeStateProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11877};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRNodeStateProperties) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
