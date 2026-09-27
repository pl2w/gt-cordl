#pragma once
// IWYU pragma private; include "System/ComponentModel/ComponentResourceManager.hpp"
#include "System/Resources/zzzz__ResourceManager_impl.hpp"
#include "System/ComponentModel/zzzz__ComponentResourceManager_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ComponentResourceManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ComponentResourceManager::*)()>(&::System::ComponentModel::ComponentResourceManager::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad4bb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentResourceManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentResourceManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ComponentResourceManager::*)(::System::Type*)>(&::System::ComponentModel::ComponentResourceManager::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad4bb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentResourceManager*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentResourceManager.get_NeutralResourcesCulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::System::ComponentModel::ComponentResourceManager::*)()>(&::System::ComponentModel::ComponentResourceManager::get_NeutralResourcesCulture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xad4bbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentResourceManager*>(),
                        {"get_NeutralResourcesCulture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentResourceManager.ApplyResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ComponentResourceManager::*)(::System::Object*, ::StringW)>(&::System::ComponentModel::ComponentResourceManager::ApplyResources)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xad4bc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentResourceManager*>(),
                        {"ApplyResources", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentResourceManager.ApplyResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ComponentResourceManager::*)(::System::Object*, ::StringW, ::System::Globalization::CultureInfo*)>(&::System::ComponentModel::ComponentResourceManager::ApplyResources)> {
  constexpr static std::size_t size = 0xa6c;
  constexpr static std::size_t addrs = 0xad4bca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ComponentResourceManager*>(),
                    {::i2c::class_of<::System::ComponentModel::ComponentResourceManager*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentResourceManager.FillResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::SortedList_2<::StringW,::System::Object*>* (::System::ComponentModel::ComponentResourceManager::*)(::System::Globalization::CultureInfo*, ::by_ref<::System::Resources::ResourceSet*>)>(&::System::ComponentModel::ComponentResourceManager::FillResources)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0xad4c70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentResourceManager*>(),
                        {"FillResources", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::Resources::ResourceSet*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::ComponentModel::ComponentResourceManager::__cordl_internal_get__resourceSets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resourceSets;
}
constexpr ::System::Collections::Hashtable* const& System::ComponentModel::ComponentResourceManager::__cordl_internal_get__resourceSets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resourceSets;
}
constexpr void System::ComponentModel::ComponentResourceManager::__cordl_internal_set__resourceSets(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resourceSets = value;
}
constexpr ::System::Globalization::CultureInfo*& System::ComponentModel::ComponentResourceManager::__cordl_internal_get__neutralResourcesCulture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____neutralResourcesCulture;
}
constexpr ::System::Globalization::CultureInfo* const& System::ComponentModel::ComponentResourceManager::__cordl_internal_get__neutralResourcesCulture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____neutralResourcesCulture;
}
constexpr void System::ComponentModel::ComponentResourceManager::__cordl_internal_set__neutralResourcesCulture(::System::Globalization::CultureInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____neutralResourcesCulture = value;
}
inline void System::ComponentModel::ComponentResourceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentResourceManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::ComponentResourceManager::_ctor(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentResourceManager*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::System::Globalization::CultureInfo* System::ComponentModel::ComponentResourceManager::get_NeutralResourcesCulture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentResourceManager*>(),
                        {"get_NeutralResourcesCulture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline void System::ComponentModel::ComponentResourceManager::ApplyResources(::System::Object*  value, ::StringW  objectName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentResourceManager*>(),
                        {"ApplyResources", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, objectName);
}
inline void System::ComponentModel::ComponentResourceManager::ApplyResources(::System::Object*  value, ::StringW  objectName, ::System::Globalization::CultureInfo*  culture)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ComponentResourceManager*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, objectName, culture);
}
inline ::System::Collections::Generic::SortedList_2<::StringW,::System::Object*>* System::ComponentModel::ComponentResourceManager::FillResources(::System::Globalization::CultureInfo*  culture, ::by_ref<::System::Resources::ResourceSet*>  resourceSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentResourceManager*>(),
                        {"FillResources", {}, {::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::Resources::ResourceSet*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedList_2<::StringW,::System::Object*>*>(this, ___internal_method, culture, resourceSet);
}
inline ::System::ComponentModel::ComponentResourceManager* System::ComponentModel::ComponentResourceManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ComponentResourceManager*>());
}
inline ::System::ComponentModel::ComponentResourceManager* System::ComponentModel::ComponentResourceManager::New_ctor(::System::Type*  t)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ComponentResourceManager*>(t));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ComponentResourceManager::ComponentResourceManager()   {
}
