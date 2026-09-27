#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ReadOnlyHierarchyViewModelList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ReadOnlyHierarchyViewModelList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReadOnlyHierarchyViewModelList_Enumerator_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.get_IsFixedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)()>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb734004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"get_IsFixedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)()>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb73400c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)()>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb734014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)(::System::Object*)>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::Contains)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb73402c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)(::System::Object*)>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::IndexOf)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb7340c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)(::Unity::Hierarchy::HierarchyViewModel*)>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb73418c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)(int32_t)>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::get_Item)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb7341bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)(int32_t, ::System::Object*)>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::set_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb734234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)(::System::Array*, int32_t)>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::CopyTo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb73426c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)()>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::GetEnumerator)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb734324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)()>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb734408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.get_SyncRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)()>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::get_SyncRoot)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb734440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"get_SyncRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)(::System::Object*)>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::Add)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb734478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)()>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::Clear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb7344b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)(int32_t, ::System::Object*)>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::Insert)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb7344e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)(::System::Object*)>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::Remove)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb734520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::*)(int32_t)>(&::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::RemoveAt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb734558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Hierarchy::HierarchyViewModel*& UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::__cordl_internal_get_m_HierarchyViewModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HierarchyViewModel;
}
constexpr ::Unity::Hierarchy::HierarchyViewModel* const& UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::__cordl_internal_get_m_HierarchyViewModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HierarchyViewModel;
}
constexpr void UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::__cordl_internal_set_m_HierarchyViewModel(::Unity::Hierarchy::HierarchyViewModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HierarchyViewModel = value;
}
inline bool UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"get_IsFixedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::Contains(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::IndexOf(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::_ctor(::Unity::Hierarchy::HierarchyViewModel*  viewModel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Hierarchy::HierarchyViewModel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewModel);
}
inline ::System::Object* UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::set_Item(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::Add(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"Add", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::Insert(int32_t  index, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::Remove(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList* UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::New_ctor(::Unity::Hierarchy::HierarchyViewModel*  viewModel)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*>(viewModel));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr  UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::operator ::System::Collections::IList*() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::i___System__Collections__IList() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList::ReadOnlyHierarchyViewModelList()   {
}
