#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ATGTextJobSystem.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ATGTextJobSystem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__ATGMeshInfo_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerationCallback_def.hpp"
#include "UnityEngine/UIElements/zzzz__ATGTextJobSystem_GenerateTextJobData_def.hpp"
#include "UnityEngine/UIElements/zzzz__ATGTextJobSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem::*)()>(&::UnityEngine::UIElements::ATGTextJobSystem::_ctor)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xb798624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem.GenerateText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem::*)(Il2CppObject*, ::UnityEngine::UIElements::TextElement*)>(&::UnityEngine::UIElements::ATGTextJobSystem::GenerateText)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb7988d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                        {"GenerateText", {}, {::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::UIElements::TextElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem.GenerateTextJobified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem::*)(Il2CppObject*, ::System::Object*)>(&::UnityEngine::UIElements::ATGTextJobSystem::GenerateTextJobified)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xb798a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                        {"GenerateTextJobified", {}, {::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem.AddDrawEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem::*)(Il2CppObject*, ::System::Object*)>(&::UnityEngine::UIElements::ATGTextJobSystem::AddDrawEntries)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0xb798f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                        {"AddDrawEntries", {}, {::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem.ConvertMeshInfoToUIRVertex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::TextCore::Text::ATGMeshInfo>, ::UnityEngine::UIElements::TempMeshAllocator, ::UnityEngine::UIElements::TextElement*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*, ::System::Collections::Generic::List_1<float_t>*)>(&::UnityEngine::UIElements::ATGTextJobSystem::ConvertMeshInfoToUIRVertex)> {
  constexpr static std::size_t size = 0xa08;
  constexpr static std::size_t addrs = 0xb799410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                        {"ConvertMeshInfoToUIRVertex", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TextCore::Text::ATGMeshInfo>>(), ::i2c::type_of<::UnityEngine::UIElements::TempMeshAllocator>(), ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::GCHandle& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_textJobDatasHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textJobDatasHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_textJobDatasHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textJobDatasHandle;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_textJobDatasHandle(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textJobDatasHandle = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_textJobDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textJobDatas;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_textJobDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textJobDatas;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_textJobDatas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textJobDatas = value;
}
constexpr bool& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_hasPendingTextWork()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPendingTextWork;
}
constexpr bool const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_hasPendingTextWork() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPendingTextWork;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_hasPendingTextWork(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPendingTextWork = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_m_GenerateTextJobifiedCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GenerateTextJobifiedCallback;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_m_GenerateTextJobifiedCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GenerateTextJobifiedCallback;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_m_GenerateTextJobifiedCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GenerateTextJobifiedCallback = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback*& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_m_AddDrawEntriesCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddDrawEntriesCallback;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationCallback* const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_m_AddDrawEntriesCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddDrawEntriesCallback;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_m_AddDrawEntriesCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AddDrawEntriesCallback = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_atlases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlases;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_atlases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlases;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_atlases(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlases = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_sdfScalesArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfScalesArray;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_sdfScalesArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sdfScalesArray;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_sdfScalesArray(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sdfScalesArray = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_verticesArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticesArray;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>* const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_verticesArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticesArray;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_verticesArray(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticesArray = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_indicesArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indicesArray;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>* const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_indicesArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indicesArray;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_indicesArray(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indicesArray = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_renderModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderModes;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>* const& UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_get_renderModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderModes;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem::__cordl_internal_set_renderModes(::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderModes = value;
}
inline void UnityEngine::UIElements::ATGTextJobSystem::setStaticF_s_JobDataPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*, "s_JobDataPool", ::UnityEngine::UIElements::ATGTextJobSystem*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>* UnityEngine::UIElements::ATGTextJobSystem::getStaticF_s_JobDataPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>*, "s_JobDataPool", ::UnityEngine::UIElements::ATGTextJobSystem*>();
}
inline void UnityEngine::UIElements::ATGTextJobSystem::setStaticF_k_GenerateTextMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_GenerateTextMarker", ::UnityEngine::UIElements::ATGTextJobSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::ATGTextJobSystem::getStaticF_k_GenerateTextMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_GenerateTextMarker", ::UnityEngine::UIElements::ATGTextJobSystem*>();
}
inline void UnityEngine::UIElements::ATGTextJobSystem::setStaticF_k_ATGTextJobMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ATGTextJobMarker", ::UnityEngine::UIElements::ATGTextJobSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::ATGTextJobSystem::getStaticF_k_ATGTextJobMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ATGTextJobMarker", ::UnityEngine::UIElements::ATGTextJobSystem*>();
}
inline void UnityEngine::UIElements::ATGTextJobSystem::setStaticF_k_IsMultiThreaded(bool  value)  {
::cordl_internals::setStaticField<bool, "k_IsMultiThreaded", ::UnityEngine::UIElements::ATGTextJobSystem*>(std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::ATGTextJobSystem::getStaticF_k_IsMultiThreaded()  {
return ::cordl_internals::getStaticField<bool, "k_IsMultiThreaded", ::UnityEngine::UIElements::ATGTextJobSystem*>();
}
inline void UnityEngine::UIElements::ATGTextJobSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ATGTextJobSystem::GenerateText(Il2CppObject*  mgc, ::UnityEngine::UIElements::TextElement*  textElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                        {"GenerateText", {}, {::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::UnityEngine::UIElements::TextElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc, textElement);
}
inline void UnityEngine::UIElements::ATGTextJobSystem::GenerateTextJobified(Il2CppObject*  mgc, ::System::Object*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                        {"GenerateTextJobified", {}, {::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc, _);
}
inline void UnityEngine::UIElements::ATGTextJobSystem::AddDrawEntries(Il2CppObject*  mgc, ::System::Object*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                        {"AddDrawEntries", {}, {::i2c::type_of<Il2CppObject*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc, _);
}
inline void UnityEngine::UIElements::ATGTextJobSystem::ConvertMeshInfoToUIRVertex(::ArrayW<::UnityEngine::TextCore::Text::ATGMeshInfo>  meshInfos, ::UnityEngine::UIElements::TempMeshAllocator  alloc, ::UnityEngine::UIElements::TextElement*  visualElement, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  atlases, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*  verticesArray, ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*  indicesArray, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*  renderModes, ::System::Collections::Generic::List_1<float_t>*  sdfScales)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem*>(),
                        {"ConvertMeshInfoToUIRVertex", {}, {::i2c::type_of<::ArrayW<::UnityEngine::TextCore::Text::ATGMeshInfo>>(), ::i2c::type_of<::UnityEngine::UIElements::TempMeshAllocator>(), ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<uint16_t>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TextCore::LowLevel::GlyphRenderMode>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshInfos, alloc, visualElement, atlases, verticesArray, indicesArray, renderModes, sdfScales);
}
inline ::UnityEngine::UIElements::ATGTextJobSystem* UnityEngine::UIElements::ATGTextJobSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ATGTextJobSystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ATGTextJobSystem::ATGTextJobSystem()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem___c::*)()>(&::UnityEngine::UIElements::ATGTextJobSystem___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb79a31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem___c.__cctor_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData* (::UnityEngine::UIElements::ATGTextJobSystem___c::*)()>(&::UnityEngine::UIElements::ATGTextJobSystem___c::__cctor_b__21_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb79a324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(),
                        {"<.cctor>b__21_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem___c.__cctor_b__21_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem___c::*)(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*)>(&::UnityEngine::UIElements::ATGTextJobSystem___c::__cctor_b__21_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb79a378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(),
                        {"<.cctor>b__21_1", {}, {::i2c::type_of<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ATGTextJobSystem___c::setStaticF___9(::UnityEngine::UIElements::ATGTextJobSystem___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::ATGTextJobSystem___c*, "<>9", ::UnityEngine::UIElements::ATGTextJobSystem___c*>(std::forward<::UnityEngine::UIElements::ATGTextJobSystem___c*>(value));
}
inline ::UnityEngine::UIElements::ATGTextJobSystem___c* UnityEngine::UIElements::ATGTextJobSystem___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ATGTextJobSystem___c*, "<>9", ::UnityEngine::UIElements::ATGTextJobSystem___c*>();
}
inline void UnityEngine::UIElements::ATGTextJobSystem___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData* UnityEngine::UIElements::ATGTextJobSystem___c::__cctor_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(),
                        {"<.cctor>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ATGTextJobSystem___c::__cctor_b__21_1(::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*  inst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem___c*>(),
                        {"<.cctor>b__21_1", {}, {::i2c::type_of<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inst);
}
inline ::UnityEngine::UIElements::ATGTextJobSystem___c* UnityEngine::UIElements::ATGTextJobSystem___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ATGTextJobSystem___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ATGTextJobSystem___c::ATGTextJobSystem___c()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::*)()>(&::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb79a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::*)()>(&::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb79a2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_textElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textElement;
}
constexpr ::UnityEngine::UIElements::TextElement* const& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_textElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textElement;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_textElement(::UnityEngine::UIElements::TextElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textElement = value;
}
constexpr ::UnityEngine::UIElements::MeshGenerationNode& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr ::UnityEngine::UIElements::MeshGenerationNode const& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_node(::UnityEngine::UIElements::MeshGenerationNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___node = value;
}
constexpr ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_textInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textInfo;
}
constexpr ::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo"> const& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_textInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textInfo;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_textInfo(::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textInfo = value;
}
constexpr bool& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_success()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr bool const& UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_get_success() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::__cordl_internal_set_success(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___success = value;
}
inline void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData* UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ATGTextJobSystem_ManagedJobData::ATGTextJobSystem_ManagedJobData()   {
}
