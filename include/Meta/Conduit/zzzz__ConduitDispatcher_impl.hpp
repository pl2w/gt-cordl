#pragma once
// IWYU pragma private; include "Meta/Conduit/ConduitDispatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Conduit/zzzz__ConduitDispatcher_def.hpp"
#include "Meta/Conduit/zzzz__ConduitDispatcher__Initialize_d__11_def.hpp"
#include "Meta/Conduit/zzzz__ConduitDispatcher_def.hpp"
#include "Meta/Conduit/zzzz__IConduitDispatcher_def.hpp"
#include "Meta/Conduit/zzzz__IInstanceResolver_def.hpp"
#include "Meta/Conduit/zzzz__IManifestLoader_def.hpp"
#include "Meta/Conduit/zzzz__IParameterProvider_def.hpp"
#include "Meta/Conduit/zzzz__InvocationContext_def.hpp"
#include "Meta/Conduit/zzzz__Manifest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__ISet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::ConduitDispatcher.get_Manifest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Conduit::Manifest* (::Meta::Conduit::ConduitDispatcher::*)()>(&::Meta::Conduit::ConduitDispatcher::get_Manifest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1b7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {"get_Manifest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitDispatcher.set_Manifest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ConduitDispatcher::*)(::Meta::Conduit::Manifest*)>(&::Meta::Conduit::ConduitDispatcher::set_Manifest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1b7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {"set_Manifest", {}, {::i2c::type_of<::Meta::Conduit::Manifest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ConduitDispatcher::*)(::Meta::Conduit::IManifestLoader*, ::Meta::Conduit::IInstanceResolver*)>(&::Meta::Conduit::ConduitDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9e1b7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Conduit::IManifestLoader*>(), ::i2c::type_of<::Meta::Conduit::IInstanceResolver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitDispatcher.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Conduit::ConduitDispatcher::*)(::StringW)>(&::Meta::Conduit::ConduitDispatcher::Initialize)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9e1b8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitDispatcher.InvokeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ConduitDispatcher::*)(::Meta::Conduit::IParameterProvider*, ::StringW, bool, float_t, bool)>(&::Meta::Conduit::ConduitDispatcher::InvokeAction)> {
  constexpr static std::size_t size = 0x790;
  constexpr static std::size_t addrs = 0x9e1b9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {"InvokeAction", {}, {::i2c::type_of<::Meta::Conduit::IParameterProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitDispatcher.InvokeError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ConduitDispatcher::*)(::StringW, ::System::Exception*)>(&::Meta::Conduit::ConduitDispatcher::InvokeError)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x9e1c25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {"InvokeError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitDispatcher.InvokeMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ConduitDispatcher::*)(::Meta::Conduit::InvocationContext*, ::Meta::Conduit::IParameterProvider*, bool)>(&::Meta::Conduit::ConduitDispatcher::InvokeMethod)> {
  constexpr static std::size_t size = 0x964;
  constexpr static std::size_t addrs = 0x9e1c714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {"InvokeMethod", {}, {::i2c::type_of<::Meta::Conduit::InvocationContext*>(), ::i2c::type_of<::Meta::Conduit::IParameterProvider*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Conduit::Manifest*& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__Manifest_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Manifest_k__BackingField;
}
constexpr ::Meta::Conduit::Manifest* const& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__Manifest_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Manifest_k__BackingField;
}
constexpr void Meta::Conduit::ConduitDispatcher::__cordl_internal_set__Manifest_k__BackingField(::Meta::Conduit::Manifest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Manifest_k__BackingField = value;
}
constexpr ::Meta::Conduit::IManifestLoader*& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__manifestLoader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manifestLoader;
}
constexpr ::Meta::Conduit::IManifestLoader* const& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__manifestLoader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manifestLoader;
}
constexpr void Meta::Conduit::ConduitDispatcher::__cordl_internal_set__manifestLoader(::Meta::Conduit::IManifestLoader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____manifestLoader = value;
}
constexpr ::Meta::Conduit::IInstanceResolver*& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__instanceResolver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instanceResolver;
}
constexpr ::Meta::Conduit::IInstanceResolver* const& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__instanceResolver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instanceResolver;
}
constexpr void Meta::Conduit::ConduitDispatcher::__cordl_internal_set__instanceResolver(::Meta::Conduit::IInstanceResolver*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instanceResolver = value;
}
constexpr bool& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__isInitializing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitializing;
}
constexpr bool const& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__isInitializing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitializing;
}
constexpr void Meta::Conduit::ConduitDispatcher::__cordl_internal_set__isInitializing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInitializing = value;
}
constexpr bool& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr bool const& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr void Meta::Conduit::ConduitDispatcher::__cordl_internal_set__isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInitialized = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__parameterToRoleMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parameterToRoleMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__parameterToRoleMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parameterToRoleMap;
}
constexpr void Meta::Conduit::ConduitDispatcher::__cordl_internal_set__parameterToRoleMap(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parameterToRoleMap = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__ignoredActionIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoredActionIds;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& Meta::Conduit::ConduitDispatcher::__cordl_internal_get__ignoredActionIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoredActionIds;
}
constexpr void Meta::Conduit::ConduitDispatcher::__cordl_internal_set__ignoredActionIds(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ignoredActionIds = value;
}
inline ::Meta::Conduit::Manifest* Meta::Conduit::ConduitDispatcher::get_Manifest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {"get_Manifest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Conduit::Manifest*>(this, ___internal_method);
}
inline void Meta::Conduit::ConduitDispatcher::set_Manifest(::Meta::Conduit::Manifest*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {"set_Manifest", {}, {::i2c::type_of<::Meta::Conduit::Manifest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Conduit::ConduitDispatcher::_ctor(::Meta::Conduit::IManifestLoader*  manifestLoader, ::Meta::Conduit::IInstanceResolver*  instanceResolver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Conduit::IManifestLoader*>(), ::i2c::type_of<::Meta::Conduit::IInstanceResolver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manifestLoader, instanceResolver);
}
inline ::System::Threading::Tasks::Task* Meta::Conduit::ConduitDispatcher::Initialize(::StringW  manifestFilePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, manifestFilePath);
}
inline bool Meta::Conduit::ConduitDispatcher::InvokeAction(::Meta::Conduit::IParameterProvider*  parameterProvider, ::StringW  actionId, bool  relaxed, float_t  confidence, bool  partial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {"InvokeAction", {}, {::i2c::type_of<::Meta::Conduit::IParameterProvider*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, parameterProvider, actionId, relaxed, confidence, partial);
}
inline bool Meta::Conduit::ConduitDispatcher::InvokeError(::StringW  actionId, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {"InvokeError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionId, exception);
}
inline bool Meta::Conduit::ConduitDispatcher::InvokeMethod(::Meta::Conduit::InvocationContext*  invocationContext, ::Meta::Conduit::IParameterProvider*  parameterProvider, bool  relaxed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher*>(),
                        {"InvokeMethod", {}, {::i2c::type_of<::Meta::Conduit::InvocationContext*>(), ::i2c::type_of<::Meta::Conduit::IParameterProvider*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, invocationContext, parameterProvider, relaxed);
}
inline ::Meta::Conduit::ConduitDispatcher* Meta::Conduit::ConduitDispatcher::New_ctor(::Meta::Conduit::IManifestLoader*  manifestLoader, ::Meta::Conduit::IInstanceResolver*  instanceResolver)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::ConduitDispatcher*>(manifestLoader, instanceResolver));
}
/// @brief Convert operator to "::Meta::Conduit::IConduitDispatcher"
constexpr  Meta::Conduit::ConduitDispatcher::operator ::Meta::Conduit::IConduitDispatcher*() noexcept {
return static_cast<::Meta::Conduit::IConduitDispatcher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Conduit::IConduitDispatcher"
constexpr ::Meta::Conduit::IConduitDispatcher* Meta::Conduit::ConduitDispatcher::i___Meta__Conduit__IConduitDispatcher() noexcept {
return static_cast<::Meta::Conduit::IConduitDispatcher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Conduit::ConduitDispatcher::ConduitDispatcher()   {
}
//  Writing Method size for method: ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ConduitDispatcher_InvocationContextFilter::*)(::Meta::Conduit::IParameterProvider*, ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*, bool)>(&::Meta::Conduit::ConduitDispatcher_InvocationContextFilter::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e1c54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Conduit::IParameterProvider*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter.ResolveInvocationContexts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>* (::Meta::Conduit::ConduitDispatcher_InvocationContextFilter::*)(::StringW, float_t, bool)>(&::Meta::Conduit::ConduitDispatcher_InvocationContextFilter::ResolveInvocationContexts)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9e1c5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*>(),
                        {"ResolveInvocationContexts", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter.CompatibleInvocationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ConduitDispatcher_InvocationContextFilter::*)(::Meta::Conduit::InvocationContext*, float_t, bool)>(&::Meta::Conduit::ConduitDispatcher_InvocationContextFilter::CompatibleInvocationContext)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x9e1d7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*>(),
                        {"CompatibleInvocationContext", {}, {::i2c::type_of<::Meta::Conduit::InvocationContext*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter.ResolveByType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ConduitDispatcher_InvocationContextFilter::*)(::Meta::Conduit::InvocationContext*, ::ArrayW<::System::Reflection::ParameterInfo*>, ::System::Collections::Generic::ICollection_1<::StringW>*, ::System::Collections::Generic::ISet_1<::System::Type*>*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::Conduit::ConduitDispatcher_InvocationContextFilter::ResolveByType)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x9e1dc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*>(),
                        {"ResolveByType", {}, {::i2c::type_of<::Meta::Conduit::InvocationContext*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::ISet_1<::System::Type*>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*& Meta::Conduit::ConduitDispatcher_InvocationContextFilter::__cordl_internal_get__actionContexts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionContexts;
}
constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>* const& Meta::Conduit::ConduitDispatcher_InvocationContextFilter::__cordl_internal_get__actionContexts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionContexts;
}
constexpr void Meta::Conduit::ConduitDispatcher_InvocationContextFilter::__cordl_internal_set__actionContexts(::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____actionContexts = value;
}
constexpr ::Meta::Conduit::IParameterProvider*& Meta::Conduit::ConduitDispatcher_InvocationContextFilter::__cordl_internal_get__parameterProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parameterProvider;
}
constexpr ::Meta::Conduit::IParameterProvider* const& Meta::Conduit::ConduitDispatcher_InvocationContextFilter::__cordl_internal_get__parameterProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parameterProvider;
}
constexpr void Meta::Conduit::ConduitDispatcher_InvocationContextFilter::__cordl_internal_set__parameterProvider(::Meta::Conduit::IParameterProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parameterProvider = value;
}
constexpr bool& Meta::Conduit::ConduitDispatcher_InvocationContextFilter::__cordl_internal_get__relaxed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relaxed;
}
constexpr bool const& Meta::Conduit::ConduitDispatcher_InvocationContextFilter::__cordl_internal_get__relaxed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relaxed;
}
constexpr void Meta::Conduit::ConduitDispatcher_InvocationContextFilter::__cordl_internal_set__relaxed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relaxed = value;
}
inline void Meta::Conduit::ConduitDispatcher_InvocationContextFilter::_ctor(::Meta::Conduit::IParameterProvider*  parameterProvider, ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*  actionContexts, bool  relaxed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Conduit::IParameterProvider*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameterProvider, actionContexts, relaxed);
}
inline ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>* Meta::Conduit::ConduitDispatcher_InvocationContextFilter::ResolveInvocationContexts(::StringW  actionId, float_t  confidence, bool  partial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*>(),
                        {"ResolveInvocationContexts", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>(this, ___internal_method, actionId, confidence, partial);
}
inline bool Meta::Conduit::ConduitDispatcher_InvocationContextFilter::CompatibleInvocationContext(::Meta::Conduit::InvocationContext*  invocationContext, float_t  confidence, bool  partial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*>(),
                        {"CompatibleInvocationContext", {}, {::i2c::type_of<::Meta::Conduit::InvocationContext*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, invocationContext, confidence, partial);
}
inline bool Meta::Conduit::ConduitDispatcher_InvocationContextFilter::ResolveByType(::Meta::Conduit::InvocationContext*  invocationContext, ::ArrayW<::System::Reflection::ParameterInfo*>  parameters, ::System::Collections::Generic::ICollection_1<::StringW>*  exactMatches, ::System::Collections::Generic::ISet_1<::System::Type*>*  actualTypes, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameterMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*>(),
                        {"ResolveByType", {}, {::i2c::type_of<::Meta::Conduit::InvocationContext*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::ISet_1<::System::Type*>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, invocationContext, parameters, exactMatches, actualTypes, parameterMap);
}
inline ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter* Meta::Conduit::ConduitDispatcher_InvocationContextFilter::New_ctor(::Meta::Conduit::IParameterProvider*  parameterProvider, ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*  actionContexts, bool  relaxed)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*>(parameterProvider, actionContexts, relaxed));
}
// Ctor Parameters []
constexpr ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter::ConduitDispatcher_InvocationContextFilter()   {
}
//  Writing Method size for method: ::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::*)()>(&::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1e118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0._ResolveByType_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::*)(::StringW)>(&::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::_ResolveByType_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9e1e140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0*>(),
                        {"<ResolveByType>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::ICollection_1<::StringW>*& Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::__cordl_internal_get_exactMatches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactMatches;
}
constexpr ::System::Collections::Generic::ICollection_1<::StringW>* const& Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::__cordl_internal_get_exactMatches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exactMatches;
}
constexpr void Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::__cordl_internal_set_exactMatches(::System::Collections::Generic::ICollection_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exactMatches = value;
}
constexpr ::System::Func_2<::StringW,bool>*& Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Func_2<::StringW,bool>* const& Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::__cordl_internal_set___9__0(::System::Func_2<::StringW,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
inline void Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::_ResolveByType_b__0(::StringW  parameterName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0*>(),
                        {"<ResolveByType>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, parameterName);
}
inline ::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0* Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::*)()>(&::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1d7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0._ResolveInvocationContexts_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::*)(::Meta::Conduit::InvocationContext*)>(&::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::_ResolveInvocationContexts_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e1e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0*>(),
                        {"<ResolveInvocationContexts>b__0", {}, {::i2c::type_of<::Meta::Conduit::InvocationContext*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*& Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter* const& Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::__cordl_internal_set___4__this(::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::__cordl_internal_get_confidence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidence;
}
constexpr float_t const& Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::__cordl_internal_get_confidence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidence;
}
constexpr void Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::__cordl_internal_set_confidence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confidence = value;
}
constexpr bool& Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::__cordl_internal_get_partial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partial;
}
constexpr bool const& Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::__cordl_internal_get_partial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partial;
}
constexpr void Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::__cordl_internal_set_partial(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partial = value;
}
inline void Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::_ResolveInvocationContexts_b__0(::Meta::Conduit::InvocationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0*>(),
                        {"<ResolveInvocationContexts>b__0", {}, {::i2c::type_of<::Meta::Conduit::InvocationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline ::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0* Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0()   {
}
