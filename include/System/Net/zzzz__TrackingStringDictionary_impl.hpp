#pragma once
// IWYU pragma private; include "System/Net/TrackingStringDictionary.hpp"
#include "System/Collections/Specialized/zzzz__StringDictionary_impl.hpp"
#include "System/Net/zzzz__TrackingStringDictionary_def.hpp"
//  Writing Method size for method: ::System::Net::TrackingStringDictionary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingStringDictionary::*)()>(&::System::Net::TrackingStringDictionary::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xadb01f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingStringDictionary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingStringDictionary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingStringDictionary::*)(bool)>(&::System::Net::TrackingStringDictionary::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xadb0210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingStringDictionary*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingStringDictionary.get_IsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::TrackingStringDictionary::*)()>(&::System::Net::TrackingStringDictionary::get_IsChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb0238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingStringDictionary*>(),
                        {"get_IsChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingStringDictionary.set_IsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingStringDictionary::*)(bool)>(&::System::Net::TrackingStringDictionary::set_IsChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb0240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingStringDictionary*>(),
                        {"set_IsChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingStringDictionary.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingStringDictionary::*)(::StringW, ::StringW)>(&::System::Net::TrackingStringDictionary::Add)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadb0248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TrackingStringDictionary*>(),
                    {::i2c::class_of<::System::Net::TrackingStringDictionary*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingStringDictionary.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingStringDictionary::*)()>(&::System::Net::TrackingStringDictionary::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadb02b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TrackingStringDictionary*>(),
                    {::i2c::class_of<::System::Net::TrackingStringDictionary*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingStringDictionary.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingStringDictionary::*)(::StringW)>(&::System::Net::TrackingStringDictionary::Remove)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadb0328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TrackingStringDictionary*>(),
                    {::i2c::class_of<::System::Net::TrackingStringDictionary*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingStringDictionary.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::TrackingStringDictionary::*)(::StringW)>(&::System::Net::TrackingStringDictionary::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb0398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TrackingStringDictionary*>(),
                    {::i2c::class_of<::System::Net::TrackingStringDictionary*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TrackingStringDictionary.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TrackingStringDictionary::*)(::StringW, ::StringW)>(&::System::Net::TrackingStringDictionary::set_Item)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadb03a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::TrackingStringDictionary*>(),
                    {::i2c::class_of<::System::Net::TrackingStringDictionary*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::Net::TrackingStringDictionary::__cordl_internal_get__isReadOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isReadOnly;
}
constexpr bool const& System::Net::TrackingStringDictionary::__cordl_internal_get__isReadOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isReadOnly;
}
constexpr void System::Net::TrackingStringDictionary::__cordl_internal_set__isReadOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isReadOnly = value;
}
constexpr bool& System::Net::TrackingStringDictionary::__cordl_internal_get__isChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isChanged;
}
constexpr bool const& System::Net::TrackingStringDictionary::__cordl_internal_get__isChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isChanged;
}
constexpr void System::Net::TrackingStringDictionary::__cordl_internal_set__isChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isChanged = value;
}
inline void System::Net::TrackingStringDictionary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingStringDictionary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::TrackingStringDictionary::_ctor(bool  isReadOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingStringDictionary*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isReadOnly);
}
inline bool System::Net::TrackingStringDictionary::get_IsChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingStringDictionary*>(),
                        {"get_IsChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::TrackingStringDictionary::set_IsChanged(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::TrackingStringDictionary*>(),
                        {"set_IsChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::TrackingStringDictionary::Add(::StringW  key, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TrackingStringDictionary*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void System::Net::TrackingStringDictionary::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TrackingStringDictionary*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::TrackingStringDictionary::Remove(::StringW  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TrackingStringDictionary*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::StringW System::Net::TrackingStringDictionary::get_Item(::StringW  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TrackingStringDictionary*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key);
}
inline void System::Net::TrackingStringDictionary::set_Item(::StringW  key, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::TrackingStringDictionary*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::System::Net::TrackingStringDictionary* System::Net::TrackingStringDictionary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::TrackingStringDictionary*>());
}
inline ::System::Net::TrackingStringDictionary* System::Net::TrackingStringDictionary::New_ctor(bool  isReadOnly)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::TrackingStringDictionary*>(isReadOnly));
}
// Ctor Parameters []
constexpr ::System::Net::TrackingStringDictionary::TrackingStringDictionary()   {
}
