#pragma once
// IWYU pragma private; include "GlobalNamespace/TechTreeGadgetGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EAssetReleaseTier_def.hpp"
#include "GlobalNamespace/zzzz__ESuperGameModes_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "XNode/zzzz__NodeGraph_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TechTreeGadgetGraph)
namespace GlobalNamespace {
class GadgetNode;
}
namespace GlobalNamespace {
class TechTreeGadgetGraph___c;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Sprite;
}
namespace XNode {
class Node;
}
// Forward declare root types
namespace GlobalNamespace {
class TechTreeGadgetGraph;
}
namespace GlobalNamespace {
class TechTreeGadgetGraph___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TechTreeGadgetGraph*);
MARK_REF_T(::GlobalNamespace::TechTreeGadgetGraph___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TechTreeGadgetGraph*, "", "TechTreeGadgetGraph");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TechTreeGadgetGraph___c*, "", "TechTreeGadgetGraph/<>c");
// [CreateAssetMenu(fileName = "TechTreeGadgetGraph", menuName = "SuperInfection/TechTree Gadget Graph")]
// Dependencies EAssetReleaseTier, ESuperGameModes, SITechTreePageId, XNode.NodeGraph
namespace GlobalNamespace {
// Is value type: false
// CS Name: TechTreeGadgetGraph
class CORDL_TYPE TechTreeGadgetGraph : public ::XNode::NodeGraph {
public:
// Declarations
using __c = ::GlobalNamespace::TechTreeGadgetGraph___c;

 __declspec(property(get=get_GadgetNodes)) ::ArrayW<::UnityW<::GlobalNamespace::GadgetNode>>  GadgetNodes;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field costMultiplier, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_costMultiplier, put=__cordl_internal_set_costMultiplier)) float_t  costMultiplier;

/// @brief Field excludedGameModes, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_excludedGameModes, put=__cordl_internal_set_excludedGameModes)) ::GlobalNamespace::ESuperGameModes  excludedGameModes;

/// @brief Field icon, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_icon, put=__cordl_internal_set_icon)) ::UnityW<::UnityEngine::Sprite>  icon;

/// @brief Field nickName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nickName, put=__cordl_internal_set_nickName)) ::StringW  nickName;

/// @brief Field pageId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_pageId, put=__cordl_internal_set_pageId)) ::GlobalNamespace::SITechTreePageId  pageId;

/// @brief Field releaseTier, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_releaseTier, put=__cordl_internal_set_releaseTier)) ::GlobalNamespace::EAssetReleaseTier  releaseTier;

static inline ::GlobalNamespace::TechTreeGadgetGraph* New_ctor() ;

constexpr float_t const& __cordl_internal_get_costMultiplier() const;

constexpr float_t& __cordl_internal_get_costMultiplier() ;

constexpr ::GlobalNamespace::ESuperGameModes const& __cordl_internal_get_excludedGameModes() const;

constexpr ::GlobalNamespace::ESuperGameModes& __cordl_internal_get_excludedGameModes() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_icon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_icon() ;

constexpr ::StringW const& __cordl_internal_get_nickName() const;

constexpr ::StringW& __cordl_internal_get_nickName() ;

constexpr ::GlobalNamespace::SITechTreePageId const& __cordl_internal_get_pageId() const;

constexpr ::GlobalNamespace::SITechTreePageId& __cordl_internal_get_pageId() ;

constexpr ::GlobalNamespace::EAssetReleaseTier const& __cordl_internal_get_releaseTier() const;

constexpr ::GlobalNamespace::EAssetReleaseTier& __cordl_internal_get_releaseTier() ;

constexpr void __cordl_internal_set_costMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_excludedGameModes(::GlobalNamespace::ESuperGameModes  value) ;

constexpr void __cordl_internal_set_icon(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_nickName(::StringW  value) ;

constexpr void __cordl_internal_set_pageId(::GlobalNamespace::SITechTreePageId  value) ;

constexpr void __cordl_internal_set_releaseTier(::GlobalNamespace::EAssetReleaseTier  value) ;

/// @brief Method .ctor, addr 0x59d957c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GadgetNodes, addr 0x59d93f4, size 0x120, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::GlobalNamespace::GadgetNode>> get_GadgetNodes() ;

/// @brief Method get_IsValid, addr 0x59d9514, size 0x68, virtual false, abstract: false, final false
inline bool get_IsValid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TechTreeGadgetGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TechTreeGadgetGraph", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TechTreeGadgetGraph(TechTreeGadgetGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TechTreeGadgetGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TechTreeGadgetGraph(TechTreeGadgetGraph const& ) = delete;

/// @brief Field XLayoutStep offset 0xffffffff size 0x4
static constexpr float_t  XLayoutStep{static_cast<float_t>(300.0f)};

/// @brief Field YLayoutStep offset 0xffffffff size 0x4
static constexpr float_t  YLayoutStep{static_cast<float_t>(250.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{299};

/// @brief Field nickName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___nickName;

/// @brief Field pageId, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::SITechTreePageId  ___pageId;

/// @brief Field icon, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___icon;

/// @brief Field costMultiplier, offset: 0x38, size: 0x4, def value: None
 float_t  ___costMultiplier;

/// @brief Field excludedGameModes, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::ESuperGameModes  ___excludedGameModes;

/// @brief Field releaseTier, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::EAssetReleaseTier  ___releaseTier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TechTreeGadgetGraph, ___nickName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechTreeGadgetGraph, ___pageId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechTreeGadgetGraph, ___icon) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechTreeGadgetGraph, ___costMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechTreeGadgetGraph, ___excludedGameModes) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TechTreeGadgetGraph, ___releaseTier) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TechTreeGadgetGraph) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TechTreeGadgetGraph/<>c
class CORDL_TYPE TechTreeGadgetGraph___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::TechTreeGadgetGraph___c*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_2<::UnityW<::XNode::Node>,::UnityW<::GlobalNamespace::GadgetNode>>*  __9__9_0;

static inline ::GlobalNamespace::TechTreeGadgetGraph___c* New_ctor() ;

/// @brief Method .ctor, addr 0x59d95f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_GadgetNodes>b__9_0, addr 0x59d95fc, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GadgetNode> _get_GadgetNodes_b__9_0(::XNode::Node*  n) ;

static inline ::GlobalNamespace::TechTreeGadgetGraph___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::XNode::Node>,::UnityW<::GlobalNamespace::GadgetNode>>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::GlobalNamespace::TechTreeGadgetGraph___c*  value) ;

static inline void setStaticF___9__9_0(::System::Func_2<::UnityW<::XNode::Node>,::UnityW<::GlobalNamespace::GadgetNode>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TechTreeGadgetGraph___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TechTreeGadgetGraph___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TechTreeGadgetGraph___c(TechTreeGadgetGraph___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TechTreeGadgetGraph___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TechTreeGadgetGraph___c(TechTreeGadgetGraph___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{298};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TechTreeGadgetGraph___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
