#pragma once
// IWYU pragma private; include "UnityEngine/Serialization/FormerlySerializedAsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Serialization/zzzz__FormerlySerializedAsAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Serialization::FormerlySerializedAsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Serialization::FormerlySerializedAsAttribute::*)(::StringW)>(&::UnityEngine::Serialization::FormerlySerializedAsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb5fb614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Serialization::FormerlySerializedAsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Serialization::FormerlySerializedAsAttribute.get_oldName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Serialization::FormerlySerializedAsAttribute::*)()>(&::UnityEngine::Serialization::FormerlySerializedAsAttribute::get_oldName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5fb644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Serialization::FormerlySerializedAsAttribute*>(),
                        {"get_oldName", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Serialization::FormerlySerializedAsAttribute::__cordl_internal_get_m_oldName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_oldName;
}
constexpr ::StringW const& UnityEngine::Serialization::FormerlySerializedAsAttribute::__cordl_internal_get_m_oldName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_oldName;
}
constexpr void UnityEngine::Serialization::FormerlySerializedAsAttribute::__cordl_internal_set_m_oldName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_oldName = value;
}
inline void UnityEngine::Serialization::FormerlySerializedAsAttribute::_ctor(::StringW  oldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Serialization::FormerlySerializedAsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldName);
}
inline ::StringW UnityEngine::Serialization::FormerlySerializedAsAttribute::get_oldName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Serialization::FormerlySerializedAsAttribute*>(),
                        {"get_oldName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Serialization::FormerlySerializedAsAttribute* UnityEngine::Serialization::FormerlySerializedAsAttribute::New_ctor(::StringW  oldName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Serialization::FormerlySerializedAsAttribute*>(oldName));
}
// Ctor Parameters []
constexpr ::UnityEngine::Serialization::FormerlySerializedAsAttribute::FormerlySerializedAsAttribute()   {
}
