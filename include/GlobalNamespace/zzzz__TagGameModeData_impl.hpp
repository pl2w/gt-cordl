#pragma once
// IWYU pragma private; include "GlobalNamespace/TagGameModeData.hpp"
#include "GlobalNamespace/zzzz__FusionGameModeData_impl.hpp"
#include "GlobalNamespace/zzzz__TagData_impl.hpp"
#include "GlobalNamespace/zzzz__TagGameModeData_def.hpp"
#include "GlobalNamespace/zzzz__TagData_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TagGameModeData.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::TagGameModeData::*)()>(&::GlobalNamespace::TagGameModeData::get_Data)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x579c4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TagGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::TagGameModeData*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TagGameModeData.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TagGameModeData::*)(::System::Object*)>(&::GlobalNamespace::TagGameModeData::set_Data)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x579c5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TagGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::TagGameModeData*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TagGameModeData.get_tagData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TagData (::GlobalNamespace::TagGameModeData::*)()>(&::GlobalNamespace::TagGameModeData::get_tagData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x579c560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TagGameModeData*>(),
                        {"get_tagData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TagGameModeData.set_tagData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TagGameModeData::*)(::GlobalNamespace::TagData)>(&::GlobalNamespace::TagGameModeData::set_tagData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x579c6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TagGameModeData*>(),
                        {"set_tagData", {}, {::i2c::type_of<::GlobalNamespace::TagData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TagGameModeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TagGameModeData::*)()>(&::GlobalNamespace::TagGameModeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579c6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TagGameModeData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TagGameModeData.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TagGameModeData::*)(bool)>(&::GlobalNamespace::TagGameModeData::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x579c704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TagGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::TagGameModeData*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TagGameModeData.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TagGameModeData::*)()>(&::GlobalNamespace::TagGameModeData::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x579c760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TagGameModeData*>(),
                    {::i2c::class_of<::GlobalNamespace::TagGameModeData*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TagData& GlobalNamespace::TagGameModeData::__cordl_internal_get__tagData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagData;
}
constexpr ::GlobalNamespace::TagData const& GlobalNamespace::TagGameModeData::__cordl_internal_get__tagData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagData;
}
constexpr void GlobalNamespace::TagGameModeData::__cordl_internal_set__tagData(::GlobalNamespace::TagData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tagData = value;
}
inline ::System::Object* GlobalNamespace::TagGameModeData::get_Data()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TagGameModeData*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::TagGameModeData::set_Data(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TagGameModeData*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TagData GlobalNamespace::TagGameModeData::get_tagData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TagGameModeData*>(),
                        {"get_tagData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TagData>(this, ___internal_method);
}
inline void GlobalNamespace::TagGameModeData::set_tagData(::GlobalNamespace::TagData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TagGameModeData*>(),
                        {"set_tagData", {}, {::i2c::type_of<::GlobalNamespace::TagData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TagGameModeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TagGameModeData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TagGameModeData::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TagGameModeData*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::TagGameModeData::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TagGameModeData*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TagGameModeData* GlobalNamespace::TagGameModeData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TagGameModeData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TagGameModeData::TagGameModeData()   {
}
