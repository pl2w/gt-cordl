#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/InitializationOperation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_impl.hpp"
#include "UnityEngine/Localization/Operations/zzzz__InitializationOperation_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__InitializationOperation_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizationSettings_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.get_Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Localization::Operations::InitializationOperation::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation::get_Progress)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb04cda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.get_DebugName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Operations::InitializationOperation::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation::get_DebugName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb04ce64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb04cea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation::*)(::UnityEngine::Localization::Settings::LocalizationSettings*)>(&::UnityEngine::Localization::Operations::InitializationOperation::Init)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb04d040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizationSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation::Execute)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb04d0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.LoadLocales
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation::LoadLocales)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb04d220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"LoadLocales", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.CheckOperationSucceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Operations::InitializationOperation::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::StringW)>(&::UnityEngine::Localization::Operations::InitializationOperation::CheckOperationSucceeded)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb04d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"CheckOperationSucceeded", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.LoadLocalesCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>)>(&::UnityEngine::Localization::Operations::InitializationOperation::LoadLocalesCompleted)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb04d36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"LoadLocalesCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.PreloadTables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation::PreloadTables)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0xb04d548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"PreloadTables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.PreloadTablesCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation::PreloadTablesCompleted)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb04d9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"PreloadTablesCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.PostInitializeExtensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation::PostInitializeExtensions)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0xb04db7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"PostInitializeExtensions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.FinishInitializing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::Localization::Operations::InitializationOperation::FinishInitializing)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb04ded4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"FinishInitializing", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.FinishInitializing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation::*)(bool, ::StringW)>(&::UnityEngine::Localization::Operations::InitializationOperation::FinishInitializing)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb04d4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"FinishInitializing", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation::Destroy)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb04df3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.__ctor_b__18_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::Localization::Operations::InitializationOperation::__ctor_b__18_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb04e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"<.ctor>b__18_0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation.__ctor_b__18_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::Localization::Operations::InitializationOperation::__ctor_b__18_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb04e124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"<.ctor>b__18_1", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_UnloadBundlesOperationHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnloadBundlesOperationHandle;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_UnloadBundlesOperationHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnloadBundlesOperationHandle;
}
constexpr void UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_set_m_UnloadBundlesOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UnloadBundlesOperationHandle = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_LoadLocales()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadLocales;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_LoadLocales() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadLocales;
}
constexpr void UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_set_m_LoadLocales(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadLocales = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>>*& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_LoadLocalesCompletedAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadLocalesCompletedAction;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>>* const& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_LoadLocalesCompletedAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadLocalesCompletedAction;
}
constexpr void UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_set_m_LoadLocalesCompletedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadLocalesCompletedAction = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_FinishPreloadingTablesAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FinishPreloadingTablesAction;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_FinishPreloadingTablesAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FinishPreloadingTablesAction;
}
constexpr void UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_set_m_FinishPreloadingTablesAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FinishPreloadingTablesAction = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> const& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr void UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_set_m_Settings(::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Settings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_LoadDatabasesOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadDatabasesOperations;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_LoadDatabasesOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadDatabasesOperations;
}
constexpr void UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_set_m_LoadDatabasesOperations(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadDatabasesOperations = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_PreloadDatabasesOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadDatabasesOperation;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_PreloadDatabasesOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadDatabasesOperation;
}
constexpr void UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_set_m_PreloadDatabasesOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreloadDatabasesOperation = value;
}
constexpr int32_t& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_RemainingSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RemainingSteps;
}
constexpr int32_t const& UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_get_m_RemainingSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RemainingSteps;
}
constexpr void UnityEngine::Localization::Operations::InitializationOperation::__cordl_internal_set_m_RemainingSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RemainingSteps = value;
}
inline void UnityEngine::Localization::Operations::InitializationOperation::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::InitializationOperation*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::InitializationOperation*>*, "Pool", ::UnityEngine::Localization::Operations::InitializationOperation*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::InitializationOperation*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::InitializationOperation*>* UnityEngine::Localization::Operations::InitializationOperation::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::InitializationOperation*>*, "Pool", ::UnityEngine::Localization::Operations::InitializationOperation*>();
}
inline float_t UnityEngine::Localization::Operations::InitializationOperation::get_Progress()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::Operations::InitializationOperation::get_DebugName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::InitializationOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::InitializationOperation::Init(::UnityEngine::Localization::Settings::LocalizationSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizationSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void UnityEngine::Localization::Operations::InitializationOperation::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::InitializationOperation::LoadLocales()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"LoadLocales", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::Operations::InitializationOperation::CheckOperationSucceeded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle, ::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"CheckOperationSucceeded", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handle, errorMessage);
}
inline void UnityEngine::Localization::Operations::InitializationOperation::LoadLocalesCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>  operationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"LoadLocalesCompleted", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationHandle);
}
inline void UnityEngine::Localization::Operations::InitializationOperation::PreloadTables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"PreloadTables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::InitializationOperation::PreloadTablesCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"PreloadTablesCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::InitializationOperation::PostInitializeExtensions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"PostInitializeExtensions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::InitializationOperation::FinishInitializing(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"FinishInitializing", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void UnityEngine::Localization::Operations::InitializationOperation::FinishInitializing(bool  success, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"FinishInitializing", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, error);
}
inline void UnityEngine::Localization::Operations::InitializationOperation::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::InitializationOperation::__ctor_b__18_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"<.ctor>b__18_0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void UnityEngine::Localization::Operations::InitializationOperation::__ctor_b__18_1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation*>(),
                        {"<.ctor>b__18_1", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::UnityEngine::Localization::Operations::InitializationOperation* UnityEngine::Localization::Operations::InitializationOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::InitializationOperation*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Operations::InitializationOperation::InitializationOperation()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation___c::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04e6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation___c.__cctor_b__30_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Operations::InitializationOperation* (::UnityEngine::Localization::Operations::InitializationOperation___c::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation___c::__cctor_b__30_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb04e6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation___c*>(),
                        {"<.cctor>b__30_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Operations::InitializationOperation___c::setStaticF___9(::UnityEngine::Localization::Operations::InitializationOperation___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Operations::InitializationOperation___c*, "<>9", ::UnityEngine::Localization::Operations::InitializationOperation___c*>(std::forward<::UnityEngine::Localization::Operations::InitializationOperation___c*>(value));
}
inline ::UnityEngine::Localization::Operations::InitializationOperation___c* UnityEngine::Localization::Operations::InitializationOperation___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Operations::InitializationOperation___c*, "<>9", ::UnityEngine::Localization::Operations::InitializationOperation___c*>();
}
inline void UnityEngine::Localization::Operations::InitializationOperation___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Operations::InitializationOperation* UnityEngine::Localization::Operations::InitializationOperation___c::__cctor_b__30_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation___c*>(),
                        {"<.cctor>b__30_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Operations::InitializationOperation*>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Operations::InitializationOperation___c* UnityEngine::Localization::Operations::InitializationOperation___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::InitializationOperation___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Operations::InitializationOperation___c::InitializationOperation___c()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb04e128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::Execute)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xb04e220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation.OnOperationCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::*)(::UnityEngine::AsyncOperation*)>(&::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::OnOperationCompleted)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb04e514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>(),
                        {"OnOperationCompleted", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation.InvokeWaitForCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb04e5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::*)()>(&::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::Destroy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb04e618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>(), 29}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::__cordl_internal_get_m_OperationCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OperationCompleted;
}
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::__cordl_internal_get_m_OperationCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OperationCompleted;
}
constexpr void UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::__cordl_internal_set_m_OperationCompleted(::System::Action_1<::UnityEngine::AsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OperationCompleted = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AsyncOperation*>*& UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::__cordl_internal_get_m_UnloadBundleOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnloadBundleOperations;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AsyncOperation*>* const& UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::__cordl_internal_get_m_UnloadBundleOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnloadBundleOperations;
}
constexpr void UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::__cordl_internal_set_m_UnloadBundleOperations(::System::Collections::Generic::List_1<::UnityEngine::AsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UnloadBundleOperations = value;
}
inline void UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::Execute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::OnOperationCompleted(::UnityEngine::AsyncOperation*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>(),
                        {"OnOperationCompleted", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline bool UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::InvokeWaitForCompletion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation* UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation::InitializationOperation_UnloadBundlesOperation()   {
}
