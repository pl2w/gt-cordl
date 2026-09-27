#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshBakerGrouperCluster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshBakerGrouperCluster)
namespace DigitalOpus::MB::Core {
class GrouperData;
}
namespace DigitalOpus::MB::Core {
class MB3_AgglomerativeClustering_item_s;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshBakerGrouperCluster___c__DisplayClass1_0;
}
namespace DigitalOpus::MB::Core {
class ProgressUpdateCancelableDelegate;
}
namespace GlobalNamespace {
struct MB3_MeshBakerGrouper_ClusterType;
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
class MB3_MeshBakerGrouperCluster;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshBakerGrouperCluster___c__DisplayClass1_0;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster*, "DigitalOpus.MB.Core", "MB3_MeshBakerGrouperCluster");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0*, "DigitalOpus.MB.Core", "MB3_MeshBakerGrouperCluster/<>c__DisplayClass1_0");
// Dependencies DigitalOpus.MB.Core.MB3_MeshBakerGrouperBehaviour
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshBakerGrouperCluster
class CORDL_TYPE MB3_MeshBakerGrouperCluster : public ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour {
public:
// Declarations
using __c__DisplayClass1_0 = ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0;

/// @brief Method BuildClusters, addr 0x9df1b04, size 0x500, virtual false, abstract: false, final false
inline void BuildClusters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*  progFunc, ::DigitalOpus::MB::Core::GrouperData*  d) ;

/// @brief Method DrawGizmos, addr 0x9df287c, size 0x13c, virtual true, abstract: false, final false
inline void DrawGizmos(::UnityEngine::Bounds  sceneObjectBounds, ::DigitalOpus::MB::Core::GrouperData*  d) ;

/// @brief Method FilterIntoGroups, addr 0x9df17e8, size 0x31c, virtual true, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* FilterIntoGroups(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  selection, ::DigitalOpus::MB::Core::GrouperData*  d) ;

/// @brief Method GetClusterType, addr 0x9df29b8, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType GetClusterType() ;

static inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster* New_ctor() ;

/// @brief Method _BuildListOfClustersToDraw, addr 0x9df200c, size 0x870, virtual false, abstract: false, final false
inline void _BuildListOfClustersToDraw(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*  progFunc, ::by_ref<float_t>  smallest, ::by_ref<float_t>  largest, ::DigitalOpus::MB::Core::GrouperData*  d) ;

/// @brief Method .ctor, addr 0x9df29c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshBakerGrouperCluster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouperCluster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshBakerGrouperCluster(MB3_MeshBakerGrouperCluster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouperCluster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshBakerGrouperCluster(MB3_MeshBakerGrouperCluster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22845};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// [CompilerGenerated]
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshBakerGrouperCluster/<>c__DisplayClass1_0
class CORDL_TYPE MB3_MeshBakerGrouperCluster___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Predicate_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>*  __9__0;

/// @brief Field gos, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gos, put=__cordl_internal_set_gos)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos;

/// @brief Field i, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_i, put=__cordl_internal_set_i)) int32_t  i;

static inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <BuildClusters>b__0, addr 0x9df29c8, size 0x9c, virtual false, abstract: false, final false
inline bool _BuildClusters_b__0(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*  x) ;

constexpr ::System::Predicate_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Predicate_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>*& __cordl_internal_get___9__0() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_gos() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_gos() ;

constexpr int32_t const& __cordl_internal_get_i() const;

constexpr int32_t& __cordl_internal_get_i() ;

constexpr void __cordl_internal_set___9__0(::System::Predicate_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>*  value) ;

constexpr void __cordl_internal_set_gos(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_i(int32_t  value) ;

/// @brief Method .ctor, addr 0x9df2004, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshBakerGrouperCluster___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouperCluster___c__DisplayClass1_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshBakerGrouperCluster___c__DisplayClass1_0(MB3_MeshBakerGrouperCluster___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerGrouperCluster___c__DisplayClass1_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshBakerGrouperCluster___c__DisplayClass1_0(MB3_MeshBakerGrouperCluster___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22844};

/// @brief Field gos, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___gos;

/// @brief Field i, offset: 0x18, size: 0x4, def value: None
 int32_t  ___i;

/// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
 ::System::Predicate_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0, ___gos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0, ___i) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0, _____9__0) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
