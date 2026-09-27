#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ConfinerOven.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_AspectStretcher_impl.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_BakingStateCache_impl.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_BakingState_impl.hpp"
#include "Unity/Cinemachine/zzzz__Point64_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_AspectStretcher_def.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_BakingStateCache_def.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_BakingState_def.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_PolygonSolution_def.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include "Unity/Cinemachine/zzzz__Rect64_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ConfinerOven::*)(::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>, ::by_ref<float_t>, float_t, float_t)>(&::Unity::Cinemachine::ConfinerOven::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xaeb50e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven.GetBakedSolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ConfinerOven_BakedSolution* (::Unity::Cinemachine::ConfinerOven::*)(float_t)>(&::Unity::Cinemachine::ConfinerOven::GetBakedSolution)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xaeb59f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"GetBakedSolution", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConfinerOven_BakingState (::Unity::Cinemachine::ConfinerOven::*)()>(&::Unity::Cinemachine::ConfinerOven::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb5dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ConfinerOven::*)(::GlobalNamespace::ConfinerOven_BakingState)>(&::Unity::Cinemachine::ConfinerOven::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb5df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::ConfinerOven_BakingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ConfinerOven::*)(::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>, ::by_ref<float_t>, float_t, float_t)>(&::Unity::Cinemachine::ConfinerOven::Initialize)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0xaeb51d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"Initialize", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven.BakeConfiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ConfinerOven::*)(float_t)>(&::Unity::Cinemachine::ConfinerOven::BakeConfiner)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0xaeb6060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"BakeConfiner", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven._Initialize_g__GetPolygonBoundingBox_24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>)>(&::Unity::Cinemachine::ConfinerOven::_Initialize_g__GetPolygonBoundingBox_24_0)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xaeb5dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"<Initialize>g__GetPolygonBoundingBox|24_0", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven._Initialize_g__MidPointOfIntRect_24_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Point64 (*)(::Unity::Cinemachine::Rect64)>(&::Unity::Cinemachine::ConfinerOven::_Initialize_g__MidPointOfIntRect_24_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xaeb600c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"<Initialize>g__MidPointOfIntRect|24_1", {}, {::i2c::type_of<::Unity::Cinemachine::Rect64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven._BakeConfiner_g__ComputeSkeleton_25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ConfinerOven::*)(::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConfinerOven_PolygonSolution>*>)>(&::Unity::Cinemachine::ConfinerOven::_BakeConfiner_g__ComputeSkeleton_25_0)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xaeb6624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"<BakeConfiner>g__ComputeSkeleton|25_0", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConfinerOven_PolygonSolution>*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_MinFrustumHeightWithBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinFrustumHeightWithBones;
}
constexpr float_t const& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_MinFrustumHeightWithBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinFrustumHeightWithBones;
}
constexpr void Unity::Cinemachine::ConfinerOven::__cordl_internal_set_m_MinFrustumHeightWithBones(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinFrustumHeightWithBones = value;
}
constexpr float_t& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_SkeletonPadding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SkeletonPadding;
}
constexpr float_t const& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_SkeletonPadding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SkeletonPadding;
}
constexpr void Unity::Cinemachine::ConfinerOven::__cordl_internal_set_m_SkeletonPadding(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SkeletonPadding = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_OriginalPolygon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalPolygon;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* const& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_OriginalPolygon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalPolygon;
}
constexpr void Unity::Cinemachine::ConfinerOven::__cordl_internal_set_m_OriginalPolygon(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OriginalPolygon = value;
}
constexpr ::Unity::Cinemachine::Point64& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_MidPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MidPoint;
}
constexpr ::Unity::Cinemachine::Point64 const& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_MidPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MidPoint;
}
constexpr void Unity::Cinemachine::ConfinerOven::__cordl_internal_set_m_MidPoint(::Unity::Cinemachine::Point64  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MidPoint = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_Skeleton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Skeleton;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* const& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_Skeleton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Skeleton;
}
constexpr void Unity::Cinemachine::ConfinerOven::__cordl_internal_set_m_Skeleton(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Skeleton = value;
}
constexpr ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_FloatToInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FloatToInt;
}
constexpr ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler* const& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_FloatToInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FloatToInt;
}
constexpr void Unity::Cinemachine::ConfinerOven::__cordl_internal_set_m_FloatToInt(::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FloatToInt = value;
}
constexpr ::UnityEngine::Rect& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_PolygonRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PolygonRect;
}
constexpr ::UnityEngine::Rect const& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_PolygonRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PolygonRect;
}
constexpr void Unity::Cinemachine::ConfinerOven::__cordl_internal_set_m_PolygonRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PolygonRect = value;
}
constexpr ::GlobalNamespace::ConfinerOven_AspectStretcher& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_AspectStretcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AspectStretcher;
}
constexpr ::GlobalNamespace::ConfinerOven_AspectStretcher const& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_AspectStretcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AspectStretcher;
}
constexpr void Unity::Cinemachine::ConfinerOven::__cordl_internal_set_m_AspectStretcher(::GlobalNamespace::ConfinerOven_AspectStretcher  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AspectStretcher = value;
}
constexpr ::GlobalNamespace::ConfinerOven_BakingState& Unity::Cinemachine::ConfinerOven::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::GlobalNamespace::ConfinerOven_BakingState const& Unity::Cinemachine::ConfinerOven::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void Unity::Cinemachine::ConfinerOven::__cordl_internal_set__State_k__BackingField(::GlobalNamespace::ConfinerOven_BakingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
constexpr float_t& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_bakeProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeProgress;
}
constexpr float_t const& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_bakeProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeProgress;
}
constexpr void Unity::Cinemachine::ConfinerOven::__cordl_internal_set_bakeProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakeProgress = value;
}
constexpr ::GlobalNamespace::ConfinerOven_BakingStateCache& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_Cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr ::GlobalNamespace::ConfinerOven_BakingStateCache const& Unity::Cinemachine::ConfinerOven::__cordl_internal_get_m_Cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr void Unity::Cinemachine::ConfinerOven::__cordl_internal_set_m_Cache(::GlobalNamespace::ConfinerOven_BakingStateCache  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Cache = value;
}
inline void Unity::Cinemachine::ConfinerOven::_ctor(/* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>  inputPath, /* [IsReadOnly] */ ::by_ref<float_t>  aspectRatio, float_t  maxFrustumHeight, float_t  skeletonPadding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputPath, aspectRatio, maxFrustumHeight, skeletonPadding);
}
inline ::Unity::Cinemachine::ConfinerOven_BakedSolution* Unity::Cinemachine::ConfinerOven::GetBakedSolution(float_t  frustumHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"GetBakedSolution", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(this, ___internal_method, frustumHeight);
}
inline ::GlobalNamespace::ConfinerOven_BakingState Unity::Cinemachine::ConfinerOven::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConfinerOven_BakingState>(this, ___internal_method);
}
inline void Unity::Cinemachine::ConfinerOven::set_State(::GlobalNamespace::ConfinerOven_BakingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::ConfinerOven_BakingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::ConfinerOven::Initialize(/* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>  inputPath, /* [IsReadOnly] */ ::by_ref<float_t>  aspectRatio, float_t  maxFrustumHeight, float_t  skeletonPadding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"Initialize", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputPath, aspectRatio, maxFrustumHeight, skeletonPadding);
}
inline void Unity::Cinemachine::ConfinerOven::BakeConfiner(float_t  maxComputationTimePerFrameInSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"BakeConfiner", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxComputationTimePerFrameInSeconds);
}
inline ::UnityEngine::Rect Unity::Cinemachine::ConfinerOven::_Initialize_g__GetPolygonBoundingBox_24_0(/* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>  polygons)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"<Initialize>g__GetPolygonBoundingBox|24_0", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, polygons);
}
inline ::Unity::Cinemachine::Point64 Unity::Cinemachine::ConfinerOven::_Initialize_g__MidPointOfIntRect_24_1(::Unity::Cinemachine::Rect64  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"<Initialize>g__MidPointOfIntRect|24_1", {}, {::i2c::type_of<::Unity::Cinemachine::Rect64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Point64>(nullptr, ___internal_method, bounds);
}
inline void Unity::Cinemachine::ConfinerOven::_BakeConfiner_g__ComputeSkeleton_25_0(/* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConfinerOven_PolygonSolution>*>  solutions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven*>(),
                        {"<BakeConfiner>g__ComputeSkeleton|25_0", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::ConfinerOven_PolygonSolution>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, solutions);
}
inline ::Unity::Cinemachine::ConfinerOven* Unity::Cinemachine::ConfinerOven::New_ctor(/* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>  inputPath, /* [IsReadOnly] */ ::by_ref<float_t>  aspectRatio, float_t  maxFrustumHeight, float_t  skeletonPadding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::ConfinerOven*>(inputPath, aspectRatio, maxFrustumHeight, skeletonPadding));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::ConfinerOven::ConfinerOven()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven_BakedSolution._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ConfinerOven_BakedSolution::*)(float_t, float_t, bool, ::UnityEngine::Rect, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::ConfinerOven_BakedSolution::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xaeb5c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven_BakedSolution.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ConfinerOven_BakedSolution::*)()>(&::Unity::Cinemachine::ConfinerOven_BakedSolution::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeb699c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven_BakedSolution.ConfinePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Unity::Cinemachine::ConfinerOven_BakedSolution::*)(::by_ref<::UnityEngine::Vector2>)>(&::Unity::Cinemachine::ConfinerOven_BakedSolution::ConfinePoint)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0xaeb69ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"ConfinePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven_BakedSolution.FindIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Unity::Cinemachine::Point64>, ::by_ref<::Unity::Cinemachine::Point64>, ::by_ref<::Unity::Cinemachine::Point64>, ::by_ref<::Unity::Cinemachine::Point64>, double_t)>(&::Unity::Cinemachine::ConfinerOven_BakedSolution::FindIntersection)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xaeb71dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"FindIntersection", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::Point64>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::Point64>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::Point64>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::Point64>>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven_BakedSolution._ConfinePoint_g__IntPointLerp_9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Point64 (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, float_t)>(&::Unity::Cinemachine::ConfinerOven_BakedSolution::_ConfinePoint_g__IntPointLerp_9_0)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xaeb6e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"<ConfinePoint>g__IntPointLerp|9_0", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven_BakedSolution._ConfinePoint_g__IsInsideOriginal_9_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ConfinerOven_BakedSolution::*)(::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ConfinerOven_BakedSolution::_ConfinePoint_g__IsInsideOriginal_9_1)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xaeb6d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"<ConfinePoint>g__IsInsideOriginal|9_1", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven_BakedSolution._ConfinePoint_g__ClosestPointOnSegment_9_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::ConfinerOven_BakedSolution::*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ConfinerOven_BakedSolution::_ConfinePoint_g__ClosestPointOnSegment_9_2)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaeb6df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"<ConfinePoint>g__ClosestPointOnSegment|9_2", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven_BakedSolution._ConfinePoint_g__DoesIntersectOriginal_9_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ConfinerOven_BakedSolution::*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ConfinerOven_BakedSolution::_ConfinePoint_g__DoesIntersectOriginal_9_3)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xaeb7050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"<ConfinePoint>g__DoesIntersectOriginal|9_3", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven_BakedSolution._FindIntersection_g__IntPointDiffSqrMagnitude_10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::ConfinerOven_BakedSolution::_FindIntersection_g__IntPointDiffSqrMagnitude_10_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaeb7334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"<FindIntersection>g__IntPointDiffSqrMagnitude|10_0", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_FrustumSizeIntSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrustumSizeIntSpace;
}
constexpr float_t const& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_FrustumSizeIntSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrustumSizeIntSpace;
}
constexpr void Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_set_m_FrustumSizeIntSpace(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FrustumSizeIntSpace = value;
}
constexpr ::GlobalNamespace::ConfinerOven_AspectStretcher& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_AspectStretcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AspectStretcher;
}
constexpr ::GlobalNamespace::ConfinerOven_AspectStretcher const& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_AspectStretcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AspectStretcher;
}
constexpr void Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_set_m_AspectStretcher(::GlobalNamespace::ConfinerOven_AspectStretcher  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AspectStretcher = value;
}
constexpr bool& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_HasBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasBones;
}
constexpr bool const& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_HasBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasBones;
}
constexpr void Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_set_m_HasBones(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasBones = value;
}
constexpr double_t& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_SqrPolygonDiagonal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SqrPolygonDiagonal;
}
constexpr double_t const& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_SqrPolygonDiagonal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SqrPolygonDiagonal;
}
constexpr void Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_set_m_SqrPolygonDiagonal(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SqrPolygonDiagonal = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_OriginalPolygon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalPolygon;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* const& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_OriginalPolygon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalPolygon;
}
constexpr void Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_set_m_OriginalPolygon(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OriginalPolygon = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_Solution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Solution;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* const& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_Solution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Solution;
}
constexpr void Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_set_m_Solution(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Solution = value;
}
constexpr ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_FloatToInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FloatToInt;
}
constexpr ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler* const& Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_get_m_FloatToInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FloatToInt;
}
constexpr void Unity::Cinemachine::ConfinerOven_BakedSolution::__cordl_internal_set_m_FloatToInt(::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FloatToInt = value;
}
inline void Unity::Cinemachine::ConfinerOven_BakedSolution::_ctor(float_t  aspectRatio, float_t  frustumHeight, bool  hasBones, ::UnityEngine::Rect  polygonBounds, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  originalPolygon, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aspectRatio, frustumHeight, hasBones, polygonBounds, originalPolygon, solution);
}
inline bool Unity::Cinemachine::ConfinerOven_BakedSolution::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Unity::Cinemachine::ConfinerOven_BakedSolution::ConfinePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  pointToConfine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"ConfinePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, pointToConfine);
}
inline int32_t Unity::Cinemachine::ConfinerOven_BakedSolution::FindIntersection(/* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::Point64>  p1, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::Point64>  p2, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::Point64>  p3, /* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::Point64>  p4, double_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"FindIntersection", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::Point64>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::Point64>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::Point64>>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::Point64>>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, p1, p2, p3, p4, epsilon);
}
inline ::Unity::Cinemachine::Point64 Unity::Cinemachine::ConfinerOven_BakedSolution::_ConfinePoint_g__IntPointLerp_9_0(::Unity::Cinemachine::Point64  a, ::Unity::Cinemachine::Point64  b, float_t  lerp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"<ConfinePoint>g__IntPointLerp|9_0", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Point64>(nullptr, ___internal_method, a, b, lerp);
}
inline bool Unity::Cinemachine::ConfinerOven_BakedSolution::_ConfinePoint_g__IsInsideOriginal_9_1(::Unity::Cinemachine::Point64  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"<ConfinePoint>g__IsInsideOriginal|9_1", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point);
}
inline float_t Unity::Cinemachine::ConfinerOven_BakedSolution::_ConfinePoint_g__ClosestPointOnSegment_9_2(::Unity::Cinemachine::Point64  point, ::Unity::Cinemachine::Point64  s0, ::Unity::Cinemachine::Point64  s1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"<ConfinePoint>g__ClosestPointOnSegment|9_2", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, point, s0, s1);
}
inline bool Unity::Cinemachine::ConfinerOven_BakedSolution::_ConfinePoint_g__DoesIntersectOriginal_9_3(::Unity::Cinemachine::Point64  l1, ::Unity::Cinemachine::Point64  l2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"<ConfinePoint>g__DoesIntersectOriginal|9_3", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, l1, l2);
}
inline double_t Unity::Cinemachine::ConfinerOven_BakedSolution::_FindIntersection_g__IntPointDiffSqrMagnitude_10_0(::Unity::Cinemachine::Point64  point1, ::Unity::Cinemachine::Point64  point2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(),
                        {"<FindIntersection>g__IntPointDiffSqrMagnitude|10_0", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, point1, point2);
}
inline ::Unity::Cinemachine::ConfinerOven_BakedSolution* Unity::Cinemachine::ConfinerOven_BakedSolution::New_ctor(float_t  aspectRatio, float_t  frustumHeight, bool  hasBones, ::UnityEngine::Rect  polygonBounds, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  originalPolygon, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  solution)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::ConfinerOven_BakedSolution*>(aspectRatio, frustumHeight, hasBones, polygonBounds, originalPolygon, solution));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::ConfinerOven_BakedSolution::ConfinerOven_BakedSolution()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler.FloatToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::ConfinerOven_FloatToIntScaler::*)(float_t)>(&::Unity::Cinemachine::ConfinerOven_FloatToIntScaler::FloatToInt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeb5ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*>(),
                        {"FloatToInt", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler.IntToFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::ConfinerOven_FloatToIntScaler::*)(int64_t)>(&::Unity::Cinemachine::ConfinerOven_FloatToIntScaler::IntToFloat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeb6510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*>(),
                        {"IntToFloat", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler.get_ClipperEpsilon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::ConfinerOven_FloatToIntScaler::*)()>(&::Unity::Cinemachine::ConfinerOven_FloatToIntScaler::get_ClipperEpsilon)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeb6984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*>(),
                        {"get_ClipperEpsilon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ConfinerOven_FloatToIntScaler::*)(::UnityEngine::Rect)>(&::Unity::Cinemachine::ConfinerOven_FloatToIntScaler::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaeb5f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Unity::Cinemachine::ConfinerOven_FloatToIntScaler::__cordl_internal_get_m_FloatToInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FloatToInt;
}
constexpr int64_t const& Unity::Cinemachine::ConfinerOven_FloatToIntScaler::__cordl_internal_get_m_FloatToInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FloatToInt;
}
constexpr void Unity::Cinemachine::ConfinerOven_FloatToIntScaler::__cordl_internal_set_m_FloatToInt(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FloatToInt = value;
}
constexpr float_t& Unity::Cinemachine::ConfinerOven_FloatToIntScaler::__cordl_internal_get_m_IntToFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IntToFloat;
}
constexpr float_t const& Unity::Cinemachine::ConfinerOven_FloatToIntScaler::__cordl_internal_get_m_IntToFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IntToFloat;
}
constexpr void Unity::Cinemachine::ConfinerOven_FloatToIntScaler::__cordl_internal_set_m_IntToFloat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IntToFloat = value;
}
inline float_t Unity::Cinemachine::ConfinerOven_FloatToIntScaler::FloatToInt(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*>(),
                        {"FloatToInt", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, f);
}
inline float_t Unity::Cinemachine::ConfinerOven_FloatToIntScaler::IntToFloat(int64_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*>(),
                        {"IntToFloat", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, i);
}
inline float_t Unity::Cinemachine::ConfinerOven_FloatToIntScaler::get_ClipperEpsilon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*>(),
                        {"get_ClipperEpsilon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::ConfinerOven_FloatToIntScaler::_ctor(::UnityEngine::Rect  polygonBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, polygonBounds);
}
inline ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler* Unity::Cinemachine::ConfinerOven_FloatToIntScaler::New_ctor(::UnityEngine::Rect  polygonBounds)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::ConfinerOven_FloatToIntScaler*>(polygonBounds));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::ConfinerOven_FloatToIntScaler::ConfinerOven_FloatToIntScaler()   {
}
