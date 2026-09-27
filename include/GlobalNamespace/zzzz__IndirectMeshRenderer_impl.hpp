#pragma once
// IWYU pragma private; include "GlobalNamespace/IndirectMeshRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__IndirectMeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPost_def.hpp"
#include "GlobalNamespace/zzzz__IndirectMeshInstance_def.hpp"
#include "GlobalNamespace/zzzz__IndirectMeshRenderer_BatchKey_def.hpp"
#include "GlobalNamespace/zzzz__IndirectMeshRenderer_DrawBatch_def.hpp"
#include "GlobalNamespace/zzzz__IndirectMeshRenderer_DynamicEntry_def.hpp"
#include "GlobalNamespace/zzzz__IndirectMeshRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer._Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::IndirectMeshRenderer::_Init)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x56956e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IndirectMeshInstance*, int32_t)>(&::GlobalNamespace::IndirectMeshRenderer::Register)> {
  constexpr static std::size_t size = 0xc90;
  constexpr static std::size_t addrs = 0x5694a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::IndirectMeshInstance*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer._CopyEmissionProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::GlobalNamespace::IndirectMeshRenderer::_CopyEmissionProperties)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5695b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_CopyEmissionProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer.SetGroupVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::GlobalNamespace::IndirectMeshRenderer::SetGroupVisible)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x56944b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"SetGroupVisible", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer._Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::IndirectMeshRenderer::_Render)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x5695e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_Render", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer._RebuildBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>)>(&::GlobalNamespace::IndirectMeshRenderer::_RebuildBatch)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x569654c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_RebuildBatch", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer._UploadBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>)>(&::GlobalNamespace::IndirectMeshRenderer::_UploadBatch)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5696b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_UploadBatch", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer._DisposeBatchBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>)>(&::GlobalNamespace::IndirectMeshRenderer::_DisposeBatchBuffers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56964f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_DisposeBatchBuffers", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer._DisposeBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>)>(&::GlobalNamespace::IndirectMeshRenderer::_DisposeBatch)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5696db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_DisposeBatch", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer._DisposeAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::IndirectMeshRenderer::_DisposeAll)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5695988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_DisposeAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IndirectMeshRenderer::setStaticF__spId_Matrices(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_spId_Matrices", ::GlobalNamespace::IndirectMeshRenderer*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::IndirectMeshRenderer::getStaticF__spId_Matrices()  {
return ::cordl_internals::getStaticField<int32_t, "_spId_Matrices", ::GlobalNamespace::IndirectMeshRenderer*>();
}
inline void GlobalNamespace::IndirectMeshRenderer::setStaticF__shader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "_shader", ::GlobalNamespace::IndirectMeshRenderer*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> GlobalNamespace::IndirectMeshRenderer::getStaticF__shader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "_shader", ::GlobalNamespace::IndirectMeshRenderer*>();
}
inline void GlobalNamespace::IndirectMeshRenderer::setStaticF__shaderEmissive(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "_shaderEmissive", ::GlobalNamespace::IndirectMeshRenderer*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> GlobalNamespace::IndirectMeshRenderer::getStaticF__shaderEmissive()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "_shaderEmissive", ::GlobalNamespace::IndirectMeshRenderer*>();
}
inline void GlobalNamespace::IndirectMeshRenderer::setStaticF__batchLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IndirectMeshRenderer_BatchKey,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IndirectMeshRenderer_BatchKey,int32_t>*, "_batchLookup", ::GlobalNamespace::IndirectMeshRenderer*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IndirectMeshRenderer_BatchKey,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IndirectMeshRenderer_BatchKey,int32_t>* GlobalNamespace::IndirectMeshRenderer::getStaticF__batchLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IndirectMeshRenderer_BatchKey,int32_t>*, "_batchLookup", ::GlobalNamespace::IndirectMeshRenderer*>();
}
inline void GlobalNamespace::IndirectMeshRenderer::setStaticF__batchList(::System::Collections::Generic::List_1<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>*, "_batchList", ::GlobalNamespace::IndirectMeshRenderer*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>* GlobalNamespace::IndirectMeshRenderer::getStaticF__batchList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>*, "_batchList", ::GlobalNamespace::IndirectMeshRenderer*>();
}
inline void GlobalNamespace::IndirectMeshRenderer::setStaticF__loggedFirstRender(bool  value)  {
::cordl_internals::setStaticField<bool, "_loggedFirstRender", ::GlobalNamespace::IndirectMeshRenderer*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::IndirectMeshRenderer::getStaticF__loggedFirstRender()  {
return ::cordl_internals::getStaticField<bool, "_loggedFirstRender", ::GlobalNamespace::IndirectMeshRenderer*>();
}
inline void GlobalNamespace::IndirectMeshRenderer::_Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::IndirectMeshRenderer::Register(::GlobalNamespace::IndirectMeshInstance*  inst, int32_t  groupId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::IndirectMeshInstance*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inst, groupId);
}
inline void GlobalNamespace::IndirectMeshRenderer::_CopyEmissionProperties(::UnityEngine::Material*  dst, ::UnityEngine::Material*  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_CopyEmissionProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, src);
}
inline void GlobalNamespace::IndirectMeshRenderer::SetGroupVisible(int32_t  groupId, bool  visible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"SetGroupVisible", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, groupId, visible);
}
inline void GlobalNamespace::IndirectMeshRenderer::_Render()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_Render", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::IndirectMeshRenderer::_RebuildBatch(::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>  batch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_RebuildBatch", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, batch);
}
inline void GlobalNamespace::IndirectMeshRenderer::_UploadBatch(::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>  batch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_UploadBatch", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, batch);
}
inline void GlobalNamespace::IndirectMeshRenderer::_DisposeBatchBuffers(::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>  batch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_DisposeBatchBuffers", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, batch);
}
inline void GlobalNamespace::IndirectMeshRenderer::_DisposeBatch(::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>  batch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_DisposeBatch", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::IndirectMeshRenderer_DrawBatch>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, batch);
}
inline void GlobalNamespace::IndirectMeshRenderer::_DisposeAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer*>(),
                        {"_DisposeAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IndirectMeshRenderer::IndirectMeshRenderer()   {
}
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer_PostTickCallback.get_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IndirectMeshRenderer_PostTickCallback::*)()>(&::GlobalNamespace::IndirectMeshRenderer_PostTickCallback::get_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5697180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_PostTickCallback*>(),
                        {"get_PostTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer_PostTickCallback.set_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndirectMeshRenderer_PostTickCallback::*)(bool)>(&::GlobalNamespace::IndirectMeshRenderer_PostTickCallback::set_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5697188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_PostTickCallback*>(),
                        {"set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer_PostTickCallback.PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndirectMeshRenderer_PostTickCallback::*)()>(&::GlobalNamespace::IndirectMeshRenderer_PostTickCallback::PostTick)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5697190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_PostTickCallback*>(),
                        {"PostTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IndirectMeshRenderer_PostTickCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IndirectMeshRenderer_PostTickCallback::*)()>(&::GlobalNamespace::IndirectMeshRenderer_PostTickCallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5695b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_PostTickCallback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::IndirectMeshRenderer_PostTickCallback::__cordl_internal_get__PostTickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostTickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::IndirectMeshRenderer_PostTickCallback::__cordl_internal_get__PostTickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostTickRunning_k__BackingField;
}
constexpr void GlobalNamespace::IndirectMeshRenderer_PostTickCallback::__cordl_internal_set__PostTickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PostTickRunning_k__BackingField = value;
}
inline bool GlobalNamespace::IndirectMeshRenderer_PostTickCallback::get_PostTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_PostTickCallback*>(),
                        {"get_PostTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::IndirectMeshRenderer_PostTickCallback::set_PostTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_PostTickCallback*>(),
                        {"set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IndirectMeshRenderer_PostTickCallback::PostTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_PostTickCallback*>(),
                        {"PostTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IndirectMeshRenderer_PostTickCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IndirectMeshRenderer_PostTickCallback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IndirectMeshRenderer_PostTickCallback* GlobalNamespace::IndirectMeshRenderer_PostTickCallback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IndirectMeshRenderer_PostTickCallback*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr  GlobalNamespace::IndirectMeshRenderer_PostTickCallback::operator ::GlobalNamespace::ITickSystemPost*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* GlobalNamespace::IndirectMeshRenderer_PostTickCallback::i___GlobalNamespace__ITickSystemPost() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IndirectMeshRenderer_PostTickCallback::IndirectMeshRenderer_PostTickCallback()   {
}
