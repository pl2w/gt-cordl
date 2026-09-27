#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_MeshBaker.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerCommon_impl.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBaker_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBaker.PrintTimings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBaker::*)()>(&::GlobalNamespace::MB3_MeshBaker::PrintTimings)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x9d75900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(),
                        {"PrintTimings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBaker.get_meshCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_MeshCombiner* (::GlobalNamespace::MB3_MeshBaker::*)()>(&::GlobalNamespace::MB3_MeshBaker::get_meshCombiner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d761e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBaker.BuildSceneMeshObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBaker::*)()>(&::GlobalNamespace::MB3_MeshBaker::BuildSceneMeshObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d761e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(),
                        {"BuildSceneMeshObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBaker.ShowHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBaker::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>)>(&::GlobalNamespace::MB3_MeshBaker::ShowHide)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d76208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBaker.ApplyShowHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBaker::*)()>(&::GlobalNamespace::MB3_MeshBaker::ApplyShowHide)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d76220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBaker.AddDeleteGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBaker::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>, bool)>(&::GlobalNamespace::MB3_MeshBaker::AddDeleteGameObjects)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9d76240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBaker.AddDeleteGameObjectsByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBaker::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int32_t>, bool)>(&::GlobalNamespace::MB3_MeshBaker::AddDeleteGameObjectsByID)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9d76350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBaker.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBaker::*)()>(&::GlobalNamespace::MB3_MeshBaker::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9d76408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBaker::*)()>(&::GlobalNamespace::MB3_MeshBaker::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d7646c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*& GlobalNamespace::MB3_MeshBaker::__cordl_internal_get__meshCombiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshCombiner;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* const& GlobalNamespace::MB3_MeshBaker::__cordl_internal_get__meshCombiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshCombiner;
}
constexpr void GlobalNamespace::MB3_MeshBaker::__cordl_internal_set__meshCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshCombiner = value;
}
inline void GlobalNamespace::MB3_MeshBaker::PrintTimings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(),
                        {"PrintTimings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombiner* GlobalNamespace::MB3_MeshBaker::get_meshCombiner()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBaker::BuildSceneMeshObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(),
                        {"BuildSceneMeshObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MB3_MeshBaker::ShowHide(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOs);
}
inline void GlobalNamespace::MB3_MeshBaker::ApplyShowHide()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MB3_MeshBaker::AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs, bool  disableRendererInSource)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOs, disableRendererInSource);
}
inline bool GlobalNamespace::MB3_MeshBaker::AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs, bool  disableRendererInSource)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOinstanceIDs, disableRendererInSource);
}
inline void GlobalNamespace::MB3_MeshBaker::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB3_MeshBaker* GlobalNamespace::MB3_MeshBaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_MeshBaker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_MeshBaker::MB3_MeshBaker()   {
}
