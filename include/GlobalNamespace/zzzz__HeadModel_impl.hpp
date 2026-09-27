#pragma once
// IWYU pragma private; include "GlobalNamespace/HeadModel.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HeadModel_def.hpp"
#include "GlobalNamespace/zzzz__HeadModel__CosmeticPartLoadInfo_def.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HeadModel.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadModel::*)()>(&::GlobalNamespace::HeadModel::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5750abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadModel.RefreshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadModel::*)()>(&::GlobalNamespace::HeadModel::RefreshRenderer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5750ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"RefreshRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadModel.SetCosmeticActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadModel::*)(::StringW, bool)>(&::GlobalNamespace::HeadModel::SetCosmeticActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5750b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"SetCosmeticActive", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadModel.SetCosmeticActiveArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadModel::*)(::ArrayW<::StringW>, ::ArrayW<bool>)>(&::GlobalNamespace::HeadModel::SetCosmeticActiveArray)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5751428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"SetCosmeticActiveArray", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadModel._AddPreviewCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadModel::*)(::StringW, bool)>(&::GlobalNamespace::HeadModel::_AddPreviewCosmetic)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0x5750d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"_AddPreviewCosmetic", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadModel._HandleLoadOpOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadModel::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>)>(&::GlobalNamespace::HeadModel::_HandleLoadOpOnCompleted)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x57514bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"_HandleLoadOpOnCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadModel.IDelayedExecListener_OnDelayedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadModel::*)(int32_t)>(&::GlobalNamespace::HeadModel::IDelayedExecListener_OnDelayedAction)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x575181c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadModel._ClearCurrent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadModel::*)()>(&::GlobalNamespace::HeadModel::_ClearCurrent)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5750b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"_ClearCurrent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadModel::*)()>(&::GlobalNamespace::HeadModel::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5751a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>*& GlobalNamespace::HeadModel::__cordl_internal_get__currentPartLoadInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPartLoadInfos;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>* const& GlobalNamespace::HeadModel::__cordl_internal_get__currentPartLoadInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPartLoadInfos;
}
constexpr void GlobalNamespace::HeadModel::__cordl_internal_set__currentPartLoadInfos(::System::Collections::Generic::List_1<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPartLoadInfos = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>*& GlobalNamespace::HeadModel::__cordl_internal_get__loadOp_to_partInfoIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadOp_to_partInfoIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>* const& GlobalNamespace::HeadModel::__cordl_internal_get__loadOp_to_partInfoIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadOp_to_partInfoIndex;
}
constexpr void GlobalNamespace::HeadModel::__cordl_internal_set__loadOp_to_partInfoIndex(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadOp_to_partInfoIndex = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::HeadModel::__cordl_internal_get__mannequinRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mannequinRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::HeadModel::__cordl_internal_get__mannequinRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mannequinRenderer;
}
constexpr void GlobalNamespace::HeadModel::__cordl_internal_set__mannequinRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mannequinRenderer = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::HeadModel::__cordl_internal_get_cosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmetics;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::HeadModel::__cordl_internal_get_cosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmetics;
}
constexpr void GlobalNamespace::HeadModel::__cordl_internal_set_cosmetics(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmetics = value;
}
inline void GlobalNamespace::HeadModel::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeadModel::RefreshRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"RefreshRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeadModel::SetCosmeticActive(::StringW  playFabId, bool  forRightSide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"SetCosmeticActive", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playFabId, forRightSide);
}
inline void GlobalNamespace::HeadModel::SetCosmeticActiveArray(::ArrayW<::StringW>  playFabIds, ::ArrayW<bool>  forRightSideArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"SetCosmeticActiveArray", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playFabIds, forRightSideArray);
}
inline void GlobalNamespace::HeadModel::_AddPreviewCosmetic(::StringW  playFabId, bool  forRightSide)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"_AddPreviewCosmetic", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playFabId, forRightSide);
}
inline void GlobalNamespace::HeadModel::_HandleLoadOpOnCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"_HandleLoadOpOnCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadOp);
}
inline void GlobalNamespace::HeadModel::IDelayedExecListener_OnDelayedAction(int32_t  partLoadInfosIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partLoadInfosIndex);
}
inline void GlobalNamespace::HeadModel::_ClearCurrent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {"_ClearCurrent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::HeadModel::_EnsureCapacityAndClear(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                    {"_EnsureCapacityAndClear", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
template<typename T1,typename T2>
inline void GlobalNamespace::HeadModel::_EnsureCapacityAndClear(::System::Collections::Generic::Dictionary_2<T1,T2>*  dict)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                    {"_EnsureCapacityAndClear", {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<T1,T2>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dict);
}
inline void GlobalNamespace::HeadModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeadModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HeadModel* GlobalNamespace::HeadModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HeadModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr  GlobalNamespace::HeadModel::operator ::GlobalNamespace::IDelayedExecListener*() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* GlobalNamespace::HeadModel::i___GlobalNamespace__IDelayedExecListener() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeadModel::HeadModel()   {
}
