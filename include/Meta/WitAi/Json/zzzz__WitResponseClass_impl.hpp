#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/WitResponseClass.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseClass_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseClass_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass.get_ChildNodeNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Meta::WitAi::Json::WitResponseClass::*)()>(&::Meta::WitAi::Json::WitResponseClass::get_ChildNodeNames)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e45f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass.HasChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::WitResponseClass::*)(::StringW)>(&::Meta::WitAi::Json::WitResponseClass::HasChild)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e45fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                        {"HasChild", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (::Meta::WitAi::Json::WitResponseClass::*)(::StringW)>(&::Meta::WitAi::Json::WitResponseClass::get_Item)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e4603c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseClass::*)(::StringW, ::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Json::WitResponseClass::set_Item)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e46140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (::Meta::WitAi::Json::WitResponseClass::*)(int32_t)>(&::Meta::WitAi::Json::WitResponseClass::get_Item)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e4622c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseClass::*)(int32_t, ::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Json::WitResponseClass::set_Item)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e462cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Json::WitResponseClass::*)()>(&::Meta::WitAi::Json::WitResponseClass::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9e463a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseClass::*)(::StringW, ::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Json::WitResponseClass::Add)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9e463f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass.get_Childs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>* (::Meta::WitAi::Json::WitResponseClass::*)()>(&::Meta::WitAi::Json::WitResponseClass::get_Childs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e46534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::Json::WitResponseClass::*)()>(&::Meta::WitAi::Json::WitResponseClass::GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e465e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Json::WitResponseClass::*)()>(&::Meta::WitAi::Json::WitResponseClass::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e4667c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass.ToFilteredString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Json::WitResponseClass::*)(bool)>(&::Meta::WitAi::Json::WitResponseClass::ToFilteredString)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x9e46684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                        {"ToFilteredString", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseClass::*)()>(&::Meta::WitAi::Json::WitResponseClass::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e435fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>*& Meta::WitAi::Json::WitResponseClass::__cordl_internal_get_m_Dict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Dict;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>* const& Meta::WitAi::Json::WitResponseClass::__cordl_internal_get_m_Dict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Dict;
}
constexpr void Meta::WitAi::Json::WitResponseClass::__cordl_internal_set_m_Dict(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Dict = value;
}
inline ::ArrayW<::StringW> Meta::WitAi::Json::WitResponseClass::get_ChildNodeNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool Meta::WitAi::Json::WitResponseClass::HasChild(::StringW  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                        {"HasChild", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, child);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::Json::WitResponseClass::get_Item(::StringW  aKey)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method, aKey);
}
inline void Meta::WitAi::Json::WitResponseClass::set_Item(::StringW  aKey, ::Meta::WitAi::Json::WitResponseNode*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aKey, value);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::Json::WitResponseClass::get_Item(int32_t  aIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method, aIndex);
}
inline void Meta::WitAi::Json::WitResponseClass::set_Item(int32_t  aIndex, ::Meta::WitAi::Json::WitResponseNode*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aIndex, value);
}
inline int32_t Meta::WitAi::Json::WitResponseClass::get_Count()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::WitAi::Json::WitResponseClass::Add(::StringW  aKey, ::Meta::WitAi::Json::WitResponseNode*  aItem)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aKey, aItem);
}
inline ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>* Meta::WitAi::Json::WitResponseClass::get_Childs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::Json::WitResponseClass::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::Json::WitResponseClass::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::Json::WitResponseClass::ToFilteredString(bool  ignoreEmptyFields)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                        {"ToFilteredString", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, ignoreEmptyFields);
}
inline void Meta::WitAi::Json::WitResponseClass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Json::WitResponseClass* Meta::WitAi::Json::WitResponseClass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::WitResponseClass*>());
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Meta::WitAi::Json::WitResponseClass::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Meta::WitAi::Json::WitResponseClass::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Json::WitResponseClass::WitResponseClass()   {
}
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::*)(int32_t)>(&::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e465b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::*)()>(&::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e46cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::*)()>(&::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x9e46cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::*)()>(&::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e46f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17.System_Collections_Generic_IEnumerator_Meta_WitAi_Json_WitResponseNode__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::*)()>(&::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::System_Collections_Generic_IEnumerator_Meta_WitAi_Json_WitResponseNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e46fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::*)()>(&::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e46fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::*)()>(&::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e47008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17.System_Collections_Generic_IEnumerable_Meta_WitAi_Json_WitResponseNode__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>* (::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::*)()>(&::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::System_Collections_Generic_IEnumerable_Meta_WitAi_Json_WitResponseNode__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e47010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::*)()>(&::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e470b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_set___2__current(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Meta::WitAi::Json::WitResponseClass*& Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::Json::WitResponseClass* const& Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_set___4__this(::Meta::WitAi::Json::WitResponseClass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>*& Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>* const& Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::System_Collections_Generic_IEnumerator_Meta_WitAi_Json_WitResponseNode__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method);
}
inline void Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>* Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::System_Collections_Generic_IEnumerable_Meta_WitAi_Json_WitResponseNode__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17* Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr  Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::operator ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>* Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::i___System__Collections__Generic__IEnumerable_1___Meta__WitAi__Json__WitResponseNode__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr  Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::operator ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>* Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::i___System__Collections__Generic__IEnumerator_1___Meta__WitAi__Json__WitResponseNode__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Json::WitResponseClass__get_Childs_d__17::WitResponseClass__get_Childs_d__17()   {
}
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::*)(int32_t)>(&::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e46654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::*)()>(&::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e46928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::*)()>(&::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x9e46944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::*)()>(&::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e46bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::*)()>(&::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e46c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::*)()>(&::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e46c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::*)()>(&::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e46ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Meta::WitAi::Json::WitResponseClass*& Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::Json::WitResponseClass* const& Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__cordl_internal_set___4__this(::Meta::WitAi::Json::WitResponseClass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>*& Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>* const& Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Meta::WitAi::Json::WitResponseNode*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18* Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Json::WitResponseClass__GetEnumerator_d__18::WitResponseClass__GetEnumerator_d__18()   {
}
