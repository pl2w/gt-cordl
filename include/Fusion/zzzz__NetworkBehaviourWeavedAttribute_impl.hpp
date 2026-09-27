#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviourWeavedAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviourWeavedAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkBehaviourWeavedAttribute.get_WordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBehaviourWeavedAttribute::*)()>(&::Fusion::NetworkBehaviourWeavedAttribute::get_WordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourWeavedAttribute*>(),
                        {"get_WordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourWeavedAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviourWeavedAttribute::*)(int32_t)>(&::Fusion::NetworkBehaviourWeavedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f7006c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourWeavedAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkBehaviourWeavedAttribute::__cordl_internal_get__WordCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordCount_k__BackingField;
}
constexpr int32_t const& Fusion::NetworkBehaviourWeavedAttribute::__cordl_internal_get__WordCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordCount_k__BackingField;
}
constexpr void Fusion::NetworkBehaviourWeavedAttribute::__cordl_internal_set__WordCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WordCount_k__BackingField = value;
}
inline int32_t Fusion::NetworkBehaviourWeavedAttribute::get_WordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourWeavedAttribute*>(),
                        {"get_WordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::NetworkBehaviourWeavedAttribute::_ctor(int32_t  wordCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourWeavedAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wordCount);
}
inline ::Fusion::NetworkBehaviourWeavedAttribute* Fusion::NetworkBehaviourWeavedAttribute::New_ctor(int32_t  wordCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkBehaviourWeavedAttribute*>(wordCount));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkBehaviourWeavedAttribute::NetworkBehaviourWeavedAttribute()   {
}
