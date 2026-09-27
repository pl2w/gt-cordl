#pragma once
// IWYU pragma private; include "GlobalNamespace/CasualGameModeData.hpp"
#include "GlobalNamespace/zzzz__CasualData_impl.hpp"
#include "GlobalNamespace/zzzz__FusionGameModeData_impl.hpp"
#include "GlobalNamespace/zzzz__CasualGameModeData_def.hpp"
#include "GlobalNamespace/zzzz__CasualData_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CasualGameModeData.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CasualGameModeData::*)()>(&::GlobalNamespace::CasualGameModeData::get_Data)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x579be00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameModeData.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CasualGameModeData::*)(::System::Object*)>(&::GlobalNamespace::CasualGameModeData::set_Data)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x579bec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameModeData.get_casualData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CasualData (::GlobalNamespace::CasualGameModeData::*)()>(&::GlobalNamespace::CasualGameModeData::get_casualData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x579be64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(),
                        {"get_casualData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameModeData.set_casualData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CasualGameModeData::*)(::GlobalNamespace::CasualData)>(&::GlobalNamespace::CasualGameModeData::set_casualData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x579bec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(),
                        {"set_casualData", {}, {::i2c::type_of<::GlobalNamespace::CasualData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameModeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CasualGameModeData::*)()>(&::GlobalNamespace::CasualGameModeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579bf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameModeData.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CasualGameModeData::*)(bool)>(&::GlobalNamespace::CasualGameModeData::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579bf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CasualGameModeData.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CasualGameModeData::*)()>(&::GlobalNamespace::CasualGameModeData::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x579bf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CasualData& GlobalNamespace::CasualGameModeData::__cordl_internal_get__casualData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____casualData;
}
constexpr ::GlobalNamespace::CasualData const& GlobalNamespace::CasualGameModeData::__cordl_internal_get__casualData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____casualData;
}
constexpr void GlobalNamespace::CasualGameModeData::__cordl_internal_set__casualData(::GlobalNamespace::CasualData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____casualData = value;
}
inline ::System::Object* GlobalNamespace::CasualGameModeData::get_Data()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CasualGameModeData::set_Data(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::CasualData GlobalNamespace::CasualGameModeData::get_casualData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(),
                        {"get_casualData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CasualData>(this, ___internal_method);
}
inline void GlobalNamespace::CasualGameModeData::set_casualData(::GlobalNamespace::CasualData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(),
                        {"set_casualData", {}, {::i2c::type_of<::GlobalNamespace::CasualData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CasualGameModeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CasualGameModeData::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::CasualGameModeData::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CasualGameModeData*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CasualGameModeData* GlobalNamespace::CasualGameModeData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CasualGameModeData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CasualGameModeData::CasualGameModeData()   {
}
