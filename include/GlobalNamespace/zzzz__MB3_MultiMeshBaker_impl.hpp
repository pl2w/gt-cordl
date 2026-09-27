#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_MultiMeshBaker.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerCommon_impl.hpp"
#include "GlobalNamespace/zzzz__MB3_MultiMeshBaker_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MultiMeshCombiner_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_MultiMeshBaker.PrintTimings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MultiMeshBaker::*)()>(&::GlobalNamespace::MB3_MultiMeshBaker::PrintTimings)> {
  constexpr static std::size_t size = 0x754;
  constexpr static std::size_t addrs = 0x9d79b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(),
                        {"PrintTimings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MultiMeshBaker.get_meshCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_MeshCombiner* (::GlobalNamespace::MB3_MultiMeshBaker::*)()>(&::GlobalNamespace::MB3_MultiMeshBaker::get_meshCombiner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7a2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MultiMeshBaker.AddDeleteGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MultiMeshBaker::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>, bool)>(&::GlobalNamespace::MB3_MultiMeshBaker::AddDeleteGameObjects)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9d7a2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MultiMeshBaker.AddDeleteGameObjectsByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MultiMeshBaker::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int32_t>, bool)>(&::GlobalNamespace::MB3_MultiMeshBaker::AddDeleteGameObjectsByID)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9d7a474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MultiMeshBaker.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MultiMeshBaker::*)()>(&::GlobalNamespace::MB3_MultiMeshBaker::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d7a61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MultiMeshBaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MultiMeshBaker::*)()>(&::GlobalNamespace::MB3_MultiMeshBaker::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d7a63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*& GlobalNamespace::MB3_MultiMeshBaker::__cordl_internal_get__meshCombiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshCombiner;
}
constexpr ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner* const& GlobalNamespace::MB3_MultiMeshBaker::__cordl_internal_get__meshCombiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshCombiner;
}
constexpr void GlobalNamespace::MB3_MultiMeshBaker::__cordl_internal_set__meshCombiner(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshCombiner = value;
}
inline void GlobalNamespace::MB3_MultiMeshBaker::PrintTimings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(),
                        {"PrintTimings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombiner* GlobalNamespace::MB3_MultiMeshBaker::get_meshCombiner()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(this, ___internal_method);
}
inline bool GlobalNamespace::MB3_MultiMeshBaker::AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs, bool  disableRendererInSource)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOs, disableRendererInSource);
}
inline bool GlobalNamespace::MB3_MultiMeshBaker::AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOs, bool  disableRendererInSource)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOs, disableRendererInSource);
}
inline void GlobalNamespace::MB3_MultiMeshBaker::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MultiMeshBaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MultiMeshBaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB3_MultiMeshBaker* GlobalNamespace::MB3_MultiMeshBaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_MultiMeshBaker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_MultiMeshBaker::MB3_MultiMeshBaker()   {
}
