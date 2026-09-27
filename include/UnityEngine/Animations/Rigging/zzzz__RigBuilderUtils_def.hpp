#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigBuilderUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RigBuilderUtils)
namespace GlobalNamespace {
struct RigBuilderUtils_PlayableChain;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::Animations::Rigging {
class IRigLayer;
}
namespace UnityEngine::Animations::Rigging {
class SyncSceneToStreamLayer;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class RigBuilderUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::RigBuilderUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::RigBuilderUtils*, "UnityEngine.Animations.Rigging", "RigBuilderUtils");
// Dependencies System.Object
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.RigBuilderUtils
class CORDL_TYPE RigBuilderUtils : public ::System::Object {
public:
// Declarations
using PlayableChain = ::GlobalNamespace::RigBuilderUtils_PlayableChain;

/// @brief Field k_AnimationOutputPriority, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_k_AnimationOutputPriority, put=setStaticF_k_AnimationOutputPriority)) uint16_t  k_AnimationOutputPriority;

/// @brief Method BuildPlayableGraph, addr 0xae78610, size 0xf4, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayableGraph BuildPlayableGraph(::UnityEngine::Animator*  animator, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*  layers, ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*  syncSceneToStreamLayer) ;

/// @brief Method BuildPlayableGraph, addr 0xae7886c, size 0x3f4, virtual false, abstract: false, final false
static inline void BuildPlayableGraph(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Animator*  animator, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*  layers, ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*  syncSceneToStreamLayer) ;

/// @brief Method BuildPlayables, addr 0xae79624, size 0x6e4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::RigBuilderUtils_PlayableChain>* BuildPlayables(::UnityEngine::Animator*  animator, ::UnityEngine::Playables::PlayableGraph  graph, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*  layers, ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*  syncSceneToStreamLayer) ;

/// @brief Method BuildRigPlayables, addr 0xae79ff4, size 0x48c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Playables::Playable> BuildRigPlayables(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Animations::Rigging::IRigLayer*  layer) ;

static inline uint16_t getStaticF_k_AnimationOutputPriority() ;

static inline void setStaticF_k_AnimationOutputPriority(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigBuilderUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigBuilderUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigBuilderUtils(RigBuilderUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigBuilderUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigBuilderUtils(RigBuilderUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32306};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::Rigging::RigBuilderUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
