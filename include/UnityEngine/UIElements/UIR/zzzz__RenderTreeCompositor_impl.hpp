#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTreeCompositor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeCompositor_DrawOperationType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunction_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingPass_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/zzzz__RectInt_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeCompositor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeCompositor_DrawOperationType_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeCompositor_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeManager_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTree_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingMargins_def.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingPass_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor::*)(::UnityEngine::UIElements::UIR::RenderTreeManager*)>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb7e7920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor::*)(::UnityEngine::UIElements::UIR::RenderTree*)>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::Update)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb7e7af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.BuildDrawOperationTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor::*)(::UnityEngine::UIElements::UIR::RenderTree*)>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::BuildDrawOperationTree)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb7e7c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"BuildDrawOperationTree", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.GetReadMargins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PostProcessingMargins (*)(::UnityEngine::UIElements::PostProcessingPass, ::UnityEngine::UIElements::FilterFunction)>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::GetReadMargins)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb7e85b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"GetReadMargins", {}, {::i2c::type_of<::UnityEngine::UIElements::PostProcessingPass>(), ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.GetWriteMargins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PostProcessingMargins (*)(::UnityEngine::UIElements::PostProcessingPass, ::UnityEngine::UIElements::FilterFunction)>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::GetWriteMargins)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb7e8608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"GetWriteMargins", {}, {::i2c::type_of<::UnityEngine::UIElements::PostProcessingPass>(), ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.UpdateDrawBounds_PostOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*)>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::UpdateDrawBounds_PostOrder)> {
  constexpr static std::size_t size = 0x6fc;
  constexpr static std::size_t addrs = 0xb7e7c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"UpdateDrawBounds_PostOrder", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.AssignTextureIds_DepthFirst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor::*)(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*)>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::AssignTextureIds_DepthFirst)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xb7e8394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"AssignTextureIds_DepthFirst", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.RenderNestedPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::RenderNestedPasses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7e865c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"RenderNestedPasses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.ExecuteDrawOperation_PostOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor::*)(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*)>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::ExecuteDrawOperation_PostOrder)> {
  constexpr static std::size_t size = 0x968;
  constexpr static std::size_t addrs = 0xb7e8664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"ExecuteDrawOperation_PostOrder", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.ApplyEffectParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor::*)(::UnityEngine::UIElements::PostProcessingPass, ::UnityEngine::UIElements::FilterFunction, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::ApplyEffectParameters)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb7e8fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"ApplyEffectParameters", {}, {::i2c::type_of<::UnityEngine::UIElements::PostProcessingPass>(), ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.CleanupOperationTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::CleanupOperationTree)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb7e7b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"CleanupOperationTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.CleanupOperation_PostOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor::*)(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*)>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::CleanupOperation_PostOrder)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb7e95d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"CleanupOperation_PostOrder", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.get_disposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::RenderTreeCompositor::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7e978c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"get_disposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.set_disposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor::*)(bool)>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7e9794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"set_disposed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb7e979c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor::*)(bool)>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb7e980c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager*& UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_get_m_RenderTreeManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderTreeManager;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager* const& UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_get_m_RenderTreeManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderTreeManager;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_set_m_RenderTreeManager(::UnityEngine::UIElements::UIR::RenderTreeManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderTreeManager = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*& UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_get_m_RootOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RootOperation;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* const& UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_get_m_RootOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RootOperation;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_set_m_RootOperation(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RootOperation = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*& UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_get_m_AllocatedRenderTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllocatedRenderTextures;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* const& UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_get_m_AllocatedRenderTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllocatedRenderTextures;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_set_m_AllocatedRenderTextures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllocatedRenderTextures = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_get_m_Block()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Block;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_get_m_Block() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Block;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_set_m_Block(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Block = value;
}
constexpr ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>*& UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_get_m_DrawOperationPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DrawOperationPool;
}
constexpr ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>* const& UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_get_m_DrawOperationPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DrawOperationPool;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_set_m_DrawOperationPool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DrawOperationPool = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_get__disposed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_get__disposed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor::__cordl_internal_set__disposed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor::_ctor(::UnityEngine::UIElements::UIR::RenderTreeManager*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor::Update(::UnityEngine::UIElements::UIR::RenderTree*  rootRenderTree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"Update", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rootRenderTree);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor::BuildDrawOperationTree(::UnityEngine::UIElements::UIR::RenderTree*  rootRenderTree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"BuildDrawOperationTree", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rootRenderTree);
}
inline ::UnityEngine::UIElements::PostProcessingMargins UnityEngine::UIElements::UIR::RenderTreeCompositor::GetReadMargins(::UnityEngine::UIElements::PostProcessingPass  effect, ::UnityEngine::UIElements::FilterFunction  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"GetReadMargins", {}, {::i2c::type_of<::UnityEngine::UIElements::PostProcessingPass>(), ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PostProcessingMargins>(nullptr, ___internal_method, effect, func);
}
inline ::UnityEngine::UIElements::PostProcessingMargins UnityEngine::UIElements::UIR::RenderTreeCompositor::GetWriteMargins(::UnityEngine::UIElements::PostProcessingPass  effect, ::UnityEngine::UIElements::FilterFunction  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"GetWriteMargins", {}, {::i2c::type_of<::UnityEngine::UIElements::PostProcessingPass>(), ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PostProcessingMargins>(nullptr, ___internal_method, effect, func);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor::UpdateDrawBounds_PostOrder(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"UpdateDrawBounds_PostOrder", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, op);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor::AssignTextureIds_DepthFirst(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"AssignTextureIds_DepthFirst", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor::RenderNestedPasses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"RenderNestedPasses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor::ExecuteDrawOperation_PostOrder(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"ExecuteDrawOperation_PostOrder", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor::ApplyEffectParameters(::UnityEngine::UIElements::PostProcessingPass  effect, ::UnityEngine::UIElements::FilterFunction  filter, ::UnityEngine::UIElements::VisualElement*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"ApplyEffectParameters", {}, {::i2c::type_of<::UnityEngine::UIElements::PostProcessingPass>(), ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, filter, source);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor::CleanupOperationTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"CleanupOperationTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor::CleanupOperation_PostOrder(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"CleanupOperation_PostOrder", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline bool UnityEngine::UIElements::UIR::RenderTreeCompositor::get_disposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"get_disposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor::set_disposed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"set_disposed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::UnityEngine::UIElements::UIR::RenderTreeCompositor* UnityEngine::UIElements::UIR::RenderTreeCompositor::New_ctor(::UnityEngine::UIElements::UIR::RenderTreeManager*  owner)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::RenderTreeCompositor*>(owner));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::UIElements::UIR::RenderTreeCompositor::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::RenderTreeCompositor::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor::RenderTreeCompositor()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor___c::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7e9940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor___c.__ctor_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* (::UnityEngine::UIElements::UIR::RenderTreeCompositor___c::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor___c::__ctor_b__7_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb7e9948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*>(),
                        {"<.ctor>b__7_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor___c::setStaticF___9(::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*, "<>9", ::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*>(std::forward<::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*>(value));
}
inline ::UnityEngine::UIElements::UIR::RenderTreeCompositor___c* UnityEngine::UIElements::UIR::RenderTreeCompositor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*, "<>9", ::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*>();
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor___c::setStaticF___9__7_0(::System::Func_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>*, "<>9__7_0", ::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*>(std::forward<::System::Func_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>* UnityEngine::UIElements::UIR::RenderTreeCompositor___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>*, "<>9__7_0", ::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*>();
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* UnityEngine::UIElements::UIR::RenderTreeCompositor___c::__ctor_b__7_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*>(),
                        {"<.ctor>b__7_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderTreeCompositor___c* UnityEngine::UIElements::UIR::RenderTreeCompositor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::RenderTreeCompositor___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor___c::RenderTreeCompositor___c()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation.get_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RenderTreeCompositor_DrawOperationType (::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7e983c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"get_type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation.get_visualElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::get_visualElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7e9844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"get_visualElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation.get_renderTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::RenderTree* (::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::get_renderTree)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7e984c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"get_renderTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation.get_effect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PostProcessingPass (::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::get_effect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb7e9854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"get_effect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation.get_filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FilterFunction (::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::get_filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb7e9864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"get_filter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::*)(::UnityEngine::UIElements::UIR::RenderTree*)>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::Init)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb7e8560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation.InitPointers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::InitPointers)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb7e9874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"InitPointers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb7e96e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::*)()>(&::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb7e98d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RenderTreeCompositor_DrawOperationType& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_m_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr ::GlobalNamespace::RenderTreeCompositor_DrawOperationType const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_m_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Type;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_m_Type(::GlobalNamespace::RenderTreeCompositor_DrawOperationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Type = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_m_VisualElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisualElement;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_m_VisualElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisualElement;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_m_VisualElement(::UnityEngine::UIElements::VisualElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VisualElement = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree*& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_m_RenderTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderTree;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_m_RenderTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderTree;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_m_RenderTree(::UnityEngine::UIElements::UIR::RenderTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderTree = value;
}
constexpr ::UnityEngine::UIElements::PostProcessingPass& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_m_Effect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Effect;
}
constexpr ::UnityEngine::UIElements::PostProcessingPass const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_m_Effect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Effect;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_m_Effect(::UnityEngine::UIElements::PostProcessingPass  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Effect = value;
}
constexpr ::UnityEngine::UIElements::FilterFunction& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_m_Filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Filter;
}
constexpr ::UnityEngine::UIElements::FilterFunction const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_m_Filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Filter;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_m_Filter(::UnityEngine::UIElements::FilterFunction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Filter = value;
}
constexpr ::UnityEngine::RectInt& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::RectInt const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_bounds(::UnityEngine::RectInt  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
constexpr ::UnityEngine::RectInt& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_drawSourceBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawSourceBounds;
}
constexpr ::UnityEngine::RectInt const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_drawSourceBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawSourceBounds;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_drawSourceBounds(::UnityEngine::RectInt  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawSourceBounds = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_drawSourceTexOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawSourceTexOffsets;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_drawSourceTexOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawSourceTexOffsets;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_drawSourceTexOffsets(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawSourceTexOffsets = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_dstTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dstTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_dstTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dstTexture;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_dstTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dstTexture = value;
}
constexpr ::UnityEngine::UIElements::TextureId& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_dstTextureId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dstTextureId;
}
constexpr ::UnityEngine::UIElements::TextureId const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_dstTextureId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dstTextureId;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_dstTextureId(::UnityEngine::UIElements::TextureId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dstTextureId = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_parent(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_firstChild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstChild;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_firstChild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstChild;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_firstChild(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstChild = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_lastChild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastChild;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_lastChild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastChild;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_lastChild(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastChild = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_prevSibling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevSibling;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_prevSibling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevSibling;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_prevSibling(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevSibling = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_nextSibling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSibling;
}
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* const& UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_get_nextSibling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSibling;
}
constexpr void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::__cordl_internal_set_nextSibling(::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSibling = value;
}
inline ::GlobalNamespace::RenderTreeCompositor_DrawOperationType UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::get_type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"get_type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RenderTreeCompositor_DrawOperationType>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::get_visualElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"get_visualElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderTree* UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::get_renderTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"get_renderTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::RenderTree*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PostProcessingPass UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::get_effect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"get_effect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PostProcessingPass>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::FilterFunction UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::get_filter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"get_filter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FilterFunction>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::Init(::UnityEngine::UIElements::UIR::RenderTree*  renderTree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTree);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::InitPointers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"InitPointers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation* UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderTreeCompositor_DrawOperation::RenderTreeCompositor_DrawOperation()   {
}
