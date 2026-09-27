#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshBakerGrouperGrid.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperBehaviour_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperGrid_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__GrouperData_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerGrouper_ClusterType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid.FilterIntoGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::DigitalOpus::MB::Core::GrouperData*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::FilterIntoGroups)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x9defb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::*)(::UnityEngine::Bounds, ::DigitalOpus::MB::Core::GrouperData*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::DrawGizmos)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x9df0070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid.GetClusterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::*)()>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::GetClusterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9df0534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::*)()>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9df053c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::FilterIntoGroups(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  selection, ::DigitalOpus::MB::Core::GrouperData*  d)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>*>(this, ___internal_method, selection, d);
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::DrawGizmos(::UnityEngine::Bounds  sourceObjectBounds, ::DigitalOpus::MB::Core::GrouperData*  d)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceObjectBounds, d);
}
inline ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::GetClusterType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid* DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperGrid::MB3_MeshBakerGrouperGrid()   {
}
