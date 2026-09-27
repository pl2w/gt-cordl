#pragma once
// IWYU pragma private; include "LitJson/JsonData.hpp"
#include "LitJson/zzzz__JsonType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LitJson/zzzz__JsonData_def.hpp"
#include "LitJson/zzzz__IJsonWrapper_def.hpp"
#include "LitJson/zzzz__JsonType_def.hpp"
#include "LitJson/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Specialized/zzzz__IOrderedDictionary_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LitJson::JsonData.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LitJson::JsonData::*)()>(&::LitJson::JsonData::get_Count)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b5aadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.get_IsArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::get_IsArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b55114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.get_IsBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::get_IsBoolean)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5ac5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsBoolean", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.get_IsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::get_IsDouble)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5ac6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.get_IsInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::get_IsInt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5513c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.get_IsLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::get_IsLong)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5512c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.get_IsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::get_IsObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5ac7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.get_IsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::get_IsString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5ac8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_ICollection_get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_ICollection_get_Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b5ac9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.ICollection.get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_ICollection_get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b5aca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_ICollection_get_SyncRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b5ad4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IDictionary_get_IsFixedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_IDictionary_get_IsFixedSize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b5adf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.get_IsFixedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IDictionary_get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_IDictionary_get_IsReadOnly)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b5b018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IDictionary_get_Keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_IDictionary_get_Keys)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5b5b0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.get_Keys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IDictionary_get_Values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_IDictionary_get_Values)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5b5b470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.get_Values", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_get_IsArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::LitJson_IJsonWrapper_get_IsArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5b81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_get_IsBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::LitJson_IJsonWrapper_get_IsBoolean)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5b82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsBoolean", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_get_IsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::LitJson_IJsonWrapper_get_IsDouble)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5b83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_get_IsInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::LitJson_IJsonWrapper_get_IsInt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5b84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_get_IsLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::LitJson_IJsonWrapper_get_IsLong)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5b85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_get_IsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::LitJson_IJsonWrapper_get_IsObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5b86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_get_IsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::LitJson_IJsonWrapper_get_IsString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5b87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IList_get_IsFixedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_IList_get_IsFixedSize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b5b88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.get_IsFixedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IList_get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_IList_get_IsReadOnly)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b5ba5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IDictionary_get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonData::*)(::System::Object*)>(&::LitJson::JsonData::System_Collections_IDictionary_get_Item)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b5bb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.get_Item", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IDictionary_set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(::System::Object*, ::System::Object*)>(&::LitJson::JsonData::System_Collections_IDictionary_set_Item)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b5bbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.set_Item", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_Specialized_IOrderedDictionary_get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonData::*)(int32_t)>(&::LitJson::JsonData::System_Collections_Specialized_IOrderedDictionary_get_Item)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b5c080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.Specialized.IOrderedDictionary.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_Specialized_IOrderedDictionary_set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(int32_t, ::System::Object*)>(&::LitJson::JsonData::System_Collections_Specialized_IOrderedDictionary_set_Item)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5b5c144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.Specialized.IOrderedDictionary.set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IList_get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonData::*)(int32_t)>(&::LitJson::JsonData::System_Collections_IList_get_Item)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b5c350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IList_set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(int32_t, ::System::Object*)>(&::LitJson::JsonData::System_Collections_IList_set_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b5c400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::JsonData* (::LitJson::JsonData::*)(::StringW)>(&::LitJson::JsonData::get_Item)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b52d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(::StringW, ::LitJson::JsonData*)>(&::LitJson::JsonData::set_Item)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x5b5bcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::JsonData* (::LitJson::JsonData::*)(int32_t)>(&::LitJson::JsonData::get_Item)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5b5c6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(int32_t, ::LitJson::JsonData*)>(&::LitJson::JsonData::set_Item)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5b5c438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)()>(&::LitJson::JsonData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5c830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(bool)>(&::LitJson::JsonData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b5c838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(double_t)>(&::LitJson::JsonData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b5c868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(int32_t)>(&::LitJson::JsonData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b5c898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(int64_t)>(&::LitJson::JsonData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b5c8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(::System::Object*)>(&::LitJson::JsonData::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5b5c8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(::StringW)>(&::LitJson::JsonData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b5cab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.op_Implicit___LitJson__JsonData_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::JsonData* (*)(bool)>(&::LitJson::JsonData::op_Implicit___LitJson__JsonData_)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b5caec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Implicit", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.op_Implicit___LitJson__JsonData_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::JsonData* (*)(double_t)>(&::LitJson::JsonData::op_Implicit___LitJson__JsonData_)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b5cb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Implicit", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.op_Implicit___LitJson__JsonData_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::JsonData* (*)(int32_t)>(&::LitJson::JsonData::op_Implicit___LitJson__JsonData_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b5cbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.op_Implicit___LitJson__JsonData_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::JsonData* (*)(int64_t)>(&::LitJson::JsonData::op_Implicit___LitJson__JsonData_)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b5cc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Implicit", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.op_Implicit___LitJson__JsonData_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::JsonData* (*)(::StringW)>(&::LitJson::JsonData::op_Implicit___LitJson__JsonData_)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b5cc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.op_Explicit_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LitJson::JsonData*)>(&::LitJson::JsonData::op_Explicit_bool)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b5ccf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.op_Explicit_double_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::LitJson::JsonData*)>(&::LitJson::JsonData::op_Explicit_double_t)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b5cd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.op_Explicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::LitJson::JsonData*)>(&::LitJson::JsonData::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b52de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.op_Explicit_int64_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::LitJson::JsonData*)>(&::LitJson::JsonData::op_Explicit_int64_t)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b5388c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.op_Explicit___StringW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::LitJson::JsonData*)>(&::LitJson::JsonData::op_Explicit___StringW)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b52e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_ICollection_CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(::System::Array*, int32_t)>(&::LitJson::JsonData::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b5cdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.ICollection.CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IDictionary_Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(::System::Object*, ::System::Object*)>(&::LitJson::JsonData::System_Collections_IDictionary_Add)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5b5ce90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.Add", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IDictionary_Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_IDictionary_Clear)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b5d050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IDictionary_Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)(::System::Object*)>(&::LitJson::JsonData::System_Collections_IDictionary_Contains)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b5d184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.Contains", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IDictionary_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionaryEnumerator* (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_IDictionary_GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b5d238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IDictionary_Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(::System::Object*)>(&::LitJson::JsonData::System_Collections_IDictionary_Remove)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5b5d2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.Remove", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b5d550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_GetBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)()>(&::LitJson::JsonData::LitJson_IJsonWrapper_GetBoolean)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b5d5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.GetBoolean", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_GetDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::LitJson::JsonData::*)()>(&::LitJson::JsonData::LitJson_IJsonWrapper_GetDouble)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b5d658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.GetDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_GetInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LitJson::JsonData::*)()>(&::LitJson::JsonData::LitJson_IJsonWrapper_GetInt)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b5d6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.GetInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_GetLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::LitJson::JsonData::*)()>(&::LitJson::JsonData::LitJson_IJsonWrapper_GetLong)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b5d718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.GetLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_GetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LitJson::JsonData::*)()>(&::LitJson::JsonData::LitJson_IJsonWrapper_GetString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b5d778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.GetString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_SetBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(bool)>(&::LitJson::JsonData::LitJson_IJsonWrapper_SetBoolean)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b5d7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.SetBoolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_SetDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(double_t)>(&::LitJson::JsonData::LitJson_IJsonWrapper_SetDouble)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b5d7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.SetDouble", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_SetInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(int32_t)>(&::LitJson::JsonData::LitJson_IJsonWrapper_SetInt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b5d80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.SetInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_SetLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(int64_t)>(&::LitJson::JsonData::LitJson_IJsonWrapper_SetLong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b5d828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.SetLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_SetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(::StringW)>(&::LitJson::JsonData::LitJson_IJsonWrapper_SetString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b5d844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.SetString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LitJson::JsonData::*)()>(&::LitJson::JsonData::LitJson_IJsonWrapper_ToJson)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b5d870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.LitJson_IJsonWrapper_ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(::LitJson::JsonWriter*)>(&::LitJson::JsonData::LitJson_IJsonWrapper_ToJson)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b5d948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.ToJson", {}, {::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IList_Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LitJson::JsonData::*)(::System::Object*)>(&::LitJson::JsonData::System_Collections_IList_Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b5d97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IList_Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_IList_Clear)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b5da50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IList_Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)(::System::Object*)>(&::LitJson::JsonData::System_Collections_IList_Contains)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b5db0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.Contains", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IList_IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LitJson::JsonData::*)(::System::Object*)>(&::LitJson::JsonData::System_Collections_IList_IndexOf)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b5dbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.IndexOf", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IList_Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(int32_t, ::System::Object*)>(&::LitJson::JsonData::System_Collections_IList_Insert)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b5dc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IList_Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(::System::Object*)>(&::LitJson::JsonData::System_Collections_IList_Remove)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b5dd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.Remove", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_IList_RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(int32_t)>(&::LitJson::JsonData::System_Collections_IList_RemoveAt)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b5de0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_Specialized_IOrderedDictionary_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionaryEnumerator* (::LitJson::JsonData::*)()>(&::LitJson::JsonData::System_Collections_Specialized_IOrderedDictionary_GetEnumerator)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b5ded0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.Specialized.IOrderedDictionary.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_Specialized_IOrderedDictionary_Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(int32_t, ::System::Object*, ::System::Object*)>(&::LitJson::JsonData::System_Collections_Specialized_IOrderedDictionary_Insert)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b5dfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.Specialized.IOrderedDictionary.Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.System_Collections_Specialized_IOrderedDictionary_RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(int32_t)>(&::LitJson::JsonData::System_Collections_Specialized_IOrderedDictionary_RemoveAt)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5b5e0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.Specialized.IOrderedDictionary.RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.EnsureCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::LitJson::JsonData::*)()>(&::LitJson::JsonData::EnsureCollection)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b5ab88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"EnsureCollection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.EnsureDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::LitJson::JsonData::*)()>(&::LitJson::JsonData::EnsureDictionary)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5b5aea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"EnsureDictionary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.EnsureList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::LitJson::JsonData::*)()>(&::LitJson::JsonData::EnsureList)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5b5b938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"EnsureList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.ToJsonData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::JsonData* (::LitJson::JsonData::*)(::System::Object*)>(&::LitJson::JsonData::ToJsonData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b5bc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"ToJsonData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.WriteJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LitJson::IJsonWrapper*, ::LitJson::JsonWriter*)>(&::LitJson::JsonData::WriteJson)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0x5b5e2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"WriteJson", {}, {::i2c::type_of<::LitJson::IJsonWrapper*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LitJson::JsonData::*)(::System::Object*)>(&::LitJson::JsonData::Add)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b5d980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)()>(&::LitJson::JsonData::Clear)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b5ebe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonData::*)(::LitJson::JsonData*)>(&::LitJson::JsonData::Equals)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5b5ecfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"Equals", {}, {::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.GetJsonType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::JsonType (::LitJson::JsonData::*)()>(&::LitJson::JsonData::GetJsonType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5ee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"GetJsonType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.SetJsonType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(::LitJson::JsonType)>(&::LitJson::JsonData::SetJsonType)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5b5ee68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"SetJsonType", {}, {::i2c::type_of<::LitJson::JsonType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LitJson::JsonData::*)()>(&::LitJson::JsonData::ToJson)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b5d874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonData::*)(::LitJson::JsonWriter*)>(&::LitJson::JsonData::ToJson)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b5d94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"ToJson", {}, {::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LitJson::JsonData::*)()>(&::LitJson::JsonData::ToString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5b5f000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::LitJson::JsonData*>(),
                    {::i2c::class_of<::LitJson::JsonData*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IList_1<::LitJson::JsonData*>*& LitJson::JsonData::__cordl_internal_get_inst_array()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_array;
}
constexpr ::System::Collections::Generic::IList_1<::LitJson::JsonData*>* const& LitJson::JsonData::__cordl_internal_get_inst_array() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_array;
}
constexpr void LitJson::JsonData::__cordl_internal_set_inst_array(::System::Collections::Generic::IList_1<::LitJson::JsonData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inst_array = value;
}
constexpr bool& LitJson::JsonData::__cordl_internal_get_inst_boolean()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_boolean;
}
constexpr bool const& LitJson::JsonData::__cordl_internal_get_inst_boolean() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_boolean;
}
constexpr void LitJson::JsonData::__cordl_internal_set_inst_boolean(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inst_boolean = value;
}
constexpr double_t& LitJson::JsonData::__cordl_internal_get_inst_double()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_double;
}
constexpr double_t const& LitJson::JsonData::__cordl_internal_get_inst_double() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_double;
}
constexpr void LitJson::JsonData::__cordl_internal_set_inst_double(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inst_double = value;
}
constexpr int32_t& LitJson::JsonData::__cordl_internal_get_inst_int()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_int;
}
constexpr int32_t const& LitJson::JsonData::__cordl_internal_get_inst_int() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_int;
}
constexpr void LitJson::JsonData::__cordl_internal_set_inst_int(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inst_int = value;
}
constexpr int64_t& LitJson::JsonData::__cordl_internal_get_inst_long()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_long;
}
constexpr int64_t const& LitJson::JsonData::__cordl_internal_get_inst_long() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_long;
}
constexpr void LitJson::JsonData::__cordl_internal_set_inst_long(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inst_long = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::JsonData*>*& LitJson::JsonData::__cordl_internal_get_inst_object()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_object;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::JsonData*>* const& LitJson::JsonData::__cordl_internal_get_inst_object() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_object;
}
constexpr void LitJson::JsonData::__cordl_internal_set_inst_object(::System::Collections::Generic::IDictionary_2<::StringW,::LitJson::JsonData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inst_object = value;
}
constexpr ::StringW& LitJson::JsonData::__cordl_internal_get_inst_string()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_string;
}
constexpr ::StringW const& LitJson::JsonData::__cordl_internal_get_inst_string() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inst_string;
}
constexpr void LitJson::JsonData::__cordl_internal_set_inst_string(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inst_string = value;
}
constexpr ::StringW& LitJson::JsonData::__cordl_internal_get_json()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___json;
}
constexpr ::StringW const& LitJson::JsonData::__cordl_internal_get_json() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___json;
}
constexpr void LitJson::JsonData::__cordl_internal_set_json(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___json = value;
}
constexpr ::LitJson::JsonType& LitJson::JsonData::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::LitJson::JsonType const& LitJson::JsonData::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void LitJson::JsonData::__cordl_internal_set_type(::LitJson::JsonType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*& LitJson::JsonData::__cordl_internal_get_object_list()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___object_list;
}
constexpr ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>* const& LitJson::JsonData::__cordl_internal_get_object_list() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___object_list;
}
constexpr void LitJson::JsonData::__cordl_internal_set_object_list(::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::LitJson::JsonData*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___object_list = value;
}
inline int32_t LitJson::JsonData::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool LitJson::JsonData::get_IsArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::get_IsBoolean()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsBoolean", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::get_IsDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::get_IsInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::get_IsLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::get_IsObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::get_IsString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_IsString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t LitJson::JsonData::System_Collections_ICollection_get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.ICollection.get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool LitJson::JsonData::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* LitJson::JsonData::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool LitJson::JsonData::System_Collections_IDictionary_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.get_IsFixedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::System_Collections_IDictionary_get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::ICollection* LitJson::JsonData::System_Collections_IDictionary_get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Collections::ICollection* LitJson::JsonData::System_Collections_IDictionary_get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline bool LitJson::JsonData::LitJson_IJsonWrapper_get_IsArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::LitJson_IJsonWrapper_get_IsBoolean()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsBoolean", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::LitJson_IJsonWrapper_get_IsDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::LitJson_IJsonWrapper_get_IsInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::LitJson_IJsonWrapper_get_IsLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::LitJson_IJsonWrapper_get_IsObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::LitJson_IJsonWrapper_get_IsString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.get_IsString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::System_Collections_IList_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.get_IsFixedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonData::System_Collections_IList_get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* LitJson::JsonData::System_Collections_IDictionary_get_Item(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.get_Item", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline void LitJson::JsonData::System_Collections_IDictionary_set_Item(::System::Object*  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.set_Item", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::System::Object* LitJson::JsonData::System_Collections_Specialized_IOrderedDictionary_get_Item(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.Specialized.IOrderedDictionary.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, idx);
}
inline void LitJson::JsonData::System_Collections_Specialized_IOrderedDictionary_set_Item(int32_t  idx, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.Specialized.IOrderedDictionary.set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, value);
}
inline ::System::Object* LitJson::JsonData::System_Collections_IList_get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void LitJson::JsonData::System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::LitJson::JsonData* LitJson::JsonData::get_Item(::StringW  prop_name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::JsonData*>(this, ___internal_method, prop_name);
}
inline void LitJson::JsonData::set_Item(::StringW  prop_name, ::LitJson::JsonData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop_name, value);
}
inline ::LitJson::JsonData* LitJson::JsonData::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::JsonData*>(this, ___internal_method, index);
}
inline void LitJson::JsonData::set_Item(int32_t  index, ::LitJson::JsonData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void LitJson::JsonData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LitJson::JsonData::_ctor(bool  boolean)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boolean);
}
inline void LitJson::JsonData::_ctor(double_t  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, number);
}
inline void LitJson::JsonData::_ctor(int32_t  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, number);
}
inline void LitJson::JsonData::_ctor(int64_t  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, number);
}
inline void LitJson::JsonData::_ctor(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void LitJson::JsonData::_ctor(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline ::LitJson::JsonData* LitJson::JsonData::op_Implicit___LitJson__JsonData_(bool  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Implicit", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::JsonData*>(nullptr, ___internal_method, data);
}
inline ::LitJson::JsonData* LitJson::JsonData::op_Implicit___LitJson__JsonData_(double_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Implicit", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::JsonData*>(nullptr, ___internal_method, data);
}
inline ::LitJson::JsonData* LitJson::JsonData::op_Implicit___LitJson__JsonData_(int32_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::JsonData*>(nullptr, ___internal_method, data);
}
inline ::LitJson::JsonData* LitJson::JsonData::op_Implicit___LitJson__JsonData_(int64_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Implicit", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::JsonData*>(nullptr, ___internal_method, data);
}
inline ::LitJson::JsonData* LitJson::JsonData::op_Implicit___LitJson__JsonData_(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::JsonData*>(nullptr, ___internal_method, data);
}
inline bool LitJson::JsonData::op_Explicit_bool(::LitJson::JsonData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data);
}
inline double_t LitJson::JsonData::op_Explicit_double_t(::LitJson::JsonData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, data);
}
inline int32_t LitJson::JsonData::op_Explicit_int32_t(::LitJson::JsonData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data);
}
inline int64_t LitJson::JsonData::op_Explicit_int64_t(::LitJson::JsonData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, data);
}
inline ::StringW LitJson::JsonData::op_Explicit___StringW(::LitJson::JsonData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"op_Explicit", {}, {::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data);
}
inline void LitJson::JsonData::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.ICollection.CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline void LitJson::JsonData::System_Collections_IDictionary_Add(::System::Object*  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.Add", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void LitJson::JsonData::System_Collections_IDictionary_Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool LitJson::JsonData::System_Collections_IDictionary_Contains(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.Contains", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline ::System::Collections::IDictionaryEnumerator* LitJson::JsonData::System_Collections_IDictionary_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
inline void LitJson::JsonData::System_Collections_IDictionary_Remove(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IDictionary.Remove", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::Collections::IEnumerator* LitJson::JsonData::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool LitJson::JsonData::LitJson_IJsonWrapper_GetBoolean()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.GetBoolean", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline double_t LitJson::JsonData::LitJson_IJsonWrapper_GetDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.GetDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t LitJson::JsonData::LitJson_IJsonWrapper_GetInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.GetInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t LitJson::JsonData::LitJson_IJsonWrapper_GetLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.GetLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::StringW LitJson::JsonData::LitJson_IJsonWrapper_GetString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.GetString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void LitJson::JsonData::LitJson_IJsonWrapper_SetBoolean(bool  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.SetBoolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void LitJson::JsonData::LitJson_IJsonWrapper_SetDouble(double_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.SetDouble", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void LitJson::JsonData::LitJson_IJsonWrapper_SetInt(int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.SetInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void LitJson::JsonData::LitJson_IJsonWrapper_SetLong(int64_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.SetLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void LitJson::JsonData::LitJson_IJsonWrapper_SetString(::StringW  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.SetString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline ::StringW LitJson::JsonData::LitJson_IJsonWrapper_ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void LitJson::JsonData::LitJson_IJsonWrapper_ToJson(::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"LitJson.IJsonWrapper.ToJson", {}, {::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline int32_t LitJson::JsonData::System_Collections_IList_Add(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void LitJson::JsonData::System_Collections_IList_Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool LitJson::JsonData::System_Collections_IList_Contains(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.Contains", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t LitJson::JsonData::System_Collections_IList_IndexOf(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.IndexOf", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void LitJson::JsonData::System_Collections_IList_Insert(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void LitJson::JsonData::System_Collections_IList_Remove(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.Remove", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LitJson::JsonData::System_Collections_IList_RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.IList.RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Collections::IDictionaryEnumerator* LitJson::JsonData::System_Collections_Specialized_IOrderedDictionary_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.Specialized.IOrderedDictionary.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
inline void LitJson::JsonData::System_Collections_Specialized_IOrderedDictionary_Insert(int32_t  idx, ::System::Object*  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.Specialized.IOrderedDictionary.Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, key, value);
}
inline void LitJson::JsonData::System_Collections_Specialized_IOrderedDictionary_RemoveAt(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"System.Collections.Specialized.IOrderedDictionary.RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline ::System::Collections::ICollection* LitJson::JsonData::EnsureCollection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"EnsureCollection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Collections::IDictionary* LitJson::JsonData::EnsureDictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"EnsureDictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method);
}
inline ::System::Collections::IList* LitJson::JsonData::EnsureList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"EnsureList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline ::LitJson::JsonData* LitJson::JsonData::ToJsonData(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"ToJsonData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::JsonData*>(this, ___internal_method, obj);
}
inline void LitJson::JsonData::WriteJson(::LitJson::IJsonWrapper*  obj, ::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"WriteJson", {}, {::i2c::type_of<::LitJson::IJsonWrapper*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, writer);
}
inline int32_t LitJson::JsonData::Add(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void LitJson::JsonData::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool LitJson::JsonData::Equals(::LitJson::JsonData*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"Equals", {}, {::i2c::type_of<::LitJson::JsonData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::LitJson::JsonType LitJson::JsonData::GetJsonType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"GetJsonType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::JsonType>(this, ___internal_method);
}
inline void LitJson::JsonData::SetJsonType(::LitJson::JsonType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"SetJsonType", {}, {::i2c::type_of<::LitJson::JsonType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::StringW LitJson::JsonData::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void LitJson::JsonData::ToJson(::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonData*>(),
                        {"ToJson", {}, {::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::StringW LitJson::JsonData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::LitJson::JsonData*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::LitJson::JsonData* LitJson::JsonData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonData*>());
}
inline ::LitJson::JsonData* LitJson::JsonData::New_ctor(bool  boolean)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonData*>(boolean));
}
inline ::LitJson::JsonData* LitJson::JsonData::New_ctor(double_t  number)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonData*>(number));
}
inline ::LitJson::JsonData* LitJson::JsonData::New_ctor(int32_t  number)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonData*>(number));
}
inline ::LitJson::JsonData* LitJson::JsonData::New_ctor(int64_t  number)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonData*>(number));
}
inline ::LitJson::JsonData* LitJson::JsonData::New_ctor(::System::Object*  obj)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonData*>(obj));
}
inline ::LitJson::JsonData* LitJson::JsonData::New_ctor(::StringW  str)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonData*>(str));
}
/// @brief Convert operator to "::LitJson::IJsonWrapper"
constexpr  LitJson::JsonData::operator ::LitJson::IJsonWrapper*() noexcept {
return static_cast<::LitJson::IJsonWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::LitJson::IJsonWrapper"
constexpr ::LitJson::IJsonWrapper* LitJson::JsonData::i___LitJson__IJsonWrapper() noexcept {
return static_cast<::LitJson::IJsonWrapper*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr  LitJson::JsonData::operator ::System::Collections::IList*() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* LitJson::JsonData::i___System__Collections__IList() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  LitJson::JsonData::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* LitJson::JsonData::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  LitJson::JsonData::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* LitJson::JsonData::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Specialized::IOrderedDictionary"
constexpr  LitJson::JsonData::operator ::System::Collections::Specialized::IOrderedDictionary*() noexcept {
return static_cast<::System::Collections::Specialized::IOrderedDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Specialized::IOrderedDictionary"
constexpr ::System::Collections::Specialized::IOrderedDictionary* LitJson::JsonData::i___System__Collections__Specialized__IOrderedDictionary() noexcept {
return static_cast<::System::Collections::Specialized::IOrderedDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr  LitJson::JsonData::operator ::System::Collections::IDictionary*() noexcept {
return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionary"
constexpr ::System::Collections::IDictionary* LitJson::JsonData::i___System__Collections__IDictionary() noexcept {
return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::LitJson::JsonData*>"
constexpr  LitJson::JsonData::operator ::System::IEquatable_1<::LitJson::JsonData*>*() noexcept {
return static_cast<::System::IEquatable_1<::LitJson::JsonData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::LitJson::JsonData*>"
constexpr ::System::IEquatable_1<::LitJson::JsonData*>* LitJson::JsonData::i___System__IEquatable_1___LitJson__JsonData__() noexcept {
return static_cast<::System::IEquatable_1<::LitJson::JsonData*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::LitJson::JsonData::JsonData()   {
}
