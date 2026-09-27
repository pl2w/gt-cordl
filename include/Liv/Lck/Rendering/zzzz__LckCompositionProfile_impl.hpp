#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckCompositionProfile.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionLayer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionProfile_def.hpp"
#include "Liv/Lck/Rendering/zzzz__ILckCompositionLayer_def.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionLayer_def.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionProfile_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionProfile.SetOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionProfile::*)(bool)>(&::Liv::Lck::Rendering::LckCompositionProfile::SetOrientation)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x9d3f1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionProfile*>(),
                        {"SetOrientation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionProfile.SetLayerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionProfile::*)(::StringW, bool)>(&::Liv::Lck::Rendering::LckCompositionProfile::SetLayerActive)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9d3f474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionProfile*>(),
                        {"SetLayerActive", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionProfile.GetActiveLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>* (::Liv::Lck::Rendering::LckCompositionProfile::*)()>(&::Liv::Lck::Rendering::LckCompositionProfile::GetActiveLayers)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x9d3f528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionProfile*>(),
                        {"GetActiveLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckCompositionProfile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckCompositionProfile::*)()>(&::Liv::Lck::Rendering::LckCompositionProfile::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d3f77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionProfile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::LckCompositionLayer*>*& Liv::Lck::Rendering::LckCompositionProfile::__cordl_internal_get_Layers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Layers;
}
constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::LckCompositionLayer*>* const& Liv::Lck::Rendering::LckCompositionProfile::__cordl_internal_get_Layers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Layers;
}
constexpr void Liv::Lck::Rendering::LckCompositionProfile::__cordl_internal_set_Layers(::System::Collections::Generic::List_1<::Liv::Lck::Rendering::LckCompositionLayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Layers = value;
}
inline void Liv::Lck::Rendering::LckCompositionProfile::SetOrientation(bool  isHorizontal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionProfile*>(),
                        {"SetOrientation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isHorizontal);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::Rendering::LckCompositionLayer*>)
inline T Liv::Lck::Rendering::LckCompositionProfile::GetLayer(::StringW  name)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionProfile*>(),
                    {"GetLayer", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, name);
}
inline void Liv::Lck::Rendering::LckCompositionProfile::SetLayerActive(::StringW  name, bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionProfile*>(),
                        {"SetLayerActive", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, isActive);
}
inline ::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>* Liv::Lck::Rendering::LckCompositionProfile::GetActiveLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionProfile*>(),
                        {"GetActiveLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Liv::Lck::Rendering::ILckCompositionLayer*>*>(this, ___internal_method);
}
inline void Liv::Lck::Rendering::LckCompositionProfile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionProfile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Rendering::LckCompositionProfile* Liv::Lck::Rendering::LckCompositionProfile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Rendering::LckCompositionProfile*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Rendering::LckCompositionProfile::LckCompositionProfile()   {
}
template<typename T>
constexpr ::StringW& Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1<T>::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
template<typename T>
constexpr ::StringW const& Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1<T>::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
template<typename T>
constexpr void Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1<T>::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
template<typename T>
inline void Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1<T>::_GetLayer_b__0(::Liv::Lck::Rendering::LckCompositionLayer*  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1<T>*>(),
                        {"<GetLayer>b__0", {}, {::i2c::type_of<::Liv::Lck::Rendering::LckCompositionLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layer);
}
template<typename T>
inline ::Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1<T>* Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Liv::Lck::Rendering::LckCompositionProfile___c__DisplayClass2_0_1<T>::LckCompositionProfile___c__DisplayClass2_0_1()   {
}
