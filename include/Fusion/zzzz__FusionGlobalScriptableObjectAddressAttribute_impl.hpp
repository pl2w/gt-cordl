#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObjectAddressAttribute.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectSourceAttribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectAddressAttribute_def.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectAddressAttribute_def.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectLoadResult_def.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObject_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectAddressAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectAddressAttribute::*)(::System::Type*, ::StringW)>(&::Fusion::FusionGlobalScriptableObjectAddressAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60e031c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAddressAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectAddressAttribute.get_Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::FusionGlobalScriptableObjectAddressAttribute::*)()>(&::Fusion::FusionGlobalScriptableObjectAddressAttribute::get_Address)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e034c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAddressAttribute*>(),
                        {"get_Address", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectAddressAttribute.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::FusionGlobalScriptableObjectLoadResult (::Fusion::FusionGlobalScriptableObjectAddressAttribute::*)(::System::Type*)>(&::Fusion::FusionGlobalScriptableObjectAddressAttribute::Load)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x60e0354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAddressAttribute*>(),
                    {::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAddressAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::FusionGlobalScriptableObjectAddressAttribute::__cordl_internal_get__Address_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Address_k__BackingField;
}
constexpr ::StringW const& Fusion::FusionGlobalScriptableObjectAddressAttribute::__cordl_internal_get__Address_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Address_k__BackingField;
}
constexpr void Fusion::FusionGlobalScriptableObjectAddressAttribute::__cordl_internal_set__Address_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Address_k__BackingField = value;
}
inline void Fusion::FusionGlobalScriptableObjectAddressAttribute::_ctor(::System::Type*  objectType, ::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAddressAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectType, address);
}
inline ::StringW Fusion::FusionGlobalScriptableObjectAddressAttribute::get_Address()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAddressAttribute*>(),
                        {"get_Address", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::FusionGlobalScriptableObjectLoadResult Fusion::FusionGlobalScriptableObjectAddressAttribute::Load(::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAddressAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::FusionGlobalScriptableObjectLoadResult>(this, ___internal_method, type);
}
inline ::Fusion::FusionGlobalScriptableObjectAddressAttribute* Fusion::FusionGlobalScriptableObjectAddressAttribute::New_ctor(::System::Type*  objectType, ::StringW  address)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionGlobalScriptableObjectAddressAttribute*>(objectType, address));
}
// Ctor Parameters []
constexpr ::Fusion::FusionGlobalScriptableObjectAddressAttribute::FusionGlobalScriptableObjectAddressAttribute()   {
}
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0::*)()>(&::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e04dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0._Load_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0::*)(::Fusion::FusionGlobalScriptableObject*)>(&::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0::_Load_b__0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60e04e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0*>(),
                        {"<Load>b__0", {}, {::i2c::type_of<::Fusion::FusionGlobalScriptableObject*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::Fusion::FusionGlobalScriptableObject>>& Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0::__cordl_internal_get_op()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___op;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::Fusion::FusionGlobalScriptableObject>> const& Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0::__cordl_internal_get_op() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___op;
}
constexpr void Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0::__cordl_internal_set_op(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::Fusion::FusionGlobalScriptableObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___op = value;
}
inline void Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0::_Load_b__0(::Fusion::FusionGlobalScriptableObject*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0*>(),
                        {"<Load>b__0", {}, {::i2c::type_of<::Fusion::FusionGlobalScriptableObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0* Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0::FusionGlobalScriptableObjectAddressAttribute___c__DisplayClass4_0()   {
}
