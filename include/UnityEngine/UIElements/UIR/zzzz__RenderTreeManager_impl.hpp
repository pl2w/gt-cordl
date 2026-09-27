#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTreeManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BaseElementBuilder_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNodePool_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryPool_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryProcessor_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryRecorder_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ExtraRenderData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__JobManager_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerationDeferrer_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshWriteDataPool_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__OpacityIdAccelerator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypeClasses_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeCompositor_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeManager_ElementInsertionData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeManager_VisualChangesProcessor_VisualsProcessingType_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeManager_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTree_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TempMeshAllocatorImpl_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureEntry_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRVEShaderInfoAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationNodeManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureRegistry_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIRenderer_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_textureRegistry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextureRegistry* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_textureRegistry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7e9bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_textureRegistry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_visualChangesProcessor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_visualChangesProcessor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7e9bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_visualChangesProcessor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_opacityIdAccelerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::OpacityIdAccelerator* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_opacityIdAccelerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7e9bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_opacityIdAccelerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.set_opacityIdAccelerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::OpacityIdAccelerator*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::set_opacityIdAccelerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7e9bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_opacityIdAccelerator", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::OpacityIdAccelerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.GetPooledRenderData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderData* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::GetPooledRenderData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb7e9bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"GetPooledRenderData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.ReturnPoolRenderData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderData*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::ReturnPoolRenderData)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb7e9c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"ReturnPoolRenderData", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.GetPooledRenderTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderTree* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::GetPooledRenderTree)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb7e9cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"GetPooledRenderTree", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.ReturnPoolRenderTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderTree*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::ReturnPoolRenderTree)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb7e9d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"ReturnPoolRenderTree", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::_ctor)> {
  constexpr static std::size_t size = 0xb90;
  constexpr static std::size_t addrs = 0xb7e9d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_disposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7eb9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_disposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.set_disposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(bool)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7eb9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_disposed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb7eb9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(bool)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::Dispose)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0xb7eba48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.ReverseDepthFirstDisposeRenderTrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTree*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::ReverseDepthFirstDisposeRenderTrees)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb7ebee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"ReverseDepthFirstDisposeRenderTrees", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_statsByRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_statsByRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7ec184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_statsByRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.set_rootRenderTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderTree*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::set_rootRenderTree)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb7ec18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_rootRenderTree", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.DepthFirstProcessChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderTree*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::DepthFirstProcessChanges)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb7ec208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"DepthFirstProcessChanges", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.ProcessChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::ProcessChanges)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xb7ec254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"ProcessChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.SerializeRootTreeCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::SerializeRootTreeCommands)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0xb7ed4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"SerializeRootTreeCommands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.RenderRootTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::RenderRootTree)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb7ee694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"RenderRootTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.RenderNestedTrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::RenderNestedTrees)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb7ed4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"RenderNestedTrees", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.RenderSingleTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderTree*, ::UnityEngine::RenderTexture*, ::UnityEngine::RectInt)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::RenderSingleTree)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0xb7e9120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"RenderSingleTree", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RectInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.CancelInsertion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::CancelInsertion)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb7ef290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"CancelInsertion", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.UIEOnChildAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnChildAdded)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb7ef394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnChildAdded", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.ProcessChildAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::ProcessChildAdded)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xb7ec484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"ProcessChildAdded", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.UIEOnChildrenReordered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnChildrenReordered)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xb7ef510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnChildrenReordered", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.UIEOnChildRemoving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnChildRemoving)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb7ef6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnChildRemoving", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.UIEOnRenderHintsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnRenderHintsChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb7ef7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnRenderHintsChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.RegisterDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::RegisterDirty)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb7ef890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"RegisterDirty", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.UIEOnClippingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::VisualElement*, bool)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnClippingChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb7ef478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnClippingChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.UIEOnOpacityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::VisualElement*, bool)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnOpacityChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb7ef4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnOpacityChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.UIEOnColorChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnColorChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb7ef948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnColorChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.UIEOnTransformOrSizeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::VisualElement*, bool, bool)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnTransformOrSizeChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb7ef4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnTransformOrSizeChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.UIEOnVisualsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::VisualElement*, bool)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnVisualsChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb7ef4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnVisualsChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.UIEOnDisableRenderingChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnDisableRenderingChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb7ef958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnDisableRenderingChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_panel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BaseVisualElementPanel* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_panel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.set_panel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::set_panel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb7efa08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_panel", {}, {::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_device
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::UIRenderDevice* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efa18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_device", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.set_device
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::UIRenderDevice*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::set_device)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb7efa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_device", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_elementBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::BaseElementBuilder* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_elementBuilder)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb7efa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_elementBuilder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_atlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::AtlasBase* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efa48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_atlas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.set_atlas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::AtlasBase*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::set_atlas)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb7efa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_atlas", {}, {::i2c::type_of<::UnityEngine::UIElements::AtlasBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_vectorImageManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::VectorImageManager* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_vectorImageManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_vectorImageManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.set_vectorImageManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::VectorImageManager*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::set_vectorImageManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb7efa68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_vectorImageManager", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::VectorImageManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_tempMeshAllocator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_tempMeshAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_tempMeshAllocator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.set_tempMeshAllocator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::set_tempMeshAllocator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb7efa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_tempMeshAllocator", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_meshWriteDataPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::MeshWriteDataPool* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_meshWriteDataPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_meshWriteDataPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_entryPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::EntryPool* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_entryPool)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb7efa98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_entryPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_meshGenerationDeferrer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_meshGenerationDeferrer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_meshGenerationDeferrer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_meshGenerationNodeManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshGenerationNodeManager* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_meshGenerationNodeManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_meshGenerationNodeManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.set_meshGenerationNodeManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::MeshGenerationNodeManager*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::set_meshGenerationNodeManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb7efb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_meshGenerationNodeManager", {}, {::i2c::type_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_jobManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::JobManager* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_jobManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_jobManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.set_jobManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::JobManager*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::set_jobManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb7efb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_jobManager", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::JobManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_drawStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_drawStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_drawStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.set_drawStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(bool)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::set_drawStats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_drawStats", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_drawInCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_drawInCameras)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_drawInCameras", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_isFlat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_isFlat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_isFlat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.get_forceGammaRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::get_forceGammaRendering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7efb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_forceGammaRendering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.AllocCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::AllocCommand)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb7efb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"AllocCommand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.FreeCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderChainCommand*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::FreeCommand)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb7efba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"FreeCommand", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.RepaintTexturedElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::RepaintTexturedElements)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb7efc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"RepaintTexturedElements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.DepthFirstRepaintTextured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderTree*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::DepthFirstRepaintTextured)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb7efc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"DepthFirstRepaintTextured", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.DepthFirstRepaintTextured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderData*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::DepthFirstRepaintTextured)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb7efc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"DepthFirstRepaintTextured", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.GetOrAddExtraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::ExtraRenderData* (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderData*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::GetOrAddExtraData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb7efccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"GetOrAddExtraData", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.FreeExtraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderData*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::FreeExtraData)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb7efda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"FreeExtraData", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.InsertExtraMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::MeshHandle*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::InsertExtraMesh)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb7efe94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"InsertExtraMesh", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.FreeExtraMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderData*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::FreeExtraMeshes)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb7eff58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"FreeExtraMeshes", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.InsertTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::Texture*, ::UnityEngine::UIElements::TextureId, bool)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::InsertTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb7f086c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"InsertTexture", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.ResetTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)(::UnityEngine::UIElements::UIR::RenderData*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager::ResetTextures)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb7e6b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"ResetTextures", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager.DrawStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager::DrawStats)> {
  constexpr static std::size_t size = 0xb14;
  constexpr static std::size_t addrs = 0xb7ee77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"DrawStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_Compositor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Compositor;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_Compositor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Compositor;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_Compositor(::UnityEngine::UIElements::UIR::RenderTreeCompositor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Compositor = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_VisualChangesProcessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisualChangesProcessor;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_VisualChangesProcessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisualChangesProcessor;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_VisualChangesProcessor(::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VisualChangesProcessor = value;
}
constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_CommandPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CommandPool;
}
constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_CommandPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CommandPool;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_CommandPool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CommandPool = value;
}
constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_ExtraDataPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtraDataPool;
}
constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_ExtraDataPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtraDataPool;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_ExtraDataPool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExtraDataPool = value;
}
constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_MeshHandleNodePool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MeshHandleNodePool;
}
constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_MeshHandleNodePool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MeshHandleNodePool;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_MeshHandleNodePool(::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MeshHandleNodePool = value;
}
constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_TexturePool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TexturePool;
}
constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_TexturePool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TexturePool;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_TexturePool(::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TexturePool = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::UIR::RenderData*,::UnityEngine::UIElements::UIR::ExtraRenderData*>*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_ExtraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtraData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::UIR::RenderData*,::UnityEngine::UIElements::UIR::ExtraRenderData*>* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_ExtraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtraData;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_ExtraData(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::UIR::RenderData*,::UnityEngine::UIElements::UIR::ExtraRenderData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExtraData = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RenderTreeManager_ElementInsertionData>*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_InsertionList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InsertionList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RenderTreeManager_ElementInsertionData>* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_InsertionList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InsertionList;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_InsertionList(::System::Collections::Generic::List_1<::GlobalNamespace::RenderTreeManager_ElementInsertionData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InsertionList = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::UIRenderer>>*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_RenderersToReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderersToReset;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::UIRenderer>>* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_RenderersToReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderersToReset;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_RenderersToReset(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::UIRenderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderersToReset = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_MeshGenerationDeferrer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MeshGenerationDeferrer;
}
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_MeshGenerationDeferrer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MeshGenerationDeferrer;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_MeshGenerationDeferrer(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MeshGenerationDeferrer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_DefaultMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_DefaultMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultMat;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_DefaultMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultMat = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_BlockDirtyRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockDirtyRegistration;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_BlockDirtyRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockDirtyRegistration;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_BlockDirtyRegistration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlockDirtyRegistration = value;
}
constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_Stats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Stats;
}
constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_Stats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Stats;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_Stats(::UnityEngine::UIElements::UIR::ChainBuilderStats  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Stats = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_StatsElementsAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StatsElementsAdded;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_StatsElementsAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StatsElementsAdded;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_StatsElementsAdded(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StatsElementsAdded = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_StatsElementsRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StatsElementsRemoved;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_StatsElementsRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StatsElementsRemoved;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_StatsElementsRemoved(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StatsElementsRemoved = value;
}
constexpr ::UnityEngine::UIElements::TextureRegistry*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_TextureRegistry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TextureRegistry;
}
constexpr ::UnityEngine::UIElements::TextureRegistry* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_TextureRegistry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TextureRegistry;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_TextureRegistry(::UnityEngine::UIElements::TextureRegistry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TextureRegistry = value;
}
constexpr ::UnityEngine::UIElements::UIR::OpacityIdAccelerator*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__opacityIdAccelerator_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opacityIdAccelerator_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__opacityIdAccelerator_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opacityIdAccelerator_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__opacityIdAccelerator_k__BackingField(::UnityEngine::UIElements::UIR::OpacityIdAccelerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____opacityIdAccelerator_k__BackingField = value;
}
constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderData*>*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_RenderDataPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderDataPool;
}
constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderData*>* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_RenderDataPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderDataPool;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_RenderDataPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderDataPool = value;
}
constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTree*>*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_RenderTreePool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderTreePool;
}
constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTree*>* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_RenderTreePool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderTreePool;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_RenderTreePool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTree*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderTreePool = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__blockDirtyRegistration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockDirtyRegistration_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__blockDirtyRegistration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockDirtyRegistration_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__blockDirtyRegistration_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blockDirtyRegistration_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__disposed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__disposed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__disposed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_RootRenderTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RootRenderTree;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_m_RootRenderTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RootRenderTree;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_m_RootRenderTree(::UnityEngine::UIElements::UIR::RenderTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RootRenderTree = value;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__panel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panel_k__BackingField;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__panel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panel_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__panel_k__BackingField(::UnityEngine::UIElements::BaseVisualElementPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____panel_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::UIRenderDevice*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__device_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::UIRenderDevice* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__device_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__device_k__BackingField(::UnityEngine::UIElements::UIR::UIRenderDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____device_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::AtlasBase*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__atlas_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlas_k__BackingField;
}
constexpr ::UnityEngine::UIElements::AtlasBase* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__atlas_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____atlas_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__atlas_k__BackingField(::UnityEngine::UIElements::AtlasBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____atlas_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::VectorImageManager*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__vectorImageManager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vectorImageManager_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::VectorImageManager* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__vectorImageManager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vectorImageManager_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__vectorImageManager_k__BackingField(::UnityEngine::UIElements::UIR::VectorImageManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vectorImageManager_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__tempMeshAllocator_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempMeshAllocator_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__tempMeshAllocator_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempMeshAllocator_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__tempMeshAllocator_k__BackingField(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempMeshAllocator_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshWriteDataPool*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__meshWriteDataPool_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshWriteDataPool_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::MeshWriteDataPool* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__meshWriteDataPool_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshWriteDataPool_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__meshWriteDataPool_k__BackingField(::UnityEngine::UIElements::UIR::MeshWriteDataPool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshWriteDataPool_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::EntryRecorder*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_entryRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryRecorder;
}
constexpr ::UnityEngine::UIElements::UIR::EntryRecorder* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_entryRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryRecorder;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_entryRecorder(::UnityEngine::UIElements::UIR::EntryRecorder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryRecorder = value;
}
constexpr ::UnityEngine::UIElements::MeshGenerationNodeManager*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__meshGenerationNodeManager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshGenerationNodeManager_k__BackingField;
}
constexpr ::UnityEngine::UIElements::MeshGenerationNodeManager* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__meshGenerationNodeManager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshGenerationNodeManager_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__meshGenerationNodeManager_k__BackingField(::UnityEngine::UIElements::MeshGenerationNodeManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshGenerationNodeManager_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::JobManager*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__jobManager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobManager_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UIR::JobManager* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__jobManager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobManager_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__jobManager_k__BackingField(::UnityEngine::UIElements::UIR::JobManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jobManager_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_shaderInfoAllocator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderInfoAllocator;
}
constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get_shaderInfoAllocator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaderInfoAllocator;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set_shaderInfoAllocator(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shaderInfoAllocator = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__drawStats_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drawStats_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__drawStats_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drawStats_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__drawStats_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____drawStats_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__drawInCameras_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drawInCameras_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__drawInCameras_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drawInCameras_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__drawInCameras_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____drawInCameras_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__isFlat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFlat_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__isFlat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFlat_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__isFlat_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFlat_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__forceGammaRendering_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceGammaRendering_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_get__forceGammaRendering_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceGammaRendering_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager::__cordl_internal_set__forceGammaRendering_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forceGammaRendering_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::setStaticF_s_SharedEntryPool(::UnityEngine::UIElements::UIR::EntryPool*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::EntryPool*, "s_SharedEntryPool", ::UnityEngine::UIElements::UIR::RenderTreeManager*>(std::forward<::UnityEngine::UIElements::UIR::EntryPool*>(value));
}
inline ::UnityEngine::UIElements::UIR::EntryPool* UnityEngine::UIElements::UIR::RenderTreeManager::getStaticF_s_SharedEntryPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::EntryPool*, "s_SharedEntryPool", ::UnityEngine::UIElements::UIR::RenderTreeManager*>();
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::setStaticF_k_MarkerProcess(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerProcess", ::UnityEngine::UIElements::UIR::RenderTreeManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderTreeManager::getStaticF_k_MarkerProcess()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerProcess", ::UnityEngine::UIElements::UIR::RenderTreeManager*>();
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::setStaticF_k_MarkerSerialize(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerSerialize", ::UnityEngine::UIElements::UIR::RenderTreeManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderTreeManager::getStaticF_k_MarkerSerialize()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_MarkerSerialize", ::UnityEngine::UIElements::UIR::RenderTreeManager*>();
}
inline ::UnityEngine::UIElements::TextureRegistry* UnityEngine::UIElements::UIR::RenderTreeManager::get_textureRegistry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_textureRegistry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextureRegistry*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor* UnityEngine::UIElements::UIR::RenderTreeManager::get_visualChangesProcessor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_visualChangesProcessor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* UnityEngine::UIElements::UIR::RenderTreeManager::get_opacityIdAccelerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_opacityIdAccelerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::OpacityIdAccelerator*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::set_opacityIdAccelerator(::UnityEngine::UIElements::UIR::OpacityIdAccelerator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_opacityIdAccelerator", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::OpacityIdAccelerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::RenderData* UnityEngine::UIElements::UIR::RenderTreeManager::GetPooledRenderData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"GetPooledRenderData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderData*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::ReturnPoolRenderData(::UnityEngine::UIElements::UIR::RenderData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"ReturnPoolRenderData", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityEngine::UIElements::UIR::RenderTree* UnityEngine::UIElements::UIR::RenderTreeManager::GetPooledRenderTree(::UnityEngine::UIElements::UIR::RenderTreeManager*  renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData*  rootRenderData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"GetPooledRenderTree", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderTree*>(this, ___internal_method, renderTreeManager, rootRenderData);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::ReturnPoolRenderTree(::UnityEngine::UIElements::UIR::RenderTree*  tree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"ReturnPoolRenderTree", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tree);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::_ctor(::UnityEngine::UIElements::BaseVisualElementPanel*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline bool UnityEngine::UIElements::UIR::RenderTreeManager::get_disposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_disposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::set_disposed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_disposed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::ReverseDepthFirstDisposeRenderTrees(::UnityEngine::UIElements::UIR::RenderTree*  renderTree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"ReverseDepthFirstDisposeRenderTrees", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTree);
}
inline ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> UnityEngine::UIElements::UIR::RenderTreeManager::get_statsByRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_statsByRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::set_rootRenderTree(::UnityEngine::UIElements::UIR::RenderTree*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_rootRenderTree", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::DepthFirstProcessChanges(::UnityEngine::UIElements::UIR::RenderTree*  renderTree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"DepthFirstProcessChanges", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTree);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::ProcessChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"ProcessChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::SerializeRootTreeCommands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"SerializeRootTreeCommands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::RenderRootTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"RenderRootTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::RenderNestedTrees()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"RenderNestedTrees", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::RenderSingleTree(::UnityEngine::UIElements::UIR::RenderTree*  renderTree, ::UnityEngine::RenderTexture*  nestedTreeRT, ::UnityEngine::RectInt  nestedTreeViewport)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"RenderSingleTree", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RectInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTree, nestedTreeRT, nestedTreeViewport);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::CancelInsertion(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"CancelInsertion", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnChildAdded(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnChildAdded", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::ProcessChildAdded(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"ProcessChildAdded", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnChildrenReordered(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnChildrenReordered", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnChildRemoving(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnChildRemoving", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnRenderHintsChanged(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnRenderHintsChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::RegisterDirty(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  dirtyTypes, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses  dirtyClasses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"RegisterDirty", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypes>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, dirtyTypes, dirtyClasses);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnClippingChanged(::UnityEngine::UIElements::VisualElement*  ve, bool  hierarchical)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnClippingChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, hierarchical);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnOpacityChanged(::UnityEngine::UIElements::VisualElement*  ve, bool  hierarchical)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnOpacityChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, hierarchical);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnColorChanged(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnColorChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnTransformOrSizeChanged(::UnityEngine::UIElements::VisualElement*  ve, bool  transformChanged, bool  clipRectSizeChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnTransformOrSizeChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, transformChanged, clipRectSizeChanged);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnVisualsChanged(::UnityEngine::UIElements::VisualElement*  ve, bool  hierarchical)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnVisualsChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, hierarchical);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::UIEOnDisableRenderingChanged(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"UIEOnDisableRenderingChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline ::UnityEngine::UIElements::BaseVisualElementPanel* UnityEngine::UIElements::UIR::RenderTreeManager::get_panel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_panel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseVisualElementPanel*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::set_panel(::UnityEngine::UIElements::BaseVisualElementPanel*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_panel", {}, {::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::UIRenderDevice* UnityEngine::UIElements::UIR::RenderTreeManager::get_device()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_device", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::UIRenderDevice*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::set_device(::UnityEngine::UIElements::UIR::UIRenderDevice*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_device", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::BaseElementBuilder* UnityEngine::UIElements::UIR::RenderTreeManager::get_elementBuilder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_elementBuilder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BaseElementBuilder*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::AtlasBase* UnityEngine::UIElements::UIR::RenderTreeManager::get_atlas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_atlas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::AtlasBase*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::set_atlas(::UnityEngine::UIElements::AtlasBase*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_atlas", {}, {::i2c::type_of<::UnityEngine::UIElements::AtlasBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::VectorImageManager* UnityEngine::UIElements::UIR::RenderTreeManager::get_vectorImageManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_vectorImageManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::VectorImageManager*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::set_vectorImageManager(::UnityEngine::UIElements::UIR::VectorImageManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_vectorImageManager", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::VectorImageManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl* UnityEngine::UIElements::UIR::RenderTreeManager::get_tempMeshAllocator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_tempMeshAllocator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::set_tempMeshAllocator(::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_tempMeshAllocator", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::TempMeshAllocatorImpl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::MeshWriteDataPool* UnityEngine::UIElements::UIR::RenderTreeManager::get_meshWriteDataPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_meshWriteDataPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshWriteDataPool*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::EntryPool* UnityEngine::UIElements::UIR::RenderTreeManager::get_entryPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_entryPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::EntryPool*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* UnityEngine::UIElements::UIR::RenderTreeManager::get_meshGenerationDeferrer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_meshGenerationDeferrer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MeshGenerationNodeManager* UnityEngine::UIElements::UIR::RenderTreeManager::get_meshGenerationNodeManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_meshGenerationNodeManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshGenerationNodeManager*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::set_meshGenerationNodeManager(::UnityEngine::UIElements::MeshGenerationNodeManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_meshGenerationNodeManager", {}, {::i2c::type_of<::UnityEngine::UIElements::MeshGenerationNodeManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIR::JobManager* UnityEngine::UIElements::UIR::RenderTreeManager::get_jobManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_jobManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::JobManager*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::set_jobManager(::UnityEngine::UIElements::UIR::JobManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_jobManager", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::JobManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIR::RenderTreeManager::get_drawStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_drawStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::set_drawStats(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"set_drawStats", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIR::RenderTreeManager::get_drawInCameras()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_drawInCameras", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderTreeManager::get_isFlat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_isFlat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::RenderTreeManager::get_forceGammaRendering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"get_forceGammaRendering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderTreeManager::AllocCommand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"AllocCommand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::FreeCommand(::UnityEngine::UIElements::UIR::RenderChainCommand*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"FreeCommand", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::RepaintTexturedElements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"RepaintTexturedElements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::DepthFirstRepaintTextured(::UnityEngine::UIElements::UIR::RenderTree*  renderTree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"DepthFirstRepaintTextured", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTree);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::DepthFirstRepaintTextured(::UnityEngine::UIElements::UIR::RenderData*  renderData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"DepthFirstRepaintTextured", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData);
}
inline ::UnityEngine::UIElements::UIR::ExtraRenderData* UnityEngine::UIElements::UIR::RenderTreeManager::GetOrAddExtraData(::UnityEngine::UIElements::UIR::RenderData*  renderData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"GetOrAddExtraData", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::ExtraRenderData*>(this, ___internal_method, renderData);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::FreeExtraData(::UnityEngine::UIElements::UIR::RenderData*  renderData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"FreeExtraData", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::InsertExtraMesh(::UnityEngine::UIElements::UIR::RenderData*  renderData, ::UnityEngine::UIElements::UIR::MeshHandle*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"InsertExtraMesh", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData, mesh);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::FreeExtraMeshes(::UnityEngine::UIElements::UIR::RenderData*  renderData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"FreeExtraMeshes", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::InsertTexture(::UnityEngine::UIElements::UIR::RenderData*  renderData, ::UnityEngine::Texture*  src, ::UnityEngine::UIElements::TextureId  id, bool  isAtlas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"InsertTexture", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData, src, id, isAtlas);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::ResetTextures(::UnityEngine::UIElements::UIR::RenderData*  renderData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"ResetTextures", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager::DrawStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                        {"DrawStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderTreeManager* UnityEngine::UIElements::UIR::RenderTreeManager::New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel*  panel)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::RenderTreeManager*>(panel));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::UIElements::UIR::RenderTreeManager::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::RenderTreeManager::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager::RenderTreeManager()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager___c::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7f1658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager___c.__ctor_b__37_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderChainCommand* (::UnityEngine::UIElements::UIR::RenderTreeManager___c::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager___c::__ctor_b__37_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb7f1660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(),
                        {"<.ctor>b__37_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager___c.__ctor_b__37_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::ExtraRenderData* (::UnityEngine::UIElements::UIR::RenderTreeManager___c::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager___c::__ctor_b__37_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb7f16b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(),
                        {"<.ctor>b__37_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager___c.__ctor_b__37_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderData* (::UnityEngine::UIElements::UIR::RenderTreeManager___c::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager___c::__ctor_b__37_2)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb7f1708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(),
                        {"<.ctor>b__37_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager___c.__ctor_b__37_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderTree* (::UnityEngine::UIElements::UIR::RenderTreeManager___c::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager___c::__ctor_b__37_3)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb7f175c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(),
                        {"<.ctor>b__37_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::RenderTreeManager___c::setStaticF___9(::UnityEngine::UIElements::UIR::RenderTreeManager___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::RenderTreeManager___c*, "<>9", ::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(std::forward<::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(value));
}
inline ::UnityEngine::UIElements::UIR::RenderTreeManager___c* UnityEngine::UIElements::UIR::RenderTreeManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::RenderTreeManager___c*, "<>9", ::UnityEngine::UIElements::UIR::RenderTreeManager___c*>();
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager___c::setStaticF___9__37_0(::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__37_0", ::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(std::forward<::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* UnityEngine::UIElements::UIR::RenderTreeManager___c::getStaticF___9__37_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*, "<>9__37_0", ::UnityEngine::UIElements::UIR::RenderTreeManager___c*>();
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager___c::setStaticF___9__37_1(::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>*, "<>9__37_1", ::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(std::forward<::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>* UnityEngine::UIElements::UIR::RenderTreeManager___c::getStaticF___9__37_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::ExtraRenderData*>*, "<>9__37_1", ::UnityEngine::UIElements::UIR::RenderTreeManager___c*>();
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager___c::setStaticF___9__37_2(::System::Func_1<::UnityEngine::UIElements::UIR::RenderData*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderData*>*, "<>9__37_2", ::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(std::forward<::System::Func_1<::UnityEngine::UIElements::UIR::RenderData*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderData*>* UnityEngine::UIElements::UIR::RenderTreeManager___c::getStaticF___9__37_2()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderData*>*, "<>9__37_2", ::UnityEngine::UIElements::UIR::RenderTreeManager___c*>();
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager___c::setStaticF___9__37_3(::System::Func_1<::UnityEngine::UIElements::UIR::RenderTree*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderTree*>*, "<>9__37_3", ::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(std::forward<::System::Func_1<::UnityEngine::UIElements::UIR::RenderTree*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderTree*>* UnityEngine::UIElements::UIR::RenderTreeManager___c::getStaticF___9__37_3()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderTree*>*, "<>9__37_3", ::UnityEngine::UIElements::UIR::RenderTreeManager___c*>();
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderTreeManager___c::__ctor_b__37_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(),
                        {"<.ctor>b__37_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderChainCommand*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::ExtraRenderData* UnityEngine::UIElements::UIR::RenderTreeManager___c::__ctor_b__37_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(),
                        {"<.ctor>b__37_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::ExtraRenderData*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderData* UnityEngine::UIElements::UIR::RenderTreeManager___c::__ctor_b__37_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(),
                        {"<.ctor>b__37_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderData*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderTree* UnityEngine::UIElements::UIR::RenderTreeManager___c::__ctor_b__37_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager___c*>(),
                        {"<.ctor>b__37_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderTree*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderTreeManager___c* UnityEngine::UIElements::UIR::RenderTreeManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::RenderTreeManager___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager___c::RenderTreeManager___c()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor.get_elementBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::BaseElementBuilder* (::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::get_elementBuilder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7f0a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"get_elementBuilder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor.get_meshGenerationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<Il2CppObject* (::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::get_meshGenerationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7f0a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"get_meshGenerationContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::*)(::UnityEngine::UIElements::UIR::RenderTreeManager*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb7eacfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor.ScheduleMeshGenerationJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::ScheduleMeshGenerationJobs)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb7e73d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"ScheduleMeshGenerationJobs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor.ProcessOnVisualsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::*)(::UnityEngine::UIElements::UIR::RenderData*, uint32_t, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::ProcessOnVisualsChanged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb7e7394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"ProcessOnVisualsChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor.DepthFirstOnVisualsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::*)(::UnityEngine::UIElements::UIR::RenderData*, uint32_t, bool, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::DepthFirstOnVisualsChanged)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0xb7f0a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"DepthFirstOnVisualsChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor.UpdateWorldFlipsWinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderData*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::UpdateWorldFlipsWinding)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb7f1088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"UpdateWorldFlipsWinding", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor.ConvertEntriesToCommands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::*)(::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::ConvertEntriesToCommands)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xb7e73fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"ConvertEntriesToCommands", {}, {::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor.UpdateOpacityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::RenderTreeManager*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::UpdateOpacityId)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb7f0f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"UpdateOpacityId", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor.DoUpdateOpacityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::MeshHandle*)>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::DoUpdateOpacityId)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb7f10ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"DoUpdateOpacityId", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor.get_disposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7f1498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"get_disposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor.set_disposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::*)(bool)>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7f14a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"set_disposed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb7ec120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::*)(bool)>(&::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb7f14a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager*& UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_get_m_RenderTreeManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderTreeManager;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager* const& UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_get_m_RenderTreeManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderTreeManager;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_set_m_RenderTreeManager(::UnityEngine::UIElements::UIR::RenderTreeManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderTreeManager = value;
}
constexpr Il2CppObject*& UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_get_m_MeshGenerationContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MeshGenerationContext;
}
constexpr Il2CppObject* const& UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_get_m_MeshGenerationContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MeshGenerationContext;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_set_m_MeshGenerationContext(Il2CppObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MeshGenerationContext = value;
}
constexpr ::UnityEngine::UIElements::UIR::BaseElementBuilder*& UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_get_m_ElementBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ElementBuilder;
}
constexpr ::UnityEngine::UIElements::UIR::BaseElementBuilder* const& UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_get_m_ElementBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ElementBuilder;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_set_m_ElementBuilder(::UnityEngine::UIElements::UIR::BaseElementBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ElementBuilder = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo>*& UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_get_m_EntryProcessingList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EntryProcessingList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo>* const& UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_get_m_EntryProcessingList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EntryProcessingList;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_set_m_EntryProcessingList(::System::Collections::Generic::List_1<::GlobalNamespace::VisualChangesProcessor_RenderTreeManager_EntryProcessingInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EntryProcessingList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>*& UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_get_m_Processors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Processors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>* const& UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_get_m_Processors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Processors;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_set_m_Processors(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryProcessor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Processors = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_get__disposed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_get__disposed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::__cordl_internal_set__disposed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::setStaticF_k_GenerateEntriesMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_GenerateEntriesMarker", ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::getStaticF_k_GenerateEntriesMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_GenerateEntriesMarker", ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>();
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::setStaticF_k_ConvertEntriesToCommandsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ConvertEntriesToCommandsMarker", ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::getStaticF_k_ConvertEntriesToCommandsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ConvertEntriesToCommandsMarker", ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>();
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::setStaticF_k_UpdateOpacityIdMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateOpacityIdMarker", ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::getStaticF_k_UpdateOpacityIdMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateOpacityIdMarker", ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>();
}
inline ::UnityEngine::UIElements::UIR::BaseElementBuilder* UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::get_elementBuilder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"get_elementBuilder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BaseElementBuilder*>(this, ___internal_method);
}
inline Il2CppObject* UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::get_meshGenerationContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"get_meshGenerationContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<Il2CppObject*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::_ctor(::UnityEngine::UIElements::UIR::RenderTreeManager*  renderTreeManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTreeManager);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::ScheduleMeshGenerationJobs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"ScheduleMeshGenerationJobs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::ProcessOnVisualsChanged(::UnityEngine::UIElements::UIR::RenderData*  renderData, uint32_t  dirtyID, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"ProcessOnVisualsChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData, dirtyID, stats);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::DepthFirstOnVisualsChanged(::UnityEngine::UIElements::UIR::RenderData*  renderData, uint32_t  dirtyID, bool  hierarchical, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"DepthFirstOnVisualsChanged", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData, dirtyID, hierarchical, stats);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::UpdateWorldFlipsWinding(::UnityEngine::UIElements::UIR::RenderData*  renderData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"UpdateWorldFlipsWinding", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderData);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::ConvertEntriesToCommands(::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"ConvertEntriesToCommands", {}, {::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stats);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::UpdateOpacityId(::UnityEngine::UIElements::UIR::RenderData*  renderData, ::UnityEngine::UIElements::UIR::RenderTreeManager*  renderTreeManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"UpdateOpacityId", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderData, renderTreeManager);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::DoUpdateOpacityId(::UnityEngine::UIElements::UIR::RenderData*  renderData, ::UnityEngine::UIElements::UIR::RenderTreeManager*  renderTreeManager, ::UnityEngine::UIElements::UIR::MeshHandle*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"DoUpdateOpacityId", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderData, renderTreeManager, mesh);
}
inline bool UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::get_disposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"get_disposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::set_disposed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"set_disposed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor* UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::New_ctor(::UnityEngine::UIElements::UIR::RenderTreeManager*  renderTreeManager)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor*>(renderTreeManager));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager_VisualChangesProcessor::RenderTreeManager_VisualChangesProcessor()   {
}
