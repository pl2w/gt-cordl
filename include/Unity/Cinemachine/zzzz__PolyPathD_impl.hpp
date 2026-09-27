#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PolyPathD.hpp"
#include "Unity/Cinemachine/zzzz__PolyPathBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__PolyPathD_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include "Unity/Cinemachine/zzzz__PointD_def.hpp"
#include "Unity/Cinemachine/zzzz__PolyPathBase_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathD.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Cinemachine::PolyPathD::*)()>(&::Unity::Cinemachine::PolyPathD::get_Scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaefb808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathD.set_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PolyPathD::*)(double_t)>(&::Unity::Cinemachine::PolyPathD::set_Scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaefb810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {"set_Scale", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathD.get_Polygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* (::Unity::Cinemachine::PolyPathD::*)()>(&::Unity::Cinemachine::PolyPathD::get_Polygon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaefb818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {"get_Polygon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathD.set_Polygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PolyPathD::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*)>(&::Unity::Cinemachine::PolyPathD::set_Polygon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaefb820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {"set_Polygon", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PolyPathD::*)(::Unity::Cinemachine::PolyPathBase*)>(&::Unity::Cinemachine::PolyPathD::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaefb828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::PolyPathBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathD.AddChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::PolyPathBase* (::Unity::Cinemachine::PolyPathD::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::PolyPathD::AddChild)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xaefb82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                    {::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathD.get_Child
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::PolyPathD* (::Unity::Cinemachine::PolyPathD::*)(int32_t)>(&::Unity::Cinemachine::PolyPathD::get_Child)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xaefb9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {"get_Child", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathD.Area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Cinemachine::PolyPathD::*)()>(&::Unity::Cinemachine::PolyPathD::Area)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xaefbab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {"Area", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Unity::Cinemachine::PolyPathD::__cordl_internal_get__Scale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scale_k__BackingField;
}
constexpr double_t const& Unity::Cinemachine::PolyPathD::__cordl_internal_get__Scale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scale_k__BackingField;
}
constexpr void Unity::Cinemachine::PolyPathD::__cordl_internal_set__Scale_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Scale_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*& Unity::Cinemachine::PolyPathD::__cordl_internal_get__Polygon_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Polygon_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* const& Unity::Cinemachine::PolyPathD::__cordl_internal_get__Polygon_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Polygon_k__BackingField;
}
constexpr void Unity::Cinemachine::PolyPathD::__cordl_internal_set__Polygon_k__BackingField(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Polygon_k__BackingField = value;
}
inline double_t Unity::Cinemachine::PolyPathD::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::PolyPathD::set_Scale(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {"set_Scale", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* Unity::Cinemachine::PolyPathD::get_Polygon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {"get_Polygon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(this, ___internal_method);
}
inline void Unity::Cinemachine::PolyPathD::set_Polygon(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {"set_Polygon", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::PolyPathD::_ctor(::Unity::Cinemachine::PolyPathBase*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::PolyPathBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline ::Unity::Cinemachine::PolyPathBase* Unity::Cinemachine::PolyPathD::AddChild(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::PolyPathBase*>(this, ___internal_method, p);
}
inline ::Unity::Cinemachine::PolyPathD* Unity::Cinemachine::PolyPathD::get_Child(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {"get_Child", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::PolyPathD*>(this, ___internal_method, index);
}
inline double_t Unity::Cinemachine::PolyPathD::Area()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathD*>(),
                        {"Area", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::Unity::Cinemachine::PolyPathD* Unity::Cinemachine::PolyPathD::New_ctor(::Unity::Cinemachine::PolyPathBase*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::PolyPathD*>(parent));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::PolyPathD::PolyPathD()   {
}
