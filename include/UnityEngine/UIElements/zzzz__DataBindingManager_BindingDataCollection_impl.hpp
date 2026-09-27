#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBindingManager_BindingDataCollection.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_BindingDataCollection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_BindingDataCollection.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DataBindingManager_BindingDataCollection (*)()>(&::GlobalNamespace::DataBindingManager_BindingDataCollection::Create)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb7294e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_BindingDataCollection.AddBindingData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataBindingManager_BindingDataCollection::*)(::UnityEngine::UIElements::DataBindingManager_BindingData*)>(&::GlobalNamespace::DataBindingManager_BindingDataCollection::AddBindingData)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb7295bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"AddBindingData", {}, {::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_BindingDataCollection.TryGetBindingData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DataBindingManager_BindingDataCollection::*)(::by_ref<::UnityEngine::UIElements::BindingId>, ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>)>(&::GlobalNamespace::DataBindingManager_BindingDataCollection::TryGetBindingData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb726340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"TryGetBindingData", {}, {::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_BindingDataCollection.RemoveBindingData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DataBindingManager_BindingDataCollection::*)(::UnityEngine::UIElements::DataBindingManager_BindingData*)>(&::GlobalNamespace::DataBindingManager_BindingDataCollection::RemoveBindingData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb72972c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"RemoveBindingData", {}, {::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_BindingDataCollection.GetBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* (::GlobalNamespace::DataBindingManager_BindingDataCollection::*)()>(&::GlobalNamespace::DataBindingManager_BindingDataCollection::GetBindings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb72628c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"GetBindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_BindingDataCollection.GetBindingCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DataBindingManager_BindingDataCollection::*)()>(&::GlobalNamespace::DataBindingManager_BindingDataCollection::GetBindingCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb72984c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"GetBindingCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DataBindingManager_BindingDataCollection.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataBindingManager_BindingDataCollection::*)()>(&::GlobalNamespace::DataBindingManager_BindingDataCollection::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb729894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::DataBindingManager_BindingDataCollection GlobalNamespace::DataBindingManager_BindingDataCollection::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DataBindingManager_BindingDataCollection>(nullptr, ___internal_method);
}
inline void GlobalNamespace::DataBindingManager_BindingDataCollection::AddBindingData(::UnityEngine::UIElements::DataBindingManager_BindingData*  bindingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"AddBindingData", {}, {::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bindingData);
}
inline bool GlobalNamespace::DataBindingManager_BindingDataCollection::TryGetBindingData(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingId>  bindingId, ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"TryGetBindingData", {}, {::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bindingId, data);
}
inline bool GlobalNamespace::DataBindingManager_BindingDataCollection::RemoveBindingData(::UnityEngine::UIElements::DataBindingManager_BindingData*  bindingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"RemoveBindingData", {}, {::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bindingData);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* GlobalNamespace::DataBindingManager_BindingDataCollection::GetBindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"GetBindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::DataBindingManager_BindingDataCollection::GetBindingCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"GetBindingCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::DataBindingManager_BindingDataCollection::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataBindingManager_BindingDataCollection>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::DataBindingManager_BindingDataCollection::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::DataBindingManager_BindingDataCollection::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_BindingPerId", ty: "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BindingId,::UnityEngine::UIElements::DataBindingManager_BindingData*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Bindings", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DataBindingManager_BindingDataCollection::DataBindingManager_BindingDataCollection(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BindingId,::UnityEngine::UIElements::DataBindingManager_BindingData*>*  m_BindingPerId, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*  m_Bindings) noexcept  {
this->m_BindingPerId = m_BindingPerId;
this->m_Bindings = m_Bindings;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DataBindingManager_BindingDataCollection::DataBindingManager_BindingDataCollection()   {
}
