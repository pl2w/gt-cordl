#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/GameObjectLocalizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedObject_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/zzzz__GameObjectLocalizer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedObject_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/zzzz__GameObjectLocalizer_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer.get_CurrentOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::get_CurrentOperation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb051598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"get_CurrentOperation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer.set_CurrentOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::set_CurrentOperation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb0515ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"set_CurrentOperation", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::OnEnable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb0515d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::OnDisable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb051c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::Start)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb052194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer.SelectedLocaleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::SelectedLocaleChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb051be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"SelectedLocaleChanged", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer.get_TrackedObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>* (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::get_TrackedObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb05227c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"get_TrackedObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer.GetTrackedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject* (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)(::UnityEngine::Object*)>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::GetTrackedObject)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb052284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"GetTrackedObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer.ApplyLocaleVariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::ApplyLocaleVariant)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb052228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"ApplyLocaleVariant", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer.ApplyLocaleVariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)(::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::ApplyLocaleVariant)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0xb05247c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"ApplyLocaleVariant", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer.RegisterChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::RegisterChanges)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0xb0516c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"RegisterChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer.UnregisterChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::UnregisterChanges)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0xb051d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"UnregisterChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer.RequestUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::RequestUpdate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb0529dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"RequestUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb052ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer._RegisterChanges_b__18_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::*)(::StringW)>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::_RegisterChanges_b__18_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb052b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"<RegisterChanges>b__18_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>*& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_get_m_TrackedObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>* const& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_get_m_TrackedObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedObjects;
}
constexpr void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_set_m_TrackedObjects(::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TrackedObjects = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_get_m_CurrentLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentLocale;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_get_m_CurrentLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentLocale;
}
constexpr void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_set_m_CurrentLocale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentLocale = value;
}
constexpr ::UnityEngine::Localization::LocalizedString_ChangeHandler*& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_get_m_LocalizedStringChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalizedStringChanged;
}
constexpr ::UnityEngine::Localization::LocalizedString_ChangeHandler* const& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_get_m_LocalizedStringChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalizedStringChanged;
}
constexpr void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_set_m_LocalizedStringChanged(::UnityEngine::Localization::LocalizedString_ChangeHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalizedStringChanged = value;
}
constexpr bool& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_get_m_IgnoreChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreChange;
}
constexpr bool const& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_get_m_IgnoreChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreChange;
}
constexpr void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_set_m_IgnoreChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreChange = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_get__CurrentOperation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentOperation_k__BackingField;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_get__CurrentOperation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentOperation_k__BackingField;
}
constexpr void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::__cordl_internal_set__CurrentOperation_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentOperation_k__BackingField = value;
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::get_CurrentOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"get_CurrentOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::set_CurrentOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"set_CurrentOperation", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::SelectedLocaleChanged(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"SelectedLocaleChanged", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locale);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>* UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::get_TrackedObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"get_TrackedObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>*>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*> && ::cordl_internals::default_constructor_constraint<T>)
inline T UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::GetTrackedObject(::UnityEngine::Object*  target, bool  create)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                    {"GetTrackedObject", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, target, create);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject* UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::GetTrackedObject(::UnityEngine::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"GetTrackedObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(this, ___internal_method, target);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::ApplyLocaleVariant(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"ApplyLocaleVariant", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, locale);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::ApplyLocaleVariant(::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Locale*  fallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"ApplyLocaleVariant", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, locale, fallback);
}
inline void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::RegisterChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"RegisterChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::UnregisterChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"UnregisterChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::RequestUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"RequestUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::_RegisterChanges_b__18_0(::StringW  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>(),
                        {"<RegisterChanges>b__18_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer* UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer::GameObjectLocalizer()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::*)(int32_t)>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb052200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb052b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb052b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb052cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb052cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::*)()>(&::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb052cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer>& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer> const& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::__cordl_internal_set___4__this(::UnityW<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::__cordl_internal_get__localeOp_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localeOp_5__2;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>> const& UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::__cordl_internal_get__localeOp_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localeOp_5__2;
}
constexpr void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::__cordl_internal_set__localeOp_5__2(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localeOp_5__2 = value;
}
inline void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10* UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10::GameObjectLocalizer__Start_d__10()   {
}
