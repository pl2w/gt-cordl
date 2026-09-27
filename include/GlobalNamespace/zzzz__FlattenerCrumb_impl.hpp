#pragma once
// IWYU pragma private; include "GlobalNamespace/FlattenerCrumb.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlattenerCrumb_def.hpp"
#include "GlobalNamespace/zzzz__ObjectHierarchyFlattener_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlattenerCrumb.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlattenerCrumb::*)()>(&::GlobalNamespace::FlattenerCrumb::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56743ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlattenerCrumb*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlattenerCrumb.AddFlattenerReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlattenerCrumb::*)(::GlobalNamespace::ObjectHierarchyFlattener*)>(&::GlobalNamespace::FlattenerCrumb::AddFlattenerReference)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5674578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlattenerCrumb*>(),
                        {"AddFlattenerReference", {}, {::i2c::type_of<::GlobalNamespace::ObjectHierarchyFlattener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlattenerCrumb._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlattenerCrumb::*)()>(&::GlobalNamespace::FlattenerCrumb::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56745f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlattenerCrumb*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>*& GlobalNamespace::FlattenerCrumb::__cordl_internal_get_flattenerList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flattenerList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>* const& GlobalNamespace::FlattenerCrumb::__cordl_internal_get_flattenerList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flattenerList;
}
constexpr void GlobalNamespace::FlattenerCrumb::__cordl_internal_set_flattenerList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flattenerList = value;
}
inline void GlobalNamespace::FlattenerCrumb::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlattenerCrumb*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlattenerCrumb::AddFlattenerReference(::GlobalNamespace::ObjectHierarchyFlattener*  flattener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlattenerCrumb*>(),
                        {"AddFlattenerReference", {}, {::i2c::type_of<::GlobalNamespace::ObjectHierarchyFlattener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flattener);
}
inline void GlobalNamespace::FlattenerCrumb::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlattenerCrumb*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlattenerCrumb* GlobalNamespace::FlattenerCrumb::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlattenerCrumb*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlattenerCrumb::FlattenerCrumb()   {
}
