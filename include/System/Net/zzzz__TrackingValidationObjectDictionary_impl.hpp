#pragma once
// IWYU pragma private; include "System/Net/TrackingValidationObjectDictionary.hpp"
#include "System/Collections/Specialized/zzzz__StringDictionary_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/zzzz__TrackingValidationObjectDictionary_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Net/zzzz__TrackingValidationObjectDictionary_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingValidationObjectDictionary::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*)>(&::System::Net::TrackingValidationObjectDictionary::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xadb0410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary.PersistValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingValidationObjectDictionary::*)(::StringW, ::StringW, bool)>(&::System::Net::TrackingValidationObjectDictionary::PersistValue)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xadb0444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                        {"PersistValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary.get_IsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::TrackingValidationObjectDictionary::*)()>(&::System::Net::TrackingValidationObjectDictionary::get_IsChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb0628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                        {"get_IsChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary.set_IsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingValidationObjectDictionary::*)(bool)>(&::System::Net::TrackingValidationObjectDictionary::set_IsChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb0630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                        {"set_IsChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary.InternalGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::TrackingValidationObjectDictionary::*)(::StringW)>(&::System::Net::TrackingValidationObjectDictionary::InternalGet)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xadb0638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                        {"InternalGet", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary.InternalSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingValidationObjectDictionary::*)(::StringW, ::System::Object*)>(&::System::Net::TrackingValidationObjectDictionary::InternalSet)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xadb06bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                        {"InternalSet", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::TrackingValidationObjectDictionary::*)(::StringW)>(&::System::Net::TrackingValidationObjectDictionary::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb07b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                    {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingValidationObjectDictionary::*)(::StringW, ::StringW)>(&::System::Net::TrackingValidationObjectDictionary::set_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb07b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                    {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingValidationObjectDictionary::*)(::StringW, ::StringW)>(&::System::Net::TrackingValidationObjectDictionary::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb07c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                    {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingValidationObjectDictionary::*)()>(&::System::Net::TrackingValidationObjectDictionary::Clear)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xadb07c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                    {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingValidationObjectDictionary::*)(::StringW)>(&::System::Net::TrackingValidationObjectDictionary::Remove)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadb082c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                    {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(), 10}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*& System::Net::TrackingValidationObjectDictionary::__cordl_internal_get__validators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____validators;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>* const& System::Net::TrackingValidationObjectDictionary::__cordl_internal_get__validators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____validators;
}
constexpr void System::Net::TrackingValidationObjectDictionary::__cordl_internal_set__validators(::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____validators = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& System::Net::TrackingValidationObjectDictionary::__cordl_internal_get__internalObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalObjects;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& System::Net::TrackingValidationObjectDictionary::__cordl_internal_get__internalObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____internalObjects;
}
constexpr void System::Net::TrackingValidationObjectDictionary::__cordl_internal_set__internalObjects(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____internalObjects = value;
}
constexpr bool& System::Net::TrackingValidationObjectDictionary::__cordl_internal_get__IsChanged_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsChanged_k__BackingField;
}
constexpr bool const& System::Net::TrackingValidationObjectDictionary::__cordl_internal_get__IsChanged_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsChanged_k__BackingField;
}
constexpr void System::Net::TrackingValidationObjectDictionary::__cordl_internal_set__IsChanged_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsChanged_k__BackingField = value;
}
inline void System::Net::TrackingValidationObjectDictionary::_ctor(::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*  validators)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, validators);
}
inline void System::Net::TrackingValidationObjectDictionary::PersistValue(::StringW  key, ::StringW  value, bool  addValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                        {"PersistValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value, addValue);
}
inline bool System::Net::TrackingValidationObjectDictionary::get_IsChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                        {"get_IsChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::TrackingValidationObjectDictionary::set_IsChanged(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                        {"set_IsChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Net::TrackingValidationObjectDictionary::InternalGet(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                        {"InternalGet", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline void System::Net::TrackingValidationObjectDictionary::InternalSet(::StringW  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(),
                        {"InternalSet", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::StringW System::Net::TrackingValidationObjectDictionary::get_Item(::StringW  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key);
}
inline void System::Net::TrackingValidationObjectDictionary::set_Item(::StringW  key, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void System::Net::TrackingValidationObjectDictionary::Add(::StringW  key, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void System::Net::TrackingValidationObjectDictionary::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::TrackingValidationObjectDictionary::Remove(::StringW  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::Net::TrackingValidationObjectDictionary* System::Net::TrackingValidationObjectDictionary::New_ctor(::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*  validators)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::TrackingValidationObjectDictionary*>(validators));
}
// Ctor Parameters []
constexpr ::System::Net::TrackingValidationObjectDictionary::TrackingValidationObjectDictionary()   {
}
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::*)(::System::Object*, ::System::IntPtr)>(&::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xadb089c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::*)(::System::Object*)>(&::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xadb09a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>(),
                    {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::*)(::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xadb09b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>(),
                    {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::*)(::System::IAsyncResult*)>(&::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xadb09d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>(),
                    {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Object* System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::Invoke(::System::Object*  valueToValidate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, valueToValidate);
}
inline ::System::IAsyncResult* System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::BeginInvoke(::System::Object*  valueToValidate, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, valueToValidate, callback, object);
}
inline ::System::Object* System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, result);
}
inline ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue* System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue::TrackingValidationObjectDictionary_ValidateAndParseValue()   {
}
