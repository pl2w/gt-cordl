#pragma once
// IWYU pragma private; include "GlobalNamespace/HuntGameModeData.hpp"
#include "GlobalNamespace/zzzz__FusionGameModeData_impl.hpp"
#include "GlobalNamespace/zzzz__HuntData_impl.hpp"
#include "GlobalNamespace/zzzz__HuntGameModeData_def.hpp"
#include "GlobalNamespace/zzzz__HuntData_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HuntGameModeData.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::HuntGameModeData::*)()>(&::GlobalNamespace::HuntGameModeData::get_Data)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x579c108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HuntGameModeData.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HuntGameModeData::*)(::System::Object*)>(&::GlobalNamespace::HuntGameModeData::set_Data)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x579c1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HuntGameModeData.get_huntdata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HuntData (::GlobalNamespace::HuntGameModeData::*)()>(&::GlobalNamespace::HuntGameModeData::get_huntdata)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x579c190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(),
                        {"get_huntdata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HuntGameModeData.set_huntdata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HuntGameModeData::*)(::GlobalNamespace::HuntData)>(&::GlobalNamespace::HuntGameModeData::set_huntdata)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x579c2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(),
                        {"set_huntdata", {}, {::i2c::type_of<::GlobalNamespace::HuntData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HuntGameModeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HuntGameModeData::*)()>(&::GlobalNamespace::HuntGameModeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579c32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HuntGameModeData.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HuntGameModeData::*)(bool)>(&::GlobalNamespace::HuntGameModeData::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x579c334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HuntGameModeData.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HuntGameModeData::*)()>(&::GlobalNamespace::HuntGameModeData::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x579c390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::HuntData& GlobalNamespace::HuntGameModeData::__cordl_internal_get__huntdata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____huntdata;
}
constexpr ::GlobalNamespace::HuntData const& GlobalNamespace::HuntGameModeData::__cordl_internal_get__huntdata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____huntdata;
}
constexpr void GlobalNamespace::HuntGameModeData::__cordl_internal_set__huntdata(::GlobalNamespace::HuntData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____huntdata = value;
}
inline ::System::Object* GlobalNamespace::HuntGameModeData::get_Data()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::HuntGameModeData::set_Data(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::HuntData GlobalNamespace::HuntGameModeData::get_huntdata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(),
                        {"get_huntdata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HuntData>(this, ___internal_method);
}
inline void GlobalNamespace::HuntGameModeData::set_huntdata(::GlobalNamespace::HuntData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(),
                        {"set_huntdata", {}, {::i2c::type_of<::GlobalNamespace::HuntData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HuntGameModeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HuntGameModeData::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::HuntGameModeData::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HuntGameModeData*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HuntGameModeData* GlobalNamespace::HuntGameModeData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HuntGameModeData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HuntGameModeData::HuntGameModeData()   {
}
