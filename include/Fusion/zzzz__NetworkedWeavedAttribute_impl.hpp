#pragma once
// IWYU pragma private; include "Fusion/NetworkedWeavedAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__NetworkedWeavedAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkedWeavedAttribute.get_WordOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkedWeavedAttribute::*)()>(&::Fusion::NetworkedWeavedAttribute::get_WordOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedAttribute*>(),
                        {"get_WordOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkedWeavedAttribute.get_WordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkedWeavedAttribute::*)()>(&::Fusion::NetworkedWeavedAttribute::get_WordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedAttribute*>(),
                        {"get_WordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkedWeavedAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkedWeavedAttribute::*)(int32_t, int32_t)>(&::Fusion::NetworkedWeavedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f70170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkedWeavedAttribute::__cordl_internal_get__WordOffset_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordOffset_k__BackingField;
}
constexpr int32_t const& Fusion::NetworkedWeavedAttribute::__cordl_internal_get__WordOffset_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordOffset_k__BackingField;
}
constexpr void Fusion::NetworkedWeavedAttribute::__cordl_internal_set__WordOffset_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WordOffset_k__BackingField = value;
}
constexpr int32_t& Fusion::NetworkedWeavedAttribute::__cordl_internal_get__WordCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordCount_k__BackingField;
}
constexpr int32_t const& Fusion::NetworkedWeavedAttribute::__cordl_internal_get__WordCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordCount_k__BackingField;
}
constexpr void Fusion::NetworkedWeavedAttribute::__cordl_internal_set__WordCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WordCount_k__BackingField = value;
}
inline int32_t Fusion::NetworkedWeavedAttribute::get_WordOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedAttribute*>(),
                        {"get_WordOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::NetworkedWeavedAttribute::get_WordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedAttribute*>(),
                        {"get_WordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::NetworkedWeavedAttribute::_ctor(int32_t  wordOffset, int32_t  wordCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wordOffset, wordCount);
}
inline ::Fusion::NetworkedWeavedAttribute* Fusion::NetworkedWeavedAttribute::New_ctor(int32_t  wordOffset, int32_t  wordCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkedWeavedAttribute*>(wordOffset, wordCount));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkedWeavedAttribute::NetworkedWeavedAttribute()   {
}
