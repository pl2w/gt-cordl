#pragma once
// IWYU pragma private; include "Fusion/NetworkStructWeavedAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__NetworkStructWeavedAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkStructWeavedAttribute.get_WordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkStructWeavedAttribute::*)()>(&::Fusion::NetworkStructWeavedAttribute::get_WordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f702c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkStructWeavedAttribute*>(),
                        {"get_WordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkStructWeavedAttribute.get_IsGenericComposite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkStructWeavedAttribute::*)()>(&::Fusion::NetworkStructWeavedAttribute::get_IsGenericComposite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f702c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkStructWeavedAttribute*>(),
                        {"get_IsGenericComposite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkStructWeavedAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkStructWeavedAttribute::*)(int32_t)>(&::Fusion::NetworkStructWeavedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f702d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkStructWeavedAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkStructWeavedAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkStructWeavedAttribute::*)(int32_t, bool)>(&::Fusion::NetworkStructWeavedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f702f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkStructWeavedAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkStructWeavedAttribute::__cordl_internal_get__WordCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordCount_k__BackingField;
}
constexpr int32_t const& Fusion::NetworkStructWeavedAttribute::__cordl_internal_get__WordCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WordCount_k__BackingField;
}
constexpr void Fusion::NetworkStructWeavedAttribute::__cordl_internal_set__WordCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WordCount_k__BackingField = value;
}
constexpr bool& Fusion::NetworkStructWeavedAttribute::__cordl_internal_get__IsGenericComposite_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsGenericComposite_k__BackingField;
}
constexpr bool const& Fusion::NetworkStructWeavedAttribute::__cordl_internal_get__IsGenericComposite_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsGenericComposite_k__BackingField;
}
constexpr void Fusion::NetworkStructWeavedAttribute::__cordl_internal_set__IsGenericComposite_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsGenericComposite_k__BackingField = value;
}
inline int32_t Fusion::NetworkStructWeavedAttribute::get_WordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkStructWeavedAttribute*>(),
                        {"get_WordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Fusion::NetworkStructWeavedAttribute::get_IsGenericComposite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkStructWeavedAttribute*>(),
                        {"get_IsGenericComposite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkStructWeavedAttribute::_ctor(int32_t  wordCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkStructWeavedAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wordCount);
}
inline void Fusion::NetworkStructWeavedAttribute::_ctor(int32_t  wordCount, bool  isGenericComposite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkStructWeavedAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wordCount, isGenericComposite);
}
inline ::Fusion::NetworkStructWeavedAttribute* Fusion::NetworkStructWeavedAttribute::New_ctor(int32_t  wordCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkStructWeavedAttribute*>(wordCount));
}
inline ::Fusion::NetworkStructWeavedAttribute* Fusion::NetworkStructWeavedAttribute::New_ctor(int32_t  wordCount, bool  isGenericComposite)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkStructWeavedAttribute*>(wordCount, isGenericComposite));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkStructWeavedAttribute::NetworkStructWeavedAttribute()   {
}
