#pragma once
// IWYU pragma private; include "System/Configuration/SettingsPropertyCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__SettingsPropertyCollection_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Configuration/zzzz__SettingsProperty_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyCollection::*)()>(&::System::Configuration::SettingsPropertyCollection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Configuration::SettingsPropertyCollection::*)()>(&::System::Configuration::SettingsPropertyCollection::get_Count)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf68ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::SettingsPropertyCollection::*)()>(&::System::Configuration::SettingsPropertyCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf68e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsProperty* (::System::Configuration::SettingsPropertyCollection::*)(::StringW)>(&::System::Configuration::SettingsPropertyCollection::get_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf691c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.get_SyncRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::SettingsPropertyCollection::*)()>(&::System::Configuration::SettingsPropertyCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"get_SyncRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyCollection::*)(::System::Configuration::SettingsProperty*)>(&::System::Configuration::SettingsPropertyCollection::Add)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf698c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"Add", {}, {::i2c::type_of<::System::Configuration::SettingsProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyCollection::*)()>(&::System::Configuration::SettingsPropertyCollection::Clear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf69c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::SettingsPropertyCollection::*)()>(&::System::Configuration::SettingsPropertyCollection::Clone)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf69fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyCollection::*)(::System::Array*, int32_t)>(&::System::Configuration::SettingsPropertyCollection::CopyTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Configuration::SettingsPropertyCollection::*)()>(&::System::Configuration::SettingsPropertyCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.OnAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyCollection::*)(::System::Configuration::SettingsProperty*)>(&::System::Configuration::SettingsPropertyCollection::OnAdd)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                    {::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.OnAddComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyCollection::*)(::System::Configuration::SettingsProperty*)>(&::System::Configuration::SettingsPropertyCollection::OnAddComplete)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                    {::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.OnClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyCollection::*)()>(&::System::Configuration::SettingsPropertyCollection::OnClear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                    {::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.OnClearComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyCollection::*)()>(&::System::Configuration::SettingsPropertyCollection::OnClearComplete)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                    {::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.OnRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyCollection::*)(::System::Configuration::SettingsProperty*)>(&::System::Configuration::SettingsPropertyCollection::OnRemove)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                    {::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.OnRemoveComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyCollection::*)(::System::Configuration::SettingsProperty*)>(&::System::Configuration::SettingsPropertyCollection::OnRemoveComplete)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                    {::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyCollection::*)(::StringW)>(&::System::Configuration::SettingsPropertyCollection::Remove)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyCollection.SetReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyCollection::*)()>(&::System::Configuration::SettingsPropertyCollection::SetReadOnly)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"SetReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsPropertyCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Configuration::SettingsPropertyCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Configuration::SettingsPropertyCollection::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Configuration::SettingsProperty* System::Configuration::SettingsPropertyCollection::get_Item(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsProperty*>(this, ___internal_method, name);
}
inline ::System::Object* System::Configuration::SettingsPropertyCollection::get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Configuration::SettingsPropertyCollection::Add(::System::Configuration::SettingsProperty*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"Add", {}, {::i2c::type_of<::System::Configuration::SettingsProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline void System::Configuration::SettingsPropertyCollection::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::SettingsPropertyCollection::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Configuration::SettingsPropertyCollection::CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Collections::IEnumerator* System::Configuration::SettingsPropertyCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void System::Configuration::SettingsPropertyCollection::OnAdd(::System::Configuration::SettingsProperty*  property)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline void System::Configuration::SettingsPropertyCollection::OnAddComplete(::System::Configuration::SettingsProperty*  property)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline void System::Configuration::SettingsPropertyCollection::OnClear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Configuration::SettingsPropertyCollection::OnClearComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Configuration::SettingsPropertyCollection::OnRemove(::System::Configuration::SettingsProperty*  property)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline void System::Configuration::SettingsPropertyCollection::OnRemoveComplete(::System::Configuration::SettingsProperty*  property)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline void System::Configuration::SettingsPropertyCollection::Remove(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Configuration::SettingsPropertyCollection::SetReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyCollection*>(),
                        {"SetReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::SettingsPropertyCollection* System::Configuration::SettingsPropertyCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsPropertyCollection*>());
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::Configuration::SettingsPropertyCollection::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Configuration::SettingsPropertyCollection::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Configuration::SettingsPropertyCollection::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Configuration::SettingsPropertyCollection::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  System::Configuration::SettingsPropertyCollection::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Configuration::SettingsPropertyCollection::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsPropertyCollection::SettingsPropertyCollection()   {
}
