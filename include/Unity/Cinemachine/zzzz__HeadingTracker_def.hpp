#pragma once
// IWYU pragma private; include "Unity/Cinemachine/HeadingTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__HeadingTracker_Item_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HeadingTracker)
namespace GlobalNamespace {
struct HeadingTracker_Item;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class HeadingTracker;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::HeadingTracker*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::HeadingTracker*, "Unity.Cinemachine", "HeadingTracker");
// [Obsolete]
// Dependencies System.Object, Unity.Cinemachine.HeadingTracker::Item, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.HeadingTracker
class CORDL_TYPE HeadingTracker : public ::System::Object {
public:
// Declarations
using Item = ::GlobalNamespace::HeadingTracker_Item;

 __declspec(property(get=get_FilterSize)) int32_t  FilterSize;

/// @brief Field mBottom, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_mBottom, put=__cordl_internal_set_mBottom)) int32_t  mBottom;

/// @brief Field mCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_mCount, put=__cordl_internal_set_mCount)) int32_t  mCount;

/// @brief Field mDecayExponent, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_mDecayExponent, put=setStaticF_mDecayExponent)) float_t  mDecayExponent;

/// @brief Field mHeadingSum, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_mHeadingSum, put=__cordl_internal_set_mHeadingSum)) ::UnityEngine::Vector3  mHeadingSum;

/// @brief Field mHistory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mHistory, put=__cordl_internal_set_mHistory)) ::ArrayW<::GlobalNamespace::HeadingTracker_Item>  mHistory;

/// @brief Field mLastGoodHeading, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_mLastGoodHeading, put=__cordl_internal_set_mLastGoodHeading)) ::UnityEngine::Vector3  mLastGoodHeading;

/// @brief Field mTop, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_mTop, put=__cordl_internal_set_mTop)) int32_t  mTop;

/// @brief Field mWeightSum, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_mWeightSum, put=__cordl_internal_set_mWeightSum)) float_t  mWeightSum;

/// @brief Field mWeightTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_mWeightTime, put=__cordl_internal_set_mWeightTime)) float_t  mWeightTime;

/// @brief Method Add, addr 0xaed4494, size 0x210, virtual false, abstract: false, final false
inline void Add(::UnityEngine::Vector3  velocity) ;

/// @brief Method ClearHistory, addr 0xaed43c0, size 0x64, virtual false, abstract: false, final false
inline void ClearHistory() ;

/// @brief Method Decay, addr 0xaed443c, size 0x58, virtual false, abstract: false, final false
static inline float_t Decay(float_t  time) ;

/// @brief Method DecayHistory, addr 0xaed47ec, size 0xf0, virtual false, abstract: false, final false
inline void DecayHistory() ;

/// @brief Method GetReliableHeading, addr 0xaed48dc, size 0x154, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetReliableHeading() ;

static inline ::Unity::Cinemachine::HeadingTracker* New_ctor(int32_t  filterSize) ;

/// @brief Method PopBottom, addr 0xaed46a4, size 0x148, virtual false, abstract: false, final false
inline void PopBottom() ;

constexpr int32_t const& __cordl_internal_get_mBottom() const;

constexpr int32_t& __cordl_internal_get_mBottom() ;

constexpr int32_t const& __cordl_internal_get_mCount() const;

constexpr int32_t& __cordl_internal_get_mCount() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_mHeadingSum() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_mHeadingSum() ;

constexpr ::ArrayW<::GlobalNamespace::HeadingTracker_Item> const& __cordl_internal_get_mHistory() const;

constexpr ::ArrayW<::GlobalNamespace::HeadingTracker_Item>& __cordl_internal_get_mHistory() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_mLastGoodHeading() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_mLastGoodHeading() ;

constexpr int32_t const& __cordl_internal_get_mTop() const;

constexpr int32_t& __cordl_internal_get_mTop() ;

constexpr float_t const& __cordl_internal_get_mWeightSum() const;

constexpr float_t& __cordl_internal_get_mWeightSum() ;

constexpr float_t const& __cordl_internal_get_mWeightTime() const;

constexpr float_t& __cordl_internal_get_mWeightTime() ;

constexpr void __cordl_internal_set_mBottom(int32_t  value) ;

constexpr void __cordl_internal_set_mCount(int32_t  value) ;

constexpr void __cordl_internal_set_mHeadingSum(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_mHistory(::ArrayW<::GlobalNamespace::HeadingTracker_Item>  value) ;

constexpr void __cordl_internal_set_mLastGoodHeading(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_mTop(int32_t  value) ;

constexpr void __cordl_internal_set_mWeightSum(float_t  value) ;

constexpr void __cordl_internal_set_mWeightTime(float_t  value) ;

/// @brief Method .ctor, addr 0xaed42d0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(int32_t  filterSize) ;

static inline float_t getStaticF_mDecayExponent() ;

/// @brief Method get_FilterSize, addr 0xaed4424, size 0x18, virtual false, abstract: false, final false
inline int32_t get_FilterSize() ;

static inline void setStaticF_mDecayExponent(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HeadingTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HeadingTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HeadingTracker(HeadingTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeadingTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeadingTracker(HeadingTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22423};

/// @brief Field mHistory, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::HeadingTracker_Item>  ___mHistory;

/// @brief Field mTop, offset: 0x18, size: 0x4, def value: None
 int32_t  ___mTop;

/// @brief Field mBottom, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___mBottom;

/// @brief Field mCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___mCount;

/// @brief Field mHeadingSum, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___mHeadingSum;

/// @brief Field mWeightSum, offset: 0x30, size: 0x4, def value: None
 float_t  ___mWeightSum;

/// @brief Field mWeightTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___mWeightTime;

/// @brief Field mLastGoodHeading, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___mLastGoodHeading;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::HeadingTracker, ___mHistory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::HeadingTracker, ___mTop) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::HeadingTracker, ___mBottom) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::HeadingTracker, ___mCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::HeadingTracker, ___mHeadingSum) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::HeadingTracker, ___mWeightSum) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::HeadingTracker, ___mWeightTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::HeadingTracker, ___mLastGoodHeading) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::HeadingTracker) == 0x48, "Size mismatch!");

} // namespace end def Unity::Cinemachine
