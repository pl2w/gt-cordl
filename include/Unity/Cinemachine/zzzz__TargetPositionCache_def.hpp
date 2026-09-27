#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetPositionCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__TargetPositionCache_Mode_def.hpp"
#include "Unity/Cinemachine/zzzz__TargetPositionCache_TimeRange_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TargetPositionCache)
namespace GlobalNamespace {
struct CacheCurve_TargetPositionCache_Item;
}
namespace GlobalNamespace {
struct CacheEntry_TargetPositionCache_RecordingItem;
}
namespace GlobalNamespace {
struct TargetPositionCache_Mode;
}
namespace GlobalNamespace {
struct TargetPositionCache_TimeRange;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
class TargetPositionCache_CacheCurve;
}
namespace Unity::Cinemachine {
class TargetPositionCache_CacheEntry;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class TargetPositionCache;
}
namespace Unity::Cinemachine {
class TargetPositionCache_CacheCurve;
}
namespace Unity::Cinemachine {
class TargetPositionCache_CacheEntry;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::TargetPositionCache*);
MARK_REF_T(::Unity::Cinemachine::TargetPositionCache_CacheCurve*);
MARK_REF_T(::Unity::Cinemachine::TargetPositionCache_CacheEntry*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::TargetPositionCache*, "Unity.Cinemachine", "TargetPositionCache");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::TargetPositionCache_CacheCurve*, "Unity.Cinemachine", "TargetPositionCache/CacheCurve");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::TargetPositionCache_CacheEntry*, "Unity.Cinemachine", "TargetPositionCache/CacheEntry");
// Dependencies System.Object, Unity.Cinemachine.TargetPositionCache::Mode, Unity.Cinemachine.TargetPositionCache::TimeRange
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.TargetPositionCache
class CORDL_TYPE TargetPositionCache : public ::System::Object {
public:
// Declarations
using Mode = ::GlobalNamespace::TargetPositionCache_Mode;

using TimeRange = ::GlobalNamespace::TargetPositionCache_TimeRange;

using CacheCurve = ::Unity::Cinemachine::TargetPositionCache_CacheCurve;

using CacheEntry = ::Unity::Cinemachine::TargetPositionCache_CacheEntry;

/// @brief Field CurrentFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CurrentFrame, put=setStaticF_CurrentFrame)) int32_t  CurrentFrame;

/// @brief Field CurrentTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CurrentTime, put=setStaticF_CurrentTime)) float_t  CurrentTime;

/// @brief Field IsCameraCut, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_IsCameraCut, put=setStaticF_IsCameraCut)) bool  IsCameraCut;

/// @brief Field UseCache, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_UseCache, put=setStaticF_UseCache)) bool  UseCache;

/// @brief Field m_Cache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_Cache, put=setStaticF_m_Cache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::TargetPositionCache_CacheEntry*>*  m_Cache;

/// @brief Field m_CacheMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_CacheMode, put=setStaticF_m_CacheMode)) ::GlobalNamespace::TargetPositionCache_Mode  m_CacheMode;

/// @brief Field m_CacheTimeRange, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_CacheTimeRange, put=setStaticF_m_CacheTimeRange)) ::GlobalNamespace::TargetPositionCache_TimeRange  m_CacheTimeRange;

/// @brief Method ClearCache, addr 0xaebeb40, size 0xe4, virtual false, abstract: false, final false
static inline void ClearCache() ;

/// @brief Method CreatePlaybackCurves, addr 0xaebec24, size 0x150, virtual false, abstract: false, final false
static inline void CreatePlaybackCurves() ;

/// @brief Method GetTargetPosition, addr 0xaebf1bc, size 0x268, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetTargetPosition(::UnityEngine::Transform*  target) ;

/// @brief Method GetTargetRotation, addr 0xaebf904, size 0x268, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion GetTargetRotation(::UnityEngine::Transform*  target) ;

static inline ::Unity::Cinemachine::TargetPositionCache* New_ctor() ;

/// @brief Method .ctor, addr 0xaebfb6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_CurrentFrame() ;

static inline float_t getStaticF_CurrentTime() ;

static inline bool getStaticF_IsCameraCut() ;

static inline bool getStaticF_UseCache() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::TargetPositionCache_CacheEntry*>* getStaticF_m_Cache() ;

static inline ::GlobalNamespace::TargetPositionCache_Mode getStaticF_m_CacheMode() ;

static inline ::GlobalNamespace::TargetPositionCache_TimeRange getStaticF_m_CacheTimeRange() ;

/// @brief Method get_CacheMode, addr 0xaebea78, size 0x48, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TargetPositionCache_Mode get_CacheMode() ;

/// @brief Method get_CacheTimeRange, addr 0xaebeefc, size 0x48, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TargetPositionCache_TimeRange get_CacheTimeRange() ;

/// @brief Method get_CurrentPlaybackTimeValid, addr 0xaebedd4, size 0x68, virtual false, abstract: false, final false
static inline bool get_CurrentPlaybackTimeValid() ;

/// @brief Method get_HasCurrentTime, addr 0xaebee3c, size 0x68, virtual false, abstract: false, final false
static inline bool get_HasCurrentTime() ;

/// @brief Method get_IsEmpty, addr 0xaebeea4, size 0x48, virtual false, abstract: false, final false
static inline bool get_IsEmpty() ;

/// @brief Method get_IsRecording, addr 0xaebed74, size 0x60, virtual false, abstract: false, final false
static inline bool get_IsRecording() ;

static inline void setStaticF_CurrentFrame(int32_t  value) ;

static inline void setStaticF_CurrentTime(float_t  value) ;

static inline void setStaticF_IsCameraCut(bool  value) ;

static inline void setStaticF_UseCache(bool  value) ;

static inline void setStaticF_m_Cache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,::Unity::Cinemachine::TargetPositionCache_CacheEntry*>*  value) ;

static inline void setStaticF_m_CacheMode(::GlobalNamespace::TargetPositionCache_Mode  value) ;

static inline void setStaticF_m_CacheTimeRange(::GlobalNamespace::TargetPositionCache_TimeRange  value) ;

/// @brief Method set_CacheMode, addr 0xaebeac0, size 0x80, virtual false, abstract: false, final false
static inline void set_CacheMode(::GlobalNamespace::TargetPositionCache_Mode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TargetPositionCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TargetPositionCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TargetPositionCache(TargetPositionCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TargetPositionCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TargetPositionCache(TargetPositionCache const& ) = delete;

/// @brief Field CacheStepSize offset 0xffffffff size 0x4
static constexpr float_t  CacheStepSize{static_cast<float_t>(0.016666668f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22375};

/// @brief Field kWraparoundSlush offset 0xffffffff size 0x4
static constexpr float_t  kWraparoundSlush{static_cast<float_t>(0.1f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::TargetPositionCache) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.TargetPositionCache/CacheEntry
class CORDL_TYPE TargetPositionCache_CacheEntry : public ::System::Object {
public:
// Declarations
using RecordingItem = ::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem;

/// @brief Field Curve, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Curve, put=__cordl_internal_set_Curve)) ::Unity::Cinemachine::TargetPositionCache_CacheCurve*  Curve;

/// @brief Field RawItems, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_RawItems, put=__cordl_internal_set_RawItems)) ::System::Collections::Generic::List_1<::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem>*  RawItems;

/// @brief Method AddRawItem, addr 0xaebf4ac, size 0x274, virtual false, abstract: false, final false
inline void AddRawItem(float_t  time, bool  isCut, ::UnityEngine::Transform*  target) ;

/// @brief Method CreateCurves, addr 0xaebef7c, size 0x240, virtual false, abstract: false, final false
inline void CreateCurves() ;

static inline ::Unity::Cinemachine::TargetPositionCache_CacheEntry* New_ctor() ;

constexpr ::Unity::Cinemachine::TargetPositionCache_CacheCurve* const& __cordl_internal_get_Curve() const;

constexpr ::Unity::Cinemachine::TargetPositionCache_CacheCurve*& __cordl_internal_get_Curve() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem>* const& __cordl_internal_get_RawItems() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem>*& __cordl_internal_get_RawItems() ;

constexpr void __cordl_internal_set_Curve(::Unity::Cinemachine::TargetPositionCache_CacheCurve*  value) ;

constexpr void __cordl_internal_set_RawItems(::System::Collections::Generic::List_1<::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem>*  value) ;

/// @brief Method .ctor, addr 0xaebf424, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TargetPositionCache_CacheEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TargetPositionCache_CacheEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TargetPositionCache_CacheEntry(TargetPositionCache_CacheEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TargetPositionCache_CacheEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TargetPositionCache_CacheEntry(TargetPositionCache_CacheEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22373};

/// @brief Field Curve, offset: 0x10, size: 0x8, def value: None
 ::Unity::Cinemachine::TargetPositionCache_CacheCurve*  ___Curve;

/// @brief Field RawItems, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CacheEntry_TargetPositionCache_RecordingItem>*  ___RawItems;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::TargetPositionCache_CacheEntry, ___Curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::TargetPositionCache_CacheEntry, ___RawItems) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::TargetPositionCache_CacheEntry) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.TargetPositionCache/CacheCurve
class CORDL_TYPE TargetPositionCache_CacheCurve : public ::System::Object {
public:
// Declarations
using Item = ::GlobalNamespace::CacheCurve_TargetPositionCache_Item;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field StartTime, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartTime, put=__cordl_internal_set_StartTime)) float_t  StartTime;

/// @brief Field StepSize, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_StepSize, put=__cordl_internal_set_StepSize)) float_t  StepSize;

/// @brief Field m_Cache, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Cache, put=__cordl_internal_set_m_Cache)) ::System::Collections::Generic::List_1<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>*  m_Cache;

/// @brief Method Add, addr 0xaebfcc8, size 0xdc, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::CacheCurve_TargetPositionCache_Item  item) ;

/// @brief Method AddUntil, addr 0xaebfda4, size 0x140, virtual false, abstract: false, final false
inline void AddUntil(::GlobalNamespace::CacheCurve_TargetPositionCache_Item  item, float_t  time, bool  isCut) ;

/// @brief Method Evaluate, addr 0xaebf73c, size 0x1c8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CacheCurve_TargetPositionCache_Item Evaluate(float_t  time) ;

static inline ::Unity::Cinemachine::TargetPositionCache_CacheCurve* New_ctor(float_t  startTime, float_t  endTime, float_t  stepSize) ;

constexpr float_t const& __cordl_internal_get_StartTime() const;

constexpr float_t& __cordl_internal_get_StartTime() ;

constexpr float_t const& __cordl_internal_get_StepSize() const;

constexpr float_t& __cordl_internal_get_StepSize() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>* const& __cordl_internal_get_m_Cache() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>*& __cordl_internal_get_m_Cache() ;

constexpr void __cordl_internal_set_StartTime(float_t  value) ;

constexpr void __cordl_internal_set_StepSize(float_t  value) ;

constexpr void __cordl_internal_set_m_Cache(::System::Collections::Generic::List_1<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>*  value) ;

/// @brief Method .ctor, addr 0xaebfbbc, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(float_t  startTime, float_t  endTime, float_t  stepSize) ;

/// @brief Method get_Count, addr 0xaebfb74, size 0x48, virtual false, abstract: false, final false
inline int32_t get_Count() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TargetPositionCache_CacheCurve() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TargetPositionCache_CacheCurve", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TargetPositionCache_CacheCurve(TargetPositionCache_CacheCurve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TargetPositionCache_CacheCurve", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TargetPositionCache_CacheCurve(TargetPositionCache_CacheCurve const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22371};

/// @brief Field StartTime, offset: 0x10, size: 0x4, def value: None
 float_t  ___StartTime;

/// @brief Field StepSize, offset: 0x14, size: 0x4, def value: None
 float_t  ___StepSize;

/// @brief Field m_Cache, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CacheCurve_TargetPositionCache_Item>*  ___m_Cache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::TargetPositionCache_CacheCurve, ___StartTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::TargetPositionCache_CacheCurve, ___StepSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::TargetPositionCache_CacheCurve, ___m_Cache) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::TargetPositionCache_CacheCurve) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
