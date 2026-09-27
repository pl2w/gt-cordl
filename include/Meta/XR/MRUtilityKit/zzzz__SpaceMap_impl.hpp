#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SpaceMap.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__SpaceMap_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__SpaceMap_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap.get_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Meta::XR::MRUtilityKit::SpaceMap::*)()>(&::Meta::XR::MRUtilityKit::SpaceMap::get_Offset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f47858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"get_Offset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Meta::XR::MRUtilityKit::SpaceMap::*)()>(&::Meta::XR::MRUtilityKit::SpaceMap::get_Scale)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f47864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMap::*)()>(&::Meta::XR::MRUtilityKit::SpaceMap::Start)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9f47890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap.CalculateMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMap::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SpaceMap::CalculateMap)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9f47a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"CalculateMap", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap.InitializeMapValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMap::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SpaceMap::InitializeMapValues)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x9f47b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"InitializeMapValues", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap.GetSurfaceDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SpaceMap::*)(::Meta::XR::MRUtilityKit::MRUKRoom*, ::UnityEngine::Vector3)>(&::Meta::XR::MRUtilityKit::SpaceMap::GetSurfaceDistance)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x9f47fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"GetSurfaceDistance", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap.CalculatePixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::XR::MRUtilityKit::SpaceMap::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::SpaceMap::CalculatePixels)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f47f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"CalculatePixels", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap.ResetFreespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMap::*)()>(&::Meta::XR::MRUtilityKit::SpaceMap::ResetFreespace)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9f4832c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"ResetFreespace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap.GetColorAtPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Meta::XR::MRUtilityKit::SpaceMap::*)(::UnityEngine::Vector3, bool)>(&::Meta::XR::MRUtilityKit::SpaceMap::GetColorAtPosition)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9f483c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"GetColorAtPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap.GetPixelFromWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Meta::XR::MRUtilityKit::SpaceMap::*)(::UnityEngine::Vector3, bool)>(&::Meta::XR::MRUtilityKit::SpaceMap::GetPixelFromWorldPosition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9f48568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"GetPixelFromWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMap::*)()>(&::Meta::XR::MRUtilityKit::SpaceMap::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9f485b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap._Start_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMap::*)()>(&::Meta::XR::MRUtilityKit::SpaceMap::_Start_b__15_0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f48638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"<Start>b__15_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MRUK_RoomFilter& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_CreateOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateOnStart;
}
constexpr ::GlobalNamespace::MRUK_RoomFilter const& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_CreateOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateOnStart;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_set_CreateOnStart(::GlobalNamespace::MRUK_RoomFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateOnStart = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_TextureMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TextureMap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_TextureMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TextureMap;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_set_TextureMap(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TextureMap = value;
}
constexpr ::UnityEngine::Bounds& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_MapBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MapBounds;
}
constexpr ::UnityEngine::Bounds const& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_MapBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MapBounds;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_set_MapBounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MapBounds = value;
}
constexpr ::System::Object*& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_Pixels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pixels;
}
constexpr ::System::Object* const& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_Pixels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pixels;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_set_Pixels(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pixels = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_PixelDimensions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PixelDimensions;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_PixelDimensions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PixelDimensions;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_set_PixelDimensions(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PixelDimensions = value;
}
constexpr ::UnityEngine::Gradient*& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_MapGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MapGradient;
}
constexpr ::UnityEngine::Gradient* const& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_MapGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MapGradient;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_set_MapGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MapGradient = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_InnerBorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InnerBorder;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_InnerBorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InnerBorder;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_set_InnerBorder(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InnerBorder = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_OuterBorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OuterBorder;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_OuterBorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OuterBorder;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_set_OuterBorder(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OuterBorder = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_MapBorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MapBorder;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_get_MapBorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MapBorder;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMap::__cordl_internal_set_MapBorder(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MapBorder = value;
}
inline ::UnityEngine::Vector2 Meta::XR::MRUtilityKit::SpaceMap::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"get_Offset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Meta::XR::MRUtilityKit::SpaceMap::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMap::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMap::CalculateMap(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"CalculateMap", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SpaceMap::InitializeMapValues(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"InitializeMapValues", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline float_t Meta::XR::MRUtilityKit::SpaceMap::GetSurfaceDistance(::Meta::XR::MRUtilityKit::MRUKRoom*  room, ::UnityEngine::Vector3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"GetSurfaceDistance", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, room, worldPosition);
}
inline ::System::Collections::IEnumerator* Meta::XR::MRUtilityKit::SpaceMap::CalculatePixels(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"CalculatePixels", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::SpaceMap::ResetFreespace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"ResetFreespace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color Meta::XR::MRUtilityKit::SpaceMap::GetColorAtPosition(::UnityEngine::Vector3  worldPosition, bool  getBilinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"GetColorAtPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, worldPosition, getBilinear);
}
inline ::UnityEngine::Vector2 Meta::XR::MRUtilityKit::SpaceMap::GetPixelFromWorldPosition(::UnityEngine::Vector3  worldPosition, bool  normalizedUV)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"GetPixelFromWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, worldPosition, normalizedUV);
}
inline void Meta::XR::MRUtilityKit::SpaceMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMap::_Start_b__15_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap*>(),
                        {"<Start>b__15_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SpaceMap* Meta::XR::MRUtilityKit::SpaceMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SpaceMap*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SpaceMap::SpaceMap()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::*)(int32_t)>(&::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f48304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::*)()>(&::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f48704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::*)()>(&::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9f48708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::*)()>(&::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f488ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::*)()>(&::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9f488f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::*)()>(&::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f4892c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMap>& Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SpaceMap> const& Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::__cordl_internal_set___4__this(::UnityW<::Meta::XR::MRUtilityKit::SpaceMap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>& Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::__cordl_internal_get_room()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___room;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> const& Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::__cordl_internal_get_room() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___room;
}
constexpr void Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::__cordl_internal_set_room(::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___room = value;
}
inline void Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19* Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SpaceMap__CalculatePixels_d__19::SpaceMap__CalculatePixels_d__19()   {
}
