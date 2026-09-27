#pragma once
// IWYU pragma private; include "System/ComponentModel/ListSortDescriptionCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__ListSortDescriptionCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__ListSortDescription_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListSortDescriptionCollection::*)()>(&::System::ComponentModel::ListSortDescriptionCollection::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xad5b380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListSortDescriptionCollection::*)(::ArrayW<::System::ComponentModel::ListSortDescription*>)>(&::System::ComponentModel::ListSortDescriptionCollection::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xad5b3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::ListSortDescription*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ListSortDescription* (::System::ComponentModel::ListSortDescriptionCollection::*)(int32_t)>(&::System::ComponentModel::ListSortDescriptionCollection::get_Item)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xad5b4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListSortDescriptionCollection::*)(int32_t, ::System::ComponentModel::ListSortDescription*)>(&::System::ComponentModel::ListSortDescriptionCollection::set_Item)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xad5b55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ComponentModel::ListSortDescription*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.System_Collections_IList_get_IsFixedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ListSortDescriptionCollection::*)()>(&::System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad5b5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.get_IsFixedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.System_Collections_IList_get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ListSortDescriptionCollection::*)()>(&::System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad5b5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.System_Collections_IList_get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ListSortDescriptionCollection::*)(int32_t)>(&::System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad5b5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.System_Collections_IList_set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListSortDescriptionCollection::*)(int32_t, ::System::Object*)>(&::System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_set_Item)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xad5b5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.System_Collections_IList_Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ListSortDescriptionCollection::*)(::System::Object*)>(&::System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Add)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xad5b608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.System_Collections_IList_Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListSortDescriptionCollection::*)()>(&::System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Clear)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xad5b654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ListSortDescriptionCollection::*)(::System::Object*)>(&::System::ComponentModel::ListSortDescriptionCollection::Contains)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xad5b6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ListSortDescriptionCollection::*)(::System::Object*)>(&::System::ComponentModel::ListSortDescriptionCollection::IndexOf)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xad5b74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.System_Collections_IList_Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListSortDescriptionCollection::*)(int32_t, ::System::Object*)>(&::System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Insert)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xad5b7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.System_Collections_IList_Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListSortDescriptionCollection::*)(::System::Object*)>(&::System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Remove)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xad5b844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.Remove", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.System_Collections_IList_RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListSortDescriptionCollection::*)(int32_t)>(&::System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_RemoveAt)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xad5b890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ListSortDescriptionCollection::*)()>(&::System::ComponentModel::ListSortDescriptionCollection::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xad5b8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.System_Collections_ICollection_get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ListSortDescriptionCollection::*)()>(&::System::ComponentModel::ListSortDescriptionCollection::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad5b8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.System_Collections_ICollection_get_SyncRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ListSortDescriptionCollection::*)()>(&::System::ComponentModel::ListSortDescriptionCollection::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad5b904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ListSortDescriptionCollection::*)(::System::Array*, int32_t)>(&::System::ComponentModel::ListSortDescriptionCollection::CopyTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xad5b908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescriptionCollection.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::ComponentModel::ListSortDescriptionCollection::*)()>(&::System::ComponentModel::ListSortDescriptionCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xad5b928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::ComponentModel::ListSortDescriptionCollection::__cordl_internal_get__sorts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sorts;
}
constexpr ::System::Collections::ArrayList* const& System::ComponentModel::ListSortDescriptionCollection::__cordl_internal_get__sorts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sorts;
}
constexpr void System::ComponentModel::ListSortDescriptionCollection::__cordl_internal_set__sorts(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sorts = value;
}
inline void System::ComponentModel::ListSortDescriptionCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::ListSortDescriptionCollection::_ctor(::ArrayW<::System::ComponentModel::ListSortDescription*>  sorts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::ComponentModel::ListSortDescription*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sorts);
}
inline ::System::ComponentModel::ListSortDescription* System::ComponentModel::ListSortDescriptionCollection::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ListSortDescription*>(this, ___internal_method, index);
}
inline void System::ComponentModel::ListSortDescriptionCollection::set_Item(int32_t  index, ::System::ComponentModel::ListSortDescription*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ComponentModel::ListSortDescription*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline bool System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.get_IsFixedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline int32_t System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Add(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::ComponentModel::ListSortDescriptionCollection::Contains(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::ComponentModel::ListSortDescriptionCollection::IndexOf(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Insert(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Remove(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.Remove", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IList.RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t System::ComponentModel::ListSortDescriptionCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::ListSortDescriptionCollection::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::ListSortDescriptionCollection::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::ComponentModel::ListSortDescriptionCollection::CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Collections::IEnumerator* System::ComponentModel::ListSortDescriptionCollection::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ListSortDescriptionCollection*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::ComponentModel::ListSortDescriptionCollection* System::ComponentModel::ListSortDescriptionCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ListSortDescriptionCollection*>());
}
inline ::System::ComponentModel::ListSortDescriptionCollection* System::ComponentModel::ListSortDescriptionCollection::New_ctor(::ArrayW<::System::ComponentModel::ListSortDescription*>  sorts)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ListSortDescriptionCollection*>(sorts));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr  System::ComponentModel::ListSortDescriptionCollection::operator ::System::Collections::IList*() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* System::ComponentModel::ListSortDescriptionCollection::i___System__Collections__IList() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::ComponentModel::ListSortDescriptionCollection::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::ComponentModel::ListSortDescriptionCollection::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::ComponentModel::ListSortDescriptionCollection::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::ComponentModel::ListSortDescriptionCollection::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ListSortDescriptionCollection::ListSortDescriptionCollection()   {
}
