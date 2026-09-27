#pragma once
// IWYU pragma private; include "Fusion/NetworkedWeavedLinkedListAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__NetworkedWeavedLinkedListAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkedWeavedLinkedListAttribute.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkedWeavedLinkedListAttribute::*)()>(&::Fusion::NetworkedWeavedLinkedListAttribute::get_Capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa0d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedLinkedListAttribute*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkedWeavedLinkedListAttribute.get_ElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkedWeavedLinkedListAttribute::*)()>(&::Fusion::NetworkedWeavedLinkedListAttribute::get_ElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa0d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedLinkedListAttribute*>(),
                        {"get_ElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkedWeavedLinkedListAttribute.get_ElementReaderWriterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::NetworkedWeavedLinkedListAttribute::*)()>(&::Fusion::NetworkedWeavedLinkedListAttribute::get_ElementReaderWriterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa0d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedLinkedListAttribute*>(),
                        {"get_ElementReaderWriterType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkedWeavedLinkedListAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkedWeavedLinkedListAttribute::*)(int32_t, int32_t, ::System::Type*)>(&::Fusion::NetworkedWeavedLinkedListAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fa0da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedLinkedListAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkedWeavedLinkedListAttribute::__cordl_internal_get__Capacity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capacity_k__BackingField;
}
constexpr int32_t const& Fusion::NetworkedWeavedLinkedListAttribute::__cordl_internal_get__Capacity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capacity_k__BackingField;
}
constexpr void Fusion::NetworkedWeavedLinkedListAttribute::__cordl_internal_set__Capacity_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Capacity_k__BackingField = value;
}
constexpr int32_t& Fusion::NetworkedWeavedLinkedListAttribute::__cordl_internal_get__ElementWordCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ElementWordCount_k__BackingField;
}
constexpr int32_t const& Fusion::NetworkedWeavedLinkedListAttribute::__cordl_internal_get__ElementWordCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ElementWordCount_k__BackingField;
}
constexpr void Fusion::NetworkedWeavedLinkedListAttribute::__cordl_internal_set__ElementWordCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ElementWordCount_k__BackingField = value;
}
constexpr ::System::Type*& Fusion::NetworkedWeavedLinkedListAttribute::__cordl_internal_get__ElementReaderWriterType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ElementReaderWriterType_k__BackingField;
}
constexpr ::System::Type* const& Fusion::NetworkedWeavedLinkedListAttribute::__cordl_internal_get__ElementReaderWriterType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ElementReaderWriterType_k__BackingField;
}
constexpr void Fusion::NetworkedWeavedLinkedListAttribute::__cordl_internal_set__ElementReaderWriterType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ElementReaderWriterType_k__BackingField = value;
}
inline int32_t Fusion::NetworkedWeavedLinkedListAttribute::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedLinkedListAttribute*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::NetworkedWeavedLinkedListAttribute::get_ElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedLinkedListAttribute*>(),
                        {"get_ElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Type* Fusion::NetworkedWeavedLinkedListAttribute::get_ElementReaderWriterType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedLinkedListAttribute*>(),
                        {"get_ElementReaderWriterType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Fusion::NetworkedWeavedLinkedListAttribute::_ctor(int32_t  capacity, int32_t  elementWordCount, ::System::Type*  elementReaderWriterType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedLinkedListAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, elementWordCount, elementReaderWriterType);
}
inline ::Fusion::NetworkedWeavedLinkedListAttribute* Fusion::NetworkedWeavedLinkedListAttribute::New_ctor(int32_t  capacity, int32_t  elementWordCount, ::System::Type*  elementReaderWriterType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkedWeavedLinkedListAttribute*>(capacity, elementWordCount, elementReaderWriterType));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkedWeavedLinkedListAttribute::NetworkedWeavedLinkedListAttribute()   {
}
