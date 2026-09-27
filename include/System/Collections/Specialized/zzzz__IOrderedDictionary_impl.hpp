#pragma once
// IWYU pragma private; include "System/Collections/Specialized/IOrderedDictionary.hpp"
#include "System/Collections/Specialized/zzzz__IOrderedDictionary_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::Specialized::IOrderedDictionary.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::IOrderedDictionary::*)(int32_t)>(&::System::Collections::Specialized::IOrderedDictionary::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(),
                    {::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::IOrderedDictionary.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::IOrderedDictionary::*)(int32_t, ::System::Object*)>(&::System::Collections::Specialized::IOrderedDictionary::set_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(),
                    {::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::IOrderedDictionary.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Collections::Specialized::IOrderedDictionary::*)()>(&::System::Collections::Specialized::IOrderedDictionary::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(),
                    {::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::IOrderedDictionary.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::IOrderedDictionary::*)(int32_t, ::System::Object*, ::System::Object*)>(&::System::Collections::Specialized::IOrderedDictionary::Insert)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(),
                    {::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::IOrderedDictionary.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::IOrderedDictionary::*)(int32_t)>(&::System::Collections::Specialized::IOrderedDictionary::RemoveAt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(),
                    {::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::System::Object* System::Collections::Specialized::IOrderedDictionary::get_Item(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void System::Collections::Specialized::IOrderedDictionary::set_Item(int32_t  index, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::System::Collections::IDictionaryEnumerator* System::Collections::Specialized::IOrderedDictionary::GetEnumerator()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
inline void System::Collections::Specialized::IOrderedDictionary::Insert(int32_t  index, ::System::Object*  key, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, key, value);
}
inline void System::Collections::Specialized::IOrderedDictionary::RemoveAt(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::IOrderedDictionary*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr  System::Collections::Specialized::IOrderedDictionary::operator ::System::Collections::IDictionary*() noexcept {
return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionary"
constexpr ::System::Collections::IDictionary* System::Collections::Specialized::IOrderedDictionary::i___System__Collections__IDictionary() noexcept {
return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::Collections::Specialized::IOrderedDictionary::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::Specialized::IOrderedDictionary::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Collections::Specialized::IOrderedDictionary::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::Specialized::IOrderedDictionary::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
