#pragma once
// IWYU pragma private; include "Drawing/DrawingUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Drawing/zzzz__DrawingUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Drawing::DrawingUtilities.BoundsFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::GameObject*)>(&::Drawing::DrawingUtilities::BoundsFrom)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x55d45c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingUtilities*>(),
                        {"BoundsFrom", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingUtilities.BoundsFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Transform*)>(&::Drawing::DrawingUtilities::BoundsFrom)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x55d4654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingUtilities*>(),
                        {"BoundsFrom", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingUtilities.BoundsFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Drawing::DrawingUtilities::BoundsFrom)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x55d4ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingUtilities*>(),
                        {"BoundsFrom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingUtilities.BoundsFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::ArrayW<::UnityEngine::Vector3>)>(&::Drawing::DrawingUtilities::BoundsFrom)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55d4d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingUtilities*>(),
                        {"BoundsFrom", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingUtilities.BoundsFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>)>(&::Drawing::DrawingUtilities::BoundsFrom)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x55d4eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingUtilities*>(),
                        {"BoundsFrom", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::DrawingUtilities::setStaticF_componentBuffer(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, "componentBuffer", ::Drawing::DrawingUtilities*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Drawing::DrawingUtilities::getStaticF_componentBuffer()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, "componentBuffer", ::Drawing::DrawingUtilities*>();
}
inline ::UnityEngine::Bounds Drawing::DrawingUtilities::BoundsFrom(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingUtilities*>(),
                        {"BoundsFrom", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, gameObject);
}
inline ::UnityEngine::Bounds Drawing::DrawingUtilities::BoundsFrom(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingUtilities*>(),
                        {"BoundsFrom", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, transform);
}
inline ::UnityEngine::Bounds Drawing::DrawingUtilities::BoundsFrom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingUtilities*>(),
                        {"BoundsFrom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, points);
}
inline ::UnityEngine::Bounds Drawing::DrawingUtilities::BoundsFrom(::ArrayW<::UnityEngine::Vector3>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingUtilities*>(),
                        {"BoundsFrom", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, points);
}
inline ::UnityEngine::Bounds Drawing::DrawingUtilities::BoundsFrom(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingUtilities*>(),
                        {"BoundsFrom", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, points);
}
// Ctor Parameters []
constexpr ::Drawing::DrawingUtilities::DrawingUtilities()   {
}
