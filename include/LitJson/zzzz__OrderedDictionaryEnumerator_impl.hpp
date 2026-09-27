#pragma once
// IWYU pragma private; include "LitJson/OrderedDictionaryEnumerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LitJson/zzzz__OrderedDictionaryEnumerator_def.hpp"
#include "LitJson/zzzz__JsonData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LitJson::OrderedDictionaryEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::OrderedDictionaryEnumerator::*)()>(&::LitJson::OrderedDictionaryEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b5f130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::OrderedDictionaryEnumerator.get_Entry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::DictionaryEntry (::LitJson::OrderedDictionaryEnumerator::*)()>(&::LitJson::OrderedDictionaryEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5b5f194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {"get_Entry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::OrderedDictionaryEnumerator.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::OrderedDictionaryEnumerator::*)()>(&::LitJson::OrderedDictionaryEnumerator::get_Key)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b5f27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {"get_Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::OrderedDictionaryEnumerator.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::OrderedDictionaryEnumerator::*)()>(&::LitJson::OrderedDictionaryEnumerator::get_Value)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b5f328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::OrderedDictionaryEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::OrderedDictionaryEnumerator::*)(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*)>(&::LitJson::OrderedDictionaryEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b5f3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::OrderedDictionaryEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::OrderedDictionaryEnumerator::*)()>(&::LitJson::OrderedDictionaryEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b5f40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::OrderedDictionaryEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::OrderedDictionaryEnumerator::*)()>(&::LitJson::OrderedDictionaryEnumerator::Reset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b5f4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*& LitJson::OrderedDictionaryEnumerator::__cordl_internal_get_list_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list_enumerator;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>* const& LitJson::OrderedDictionaryEnumerator::__cordl_internal_get_list_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list_enumerator;
}
constexpr void LitJson::OrderedDictionaryEnumerator::__cordl_internal_set_list_enumerator(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___list_enumerator = value;
}
inline ::System::Object* LitJson::OrderedDictionaryEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::DictionaryEntry LitJson::OrderedDictionaryEnumerator::get_Entry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {"get_Entry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(this, ___internal_method);
}
inline ::System::Object* LitJson::OrderedDictionaryEnumerator::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* LitJson::OrderedDictionaryEnumerator::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void LitJson::OrderedDictionaryEnumerator::_ctor(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*  enumerator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enumerator);
}
inline bool LitJson::OrderedDictionaryEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LitJson::OrderedDictionaryEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::OrderedDictionaryEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LitJson::OrderedDictionaryEnumerator* LitJson::OrderedDictionaryEnumerator::New_ctor(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*  enumerator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::OrderedDictionaryEnumerator*>(enumerator));
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr  LitJson::OrderedDictionaryEnumerator::operator ::System::Collections::IDictionaryEnumerator*() noexcept {
return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
constexpr ::System::Collections::IDictionaryEnumerator* LitJson::OrderedDictionaryEnumerator::i___System__Collections__IDictionaryEnumerator() noexcept {
return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  LitJson::OrderedDictionaryEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* LitJson::OrderedDictionaryEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::LitJson::OrderedDictionaryEnumerator::OrderedDictionaryEnumerator()   {
}
