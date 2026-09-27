#pragma once
// IWYU pragma private; include "System/ComponentModel/WeakHashtable.hpp"
#include "System/Collections/zzzz__Hashtable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__WeakReference_impl.hpp"
#include "System/ComponentModel/zzzz__WeakHashtable_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/ComponentModel/zzzz__WeakHashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::WeakHashtable::*)()>(&::System::ComponentModel::WeakHashtable::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xad981e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::WeakHashtable::*)()>(&::System::ComponentModel::WeakHashtable::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad98244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::WeakHashtable*>(),
                    {::i2c::class_of<::System::ComponentModel::WeakHashtable*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::WeakHashtable::*)(::System::Object*)>(&::System::ComponentModel::WeakHashtable::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad9824c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::WeakHashtable*>(),
                    {::i2c::class_of<::System::ComponentModel::WeakHashtable*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable.SetWeak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::WeakHashtable::*)(::System::Object*, ::System::Object*)>(&::System::ComponentModel::WeakHashtable::SetWeak)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xad98254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable*>(),
                        {"SetWeak", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable.ScavengeKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::WeakHashtable::*)()>(&::System::ComponentModel::WeakHashtable::ScavengeKeys)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0xad982d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable*>(),
                        {"ScavengeKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& System::ComponentModel::WeakHashtable::__cordl_internal_get__lastGlobalMem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastGlobalMem;
}
constexpr int64_t const& System::ComponentModel::WeakHashtable::__cordl_internal_get__lastGlobalMem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastGlobalMem;
}
constexpr void System::ComponentModel::WeakHashtable::__cordl_internal_set__lastGlobalMem(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastGlobalMem = value;
}
constexpr int32_t& System::ComponentModel::WeakHashtable::__cordl_internal_get__lastHashCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHashCount;
}
constexpr int32_t const& System::ComponentModel::WeakHashtable::__cordl_internal_get__lastHashCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHashCount;
}
constexpr void System::ComponentModel::WeakHashtable::__cordl_internal_set__lastHashCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastHashCount = value;
}
inline void System::ComponentModel::WeakHashtable::setStaticF__comparer(::System::Collections::IEqualityComparer*  value)  {
::cordl_internals::setStaticField<::System::Collections::IEqualityComparer*, "_comparer", ::System::ComponentModel::WeakHashtable*>(std::forward<::System::Collections::IEqualityComparer*>(value));
}
inline ::System::Collections::IEqualityComparer* System::ComponentModel::WeakHashtable::getStaticF__comparer()  {
return ::cordl_internals::getStaticField<::System::Collections::IEqualityComparer*, "_comparer", ::System::ComponentModel::WeakHashtable*>();
}
inline void System::ComponentModel::WeakHashtable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::WeakHashtable::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::WeakHashtable*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::WeakHashtable::Remove(::System::Object*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::WeakHashtable*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::ComponentModel::WeakHashtable::SetWeak(::System::Object*  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable*>(),
                        {"SetWeak", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void System::ComponentModel::WeakHashtable::ScavengeKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable*>(),
                        {"ScavengeKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::WeakHashtable* System::ComponentModel::WeakHashtable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::WeakHashtable*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::WeakHashtable::WeakHashtable()   {
}
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable_EqualityWeakReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::WeakHashtable_EqualityWeakReference::*)(::System::Object*)>(&::System::ComponentModel::WeakHashtable_EqualityWeakReference::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xad98908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable_EqualityWeakReference*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable_EqualityWeakReference.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::WeakHashtable_EqualityWeakReference::*)(::System::Object*)>(&::System::ComponentModel::WeakHashtable_EqualityWeakReference::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xad98b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::WeakHashtable_EqualityWeakReference*>(),
                    {::i2c::class_of<::System::ComponentModel::WeakHashtable_EqualityWeakReference*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable_EqualityWeakReference.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::WeakHashtable_EqualityWeakReference::*)()>(&::System::ComponentModel::WeakHashtable_EqualityWeakReference::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad98bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::WeakHashtable_EqualityWeakReference*>(),
                    {::i2c::class_of<::System::ComponentModel::WeakHashtable_EqualityWeakReference*>(), 2}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& System::ComponentModel::WeakHashtable_EqualityWeakReference::__cordl_internal_get__hashCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hashCode;
}
constexpr int32_t const& System::ComponentModel::WeakHashtable_EqualityWeakReference::__cordl_internal_get__hashCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hashCode;
}
constexpr void System::ComponentModel::WeakHashtable_EqualityWeakReference::__cordl_internal_set__hashCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hashCode = value;
}
inline void System::ComponentModel::WeakHashtable_EqualityWeakReference::_ctor(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable_EqualityWeakReference*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline bool System::ComponentModel::WeakHashtable_EqualityWeakReference::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::WeakHashtable_EqualityWeakReference*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline int32_t System::ComponentModel::WeakHashtable_EqualityWeakReference::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::WeakHashtable_EqualityWeakReference*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::ComponentModel::WeakHashtable_EqualityWeakReference* System::ComponentModel::WeakHashtable_EqualityWeakReference::New_ctor(::System::Object*  o)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::WeakHashtable_EqualityWeakReference*>(o));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::WeakHashtable_EqualityWeakReference::WeakHashtable_EqualityWeakReference()   {
}
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable_WeakKeyComparer.System_Collections_IEqualityComparer_Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::WeakHashtable_WeakKeyComparer::*)(::System::Object*, ::System::Object*)>(&::System::ComponentModel::WeakHashtable_WeakKeyComparer::System_Collections_IEqualityComparer_Equals)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xad989cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable_WeakKeyComparer*>(),
                        {"System.Collections.IEqualityComparer.Equals", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable_WeakKeyComparer.System_Collections_IEqualityComparer_GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::WeakHashtable_WeakKeyComparer::*)(::System::Object*)>(&::System::ComponentModel::WeakHashtable_WeakKeyComparer::System_Collections_IEqualityComparer_GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xad98b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable_WeakKeyComparer*>(),
                        {"System.Collections.IEqualityComparer.GetHashCode", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::WeakHashtable_WeakKeyComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::WeakHashtable_WeakKeyComparer::*)()>(&::System::ComponentModel::WeakHashtable_WeakKeyComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad989c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable_WeakKeyComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::WeakHashtable_WeakKeyComparer::System_Collections_IEqualityComparer_Equals(::System::Object*  x, ::System::Object*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable_WeakKeyComparer*>(),
                        {"System.Collections.IEqualityComparer.Equals", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t System::ComponentModel::WeakHashtable_WeakKeyComparer::System_Collections_IEqualityComparer_GetHashCode(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable_WeakKeyComparer*>(),
                        {"System.Collections.IEqualityComparer.GetHashCode", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void System::ComponentModel::WeakHashtable_WeakKeyComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::WeakHashtable_WeakKeyComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::WeakHashtable_WeakKeyComparer* System::ComponentModel::WeakHashtable_WeakKeyComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::WeakHashtable_WeakKeyComparer*>());
}
/// @brief Convert operator to "::System::Collections::IEqualityComparer"
constexpr  System::ComponentModel::WeakHashtable_WeakKeyComparer::operator ::System::Collections::IEqualityComparer*() noexcept {
return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEqualityComparer"
constexpr ::System::Collections::IEqualityComparer* System::ComponentModel::WeakHashtable_WeakKeyComparer::i___System__Collections__IEqualityComparer() noexcept {
return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::WeakHashtable_WeakKeyComparer::WeakHashtable_WeakKeyComparer()   {
}
