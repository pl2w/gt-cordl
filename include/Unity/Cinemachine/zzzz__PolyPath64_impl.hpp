#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PolyPath64.hpp"
#include "Unity/Cinemachine/zzzz__PolyPathBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__PolyPath64_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include "Unity/Cinemachine/zzzz__PolyPathBase_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::PolyPath64.get_Polygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* (::Unity::Cinemachine::PolyPath64::*)()>(&::Unity::Cinemachine::PolyPath64::get_Polygon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaefb410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPath64*>(),
                        {"get_Polygon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPath64.set_Polygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PolyPath64::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::PolyPath64::set_Polygon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaefb418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPath64*>(),
                        {"set_Polygon", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPath64._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PolyPath64::*)(::Unity::Cinemachine::PolyPathBase*)>(&::Unity::Cinemachine::PolyPath64::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaefb420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPath64*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::PolyPathBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPath64.AddChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::PolyPathBase* (::Unity::Cinemachine::PolyPath64::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::PolyPath64::AddChild)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xaefb424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::PolyPath64*>(),
                    {::i2c::class_of<::Unity::Cinemachine::PolyPath64*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPath64.get_Child
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::PolyPath64* (::Unity::Cinemachine::PolyPath64::*)(int32_t)>(&::Unity::Cinemachine::PolyPath64::get_Child)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xaefb544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPath64*>(),
                        {"get_Child", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPath64.Area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Cinemachine::PolyPath64::*)()>(&::Unity::Cinemachine::PolyPath64::Area)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xaefb638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPath64*>(),
                        {"Area", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*& Unity::Cinemachine::PolyPath64::__cordl_internal_get__Polygon_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Polygon_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* const& Unity::Cinemachine::PolyPath64::__cordl_internal_get__Polygon_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Polygon_k__BackingField;
}
constexpr void Unity::Cinemachine::PolyPath64::__cordl_internal_set__Polygon_k__BackingField(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Polygon_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* Unity::Cinemachine::PolyPath64::get_Polygon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPath64*>(),
                        {"get_Polygon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(this, ___internal_method);
}
inline void Unity::Cinemachine::PolyPath64::set_Polygon(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPath64*>(),
                        {"set_Polygon", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::PolyPath64::_ctor(::Unity::Cinemachine::PolyPathBase*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPath64*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::PolyPathBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline ::Unity::Cinemachine::PolyPathBase* Unity::Cinemachine::PolyPath64::AddChild(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::PolyPath64*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::PolyPathBase*>(this, ___internal_method, p);
}
inline ::Unity::Cinemachine::PolyPath64* Unity::Cinemachine::PolyPath64::get_Child(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPath64*>(),
                        {"get_Child", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::PolyPath64*>(this, ___internal_method, index);
}
inline double_t Unity::Cinemachine::PolyPath64::Area()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPath64*>(),
                        {"Area", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::Unity::Cinemachine::PolyPath64* Unity::Cinemachine::PolyPath64::New_ctor(::Unity::Cinemachine::PolyPathBase*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::PolyPath64*>(parent));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::PolyPath64::PolyPath64()   {
}
