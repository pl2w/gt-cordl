#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshBakerGrouperBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshBakerGrouperBehaviour)
namespace DigitalOpus::MB::Core {
class GrouperData;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0;
}
namespace GlobalNamespace {
class MB3_MeshBakerCommon;
}
namespace GlobalNamespace {
struct MB3_MeshBakerGrouper_ClusterType;
}
namespace GlobalNamespace {
class MB3_MeshBakerGrouper;
}
namespace GlobalNamespace {
class MB3_TextureBaker;
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
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_MeshBakerGrouperBehaviour;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*, "DigitalOpus.MB.Core", "MB3_MeshBakerGrouperBehaviour");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0*, "DigitalOpus.MB.Core", "MB3_MeshBakerGrouperBehaviour/<>c__DisplayClass2_0");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshBakerGrouperBehaviour
class CORDL_TYPE MB3_MeshBakerGrouperBehaviour : public ::System::Object {
public:
// Declarations
using __c__DisplayClass2_0 = ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0;

/// @brief Method AddMeshBaker, addr 0x9def4d8, size 0x368, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::MB3_MeshBakerCommon> AddMeshBaker(::GlobalNamespace::MB3_MeshBakerGrouper*  grouper, ::GlobalNamespace::MB3_TextureBaker*  tb, ::StringW  key, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  gaws) ;

/// @brief Method DoClustering, addr 0x9dee328, size 0xf44, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MB3_MeshBakerCommon>>* DoClustering(::GlobalNamespace::MB3_TextureBaker*  tb, ::GlobalNamespace::MB3_MeshBakerGrouper*  grouper, ::DigitalOpus::MB::Core::GrouperData*  d) ;

/// @brief Method DrawGizmos, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DrawGizmos(::UnityEngine::Bounds  sourceObjectBounds, ::DigitalOpus::MB::Core::GrouperData*  d) ;

/// @brief Method FilterIntoGroups, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* FilterIntoGroups(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  selection, ::DigitalOpus::MB::Core::GrouperData*  d) ;

/// @brief Method GetClusterType, addr 0x9def840, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType GetClusterType() ;

/// @brief Method GroupByLightmapIndex, addr 0x9def26c, size 0x264, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* GroupByLightmapIndex(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  gaws) ;

static inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour* New_ctor() ;

/// @brief Method .ctor, addr 0x9def848, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshBakerGrouperBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouperBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshBakerGrouperBehaviour(MB3_MeshBakerGrouperBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouperBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshBakerGrouperBehaviour(MB3_MeshBakerGrouperBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22840};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshBakerGrouperBehaviour/<>c__DisplayClass2_0
class CORDL_TYPE MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>*  __9__0;

/// @brief Field r, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_r, put=__cordl_internal_set_r)) ::UnityW<::UnityEngine::Renderer>  r;

static inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <DoClustering>b__0, addr 0x9def850, size 0x6c, virtual false, abstract: false, final false
inline bool _DoClustering_b__0(::UnityEngine::Renderer*  x) ;

constexpr ::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get___9__0() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_r() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_r() ;

constexpr void __cordl_internal_set___9__0(::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_r(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x9def4d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0(MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0(MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22839};

/// @brief Field r, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___r;

/// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
 ::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0, ___r) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0, _____9__0) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
