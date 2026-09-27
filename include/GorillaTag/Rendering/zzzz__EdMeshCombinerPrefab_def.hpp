#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdMeshCombinerPrefab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EdMeshCombinerPrefab)
namespace GlobalNamespace {
struct EdMeshCombinerPrefab_CombinerCriteria;
}
namespace GlobalNamespace {
struct EdMeshCombinerPrefab_CombinerInfo;
}
namespace GlobalNamespace {
struct EdMeshCombinerPrefab_CopyMeshJob;
}
namespace GorillaTag::Rendering {
class EdMeshCombinedPrefabData;
}
namespace GorillaTag::Rendering {
class EdMeshCombinerPrefab___c;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Rendering {
class EdMeshCombinerPrefab;
}
namespace GorillaTag::Rendering {
class EdMeshCombinerPrefab___c;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::EdMeshCombinerPrefab*);
MARK_REF_T(::GorillaTag::Rendering::EdMeshCombinerPrefab___c*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::EdMeshCombinerPrefab*, "GorillaTag.Rendering", "EdMeshCombinerPrefab");
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::EdMeshCombinerPrefab___c*, "GorillaTag.Rendering", "EdMeshCombinerPrefab/<>c");
// [DefaultExecutionOrder(-2147482648)]
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.EdMeshCombinerPrefab
class CORDL_TYPE EdMeshCombinerPrefab : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CombinerCriteria = ::GlobalNamespace::EdMeshCombinerPrefab_CombinerCriteria;

using CombinerInfo = ::GlobalNamespace::EdMeshCombinerPrefab_CombinerInfo;

using CopyMeshJob = ::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob;

using __c = ::GorillaTag::Rendering::EdMeshCombinerPrefab___c;

/// @brief Field combinedData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_combinedData, put=__cordl_internal_set_combinedData)) ::GorillaTag::Rendering::EdMeshCombinedPrefabData*  combinedData;

/// @brief Method Awake, addr 0x5d559c0, size 0x78, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CombineMeshesRuntime, addr 0x5d55a38, size 0x3384, virtual false, abstract: false, final false
static inline void CombineMeshesRuntime(::GorillaTag::Rendering::EdMeshCombinerPrefab*  combiner, bool  undo, ::GorillaTag::Rendering::EdMeshCombinedPrefabData*  combinedPrefabData) ;

static inline ::GorillaTag::Rendering::EdMeshCombinerPrefab* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d58eac, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Special_MarkDoNotCombine, addr 0x5d58dbc, size 0xf0, virtual false, abstract: false, final false
static inline void Special_MarkDoNotCombine(::UnityEngine::Component*  component) ;

constexpr ::GorillaTag::Rendering::EdMeshCombinedPrefabData* const& __cordl_internal_get_combinedData() const;

constexpr ::GorillaTag::Rendering::EdMeshCombinedPrefabData*& __cordl_internal_get_combinedData() ;

constexpr void __cordl_internal_set_combinedData(::GorillaTag::Rendering::EdMeshCombinedPrefabData*  value) ;

/// @brief Method .ctor, addr 0x5d58eb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EdMeshCombinerPrefab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EdMeshCombinerPrefab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EdMeshCombinerPrefab(EdMeshCombinerPrefab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EdMeshCombinerPrefab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EdMeshCombinerPrefab(EdMeshCombinerPrefab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4809};

/// @brief Field _k_maxVertCount offset 0xffffffff size 0x4
static constexpr uint32_t  _k_maxVertCount{static_cast<uint32_t>(0xffffu)};

/// @brief Field _k_maxVertsForUInt16 offset 0xffffffff size 0x4
static constexpr uint32_t  _k_maxVertsForUInt16{static_cast<uint32_t>(0xffffu)};

/// @brief Field _k_maxVertsForUInt32 offset 0xffffffff size 0x4
static constexpr uint32_t  _k_maxVertsForUInt32{static_cast<uint32_t>(0xffffffffu)};

/// @brief Field combinedData, offset: 0x20, size: 0x8, def value: None
 ::GorillaTag::Rendering::EdMeshCombinedPrefabData*  ___combinedData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Rendering::EdMeshCombinerPrefab, ___combinedData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Rendering::EdMeshCombinerPrefab) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.EdMeshCombinerPrefab/<>c
class CORDL_TYPE EdMeshCombinerPrefab___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaTag::Rendering::EdMeshCombinerPrefab___c*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Comparison_1<::UnityW<::UnityEngine::Transform>>*  __9__9_0;

static inline ::GorillaTag::Rendering::EdMeshCombinerPrefab___c* New_ctor() ;

/// @brief Method <CombineMeshesRuntime>b__9_0, addr 0x5d59f0c, size 0x90, virtual false, abstract: false, final false
inline int32_t _CombineMeshesRuntime_b__9_0(::UnityEngine::Transform*  a, ::UnityEngine::Transform*  b) ;

/// @brief Method .ctor, addr 0x5d59f04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaTag::Rendering::EdMeshCombinerPrefab___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityW<::UnityEngine::Transform>>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::GorillaTag::Rendering::EdMeshCombinerPrefab___c*  value) ;

static inline void setStaticF___9__9_0(::System::Comparison_1<::UnityW<::UnityEngine::Transform>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EdMeshCombinerPrefab___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EdMeshCombinerPrefab___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EdMeshCombinerPrefab___c(EdMeshCombinerPrefab___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EdMeshCombinerPrefab___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EdMeshCombinerPrefab___c(EdMeshCombinerPrefab___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4808};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Rendering::EdMeshCombinerPrefab___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Rendering
