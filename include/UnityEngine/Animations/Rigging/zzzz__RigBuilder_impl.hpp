#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigBuilder.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IRigLayer_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigBuilder_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigEffectorData_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigLayer_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__SyncSceneToStreamLayer_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationWindowPreview_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)()>(&::UnityEngine::Animations::Rigging::RigBuilder::OnEnable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xae77a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)()>(&::UnityEngine::Animations::Rigging::RigBuilder::OnDisable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xae77c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)()>(&::UnityEngine::Animations::Rigging::RigBuilder::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae77e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)(float_t)>(&::UnityEngine::Animations::Rigging::RigBuilder::Evaluate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xae77e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)()>(&::UnityEngine::Animations::Rigging::RigBuilder::Update)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xae78100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.SyncLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)()>(&::UnityEngine::Animations::Rigging::RigBuilder::SyncLayers)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xae77ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"SyncLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::Rigging::RigBuilder::*)()>(&::UnityEngine::Animations::Rigging::RigBuilder::Build)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xae77b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"Build", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::Rigging::RigBuilder::*)(::UnityEngine::Playables::PlayableGraph)>(&::UnityEngine::Animations::Rigging::RigBuilder::Build)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xae78704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"Build", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)()>(&::UnityEngine::Animations::Rigging::RigBuilder::Clear)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xae77d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.StartPreview
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)()>(&::UnityEngine::Animations::Rigging::RigBuilder::StartPreview)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xae78e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"StartPreview", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.StopPreview
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)()>(&::UnityEngine::Animations::Rigging::RigBuilder::StopPreview)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xae78fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"StopPreview", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.UpdatePreviewGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)(::UnityEngine::Playables::PlayableGraph)>(&::UnityEngine::Animations::Rigging::RigBuilder::UpdatePreviewGraph)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xae79034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"UpdatePreviewGraph", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.BuildPreviewGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Animations::Rigging::RigBuilder::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable)>(&::UnityEngine::Animations::Rigging::RigBuilder::BuildPreviewGraph)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xae79224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"BuildPreviewGraph", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.get_layers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>* (::UnityEngine::Animations::Rigging::RigBuilder::*)()>(&::UnityEngine::Animations::Rigging::RigBuilder::get_layers)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae7858c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"get_layers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.set_layers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)(::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>*)>(&::UnityEngine::Animations::Rigging::RigBuilder::set_layers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae79d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"set_layers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.get_syncSceneToStreamLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer* (::UnityEngine::Animations::Rigging::RigBuilder::*)()>(&::UnityEngine::Animations::Rigging::RigBuilder::get_syncSceneToStreamLayer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae7813c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"get_syncSceneToStreamLayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.set_syncSceneToStreamLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*)>(&::UnityEngine::Animations::Rigging::RigBuilder::set_syncSceneToStreamLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae79d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"set_syncSceneToStreamLayer", {}, {::i2c::type_of<::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.get_graph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableGraph (::UnityEngine::Animations::Rigging::RigBuilder::*)()>(&::UnityEngine::Animations::Rigging::RigBuilder::get_graph)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae79d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"get_graph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder.set_graph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)(::UnityEngine::Playables::PlayableGraph)>(&::UnityEngine::Animations::Rigging::RigBuilder::set_graph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae79d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"set_graph", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder::*)()>(&::UnityEngine::Animations::Rigging::RigBuilder::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae79d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>*& UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_get_m_RigLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RigLayers;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>* const& UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_get_m_RigLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RigLayers;
}
constexpr void UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_set_m_RigLayers(::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RigLayers = value;
}
constexpr ::ArrayW<::UnityEngine::Animations::Rigging::IRigLayer*>& UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_get_m_RuntimeRigLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RuntimeRigLayers;
}
constexpr ::ArrayW<::UnityEngine::Animations::Rigging::IRigLayer*> const& UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_get_m_RuntimeRigLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RuntimeRigLayers;
}
constexpr void UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_set_m_RuntimeRigLayers(::ArrayW<::UnityEngine::Animations::Rigging::IRigLayer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RuntimeRigLayers = value;
}
constexpr ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*& UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_get_m_SyncSceneToStreamLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SyncSceneToStreamLayer;
}
constexpr ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer* const& UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_get_m_SyncSceneToStreamLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SyncSceneToStreamLayer;
}
constexpr void UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_set_m_SyncSceneToStreamLayer(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SyncSceneToStreamLayer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>*& UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_get_m_Effectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Effectors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>* const& UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_get_m_Effectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Effectors;
}
constexpr void UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_set_m_Effectors(::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Effectors = value;
}
constexpr bool& UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_get_m_IsInPreview()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsInPreview;
}
constexpr bool const& UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_get_m_IsInPreview() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsInPreview;
}
constexpr void UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_set_m_IsInPreview(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsInPreview = value;
}
constexpr ::UnityEngine::Playables::PlayableGraph& UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_get__graph_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graph_k__BackingField;
}
constexpr ::UnityEngine::Playables::PlayableGraph const& UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_get__graph_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graph_k__BackingField;
}
constexpr void UnityEngine::Animations::Rigging::RigBuilder::__cordl_internal_set__graph_k__BackingField(::UnityEngine::Playables::PlayableGraph  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____graph_k__BackingField = value;
}
inline void UnityEngine::Animations::Rigging::RigBuilder::setStaticF_onAddRigBuilder(::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*, "onAddRigBuilder", ::UnityEngine::Animations::Rigging::RigBuilder*>(std::forward<::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*>(value));
}
inline ::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback* UnityEngine::Animations::Rigging::RigBuilder::getStaticF_onAddRigBuilder()  {
return ::cordl_internals::getStaticField<::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*, "onAddRigBuilder", ::UnityEngine::Animations::Rigging::RigBuilder*>();
}
inline void UnityEngine::Animations::Rigging::RigBuilder::setStaticF_onRemoveRigBuilder(::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*, "onRemoveRigBuilder", ::UnityEngine::Animations::Rigging::RigBuilder*>(std::forward<::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*>(value));
}
inline ::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback* UnityEngine::Animations::Rigging::RigBuilder::getStaticF_onRemoveRigBuilder()  {
return ::cordl_internals::getStaticField<::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*, "onRemoveRigBuilder", ::UnityEngine::Animations::Rigging::RigBuilder*>();
}
inline void UnityEngine::Animations::Rigging::RigBuilder::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animations::Rigging::RigBuilder::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animations::Rigging::RigBuilder::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animations::Rigging::RigBuilder::Evaluate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void UnityEngine::Animations::Rigging::RigBuilder::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animations::Rigging::RigBuilder::SyncLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"SyncLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Animations::Rigging::RigBuilder::Build()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"Build", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Animations::Rigging::RigBuilder::Build(::UnityEngine::Playables::PlayableGraph  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"Build", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, graph);
}
inline void UnityEngine::Animations::Rigging::RigBuilder::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animations::Rigging::RigBuilder::StartPreview()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"StartPreview", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animations::Rigging::RigBuilder::StopPreview()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"StopPreview", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animations::Rigging::RigBuilder::UpdatePreviewGraph(::UnityEngine::Playables::PlayableGraph  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"UpdatePreviewGraph", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Animations::Rigging::RigBuilder::BuildPreviewGraph(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Playables::Playable  inputPlayable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"BuildPreviewGraph", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, inputPlayable);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>* UnityEngine::Animations::Rigging::RigBuilder::get_layers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"get_layers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>*>(this, ___internal_method);
}
inline void UnityEngine::Animations::Rigging::RigBuilder::set_layers(::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"set_layers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer* UnityEngine::Animations::Rigging::RigBuilder::get_syncSceneToStreamLayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"get_syncSceneToStreamLayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*>(this, ___internal_method);
}
inline void UnityEngine::Animations::Rigging::RigBuilder::set_syncSceneToStreamLayer(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"set_syncSceneToStreamLayer", {}, {::i2c::type_of<::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Animations::Rigging::RigBuilder::get_graph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"get_graph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(this, ___internal_method);
}
inline void UnityEngine::Animations::Rigging::RigBuilder::set_graph(::UnityEngine::Playables::PlayableGraph  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {"set_graph", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Animations::Rigging::RigBuilder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Animations::Rigging::RigBuilder* UnityEngine::Animations::Rigging::RigBuilder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Animations::Rigging::RigBuilder*>());
}
/// @brief Convert operator to "::UnityEngine::Animations::IAnimationWindowPreview"
constexpr  UnityEngine::Animations::Rigging::RigBuilder::operator ::UnityEngine::Animations::IAnimationWindowPreview*() noexcept {
return static_cast<::UnityEngine::Animations::IAnimationWindowPreview*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Animations::IAnimationWindowPreview"
constexpr ::UnityEngine::Animations::IAnimationWindowPreview* UnityEngine::Animations::Rigging::RigBuilder::i___UnityEngine__Animations__IAnimationWindowPreview() noexcept {
return static_cast<::UnityEngine::Animations::IAnimationWindowPreview*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::RigBuilder::RigBuilder()   {
}
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xae79ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback::*)(::UnityEngine::Animations::Rigging::RigBuilder*)>(&::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae79fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*>(),
                    {::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback::Invoke(::UnityEngine::Animations::Rigging::RigBuilder*  rigBuilder)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigBuilder);
}
inline ::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback* UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback::RigBuilder_OnRemoveRigBuilderCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xae79dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback::*)(::UnityEngine::Animations::Rigging::RigBuilder*)>(&::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae79ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*>(),
                    {::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback::Invoke(::UnityEngine::Animations::Rigging::RigBuilder*  rigBuilder)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigBuilder);
}
inline ::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback* UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback::RigBuilder_OnAddRigBuilderCallback()   {
}
