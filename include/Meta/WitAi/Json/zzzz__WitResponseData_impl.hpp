#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/WitResponseData.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_impl.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseData_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseData.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Json::WitResponseData::*)()>(&::Meta::WitAi::Json::WitResponseData::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e470b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseData.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseData::*)(::StringW)>(&::Meta::WitAi::Json::WitResponseData::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e470c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseData::*)(::StringW)>(&::Meta::WitAi::Json::WitResponseData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e3f9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseData::*)(float_t)>(&::Meta::WitAi::Json::WitResponseData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e4358c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseData::*)(double_t)>(&::Meta::WitAi::Json::WitResponseData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e435c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseData::*)(bool)>(&::Meta::WitAi::Json::WitResponseData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e4351c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::WitResponseData::*)(int32_t)>(&::Meta::WitAi::Json::WitResponseData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e43554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::WitResponseData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Json::WitResponseData::*)()>(&::Meta::WitAi::Json::WitResponseData::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e470c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(),
                    {::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Json::WitResponseData::__cordl_internal_get_m_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
constexpr ::StringW const& Meta::WitAi::Json::WitResponseData::__cordl_internal_get_m_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Data;
}
constexpr void Meta::WitAi::Json::WitResponseData::__cordl_internal_set_m_Data(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Data = value;
}
inline ::StringW Meta::WitAi::Json::WitResponseData::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Json::WitResponseData::set_Value(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Json::WitResponseData::_ctor(::StringW  aData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aData);
}
inline void Meta::WitAi::Json::WitResponseData::_ctor(float_t  aData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aData);
}
inline void Meta::WitAi::Json::WitResponseData::_ctor(double_t  aData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aData);
}
inline void Meta::WitAi::Json::WitResponseData::_ctor(bool  aData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aData);
}
inline void Meta::WitAi::Json::WitResponseData::_ctor(int32_t  aData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aData);
}
inline ::StringW Meta::WitAi::Json::WitResponseData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::WitResponseData*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::WitAi::Json::WitResponseData* Meta::WitAi::Json::WitResponseData::New_ctor(::StringW  aData)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::WitResponseData*>(aData));
}
inline ::Meta::WitAi::Json::WitResponseData* Meta::WitAi::Json::WitResponseData::New_ctor(float_t  aData)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::WitResponseData*>(aData));
}
inline ::Meta::WitAi::Json::WitResponseData* Meta::WitAi::Json::WitResponseData::New_ctor(double_t  aData)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::WitResponseData*>(aData));
}
inline ::Meta::WitAi::Json::WitResponseData* Meta::WitAi::Json::WitResponseData::New_ctor(bool  aData)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::WitResponseData*>(aData));
}
inline ::Meta::WitAi::Json::WitResponseData* Meta::WitAi::Json::WitResponseData::New_ctor(int32_t  aData)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::WitResponseData*>(aData));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Json::WitResponseData::WitResponseData()   {
}
