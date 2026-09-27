#pragma once
// IWYU pragma private; include "GlobalNamespace/ScienceExperimentSceneElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScienceExperimentElementID_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ScienceExperimentSceneElement)
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ScienceExperimentSceneElement;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScienceExperimentSceneElement*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScienceExperimentSceneElement*, "", "ScienceExperimentSceneElement");
// Dependencies ScienceExperimentElementID, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScienceExperimentSceneElement
class CORDL_TYPE ScienceExperimentSceneElement : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=ITickSystemPost_get_PostTickRunning, put=ITickSystemPost_set_PostTickRunning)) bool  ITickSystemPost_PostTickRunning;

/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField)) bool  _ITickSystemPost_PostTickRunning_k__BackingField;

/// @brief Field elementID, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_elementID, put=__cordl_internal_set_elementID)) ::GlobalNamespace::ScienceExperimentElementID  elementID;

/// @brief Field followElement, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_followElement, put=__cordl_internal_set_followElement)) ::UnityW<::UnityEngine::Transform>  followElement;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Method ITickSystemPost.PostTick, addr 0x59835a0, size 0xb0, virtual true, abstract: false, final true
inline void ITickSystemPost_PostTick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.get_PostTickRunning, addr 0x5983590, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemPost_get_PostTickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.set_PostTickRunning, addr 0x5983598, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemPost_set_PostTickRunning(bool  value) ;

static inline ::GlobalNamespace::ScienceExperimentSceneElement* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5983710, size 0x6c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x5983650, size 0xc0, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() ;

constexpr ::GlobalNamespace::ScienceExperimentElementID const& __cordl_internal_get_elementID() const;

constexpr ::GlobalNamespace::ScienceExperimentElementID& __cordl_internal_get_elementID() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_followElement() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_followElement() ;

constexpr void __cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_elementID(::GlobalNamespace::ScienceExperimentElementID  value) ;

constexpr void __cordl_internal_set_followElement(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x598377c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentSceneElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScienceExperimentSceneElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScienceExperimentSceneElement(ScienceExperimentSceneElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScienceExperimentSceneElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScienceExperimentSceneElement(ScienceExperimentSceneElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2533};

/// @brief Field elementID, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::ScienceExperimentElementID  ___elementID;

/// @brief Field followElement, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___followElement;

/// [CompilerGenerated]
/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____ITickSystemPost_PostTickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScienceExperimentSceneElement, ___elementID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentSceneElement, ___followElement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentSceneElement, ____ITickSystemPost_PostTickRunning_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScienceExperimentSceneElement) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
