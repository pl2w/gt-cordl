#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshBakerGrouperPie.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperBehaviour_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperPie_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__GrouperData_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerGrouper_ClusterType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie.FilterIntoGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::DigitalOpus::MB::Core::GrouperData*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::FilterIntoGroups)> {
  constexpr static std::size_t size = 0x960;
  constexpr static std::size_t addrs = 0x9df0544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::*)(::UnityEngine::Bounds, ::DigitalOpus::MB::Core::GrouperData*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::DrawGizmos)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x9df0ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie.MaxIndexInVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::MaxIndexInVector3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9df17bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(),
                        {"MaxIndexInVector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie.DrawCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::DrawCircle)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x9df1458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie.GetClusterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::*)()>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::GetClusterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9df17d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::*)()>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9df17e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::FilterIntoGroups(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  selection, ::DigitalOpus::MB::Core::GrouperData*  d)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>*>(this, ___internal_method, selection, d);
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::DrawGizmos(::UnityEngine::Bounds  sourceObjectBounds, ::DigitalOpus::MB::Core::GrouperData*  d)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceObjectBounds, d);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::MaxIndexInVector3(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(),
                        {"MaxIndexInVector3", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, v);
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::DrawCircle(::UnityEngine::Vector3  axis, ::UnityEngine::Vector3  center, float_t  radius, int32_t  subdiv)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, axis, center, radius, subdiv);
}
inline ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::GetClusterType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie* DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperPie::MB3_MeshBakerGrouperPie()   {
}
