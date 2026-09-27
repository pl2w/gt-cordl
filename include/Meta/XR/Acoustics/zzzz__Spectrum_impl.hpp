#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/Spectrum.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/Acoustics/zzzz__Spectrum_def.hpp"
#include "Meta/XR/Acoustics/zzzz__Spectrum_Point_def.hpp"
#include "Meta/XR/Acoustics/zzzz__Spectrum_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Meta::XR::Acoustics::Spectrum.System_Collections_Generic_IEnumerable_Meta_XR_Acoustics_Spectrum_Point__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Spectrum_Point>* (::Meta::XR::Acoustics::Spectrum::*)()>(&::Meta::XR::Acoustics::Spectrum::System_Collections_Generic_IEnumerable_Meta_XR_Acoustics_Spectrum_Point__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ebed3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {"System.Collections.Generic.IEnumerable<Meta.XR.Acoustics.Spectrum.Point>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::Spectrum.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Meta::XR::Acoustics::Spectrum::*)()>(&::Meta::XR::Acoustics::Spectrum::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ebedcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::Spectrum.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Acoustics::Spectrum::*)(float_t, float_t)>(&::Meta::XR::Acoustics::Spectrum::Add)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9ebee5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {"Add", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::Spectrum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Acoustics::Spectrum::*)(::Meta::XR::Acoustics::Spectrum*)>(&::Meta::XR::Acoustics::Spectrum::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9ebec88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::XR::Acoustics::Spectrum*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::Spectrum.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Acoustics::Spectrum::*)(::Meta::XR::Acoustics::Spectrum*)>(&::Meta::XR::Acoustics::Spectrum::Clone)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9ebea94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {"Clone", {}, {::i2c::type_of<::Meta::XR::Acoustics::Spectrum*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::Spectrum.Sort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Acoustics::Spectrum::*)()>(&::Meta::XR::Acoustics::Spectrum::Sort)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9ebef1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {"Sort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::Spectrum.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::Acoustics::Spectrum::*)()>(&::Meta::XR::Acoustics::Spectrum::ToString)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9ebefec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                    {::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::Spectrum.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::Acoustics::Spectrum::*)(float_t)>(&::Meta::XR::Acoustics::Spectrum::get_Item)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x9ebf1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {"get_Item", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::XR::Acoustics::Spectrum::__cordl_internal_get_selection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selection;
}
constexpr int32_t const& Meta::XR::Acoustics::Spectrum::__cordl_internal_get_selection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selection;
}
constexpr void Meta::XR::Acoustics::Spectrum::__cordl_internal_set_selection(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selection = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Spectrum_Point>*& Meta::XR::Acoustics::Spectrum::__cordl_internal_get_points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Spectrum_Point>* const& Meta::XR::Acoustics::Spectrum::__cordl_internal_get_points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr void Meta::XR::Acoustics::Spectrum::__cordl_internal_set_points(::System::Collections::Generic::List_1<::GlobalNamespace::Spectrum_Point>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___points = value;
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Spectrum_Point>* Meta::XR::Acoustics::Spectrum::System_Collections_Generic_IEnumerable_Meta_XR_Acoustics_Spectrum_Point__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {"System.Collections.Generic.IEnumerable<Meta.XR.Acoustics.Spectrum.Point>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Spectrum_Point>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Meta::XR::Acoustics::Spectrum::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Meta::XR::Acoustics::Spectrum::Add(float_t  frequency, float_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {"Add", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frequency, data);
}
inline void Meta::XR::Acoustics::Spectrum::_ctor(::Meta::XR::Acoustics::Spectrum*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::XR::Acoustics::Spectrum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Meta::XR::Acoustics::Spectrum::Clone(::Meta::XR::Acoustics::Spectrum*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {"Clone", {}, {::i2c::type_of<::Meta::XR::Acoustics::Spectrum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Meta::XR::Acoustics::Spectrum::Sort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {"Sort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::XR::Acoustics::Spectrum::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t Meta::XR::Acoustics::Spectrum::get_Item(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum*>(),
                        {"get_Item", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, f);
}
inline ::Meta::XR::Acoustics::Spectrum* Meta::XR::Acoustics::Spectrum::New_ctor(::Meta::XR::Acoustics::Spectrum*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::Acoustics::Spectrum*>(other));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Spectrum_Point>"
constexpr  Meta::XR::Acoustics::Spectrum::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Spectrum_Point>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Spectrum_Point>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Spectrum_Point>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Spectrum_Point>* Meta::XR::Acoustics::Spectrum::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__Spectrum_Point_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Spectrum_Point>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Meta::XR::Acoustics::Spectrum::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Meta::XR::Acoustics::Spectrum::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::Spectrum::Spectrum()   {
}
//  Writing Method size for method: ::Meta::XR::Acoustics::Spectrum___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Acoustics::Spectrum___c::*)()>(&::Meta::XR::Acoustics::Spectrum___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebf69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::Spectrum___c._get_Item_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::Acoustics::Spectrum___c::*)(::GlobalNamespace::Spectrum_Point)>(&::Meta::XR::Acoustics::Spectrum___c::_get_Item_b__11_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ebf6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum___c*>(),
                        {"<get_Item>b__11_0", {}, {::i2c::type_of<::GlobalNamespace::Spectrum_Point>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::Spectrum___c._get_Item_b__11_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::Acoustics::Spectrum___c::*)(::GlobalNamespace::Spectrum_Point)>(&::Meta::XR::Acoustics::Spectrum___c::_get_Item_b__11_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ebf6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum___c*>(),
                        {"<get_Item>b__11_1", {}, {::i2c::type_of<::GlobalNamespace::Spectrum_Point>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::Acoustics::Spectrum___c::setStaticF___9(::Meta::XR::Acoustics::Spectrum___c*  value)  {
::cordl_internals::setStaticField<::Meta::XR::Acoustics::Spectrum___c*, "<>9", ::Meta::XR::Acoustics::Spectrum___c*>(std::forward<::Meta::XR::Acoustics::Spectrum___c*>(value));
}
inline ::Meta::XR::Acoustics::Spectrum___c* Meta::XR::Acoustics::Spectrum___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::XR::Acoustics::Spectrum___c*, "<>9", ::Meta::XR::Acoustics::Spectrum___c*>();
}
inline void Meta::XR::Acoustics::Spectrum___c::setStaticF___9__11_0(::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>*, "<>9__11_0", ::Meta::XR::Acoustics::Spectrum___c*>(std::forward<::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>* Meta::XR::Acoustics::Spectrum___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>*, "<>9__11_0", ::Meta::XR::Acoustics::Spectrum___c*>();
}
inline void Meta::XR::Acoustics::Spectrum___c::setStaticF___9__11_1(::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>*, "<>9__11_1", ::Meta::XR::Acoustics::Spectrum___c*>(std::forward<::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>* Meta::XR::Acoustics::Spectrum___c::getStaticF___9__11_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>*, "<>9__11_1", ::Meta::XR::Acoustics::Spectrum___c*>();
}
inline void Meta::XR::Acoustics::Spectrum___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Meta::XR::Acoustics::Spectrum___c::_get_Item_b__11_0(::GlobalNamespace::Spectrum_Point  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum___c*>(),
                        {"<get_Item>b__11_0", {}, {::i2c::type_of<::GlobalNamespace::Spectrum_Point>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, p);
}
inline float_t Meta::XR::Acoustics::Spectrum___c::_get_Item_b__11_1(::GlobalNamespace::Spectrum_Point  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::Spectrum___c*>(),
                        {"<get_Item>b__11_1", {}, {::i2c::type_of<::GlobalNamespace::Spectrum_Point>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, p);
}
inline ::Meta::XR::Acoustics::Spectrum___c* Meta::XR::Acoustics::Spectrum___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::Acoustics::Spectrum___c*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::Spectrum___c::Spectrum___c()   {
}
