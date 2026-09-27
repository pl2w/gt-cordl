#pragma once
// IWYU pragma private; include "System/Configuration/SettingsPropertyValueCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__SettingsPropertyValueCollection_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Configuration/zzzz__SettingsPropertyValue_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValueCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyValueCollection::*)()>(&::System::Configuration::SettingsPropertyValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf70fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValueCollection.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Configuration::SettingsPropertyValueCollection::*)()>(&::System::Configuration::SettingsPropertyValueCollection::get_Count)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValueCollection.get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::SettingsPropertyValueCollection::*)()>(&::System::Configuration::SettingsPropertyValueCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf716c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValueCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsPropertyValue* (::System::Configuration::SettingsPropertyValueCollection::*)(::StringW)>(&::System::Configuration::SettingsPropertyValueCollection::get_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf71a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValueCollection.get_SyncRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::SettingsPropertyValueCollection::*)()>(&::System::Configuration::SettingsPropertyValueCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf71dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"get_SyncRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValueCollection.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyValueCollection::*)(::System::Configuration::SettingsPropertyValue*)>(&::System::Configuration::SettingsPropertyValueCollection::Add)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"Add", {}, {::i2c::type_of<::System::Configuration::SettingsPropertyValue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValueCollection.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyValueCollection::*)()>(&::System::Configuration::SettingsPropertyValueCollection::Clear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf724c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValueCollection.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::SettingsPropertyValueCollection::*)()>(&::System::Configuration::SettingsPropertyValueCollection::Clone)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValueCollection.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyValueCollection::*)(::System::Array*, int32_t)>(&::System::Configuration::SettingsPropertyValueCollection::CopyTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf72bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValueCollection.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Configuration::SettingsPropertyValueCollection::*)()>(&::System::Configuration::SettingsPropertyValueCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf72f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValueCollection.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyValueCollection::*)(::StringW)>(&::System::Configuration::SettingsPropertyValueCollection::Remove)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf732c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValueCollection.SetReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyValueCollection::*)()>(&::System::Configuration::SettingsPropertyValueCollection::SetReadOnly)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"SetReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsPropertyValueCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Configuration::SettingsPropertyValueCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Configuration::SettingsPropertyValueCollection::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Configuration::SettingsPropertyValue* System::Configuration::SettingsPropertyValueCollection::get_Item(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsPropertyValue*>(this, ___internal_method, name);
}
inline ::System::Object* System::Configuration::SettingsPropertyValueCollection::get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Configuration::SettingsPropertyValueCollection::Add(::System::Configuration::SettingsPropertyValue*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"Add", {}, {::i2c::type_of<::System::Configuration::SettingsPropertyValue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline void System::Configuration::SettingsPropertyValueCollection::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::SettingsPropertyValueCollection::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Configuration::SettingsPropertyValueCollection::CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Collections::IEnumerator* System::Configuration::SettingsPropertyValueCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void System::Configuration::SettingsPropertyValueCollection::Remove(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Configuration::SettingsPropertyValueCollection::SetReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValueCollection*>(),
                        {"SetReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::SettingsPropertyValueCollection* System::Configuration::SettingsPropertyValueCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsPropertyValueCollection*>());
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::Configuration::SettingsPropertyValueCollection::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Configuration::SettingsPropertyValueCollection::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Configuration::SettingsPropertyValueCollection::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Configuration::SettingsPropertyValueCollection::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  System::Configuration::SettingsPropertyValueCollection::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Configuration::SettingsPropertyValueCollection::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsPropertyValueCollection::SettingsPropertyValueCollection()   {
}
