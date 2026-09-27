#pragma once
// IWYU pragma private; include "Fusion/NetworkedWeavedArrayAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__NetworkedWeavedArrayAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkedWeavedArrayAttribute.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkedWeavedArrayAttribute::*)()>(&::Fusion::NetworkedWeavedArrayAttribute::get_Capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa0894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedArrayAttribute*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkedWeavedArrayAttribute.get_ElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkedWeavedArrayAttribute::*)()>(&::Fusion::NetworkedWeavedArrayAttribute::get_ElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa089c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedArrayAttribute*>(),
                        {"get_ElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkedWeavedArrayAttribute.get_ElementReaderWriterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::NetworkedWeavedArrayAttribute::*)()>(&::Fusion::NetworkedWeavedArrayAttribute::get_ElementReaderWriterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa08a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedArrayAttribute*>(),
                        {"get_ElementReaderWriterType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkedWeavedArrayAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkedWeavedArrayAttribute::*)(int32_t, int32_t, ::System::Type*)>(&::Fusion::NetworkedWeavedArrayAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fa08ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedArrayAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkedWeavedArrayAttribute::__cordl_internal_get__Capacity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capacity_k__BackingField;
}
constexpr int32_t const& Fusion::NetworkedWeavedArrayAttribute::__cordl_internal_get__Capacity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capacity_k__BackingField;
}
constexpr void Fusion::NetworkedWeavedArrayAttribute::__cordl_internal_set__Capacity_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Capacity_k__BackingField = value;
}
constexpr int32_t& Fusion::NetworkedWeavedArrayAttribute::__cordl_internal_get__ElementWordCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ElementWordCount_k__BackingField;
}
constexpr int32_t const& Fusion::NetworkedWeavedArrayAttribute::__cordl_internal_get__ElementWordCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ElementWordCount_k__BackingField;
}
constexpr void Fusion::NetworkedWeavedArrayAttribute::__cordl_internal_set__ElementWordCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ElementWordCount_k__BackingField = value;
}
constexpr ::System::Type*& Fusion::NetworkedWeavedArrayAttribute::__cordl_internal_get__ElementReaderWriterType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ElementReaderWriterType_k__BackingField;
}
constexpr ::System::Type* const& Fusion::NetworkedWeavedArrayAttribute::__cordl_internal_get__ElementReaderWriterType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ElementReaderWriterType_k__BackingField;
}
constexpr void Fusion::NetworkedWeavedArrayAttribute::__cordl_internal_set__ElementReaderWriterType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ElementReaderWriterType_k__BackingField = value;
}
inline int32_t Fusion::NetworkedWeavedArrayAttribute::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedArrayAttribute*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::NetworkedWeavedArrayAttribute::get_ElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedArrayAttribute*>(),
                        {"get_ElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Type* Fusion::NetworkedWeavedArrayAttribute::get_ElementReaderWriterType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedArrayAttribute*>(),
                        {"get_ElementReaderWriterType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Fusion::NetworkedWeavedArrayAttribute::_ctor(int32_t  capacity, int32_t  elementWordCount, ::System::Type*  elementReaderWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkedWeavedArrayAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, elementWordCount, elementReaderWriter);
}
inline ::Fusion::NetworkedWeavedArrayAttribute* Fusion::NetworkedWeavedArrayAttribute::New_ctor(int32_t  capacity, int32_t  elementWordCount, ::System::Type*  elementReaderWriter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkedWeavedArrayAttribute*>(capacity, elementWordCount, elementReaderWriter));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkedWeavedArrayAttribute::NetworkedWeavedArrayAttribute()   {
}
