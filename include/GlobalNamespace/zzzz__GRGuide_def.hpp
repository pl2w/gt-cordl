#pragma once
// IWYU pragma private; include "GlobalNamespace/GRGuide.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRGuide)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::AI {
class NavMeshPath;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRGuide;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRGuide*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRGuide*, "", "GRGuide");
// Dependencies MonoBehaviourTick, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRGuide
class CORDL_TYPE GRGuide : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field audioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field connectorCorners, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectorCorners, put=__cordl_internal_set_connectorCorners)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  connectorCorners;

/// @brief Field hasPath, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPath, put=__cordl_internal_set_hasPath)) bool  hasPath;

/// @brief Field numPathCorners, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_numPathCorners, put=__cordl_internal_set_numPathCorners)) int32_t  numPathCorners;

/// @brief Field path, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::UnityEngine::AI::NavMeshPath*  path;

/// @brief Field pathCorners, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathCorners, put=__cordl_internal_set_pathCorners)) ::ArrayW<::UnityEngine::Vector3>  pathCorners;

/// @brief Field show, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_show, put=__cordl_internal_set_show)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  show;

/// @brief Field showing, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_showing, put=__cordl_internal_set_showing)) bool  showing;

/// @brief Field tempTarget, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempTarget, put=__cordl_internal_set_tempTarget)) ::UnityW<::UnityEngine::Transform>  tempTarget;

/// @brief Method Awake, addr 0x589c01c, size 0x164, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClosestPointOnLine, addr 0x589c960, size 0x21c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPointOnLine(::UnityEngine::Vector3  vA, ::UnityEngine::Vector3  vB, ::UnityEngine::Vector3  vPoint) ;

/// @brief Method GetClosestPointOnPath, addr 0x589c7e0, size 0x180, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetClosestPointOnPath(::UnityEngine::Vector3  pos, ::ArrayW<::UnityEngine::Vector3>  pathCorners, int32_t  numPathCorners, ::by_ref<int32_t>  nextCorner) ;

static inline ::GlobalNamespace::GRGuide* New_ctor() ;

/// @brief Method Tick, addr 0x589c180, size 0x5c8, virtual true, abstract: false, final false
inline void Tick() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_connectorCorners() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_connectorCorners() ;

constexpr bool const& __cordl_internal_get_hasPath() const;

constexpr bool& __cordl_internal_get_hasPath() ;

constexpr int32_t const& __cordl_internal_get_numPathCorners() const;

constexpr int32_t& __cordl_internal_get_numPathCorners() ;

constexpr ::UnityEngine::AI::NavMeshPath* const& __cordl_internal_get_path() const;

constexpr ::UnityEngine::AI::NavMeshPath*& __cordl_internal_get_path() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_pathCorners() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_pathCorners() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_show() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_show() ;

constexpr bool const& __cordl_internal_get_showing() const;

constexpr bool& __cordl_internal_get_showing() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tempTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tempTarget() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_connectorCorners(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_hasPath(bool  value) ;

constexpr void __cordl_internal_set_numPathCorners(int32_t  value) ;

constexpr void __cordl_internal_set_path(::UnityEngine::AI::NavMeshPath*  value) ;

constexpr void __cordl_internal_set_pathCorners(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_show(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_showing(bool  value) ;

constexpr void __cordl_internal_set_tempTarget(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x589cb7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRGuide() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRGuide", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRGuide(GRGuide && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRGuide", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRGuide(GRGuide const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1979};

/// @brief Field tempTarget, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tempTarget;

/// @brief Field show, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___show;

/// @brief Field audioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field showing, offset: 0x40, size: 0x1, def value: None
 bool  ___showing;

/// @brief Field hasPath, offset: 0x41, size: 0x1, def value: None
 bool  ___hasPath;

/// @brief Field path, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AI::NavMeshPath*  ___path;

/// @brief Field numPathCorners, offset: 0x50, size: 0x4, def value: None
 int32_t  ___numPathCorners;

/// @brief Field pathCorners, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___pathCorners;

/// @brief Field connectorCorners, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___connectorCorners;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRGuide, ___tempTarget) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRGuide, ___show) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRGuide, ___audioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRGuide, ___showing) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRGuide, ___hasPath) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRGuide, ___path) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRGuide, ___numPathCorners) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRGuide, ___pathCorners) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRGuide, ___connectorCorners) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRGuide) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
