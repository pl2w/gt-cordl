#pragma once
// IWYU pragma private; include "System/ComponentModel/IBindingListView.hpp"
#include "System/ComponentModel/zzzz__IBindingListView_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__IBindingList_def.hpp"
#include "System/ComponentModel/zzzz__ListSortDescriptionCollection_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::IBindingListView.ApplySort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::IBindingListView::*)(::System::ComponentModel::ListSortDescriptionCollection*)>(&::System::ComponentModel::IBindingListView::ApplySort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IBindingListView*>(),
                    {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::IBindingListView.get_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::IBindingListView::*)()>(&::System::ComponentModel::IBindingListView::get_Filter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IBindingListView*>(),
                    {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::IBindingListView.set_Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::IBindingListView::*)(::StringW)>(&::System::ComponentModel::IBindingListView::set_Filter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IBindingListView*>(),
                    {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::IBindingListView.get_SortDescriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ListSortDescriptionCollection* (::System::ComponentModel::IBindingListView::*)()>(&::System::ComponentModel::IBindingListView::get_SortDescriptions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IBindingListView*>(),
                    {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::IBindingListView.RemoveFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::IBindingListView::*)()>(&::System::ComponentModel::IBindingListView::RemoveFilter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IBindingListView*>(),
                    {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::IBindingListView.get_SupportsAdvancedSorting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::IBindingListView::*)()>(&::System::ComponentModel::IBindingListView::get_SupportsAdvancedSorting)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IBindingListView*>(),
                    {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::IBindingListView.get_SupportsFiltering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::IBindingListView::*)()>(&::System::ComponentModel::IBindingListView::get_SupportsFiltering)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IBindingListView*>(),
                    {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void System::ComponentModel::IBindingListView::ApplySort(::System::ComponentModel::ListSortDescriptionCollection*  sorts)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sorts);
}
inline ::StringW System::ComponentModel::IBindingListView::get_Filter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::ComponentModel::IBindingListView::set_Filter(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::ListSortDescriptionCollection* System::ComponentModel::IBindingListView::get_SortDescriptions()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ListSortDescriptionCollection*>(this, ___internal_method);
}
inline void System::ComponentModel::IBindingListView::RemoveFilter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::ComponentModel::IBindingListView::get_SupportsAdvancedSorting()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::IBindingListView::get_SupportsFiltering()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IBindingListView*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::System::ComponentModel::IBindingList"
constexpr  System::ComponentModel::IBindingListView::operator ::System::ComponentModel::IBindingList*() noexcept {
return static_cast<::System::ComponentModel::IBindingList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IBindingList"
constexpr ::System::ComponentModel::IBindingList* System::ComponentModel::IBindingListView::i___System__ComponentModel__IBindingList() noexcept {
return static_cast<::System::ComponentModel::IBindingList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
constexpr  System::ComponentModel::IBindingListView::operator ::System::Collections::IList*() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* System::ComponentModel::IBindingListView::i___System__Collections__IList() noexcept {
return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::ComponentModel::IBindingListView::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::ComponentModel::IBindingListView::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::ComponentModel::IBindingListView::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::ComponentModel::IBindingListView::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
