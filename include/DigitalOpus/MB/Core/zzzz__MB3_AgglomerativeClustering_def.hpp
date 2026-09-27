#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_AgglomerativeClustering.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_AgglomerativeClustering)
namespace DigitalOpus::MB::Core {
class MB3_AgglomerativeClustering_ClusterDistance;
}
namespace DigitalOpus::MB::Core {
class MB3_AgglomerativeClustering_ClusterNode;
}
namespace DigitalOpus::MB::Core {
class MB3_AgglomerativeClustering_item_s;
}
namespace DigitalOpus::MB::Core {
template<typename TPriority,typename TValue>
class PriorityQueue_2;
}
namespace DigitalOpus::MB::Core {
class ProgressUpdateCancelableDelegate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_AgglomerativeClustering;
}
namespace DigitalOpus::MB::Core {
class MB3_AgglomerativeClustering_ClusterDistance;
}
namespace DigitalOpus::MB::Core {
class MB3_AgglomerativeClustering_ClusterNode;
}
namespace DigitalOpus::MB::Core {
class MB3_AgglomerativeClustering_item_s;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*, "DigitalOpus.MB.Core", "MB3_AgglomerativeClustering");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance*, "DigitalOpus.MB.Core", "MB3_AgglomerativeClustering/ClusterDistance");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*, "DigitalOpus.MB.Core", "MB3_AgglomerativeClustering/ClusterNode");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*, "DigitalOpus.MB.Core", "MB3_AgglomerativeClustering/item_s");
// Dependencies DigitalOpus.MB.Core.MB3_AgglomerativeClustering::ClusterNode, System.IComparable`1<T>, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_AgglomerativeClustering
class CORDL_TYPE MB3_AgglomerativeClustering : public ::System::Object {
public:
// Declarations
using ClusterDistance = ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance;

using ClusterNode = ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode;

using item_s = ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s;

/// @brief Field clusters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clusters, put=__cordl_internal_set_clusters)) ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>  clusters;

/// @brief Field items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_items, put=__cordl_internal_set_items)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>*  items;

/// @brief Field wasCanceled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasCanceled, put=__cordl_internal_set_wasCanceled)) bool  wasCanceled;

/// @brief Method Main, addr 0x9d82d60, size 0x16c, virtual false, abstract: false, final false
static inline void Main() ;

static inline ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering* New_ctor() ;

/// @brief Method NthSmallestElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*>)
static inline T NthSmallestElement(::System::Collections::Generic::List_1<T>*  array, int32_t  n) ;

/// @brief Method QuickSelectPartition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*>)
static inline int32_t QuickSelectPartition(::System::Collections::Generic::List_1<T>*  array, int32_t  startIndex, int32_t  endIndex, int32_t  pivotIndex) ;

/// @brief Method QuickSelectSmallest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*>)
static inline ::System::Collections::Generic::List_1<T>* QuickSelectSmallest(::System::Collections::Generic::List_1<T>*  input, int32_t  n) ;

/// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Swap(::System::Collections::Generic::List_1<T>*  array, int32_t  index1, int32_t  index2) ;

/// @brief Method TestRun, addr 0x9d82b58, size 0x200, virtual false, abstract: false, final false
inline int32_t TestRun(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos) ;

/// @brief Method _RefillPriorityQWithSome, addr 0x9d82500, size 0x424, virtual false, abstract: false, final false
inline float_t _RefillPriorityQWithSome(::DigitalOpus::MB::Core::PriorityQueue_2<float_t,::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance*>*  pq, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>*  unclustered, ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>  clusters, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*  progFunc) ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*> const& __cordl_internal_get_clusters() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>& __cordl_internal_get_clusters() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>* const& __cordl_internal_get_items() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>*& __cordl_internal_get_items() ;

constexpr bool const& __cordl_internal_get_wasCanceled() const;

constexpr bool& __cordl_internal_get_wasCanceled() ;

constexpr void __cordl_internal_set_clusters(::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>  value) ;

constexpr void __cordl_internal_set_items(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>*  value) ;

constexpr void __cordl_internal_set_wasCanceled(bool  value) ;

/// @brief Method .ctor, addr 0x9d82ecc, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method agglomerate, addr 0x9d81514, size 0xf20, virtual false, abstract: false, final false
inline bool agglomerate(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*  progFunc) ;

/// @brief Method euclidean_distance, addr 0x9d8147c, size 0x98, virtual false, abstract: false, final false
inline float_t euclidean_distance(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_AgglomerativeClustering() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_AgglomerativeClustering", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_AgglomerativeClustering(MB3_AgglomerativeClustering && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_AgglomerativeClustering", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_AgglomerativeClustering(MB3_AgglomerativeClustering const& ) = delete;

/// @brief Field MAX_PRIORITY_Q_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PRIORITY_Q_SIZE{static_cast<int32_t>(0x800)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22615};

/// @brief Field items, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*>*  ___items;

/// @brief Field clusters, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>  ___clusters;

/// @brief Field wasCanceled, offset: 0x20, size: 0x1, def value: None
 bool  ___wasCanceled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering, ___items) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering, ___clusters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering, ___wasCanceled) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_AgglomerativeClustering/ClusterDistance
class CORDL_TYPE MB3_AgglomerativeClustering_ClusterDistance : public ::System::Object {
public:
// Declarations
/// @brief Field a, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_a, put=__cordl_internal_set_a)) ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  a;

/// @brief Field b, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_b, put=__cordl_internal_set_b)) ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  b;

static inline ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance* New_ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  aa, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  bb) ;

constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* const& __cordl_internal_get_a() const;

constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*& __cordl_internal_get_a() ;

constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* const& __cordl_internal_get_b() const;

constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*& __cordl_internal_get_b() ;

constexpr void __cordl_internal_set_a(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  value) ;

constexpr void __cordl_internal_set_b(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  value) ;

/// @brief Method .ctor, addr 0x9d82b14, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  aa, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  bb) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_AgglomerativeClustering_ClusterDistance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_AgglomerativeClustering_ClusterDistance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_AgglomerativeClustering_ClusterDistance(MB3_AgglomerativeClustering_ClusterDistance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_AgglomerativeClustering_ClusterDistance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_AgglomerativeClustering_ClusterDistance(MB3_AgglomerativeClustering_ClusterDistance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22614};

/// @brief Field a, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  ___a;

/// @brief Field b, offset: 0x18, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  ___b;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance, ___a) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance, ___b) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterDistance) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object, UnityEngine.Vector3
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_AgglomerativeClustering/item_s
class CORDL_TYPE MB3_AgglomerativeClustering_item_s : public ::System::Object {
public:
// Declarations
/// @brief Field coord, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_coord, put=__cordl_internal_set_coord)) ::UnityEngine::Vector3  coord;

/// @brief Field go, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_go, put=__cordl_internal_set_go)) ::UnityW<::UnityEngine::GameObject>  go;

static inline ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_coord() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_coord() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_go() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_go() ;

constexpr void __cordl_internal_set_coord(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_go(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d82d58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_AgglomerativeClustering_item_s() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_AgglomerativeClustering_item_s", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_AgglomerativeClustering_item_s(MB3_AgglomerativeClustering_item_s && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_AgglomerativeClustering_item_s", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_AgglomerativeClustering_item_s(MB3_AgglomerativeClustering_item_s const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22613};

/// @brief Field go, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___go;

/// @brief Field coord, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___coord;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s, ___go) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s, ___coord) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object, UnityEngine.Vector3
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_AgglomerativeClustering/ClusterNode
class CORDL_TYPE MB3_AgglomerativeClustering_ClusterNode : public ::System::Object {
public:
// Declarations
/// @brief Field centroid, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_centroid, put=__cordl_internal_set_centroid)) ::UnityEngine::Vector3  centroid;

/// @brief Field cha, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cha, put=__cordl_internal_set_cha)) ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  cha;

/// @brief Field chb, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_chb, put=__cordl_internal_set_chb)) ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  chb;

/// @brief Field distToMergedCentroid, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_distToMergedCentroid, put=__cordl_internal_set_distToMergedCentroid)) float_t  distToMergedCentroid;

/// @brief Field height, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

/// @brief Field idx, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_idx, put=__cordl_internal_set_idx)) int32_t  idx;

/// @brief Field isUnclustered, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isUnclustered, put=__cordl_internal_set_isUnclustered)) bool  isUnclustered;

/// @brief Field leaf, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_leaf, put=__cordl_internal_set_leaf)) ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*  leaf;

/// @brief Field leafs, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_leafs, put=__cordl_internal_set_leafs)) ::ArrayW<int32_t>  leafs;

static inline ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* New_ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  a, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  b, int32_t  index, int32_t  h, float_t  dist, ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>  clusters) ;

static inline ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* New_ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*  ii, int32_t  index) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_centroid() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_centroid() ;

constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* const& __cordl_internal_get_cha() const;

constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*& __cordl_internal_get_cha() ;

constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* const& __cordl_internal_get_chb() const;

constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*& __cordl_internal_get_chb() ;

constexpr float_t const& __cordl_internal_get_distToMergedCentroid() const;

constexpr float_t& __cordl_internal_get_distToMergedCentroid() ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr int32_t const& __cordl_internal_get_idx() const;

constexpr int32_t& __cordl_internal_get_idx() ;

constexpr bool const& __cordl_internal_get_isUnclustered() const;

constexpr bool& __cordl_internal_get_isUnclustered() ;

constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s* const& __cordl_internal_get_leaf() const;

constexpr ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*& __cordl_internal_get_leaf() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_leafs() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_leafs() ;

constexpr void __cordl_internal_set_centroid(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cha(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  value) ;

constexpr void __cordl_internal_set_chb(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  value) ;

constexpr void __cordl_internal_set_distToMergedCentroid(float_t  value) ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_idx(int32_t  value) ;

constexpr void __cordl_internal_set_isUnclustered(bool  value) ;

constexpr void __cordl_internal_set_leaf(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*  value) ;

constexpr void __cordl_internal_set_leafs(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x9d82924, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  a, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  b, int32_t  index, int32_t  h, float_t  dist, ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*>  clusters) ;

/// @brief Method .ctor, addr 0x9d82434, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*  ii, int32_t  index) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_AgglomerativeClustering_ClusterNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_AgglomerativeClustering_ClusterNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_AgglomerativeClustering_ClusterNode(MB3_AgglomerativeClustering_ClusterNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_AgglomerativeClustering_ClusterNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_AgglomerativeClustering_ClusterNode(MB3_AgglomerativeClustering_ClusterNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22612};

/// @brief Field leaf, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*  ___leaf;

/// @brief Field cha, offset: 0x18, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  ___cha;

/// @brief Field chb, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*  ___chb;

/// @brief Field height, offset: 0x28, size: 0x4, def value: None
 int32_t  ___height;

/// @brief Field distToMergedCentroid, offset: 0x2c, size: 0x4, def value: None
 float_t  ___distToMergedCentroid;

/// @brief Field centroid, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___centroid;

/// @brief Field leafs, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___leafs;

/// @brief Field idx, offset: 0x48, size: 0x4, def value: None
 int32_t  ___idx;

/// @brief Field isUnclustered, offset: 0x4c, size: 0x1, def value: None
 bool  ___isUnclustered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode, ___leaf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode, ___cha) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode, ___chb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode, ___height) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode, ___distToMergedCentroid) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode, ___centroid) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode, ___leafs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode, ___idx) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode, ___isUnclustered) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode) == 0x50, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
