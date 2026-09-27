#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshBakerGrouperBehaviour.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperBehaviour_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__GrouperData_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerCommon_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerGrouper_ClusterType_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerGrouper_def.hpp"
#include "GlobalNamespace/zzzz__MB3_TextureBaker_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour.FilterIntoGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::DigitalOpus::MB::Core::GrouperData*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::FilterIntoGroups)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::*)(::UnityEngine::Bounds, ::DigitalOpus::MB::Core::GrouperData*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::DrawGizmos)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour.DoClustering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MB3_MeshBakerCommon>>* (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::*)(::GlobalNamespace::MB3_TextureBaker*, ::GlobalNamespace::MB3_MeshBakerGrouper*, ::DigitalOpus::MB::Core::GrouperData*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::DoClustering)> {
  constexpr static std::size_t size = 0xf44;
  constexpr static std::size_t addrs = 0x9dee328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(),
                        {"DoClustering", {}, {::i2c::type_of<::GlobalNamespace::MB3_TextureBaker*>(), ::i2c::type_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(), ::i2c::type_of<::DigitalOpus::MB::Core::GrouperData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour.GroupByLightmapIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::GroupByLightmapIndex)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x9def26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(),
                        {"GroupByLightmapIndex", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour.AddMeshBaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MB3_MeshBakerCommon> (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::*)(::GlobalNamespace::MB3_MeshBakerGrouper*, ::GlobalNamespace::MB3_TextureBaker*, ::StringW, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::AddMeshBaker)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x9def4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(),
                        {"AddMeshBaker", {}, {::i2c::type_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(), ::i2c::type_of<::GlobalNamespace::MB3_TextureBaker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour.GetClusterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::*)()>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::GetClusterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9def840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::*)()>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9def848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::FilterIntoGroups(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  selection, ::DigitalOpus::MB::Core::GrouperData*  d)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>*>(this, ___internal_method, selection, d);
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::DrawGizmos(::UnityEngine::Bounds  sourceObjectBounds, ::DigitalOpus::MB::Core::GrouperData*  d)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceObjectBounds, d);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MB3_MeshBakerCommon>>* DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::DoClustering(::GlobalNamespace::MB3_TextureBaker*  tb, ::GlobalNamespace::MB3_MeshBakerGrouper*  grouper, ::DigitalOpus::MB::Core::GrouperData*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(),
                        {"DoClustering", {}, {::i2c::type_of<::GlobalNamespace::MB3_TextureBaker*>(), ::i2c::type_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(), ::i2c::type_of<::DigitalOpus::MB::Core::GrouperData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MB3_MeshBakerCommon>>*>(this, ___internal_method, tb, grouper, d);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::GroupByLightmapIndex(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  gaws)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(),
                        {"GroupByLightmapIndex", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>*>(this, ___internal_method, gaws);
}
inline ::UnityW<::GlobalNamespace::MB3_MeshBakerCommon> DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::AddMeshBaker(::GlobalNamespace::MB3_MeshBakerGrouper*  grouper, ::GlobalNamespace::MB3_TextureBaker*  tb, ::StringW  key, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  gaws)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(),
                        {"AddMeshBaker", {}, {::i2c::type_of<::GlobalNamespace::MB3_MeshBakerGrouper*>(), ::i2c::type_of<::GlobalNamespace::MB3_TextureBaker*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MB3_MeshBakerCommon>>(this, ___internal_method, grouper, tb, key, gaws);
}
inline ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::GetClusterType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour* DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour::MB3_MeshBakerGrouperBehaviour()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::*)()>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9def4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0._DoClustering_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::*)(::UnityEngine::Renderer*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::_DoClustering_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9def850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0*>(),
                        {"<DoClustering>b__0", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::__cordl_internal_get_r()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::__cordl_internal_get_r() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::__cordl_internal_set_r(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___r = value;
}
constexpr ::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>*& DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>* const& DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::__cordl_internal_set___9__0(::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::_DoClustering_b__0(::UnityEngine::Renderer*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0*>(),
                        {"<DoClustering>b__0", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0* DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0::MB3_MeshBakerGrouperBehaviour___c__DisplayClass2_0()   {
}
