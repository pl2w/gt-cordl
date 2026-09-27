#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Utilities/TupleExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TupleExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TupleExtensions_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions.IsValueTuple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::IsValueTuple)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb037918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>(),
                        {"IsValueTuple", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions.IsValueTupleType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::IsValueTupleType)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb037988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>(),
                        {"IsValueTupleType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions.GetValueTupleItemObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (*)(::System::Object*)>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::GetValueTupleItemObjects)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb037a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>(),
                        {"GetValueTupleItemObjects", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions.GetValueTupleItemTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (*)(::System::Type*)>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::GetValueTupleItemTypes)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb037cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>(),
                        {"GetValueTupleItemTypes", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions.GetValueTupleItemFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* (*)(::System::Type*)>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::GetValueTupleItemFields)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb037b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>(),
                        {"GetValueTupleItemFields", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions.GetValueTupleItemObjectsFlattened
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (*)(::System::Object*)>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::GetValueTupleItemObjectsFlattened)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb037e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>(),
                        {"GetValueTupleItemObjectsFlattened", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::setStaticF_ValueTupleTypes(::System::Collections::Generic::HashSet_1<::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Type*>*, "ValueTupleTypes", ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>(std::forward<::System::Collections::Generic::HashSet_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::System::Type*>* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::getStaticF_ValueTupleTypes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Type*>*, "ValueTupleTypes", ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>();
}
inline bool UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::IsValueTuple(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>(),
                        {"IsValueTuple", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline bool UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::IsValueTupleType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>(),
                        {"IsValueTupleType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::GetValueTupleItemObjects(::System::Object*  tuple)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>(),
                        {"GetValueTupleItemObjects", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(nullptr, ___internal_method, tuple);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::GetValueTupleItemTypes(::System::Type*  tupleType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>(),
                        {"GetValueTupleItemTypes", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(nullptr, ___internal_method, tupleType);
}
inline ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::GetValueTupleItemFields(::System::Type*  tupleType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>(),
                        {"GetValueTupleItemFields", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*>(nullptr, ___internal_method, tupleType);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::GetValueTupleItemObjectsFlattened(::System::Object*  tuple)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions*>(),
                        {"GetValueTupleItemObjectsFlattened", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(nullptr, ___internal_method, tuple);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions::TupleExtensions()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::*)(int32_t)>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb037ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb038348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0xb0383f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb038968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6.__m__Finally2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__m__Finally2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb0388b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb038a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb038a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb038a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6.System_Collections_Generic_IEnumerable_System_Object__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>* (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::System_Collections_Generic_IEnumerable_System_Object__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb038a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb038b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::System::Object*& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get_tuple()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tuple;
}
constexpr ::System::Object* const& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get_tuple() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tuple;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_set_tuple(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tuple = value;
}
constexpr ::System::Object*& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get___3__tuple()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__tuple;
}
constexpr ::System::Object* const& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get___3__tuple() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__tuple;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_set___3__tuple(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__tuple = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* const& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* const& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
inline void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr  UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::operator ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6::TupleExtensions__GetValueTupleItemObjectsFlattened_d__6()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb037b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0._GetValueTupleItemObjects_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0::*)(::System::Reflection::FieldInfo*)>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0::_GetValueTupleItemObjects_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb038320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0*>(),
                        {"<GetValueTupleItemObjects>b__0", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0::__cordl_internal_get_tuple()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tuple;
}
constexpr ::System::Object* const& UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0::__cordl_internal_get_tuple() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tuple;
}
constexpr void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0::__cordl_internal_set_tuple(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tuple = value;
}
inline void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0::_GetValueTupleItemObjects_b__0(::System::Reflection::FieldInfo*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0*>(),
                        {"<GetValueTupleItemObjects>b__0", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, f);
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c__DisplayClass3_0::TupleExtensions___c__DisplayClass3_0()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c::*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0382f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c._GetValueTupleItemTypes_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c::*)(::System::Reflection::FieldInfo*)>(&::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c::_GetValueTupleItemTypes_b__4_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb0382fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*>(),
                        {"<GetValueTupleItemTypes>b__4_0", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c::setStaticF___9(::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*, "<>9", ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*>(std::forward<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*>(value));
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*, "<>9", ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*>();
}
inline void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c::setStaticF___9__4_0(::System::Func_2<::System::Reflection::FieldInfo*,::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*,::System::Type*>*, "<>9__4_0", ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*>(std::forward<::System::Func_2<::System::Reflection::FieldInfo*,::System::Type*>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*,::System::Type*>* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*,::System::Type*>*, "<>9__4_0", ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*>();
}
inline void UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c::_GetValueTupleItemTypes_b__4_0(::System::Reflection::FieldInfo*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*>(),
                        {"<GetValueTupleItemTypes>b__4_0", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, f);
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c* UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TupleExtensions___c::TupleExtensions___c()   {
}
