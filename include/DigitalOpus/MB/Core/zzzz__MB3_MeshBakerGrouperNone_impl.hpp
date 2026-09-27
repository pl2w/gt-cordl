#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshBakerGrouperNone.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperBehaviour_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshBakerGrouperNone_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__GrouperData_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerGrouper_ClusterType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone.FilterIntoGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::DigitalOpus::MB::Core::GrouperData*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::FilterIntoGroups)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x9def8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::*)(::UnityEngine::Bounds, ::DigitalOpus::MB::Core::GrouperData*)>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::DrawGizmos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9defb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone.GetClusterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::*)()>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::GetClusterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9defb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::*)()>(&::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9defb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>* DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::FilterIntoGroups(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  selection, ::DigitalOpus::MB::Core::GrouperData*  d)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>*>(this, ___internal_method, selection, d);
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::DrawGizmos(::UnityEngine::Bounds  sourceObjectBounds, ::DigitalOpus::MB::Core::GrouperData*  d)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceObjectBounds, d);
}
inline ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::GetClusterType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone* DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshBakerGrouperNone::MB3_MeshBakerGrouperNone()   {
}
