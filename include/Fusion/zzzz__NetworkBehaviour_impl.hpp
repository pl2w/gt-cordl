#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour.hpp"
#include "Fusion/zzzz__INetworkInput_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ChangeDetector_PropertyData_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ChangeDetector_Source_impl.hpp"
#include "Fusion/zzzz__RpcInvokeData_impl.hpp"
#include "Fusion/zzzz__SimulationBehaviour_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "System/Reflection/zzzz__PropertyInfo_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__IDespawned_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
#include "Fusion/zzzz__ISpawned_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourBuffer_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourId_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourUtils_ArrayInitializer_1_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourUtils_DictionaryInitializer_2_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ArrayReader_1_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_BehaviourReader_1_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ChangeDetector_Enumerable_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ChangeDetector_Enumerator_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ChangeDetector_PropertyData_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ChangeDetector_Source_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_DictionaryReader_2_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_LinkListReader_1_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_PropertyReader_1_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkBehaviour_ChangeDetector.HasChangeCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Fusion::NetworkBehaviour_ChangeDetector::HasChangeCallbacks)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5f7f700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"HasChangeCallbacks", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_ChangeDetector.GetPropertyMappping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData> (*)(::System::Type*)>(&::Fusion::NetworkBehaviour_ChangeDetector::GetPropertyMappping)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5f8110c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"GetPropertyMappping", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_ChangeDetector.AddPropertiesToMappingForType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>*, ::System::Reflection::BindingFlags, ::by_ref<bool>)>(&::Fusion::NetworkBehaviour_ChangeDetector::AddPropertiesToMappingForType)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x5f81448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"AddPropertiesToMappingForType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_ChangeDetector.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour_ChangeDetector::*)()>(&::Fusion::NetworkBehaviour_ChangeDetector::Finalize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f81b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_ChangeDetector.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour_ChangeDetector::*)(::Fusion::NetworkBehaviour*, ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source, bool)>(&::Fusion::NetworkBehaviour_ChangeDetector::Init)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5f801ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"Init", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_ChangeDetector.DetectChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable (::Fusion::NetworkBehaviour_ChangeDetector::*)(::Fusion::NetworkBehaviour*, ::by_ref<::Fusion::NetworkBehaviourBuffer>, ::by_ref<::Fusion::NetworkBehaviourBuffer>, bool)>(&::Fusion::NetworkBehaviour_ChangeDetector::DetectChanges)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f81c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"DetectChanges", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_ChangeDetector.DetectChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable (::Fusion::NetworkBehaviour_ChangeDetector::*)(::Fusion::NetworkBehaviour*, bool)>(&::Fusion::NetworkBehaviour_ChangeDetector::DetectChanges)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f7f630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"DetectChanges", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_ChangeDetector.DetectChangesInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable (::Fusion::NetworkBehaviour_ChangeDetector::*)(::Fusion::NetworkBehaviour*, ::by_ref<::Fusion::NetworkBehaviourBuffer>, ::by_ref<::Fusion::NetworkBehaviourBuffer>, bool)>(&::Fusion::NetworkBehaviour_ChangeDetector::DetectChangesInternal)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x5f81c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"DetectChangesInternal", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_ChangeDetector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour_ChangeDetector::*)()>(&::Fusion::NetworkBehaviour_ChangeDetector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f801e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<int32_t>& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance;
}
constexpr ::System::Nullable_1<int32_t> const& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance;
}
constexpr void Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_set__instance(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instance = value;
}
constexpr ::ArrayW<int32_t>& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__words()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____words;
}
constexpr ::ArrayW<int32_t> const& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__words() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____words;
}
constexpr void Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_set__words(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____words = value;
}
constexpr int32_t*& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__wordsPrevious()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wordsPrevious;
}
constexpr int32_t* const& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__wordsPrevious() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wordsPrevious;
}
constexpr void Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_set__wordsPrevious(int32_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wordsPrevious = value;
}
constexpr ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source const& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_set__source(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr ::Fusion::Tick& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__sourceTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceTick;
}
constexpr ::Fusion::Tick const& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__sourceTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceTick;
}
constexpr void Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_set__sourceTick(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceTick = value;
}
constexpr ::ArrayW<::StringW>& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__changed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changed;
}
constexpr ::ArrayW<::StringW> const& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__changed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changed;
}
constexpr void Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_set__changed(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____changed = value;
}
constexpr ::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__changedProperty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changedProperty;
}
constexpr ::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData> const& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get__changedProperty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changedProperty;
}
constexpr void Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_set__changedProperty(::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____changedProperty = value;
}
constexpr bool& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get_InvokeCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvokeCallbacks;
}
constexpr bool const& Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_get_InvokeCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvokeCallbacks;
}
constexpr void Fusion::NetworkBehaviour_ChangeDetector::__cordl_internal_set_InvokeCallbacks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InvokeCallbacks = value;
}
inline void Fusion::NetworkBehaviour_ChangeDetector::setStaticF__propertyMappings(::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>>*, "_propertyMappings", ::Fusion::NetworkBehaviour_ChangeDetector*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>>* Fusion::NetworkBehaviour_ChangeDetector::getStaticF__propertyMappings()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>>*, "_propertyMappings", ::Fusion::NetworkBehaviour_ChangeDetector*>();
}
inline void Fusion::NetworkBehaviour_ChangeDetector::setStaticF__hasChangeCallbacks(::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*, "_hasChangeCallbacks", ::Fusion::NetworkBehaviour_ChangeDetector*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>* Fusion::NetworkBehaviour_ChangeDetector::getStaticF__hasChangeCallbacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*, "_hasChangeCallbacks", ::Fusion::NetworkBehaviour_ChangeDetector*>();
}
inline bool Fusion::NetworkBehaviour_ChangeDetector::HasChangeCallbacks(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"HasChangeCallbacks", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::NetworkBehaviour*>)
inline ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper* Fusion::NetworkBehaviour_ChangeDetector::GetWrapperPrev(::System::Reflection::MethodInfo*  methodInfo)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                    {"GetWrapperPrev", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*>(nullptr, ___internal_method, methodInfo);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::NetworkBehaviour*>)
inline ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper* Fusion::NetworkBehaviour_ChangeDetector::GetWrapper(::System::Reflection::MethodInfo*  methodInfo)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                    {"GetWrapper", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*>(nullptr, ___internal_method, methodInfo);
}
inline ::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData> Fusion::NetworkBehaviour_ChangeDetector::GetPropertyMappping(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"GetPropertyMappping", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>>(nullptr, ___internal_method, type);
}
inline void Fusion::NetworkBehaviour_ChangeDetector::AddPropertiesToMappingForType(::System::Type*  type, ::System::Collections::Generic::List_1<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>*  result, ::System::Reflection::BindingFlags  bindingFlags, ::by_ref<bool>  hasChangeCallbacks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"AddPropertiesToMappingForType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, result, bindingFlags, hasChangeCallbacks);
}
inline void Fusion::NetworkBehaviour_ChangeDetector::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkBehaviour_ChangeDetector::Init(::Fusion::NetworkBehaviour*  networkBehaviour, ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source  source, bool  copyInitial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"Init", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkBehaviour, source, copyInitial);
}
inline ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable Fusion::NetworkBehaviour_ChangeDetector::DetectChanges(::Fusion::NetworkBehaviour*  b, ::by_ref<::Fusion::NetworkBehaviourBuffer>  previous, ::by_ref<::Fusion::NetworkBehaviourBuffer>  current, bool  copyChanges)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"DetectChanges", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable>(this, ___internal_method, b, previous, current, copyChanges);
}
inline ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable Fusion::NetworkBehaviour_ChangeDetector::DetectChanges(::Fusion::NetworkBehaviour*  b, bool  copyChanges)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"DetectChanges", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable>(this, ___internal_method, b, copyChanges);
}
inline ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable Fusion::NetworkBehaviour_ChangeDetector::DetectChangesInternal(::Fusion::NetworkBehaviour*  b, ::by_ref<::Fusion::NetworkBehaviourBuffer>  previous, ::by_ref<::Fusion::NetworkBehaviourBuffer>  current, bool  copyChanges)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {"DetectChangesInternal", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable>(this, ___internal_method, b, previous, current, copyChanges);
}
inline void Fusion::NetworkBehaviour_ChangeDetector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ChangeDetector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkBehaviour_ChangeDetector* Fusion::NetworkBehaviour_ChangeDetector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkBehaviour_ChangeDetector*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkBehaviour_ChangeDetector::NetworkBehaviour_ChangeDetector()   {
}
//  Writing Method size for method: ::Fusion::NetworkBehaviour.get_StateBufferIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::get_StateBufferIsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f7f19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_StateBufferIsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.get_StateBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviourBuffer (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::get_StateBuffer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f7f1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_StateBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.get_WordInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<int32_t,int32_t> (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::get_WordInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f7f1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_WordInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.get_ChangedTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::get_ChangedTick)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f7f248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_ChangedTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviourId (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::get_Id)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f7f284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.get_HasInputAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::get_HasInputAuthority)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f7f2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_HasInputAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.get_HasStateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::get_HasStateAuthority)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f7f2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_HasStateAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.get_IsProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::get_IsProxy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f7f2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_IsProxy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.get_DynamicWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::get_DynamicWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7f304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.get_IsEditorWritable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::get_IsEditorWritable)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f7f30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_IsEditorWritable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.GetLocalAuthorityMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::GetLocalAuthorityMask)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f7f354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"GetLocalAuthorityMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.ReplicateTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)(::Fusion::PlayerRef, bool)>(&::Fusion::NetworkBehaviour::ReplicateTo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f7f42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"ReplicateTo", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.ReplicateToAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)(bool)>(&::Fusion::NetworkBehaviour::ReplicateToAll)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f7f458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"ReplicateToAll", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.CopyStateFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)(::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkBehaviour::CopyStateFrom)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f7f47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"CopyStateFrom", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.FixedUpdateNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::FixedUpdateNetwork)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f7f590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.ResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::ResetState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f7f594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"ResetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)(bool)>(&::Fusion::NetworkBehaviour::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f7f5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f7f5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.PreRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::PreRender)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f7f5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.PreSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::PreSpawned)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f7f65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"PreSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.Spawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::Spawned)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f7f884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.Despawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)(::Fusion::NetworkRunner*, bool)>(&::Fusion::NetworkBehaviour::Despawned)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f7f888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.GetReadersForType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviour_ReadersForType* (*)(::System::Type*)>(&::Fusion::NetworkBehaviour::GetReadersForType)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5f7f88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"GetReadersForType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.IsArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Fusion::NetworkBehaviour::IsArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f7fa9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"IsArray", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.IsList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Fusion::NetworkBehaviour::IsList)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f7fb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"IsList", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.IsDict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Fusion::NetworkBehaviour::IsDict)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f7fc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"IsDict", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.GetPropertyReaderData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviour_PropertyReaderData* (*)(::Fusion::NetworkBehaviour_ReadersForType*, ::StringW, ::System::Type*)>(&::Fusion::NetworkBehaviour::GetPropertyReaderData)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x5f7fcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"GetPropertyReaderData", {}, {::i2c::type_of<::Fusion::NetworkBehaviour_ReadersForType*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.GetChangeDetector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviour_ChangeDetector* (::Fusion::NetworkBehaviour::*)(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source, bool)>(&::Fusion::NetworkBehaviour::GetChangeDetector)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f7f800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"GetChangeDetector", {}, {::i2c::type_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.TryGetSnapshotsBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviour::*)(::by_ref<::Fusion::NetworkBehaviourBuffer>, ::by_ref<::Fusion::NetworkBehaviourBuffer>, ::by_ref<float_t>)>(&::Fusion::NetworkBehaviour::TryGetSnapshotsBuffers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f80458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"TryGetSnapshotsBuffers", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.ReplicateTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviour::*)(::Fusion::PlayerRef)>(&::Fusion::NetworkBehaviour::ReplicateTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f804cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.NetworkSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::NetworkRunner*, ::Fusion::NetworkBehaviour*, uint8_t*)>(&::Fusion::NetworkBehaviour::NetworkSerialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f804d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"NetworkSerialize", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.NetworkDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::NetworkRunner*, uint8_t*, ::by_ref<::Fusion::NetworkBehaviour*>)>(&::Fusion::NetworkBehaviour::NetworkDeserialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f8050c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"NetworkDeserialize", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviour*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.NetworkWrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviourId (*)(::Fusion::NetworkRunner*, ::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkBehaviour::NetworkWrap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f80544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"NetworkWrap", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.NetworkWrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviourId (*)(::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkBehaviour::NetworkWrap)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f8054c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"NetworkWrap", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.NetworkUnwrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkBehaviour> (*)(::Fusion::NetworkRunner*, ::Fusion::NetworkBehaviourId)>(&::Fusion::NetworkBehaviour::NetworkUnwrap)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f80590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"NetworkUnwrap", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.op_Implicit___Fusion__NetworkBehaviourId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviourId (*)(::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkBehaviour::op_Implicit___Fusion__NetworkBehaviourId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f80700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.InvokeWeavedCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkBehaviour::InvokeWeavedCode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f80780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"InvokeWeavedCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.MakeOwned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)(::Fusion::NetworkRunner*, ::Fusion::NetworkObject*, int32_t)>(&::Fusion::NetworkBehaviour::MakeOwned)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f80784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"MakeOwned", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.MakeUnowned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::MakeUnowned)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f807c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"MakeUnowned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBehaviour::*)(::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__GetElementHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f807f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.GetElementHashCode", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8087c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkBehaviour> (::Fusion::NetworkBehaviour::*)(uint8_t*, int32_t)>(&::Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__Read)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f80884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityW<::Fusion::NetworkBehaviour>> (::Fusion::NetworkBehaviour::*)(uint8_t*, int32_t)>(&::Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__ReadRef)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f80894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)(uint8_t*, int32_t, ::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__Write)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f808e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.Fusion_IElementReaderWriter_Fusion_NetworkObject__GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkObject__GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8090c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkObject>.GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.Fusion_IElementReaderWriter_Fusion_NetworkObject__GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBehaviour::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkObject__GetElementHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f80914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkObject>.GetElementHashCode", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.Fusion_IElementReaderWriter_Fusion_NetworkObject__Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::NetworkObject> (::Fusion::NetworkBehaviour::*)(uint8_t*, int32_t)>(&::Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkObject__Read)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f80990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkObject>.Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.Fusion_IElementReaderWriter_Fusion_NetworkObject__ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityW<::Fusion::NetworkObject>> (::Fusion::NetworkBehaviour::*)(uint8_t*, int32_t)>(&::Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkObject__ReadRef)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f809b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkObject>.ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour.Fusion_IElementReaderWriter_Fusion_NetworkObject__Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)(uint8_t*, int32_t, ::Fusion::NetworkObject*)>(&::Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkObject__Write)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f80a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkObject>.Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour::*)()>(&::Fusion::NetworkBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f80a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkBehaviour_ReadersForType*& Fusion::NetworkBehaviour::__cordl_internal_get__readersForType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readersForType;
}
constexpr ::Fusion::NetworkBehaviour_ReadersForType* const& Fusion::NetworkBehaviour::__cordl_internal_get__readersForType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readersForType;
}
constexpr void Fusion::NetworkBehaviour::__cordl_internal_set__readersForType(::Fusion::NetworkBehaviour_ReadersForType*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readersForType = value;
}
constexpr int32_t*& Fusion::NetworkBehaviour::__cordl_internal_get_Ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ptr;
}
constexpr int32_t* const& Fusion::NetworkBehaviour::__cordl_internal_get_Ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ptr;
}
constexpr void Fusion::NetworkBehaviour::__cordl_internal_set_Ptr(int32_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Ptr = value;
}
constexpr bool& Fusion::NetworkBehaviour::__cordl_internal_get_InvokeRpc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvokeRpc;
}
constexpr bool const& Fusion::NetworkBehaviour::__cordl_internal_get_InvokeRpc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvokeRpc;
}
constexpr void Fusion::NetworkBehaviour::__cordl_internal_set_InvokeRpc(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InvokeRpc = value;
}
constexpr ::ArrayW<::Fusion::RpcInvokeData>& Fusion::NetworkBehaviour::__cordl_internal_get_RpcCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RpcCache;
}
constexpr ::ArrayW<::Fusion::RpcInvokeData> const& Fusion::NetworkBehaviour::__cordl_internal_get_RpcCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RpcCache;
}
constexpr void Fusion::NetworkBehaviour::__cordl_internal_set_RpcCache(::ArrayW<::Fusion::RpcInvokeData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RpcCache = value;
}
constexpr int32_t& Fusion::NetworkBehaviour::__cordl_internal_get_ObjectIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectIndex;
}
constexpr int32_t const& Fusion::NetworkBehaviour::__cordl_internal_get_ObjectIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectIndex;
}
constexpr void Fusion::NetworkBehaviour::__cordl_internal_set_ObjectIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ObjectIndex = value;
}
constexpr int32_t& Fusion::NetworkBehaviour::__cordl_internal_get_WordOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WordOffset;
}
constexpr int32_t const& Fusion::NetworkBehaviour::__cordl_internal_get_WordOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WordOffset;
}
constexpr void Fusion::NetworkBehaviour::__cordl_internal_set_WordOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WordOffset = value;
}
constexpr int32_t& Fusion::NetworkBehaviour::__cordl_internal_get_WordCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WordCount;
}
constexpr int32_t const& Fusion::NetworkBehaviour::__cordl_internal_get_WordCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WordCount;
}
constexpr void Fusion::NetworkBehaviour::__cordl_internal_set_WordCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WordCount = value;
}
constexpr bool& Fusion::NetworkBehaviour::__cordl_internal_get_DefaultReplicated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultReplicated;
}
constexpr bool const& Fusion::NetworkBehaviour::__cordl_internal_get_DefaultReplicated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultReplicated;
}
constexpr void Fusion::NetworkBehaviour::__cordl_internal_set_DefaultReplicated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultReplicated = value;
}
constexpr ::Fusion::NetworkBehaviour_ChangeDetector*& Fusion::NetworkBehaviour::__cordl_internal_get__onRenderCallbacksDetector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRenderCallbacksDetector;
}
constexpr ::Fusion::NetworkBehaviour_ChangeDetector* const& Fusion::NetworkBehaviour::__cordl_internal_get__onRenderCallbacksDetector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onRenderCallbacksDetector;
}
constexpr void Fusion::NetworkBehaviour::__cordl_internal_set__onRenderCallbacksDetector(::Fusion::NetworkBehaviour_ChangeDetector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onRenderCallbacksDetector = value;
}
inline void Fusion::NetworkBehaviour::setStaticF__readersByType(::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::NetworkBehaviour_ReadersForType*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::NetworkBehaviour_ReadersForType*>*, "_readersByType", ::Fusion::NetworkBehaviour*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::NetworkBehaviour_ReadersForType*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::NetworkBehaviour_ReadersForType*>* Fusion::NetworkBehaviour::getStaticF__readersByType()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::NetworkBehaviour_ReadersForType*>*, "_readersByType", ::Fusion::NetworkBehaviour*>();
}
inline bool Fusion::NetworkBehaviour::get_StateBufferIsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_StateBufferIsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::NetworkBehaviourBuffer Fusion::NetworkBehaviour::get_StateBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_StateBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviourBuffer>(this, ___internal_method);
}
inline ::System::ValueTuple_2<int32_t,int32_t> Fusion::NetworkBehaviour::get_WordInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_WordInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,int32_t>>(this, ___internal_method);
}
inline ::Fusion::Tick Fusion::NetworkBehaviour::get_ChangedTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_ChangedTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(this, ___internal_method);
}
inline ::Fusion::NetworkBehaviourId Fusion::NetworkBehaviour::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviourId>(this, ___internal_method);
}
inline bool Fusion::NetworkBehaviour::get_HasInputAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_HasInputAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkBehaviour::get_HasStateAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_HasStateAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::NetworkBehaviour::get_IsProxy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_IsProxy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Fusion::NetworkBehaviour::get_DynamicWordCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline bool Fusion::NetworkBehaviour::get_IsEditorWritable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"get_IsEditorWritable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Fusion::NetworkBehaviour::GetLocalAuthorityMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"GetLocalAuthorityMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::NetworkBehaviour::ReplicateTo(::Fusion::PlayerRef  player, bool  replicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"ReplicateTo", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, replicate);
}
inline void Fusion::NetworkBehaviour::ReplicateToAll(bool  replicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"ReplicateToAll", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, replicate);
}
inline void Fusion::NetworkBehaviour::CopyStateFrom(::Fusion::NetworkBehaviour*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"CopyStateFrom", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Fusion::NetworkBehaviour::FixedUpdateNetwork()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkBehaviour::ResetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"ResetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkBehaviour::CopyBackingFieldsToState(bool  firstTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstTime);
}
inline void Fusion::NetworkBehaviour::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkBehaviour::PreRender()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkBehaviour::PreSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"PreSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkBehaviour::Spawned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkBehaviour::Despawned(::Fusion::NetworkRunner*  runner, bool  hasState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hasState);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::by_ref<T> Fusion::NetworkBehaviour::ReinterpretState(int32_t  offset)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"ReinterpretState", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method, offset);
}
template<typename T>
inline ::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T> Fusion::NetworkBehaviour::GetBehaviourReader(::StringW  property)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetBehaviourReader", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T>>(this, ___internal_method, property);
}
template<typename T>
inline ::GlobalNamespace::NetworkBehaviour_ArrayReader_1<T> Fusion::NetworkBehaviour::GetArrayReader(::StringW  property)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetArrayReader", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviour_ArrayReader_1<T>>(this, ___internal_method, property);
}
template<typename T>
inline ::GlobalNamespace::NetworkBehaviour_LinkListReader_1<T> Fusion::NetworkBehaviour::GetLinkListReader(::StringW  property)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetLinkListReader", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviour_LinkListReader_1<T>>(this, ___internal_method, property);
}
template<typename K,typename V>
inline ::GlobalNamespace::NetworkBehaviour_DictionaryReader_2<K,V> Fusion::NetworkBehaviour::GetDictionaryReader(::StringW  property)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetDictionaryReader", {::i2c::class_of<K>(), ::i2c::class_of<V>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<K>(), ::i2c::class_of<V>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviour_DictionaryReader_2<K,V>>(this, ___internal_method, property);
}
template<typename T>
inline ::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T> Fusion::NetworkBehaviour::GetBehaviourReader(::Fusion::NetworkRunner*  runner, ::System::Type*  behaviourType, ::StringW  property)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetBehaviourReader", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T>>(nullptr, ___internal_method, runner, behaviourType, property);
}
template<typename TBehaviour,typename TProperty>
inline ::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<TProperty> Fusion::NetworkBehaviour::GetBehaviourReader(::Fusion::NetworkRunner*  runner, ::StringW  property)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetBehaviourReader", {::i2c::class_of<TBehaviour>(), ::i2c::class_of<TProperty>()}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TBehaviour>(), ::i2c::class_of<TProperty>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<TProperty>>(nullptr, ___internal_method, runner, property);
}
template<typename TBehaviour,typename TProperty>
requires(::cordl_internals::value_type_constraint<TProperty> && ::cordl_internals::default_constructor_constraint<TProperty>)
inline ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<TProperty> Fusion::NetworkBehaviour::GetPropertyReader(::StringW  property)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetPropertyReader", {::i2c::class_of<TBehaviour>(), ::i2c::class_of<TProperty>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TBehaviour>(), ::i2c::class_of<TProperty>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<TProperty>>(nullptr, ___internal_method, property);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T> Fusion::NetworkBehaviour::GetPropertyReader(::System::Type*  behaviourType, ::StringW  property)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetPropertyReader", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>>(nullptr, ___internal_method, behaviourType, property);
}
template<typename T>
inline ::GlobalNamespace::NetworkBehaviour_ArrayReader_1<T> Fusion::NetworkBehaviour::GetArrayReader(::System::Type*  behaviourType, ::StringW  property, ::Fusion::IElementReaderWriter_1<T>*  readerWriter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetArrayReader", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::IElementReaderWriter_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviour_ArrayReader_1<T>>(nullptr, ___internal_method, behaviourType, property, readerWriter);
}
template<typename K,typename V>
inline ::GlobalNamespace::NetworkBehaviour_DictionaryReader_2<K,V> Fusion::NetworkBehaviour::GetDictionaryReader(::System::Type*  behaviourType, ::StringW  property, ::Fusion::IElementReaderWriter_1<K>*  keyReaderWriter, ::Fusion::IElementReaderWriter_1<V>*  valueReaderWriter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetDictionaryReader", {::i2c::class_of<K>(), ::i2c::class_of<V>()}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::IElementReaderWriter_1<K>*>(), ::i2c::type_of<::Fusion::IElementReaderWriter_1<V>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<K>(), ::i2c::class_of<V>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviour_DictionaryReader_2<K,V>>(nullptr, ___internal_method, behaviourType, property, keyReaderWriter, valueReaderWriter);
}
template<typename T>
inline ::GlobalNamespace::NetworkBehaviour_LinkListReader_1<T> Fusion::NetworkBehaviour::GetLinkListReader(::System::Type*  behaviourType, ::StringW  property, ::Fusion::IElementReaderWriter_1<T>*  readerWriter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetLinkListReader", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::IElementReaderWriter_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviour_LinkListReader_1<T>>(nullptr, ___internal_method, behaviourType, property, readerWriter);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T> Fusion::NetworkBehaviour::GetPropertyReader(::StringW  property)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetPropertyReader", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>>(this, ___internal_method, property);
}
inline ::Fusion::NetworkBehaviour_ReadersForType* Fusion::NetworkBehaviour::GetReadersForType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"GetReadersForType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviour_ReadersForType*>(nullptr, ___internal_method, type);
}
inline bool Fusion::NetworkBehaviour::IsArray(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"IsArray", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Fusion::NetworkBehaviour::IsList(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"IsList", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Fusion::NetworkBehaviour::IsDict(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"IsDict", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T> Fusion::NetworkBehaviour::GetPropertyReader(::Fusion::NetworkBehaviour_ReadersForType*  readersForType, ::StringW  property)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetPropertyReader", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkBehaviour_ReadersForType*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>>(nullptr, ___internal_method, readersForType, property);
}
inline ::Fusion::NetworkBehaviour_PropertyReaderData* Fusion::NetworkBehaviour::GetPropertyReaderData(::Fusion::NetworkBehaviour_ReadersForType*  readersForType, ::StringW  property, ::System::Type*  typeExpected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"GetPropertyReaderData", {}, {::i2c::type_of<::Fusion::NetworkBehaviour_ReadersForType*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviour_PropertyReaderData*>(nullptr, ___internal_method, readersForType, property, typeExpected);
}
inline ::Fusion::NetworkBehaviour_ChangeDetector* Fusion::NetworkBehaviour::GetChangeDetector(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source  source, bool  copyInitial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"GetChangeDetector", {}, {::i2c::type_of<::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviour_ChangeDetector*>(this, ___internal_method, source, copyInitial);
}
inline bool Fusion::NetworkBehaviour::TryGetSnapshotsBuffers(::by_ref<::Fusion::NetworkBehaviourBuffer>  from, ::by_ref<::Fusion::NetworkBehaviourBuffer>  to, ::by_ref<float_t>  alpha)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"TryGetSnapshotsBuffers", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviourBuffer>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, from, to, alpha);
}
inline bool Fusion::NetworkBehaviour::ReplicateTo(::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Nullable_1<T> Fusion::NetworkBehaviour::GetInput()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetInput", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<T>>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Fusion::NetworkBehaviour::GetInput(::by_ref<T>  input)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"GetInput", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, input);
}
inline int32_t Fusion::NetworkBehaviour::NetworkSerialize(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkBehaviour*  obj, uint8_t*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"NetworkSerialize", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, runner, obj, data);
}
inline int32_t Fusion::NetworkBehaviour::NetworkDeserialize(::Fusion::NetworkRunner*  runner, uint8_t*  data, ::by_ref<::Fusion::NetworkBehaviour*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"NetworkDeserialize", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<::Fusion::NetworkBehaviour*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, runner, data, result);
}
inline ::Fusion::NetworkBehaviourId Fusion::NetworkBehaviour::NetworkWrap(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkBehaviour*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"NetworkWrap", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviourId>(nullptr, ___internal_method, runner, obj);
}
inline ::Fusion::NetworkBehaviourId Fusion::NetworkBehaviour::NetworkWrap(::Fusion::NetworkBehaviour*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"NetworkWrap", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviourId>(nullptr, ___internal_method, obj);
}
inline ::UnityW<::Fusion::NetworkBehaviour> Fusion::NetworkBehaviour::NetworkUnwrap(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkBehaviourId  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"NetworkUnwrap", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkBehaviour>>(nullptr, ___internal_method, runner, wrapper);
}
inline ::Fusion::NetworkBehaviourId Fusion::NetworkBehaviour::op_Implicit___Fusion__NetworkBehaviourId(::Fusion::NetworkBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviourId>(nullptr, ___internal_method, behaviour);
}
inline void Fusion::NetworkBehaviour::InvokeWeavedCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"InvokeWeavedCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::by_ref<T> Fusion::NetworkBehaviour::MakeRef()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"MakeRef", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::by_ref<T> Fusion::NetworkBehaviour::MakeRef(T  defaultValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"MakeRef", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(nullptr, ___internal_method, defaultValue);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::NetworkBehaviour::MakePtr()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"MakePtr", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Fusion::NetworkBehaviour::MakePtr(T  defaultValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"MakePtr", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, defaultValue);
}
template<typename T>
inline ::GlobalNamespace::NetworkBehaviourUtils_ArrayInitializer_1<T> Fusion::NetworkBehaviour::MakeInitializer(::ArrayW<T>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"MakeInitializer", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviourUtils_ArrayInitializer_1<T>>(nullptr, ___internal_method, array);
}
template<typename K,typename V>
inline ::GlobalNamespace::NetworkBehaviourUtils_DictionaryInitializer_2<K,V> Fusion::NetworkBehaviour::MakeInitializer(::System::Collections::Generic::Dictionary_2<K,V>*  dictionary)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                    {"MakeInitializer", {::i2c::class_of<K>(), ::i2c::class_of<V>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<K,V>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<K>(), ::i2c::class_of<V>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviourUtils_DictionaryInitializer_2<K,V>>(nullptr, ___internal_method, dictionary);
}
inline void Fusion::NetworkBehaviour::MakeOwned(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"MakeOwned", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, obj, index);
}
inline void Fusion::NetworkBehaviour::MakeUnowned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"MakeUnowned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__GetElementHashCode(::Fusion::NetworkBehaviour*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.GetElementHashCode", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, element);
}
inline int32_t Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::Fusion::NetworkBehaviour> Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkBehaviour>>(this, ___internal_method, data, index);
}
inline ::by_ref<::UnityW<::Fusion::NetworkBehaviour>> Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityW<::Fusion::NetworkBehaviour>>>(this, ___internal_method, data, index);
}
inline void Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__Write(uint8_t*  data, int32_t  index, ::Fusion::NetworkBehaviour*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, index, element);
}
inline int32_t Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkObject__GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkObject>.GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkObject__GetElementHashCode(::Fusion::NetworkObject*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkObject>.GetElementHashCode", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, element);
}
inline ::UnityW<::Fusion::NetworkObject> Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkObject__Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkObject>.Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::NetworkObject>>(this, ___internal_method, data, index);
}
inline ::by_ref<::UnityW<::Fusion::NetworkObject>> Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkObject__ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkObject>.ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityW<::Fusion::NetworkObject>>>(this, ___internal_method, data, index);
}
inline void Fusion::NetworkBehaviour::Fusion_IElementReaderWriter_Fusion_NetworkObject__Write(uint8_t*  data, int32_t  index, ::Fusion::NetworkObject*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {"Fusion.IElementReaderWriter<Fusion.NetworkObject>.Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, index, element);
}
inline void Fusion::NetworkBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkBehaviour* Fusion::NetworkBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkBehaviour*>());
}
/// @brief Convert operator to "::Fusion::ISpawned"
constexpr  Fusion::NetworkBehaviour::operator ::Fusion::ISpawned*() noexcept {
return static_cast<::Fusion::ISpawned*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::ISpawned"
constexpr ::Fusion::ISpawned* Fusion::NetworkBehaviour::i___Fusion__ISpawned() noexcept {
return static_cast<::Fusion::ISpawned*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::NetworkBehaviour::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::NetworkBehaviour::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IDespawned"
constexpr  Fusion::NetworkBehaviour::operator ::Fusion::IDespawned*() noexcept {
return static_cast<::Fusion::IDespawned*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IDespawned"
constexpr ::Fusion::IDespawned* Fusion::NetworkBehaviour::i___Fusion__IDespawned() noexcept {
return static_cast<::Fusion::IDespawned*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkObject>>"
constexpr  Fusion::NetworkBehaviour::operator ::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkObject>>*() noexcept {
return static_cast<::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkObject>>* Fusion::NetworkBehaviour::i___Fusion__IElementReaderWriter_1___UnityW___Fusion__NetworkObject__() noexcept {
return static_cast<::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkBehaviour>>"
constexpr  Fusion::NetworkBehaviour::operator ::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkBehaviour>>*() noexcept {
return static_cast<::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkBehaviour>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkBehaviour>>"
constexpr ::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkBehaviour>>* Fusion::NetworkBehaviour::i___Fusion__IElementReaderWriter_1___UnityW___Fusion__NetworkBehaviour__() noexcept {
return static_cast<::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkBehaviour>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkBehaviour::NetworkBehaviour()   {
}
template<typename T>
constexpr ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>*& Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1<T>::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename T>
constexpr ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>* const& Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1<T>::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename T>
constexpr void Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1<T>::__cordl_internal_set_callback(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
template<typename T>
inline void Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1<T>::_GetWrapperPrev_b__0(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::NetworkBehaviourBuffer  prev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1<T>*>(),
                        {"<GetWrapperPrev>b__0", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::NetworkBehaviourBuffer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour, prev);
}
template<typename T>
inline ::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1<T>* Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1<T>::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1()   {
}
template<typename T>
constexpr ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>*& Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1<T>::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename T>
constexpr ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>* const& Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1<T>::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename T>
constexpr void Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1<T>::__cordl_internal_set_callback(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
template<typename T>
inline void Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1<T>::_GetWrapper_b__0(::Fusion::NetworkBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1<T>*>(),
                        {"<GetWrapper>b__0", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour);
}
template<typename T>
inline ::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1<T>* Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1<T>::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1()   {
}
//  Writing Method size for method: ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f824ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::*)(::Fusion::NetworkBehaviour*)>(&::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f825f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*>(),
                    {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::*)(::Fusion::NetworkBehaviour*, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f82608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*>(),
                    {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::*)(::System::IAsyncResult*)>(&::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f82628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*>(),
                    {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::Invoke(::Fusion::NetworkBehaviour*  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline ::System::IAsyncResult* Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::BeginInvoke(::Fusion::NetworkBehaviour*  b, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, b, callback, object);
}
inline void Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper* Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper()   {
}
template<typename T>
inline void Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline void Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>::Invoke(T  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
template<typename T>
inline ::System::IAsyncResult* Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>::BeginInvoke(T  b, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, b, callback, object);
}
template<typename T>
inline void Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename T>
inline ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>* Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>::ChangeDetector_NetworkBehaviour_OnChangedCallback_1()   {
}
//  Writing Method size for method: ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f8232c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::*)(::Fusion::NetworkBehaviour*, ::Fusion::NetworkBehaviourBuffer)>(&::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f82438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*>(),
                    {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::*)(::Fusion::NetworkBehaviour*, ::Fusion::NetworkBehaviourBuffer, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f8244c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*>(),
                    {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::*)(::System::IAsyncResult*)>(&::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f824e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*>(),
                    {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::Invoke(::Fusion::NetworkBehaviour*  b, ::Fusion::NetworkBehaviourBuffer  prev)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b, prev);
}
inline ::System::IAsyncResult* Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::BeginInvoke(::Fusion::NetworkBehaviour*  b, ::Fusion::NetworkBehaviourBuffer  prev, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, b, prev, callback, object);
}
inline void Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper* Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper()   {
}
template<typename T>
inline void Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline void Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>::Invoke(T  b, ::Fusion::NetworkBehaviourBuffer  prev)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b, prev);
}
template<typename T>
inline ::System::IAsyncResult* Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>::BeginInvoke(T  b, ::Fusion::NetworkBehaviourBuffer  prev, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, b, prev, callback, object);
}
template<typename T>
inline void Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename T>
inline ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>* Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1()   {
}
//  Writing Method size for method: ::Fusion::NetworkBehaviour_ReadersForType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour_ReadersForType::*)()>(&::Fusion::NetworkBehaviour_ReadersForType::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f7fa14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ReadersForType*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Reflection::PropertyInfo*>& Fusion::NetworkBehaviour_ReadersForType::__cordl_internal_get_Properties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Properties;
}
constexpr ::ArrayW<::System::Reflection::PropertyInfo*> const& Fusion::NetworkBehaviour_ReadersForType::__cordl_internal_get_Properties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Properties;
}
constexpr void Fusion::NetworkBehaviour_ReadersForType::__cordl_internal_set_Properties(::ArrayW<::System::Reflection::PropertyInfo*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Properties = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::NetworkBehaviour_PropertyReaderData*>*& Fusion::NetworkBehaviour_ReadersForType::__cordl_internal_get_PropertyReaders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropertyReaders;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::NetworkBehaviour_PropertyReaderData*>* const& Fusion::NetworkBehaviour_ReadersForType::__cordl_internal_get_PropertyReaders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropertyReaders;
}
constexpr void Fusion::NetworkBehaviour_ReadersForType::__cordl_internal_set_PropertyReaders(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::NetworkBehaviour_PropertyReaderData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PropertyReaders = value;
}
inline void Fusion::NetworkBehaviour_ReadersForType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_ReadersForType*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkBehaviour_ReadersForType* Fusion::NetworkBehaviour_ReadersForType::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkBehaviour_ReadersForType*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkBehaviour_ReadersForType::NetworkBehaviour_ReadersForType()   {
}
//  Writing Method size for method: ::Fusion::NetworkBehaviour_PropertyReaderData.get_EqualityContract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::NetworkBehaviour_PropertyReaderData::*)()>(&::Fusion::NetworkBehaviour_PropertyReaderData::get_EqualityContract)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f80a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_PropertyReaderData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkBehaviour_PropertyReaderData::*)()>(&::Fusion::NetworkBehaviour_PropertyReaderData::ToString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f80abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_PropertyReaderData.PrintMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviour_PropertyReaderData::*)(::System::Text::StringBuilder*)>(&::Fusion::NetworkBehaviour_PropertyReaderData::PrintMembers)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5f80ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_PropertyReaderData.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkBehaviour_PropertyReaderData*, ::Fusion::NetworkBehaviour_PropertyReaderData*)>(&::Fusion::NetworkBehaviour_PropertyReaderData::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f80cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), ::i2c::type_of<::Fusion::NetworkBehaviour_PropertyReaderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_PropertyReaderData.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkBehaviour_PropertyReaderData*, ::Fusion::NetworkBehaviour_PropertyReaderData*)>(&::Fusion::NetworkBehaviour_PropertyReaderData::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f80d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), ::i2c::type_of<::Fusion::NetworkBehaviour_PropertyReaderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_PropertyReaderData.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBehaviour_PropertyReaderData::*)()>(&::Fusion::NetworkBehaviour_PropertyReaderData::GetHashCode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5f80d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_PropertyReaderData.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviour_PropertyReaderData::*)(::System::Object*)>(&::Fusion::NetworkBehaviour_PropertyReaderData::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f80e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_PropertyReaderData.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviour_PropertyReaderData::*)(::Fusion::NetworkBehaviour_PropertyReaderData*)>(&::Fusion::NetworkBehaviour_PropertyReaderData::Equals)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5f80ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_PropertyReaderData._Clone_$
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviour_PropertyReaderData* (::Fusion::NetworkBehaviour_PropertyReaderData::*)()>(&::Fusion::NetworkBehaviour_PropertyReaderData::_Clone_$)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f81064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_PropertyReaderData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour_PropertyReaderData::*)(::Fusion::NetworkBehaviour_PropertyReaderData*)>(&::Fusion::NetworkBehaviour_PropertyReaderData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f810bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkBehaviour_PropertyReaderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviour_PropertyReaderData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviour_PropertyReaderData::*)()>(&::Fusion::NetworkBehaviour_PropertyReaderData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f801dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkBehaviour_PropertyReaderData::__cordl_internal_get_Offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr int32_t const& Fusion::NetworkBehaviour_PropertyReaderData::__cordl_internal_get_Offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr void Fusion::NetworkBehaviour_PropertyReaderData::__cordl_internal_set_Offset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Offset = value;
}
constexpr int32_t& Fusion::NetworkBehaviour_PropertyReaderData::__cordl_internal_get_Capacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Capacity;
}
constexpr int32_t const& Fusion::NetworkBehaviour_PropertyReaderData::__cordl_internal_get_Capacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Capacity;
}
constexpr void Fusion::NetworkBehaviour_PropertyReaderData::__cordl_internal_set_Capacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Capacity = value;
}
constexpr ::System::Type*& Fusion::NetworkBehaviour_PropertyReaderData::__cordl_internal_get_KeyReaderWriterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyReaderWriterType;
}
constexpr ::System::Type* const& Fusion::NetworkBehaviour_PropertyReaderData::__cordl_internal_get_KeyReaderWriterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyReaderWriterType;
}
constexpr void Fusion::NetworkBehaviour_PropertyReaderData::__cordl_internal_set_KeyReaderWriterType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeyReaderWriterType = value;
}
constexpr ::System::Type*& Fusion::NetworkBehaviour_PropertyReaderData::__cordl_internal_get_ValueReaderWriterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueReaderWriterType;
}
constexpr ::System::Type* const& Fusion::NetworkBehaviour_PropertyReaderData::__cordl_internal_get_ValueReaderWriterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueReaderWriterType;
}
constexpr void Fusion::NetworkBehaviour_PropertyReaderData::__cordl_internal_set_ValueReaderWriterType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ValueReaderWriterType = value;
}
inline ::System::Type* Fusion::NetworkBehaviour_PropertyReaderData::get_EqualityContract()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW Fusion::NetworkBehaviour_PropertyReaderData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Fusion::NetworkBehaviour_PropertyReaderData::PrintMembers(::System::Text::StringBuilder*  builder)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, builder);
}
inline bool Fusion::NetworkBehaviour_PropertyReaderData::op_Inequality(::Fusion::NetworkBehaviour_PropertyReaderData*  left, ::Fusion::NetworkBehaviour_PropertyReaderData*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), ::i2c::type_of<::Fusion::NetworkBehaviour_PropertyReaderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Fusion::NetworkBehaviour_PropertyReaderData::op_Equality(::Fusion::NetworkBehaviour_PropertyReaderData*  left, ::Fusion::NetworkBehaviour_PropertyReaderData*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), ::i2c::type_of<::Fusion::NetworkBehaviour_PropertyReaderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t Fusion::NetworkBehaviour_PropertyReaderData::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Fusion::NetworkBehaviour_PropertyReaderData::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Fusion::NetworkBehaviour_PropertyReaderData::Equals(::Fusion::NetworkBehaviour_PropertyReaderData*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::Fusion::NetworkBehaviour_PropertyReaderData* Fusion::NetworkBehaviour_PropertyReaderData::_Clone_$()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviour_PropertyReaderData*>(this, ___internal_method);
}
inline void Fusion::NetworkBehaviour_PropertyReaderData::_ctor(::Fusion::NetworkBehaviour_PropertyReaderData*  original)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkBehaviour_PropertyReaderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, original);
}
inline void Fusion::NetworkBehaviour_PropertyReaderData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviour_PropertyReaderData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [CompilerGenerated]
inline ::Fusion::NetworkBehaviour_PropertyReaderData* Fusion::NetworkBehaviour_PropertyReaderData::New_ctor(::Fusion::NetworkBehaviour_PropertyReaderData*  original)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkBehaviour_PropertyReaderData*>(original));
}
inline ::Fusion::NetworkBehaviour_PropertyReaderData* Fusion::NetworkBehaviour_PropertyReaderData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkBehaviour_PropertyReaderData*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkBehaviour_PropertyReaderData*>"
constexpr  Fusion::NetworkBehaviour_PropertyReaderData::operator ::System::IEquatable_1<::Fusion::NetworkBehaviour_PropertyReaderData*>*() noexcept {
return static_cast<::System::IEquatable_1<::Fusion::NetworkBehaviour_PropertyReaderData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkBehaviour_PropertyReaderData*>"
constexpr ::System::IEquatable_1<::Fusion::NetworkBehaviour_PropertyReaderData*>* Fusion::NetworkBehaviour_PropertyReaderData::i___System__IEquatable_1___Fusion__NetworkBehaviour_PropertyReaderData__() noexcept {
return static_cast<::System::IEquatable_1<::Fusion::NetworkBehaviour_PropertyReaderData*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkBehaviour_PropertyReaderData::NetworkBehaviour_PropertyReaderData()   {
}
