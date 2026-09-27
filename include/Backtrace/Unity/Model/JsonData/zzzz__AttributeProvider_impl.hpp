#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/JsonData/AttributeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__AttributeProvider_def.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__IDynamicAttributeProvider_def.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__IScopeAttributeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::AttributeProvider.get_ApplicationVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::JsonData::AttributeProvider::*)()>(&::Backtrace::Unity::Model::JsonData::AttributeProvider::get_ApplicationVersion)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f193e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"get_ApplicationVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::AttributeProvider.get_ApplicationSessionKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::JsonData::AttributeProvider::*)()>(&::Backtrace::Unity::Model::JsonData::AttributeProvider::get_ApplicationSessionKey)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f194d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"get_ApplicationSessionKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::AttributeProvider.get_ApplicationGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::JsonData::AttributeProvider::*)()>(&::Backtrace::Unity::Model::JsonData::AttributeProvider::get_ApplicationGuid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f195b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"get_ApplicationGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::AttributeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::AttributeProvider::*)()>(&::Backtrace::Unity::Model::JsonData::AttributeProvider::_ctor)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5f195f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::AttributeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::AttributeProvider::*)(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>*, ::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>*)>(&::Backtrace::Unity::Model::JsonData::AttributeProvider::_ctor)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5f19a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::AttributeProvider.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::JsonData::AttributeProvider::*)(::StringW)>(&::Backtrace::Unity::Model::JsonData::AttributeProvider::get_Item)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f19430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::AttributeProvider.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::AttributeProvider::*)(::StringW, ::StringW)>(&::Backtrace::Unity::Model::JsonData::AttributeProvider::set_Item)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f19ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::AttributeProvider.Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Model::JsonData::AttributeProvider::*)()>(&::Backtrace::Unity::Model::JsonData::AttributeProvider::Count)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f19f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::AttributeProvider.AddDynamicAttributeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::AttributeProvider::*)(::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*)>(&::Backtrace::Unity::Model::JsonData::AttributeProvider::AddDynamicAttributeProvider)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f1a004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"AddDynamicAttributeProvider", {}, {::i2c::type_of<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::AttributeProvider.AddScopedAttributeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::AttributeProvider::*)(::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*)>(&::Backtrace::Unity::Model::JsonData::AttributeProvider::AddScopedAttributeProvider)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f1a0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"AddScopedAttributeProvider", {}, {::i2c::type_of<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::AttributeProvider.AddAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::JsonData::AttributeProvider::*)(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*, bool)>(&::Backtrace::Unity::Model::JsonData::AttributeProvider::AddAttributes)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x5f1a170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"AddAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::JsonData::AttributeProvider.GenerateAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* (::Backtrace::Unity::Model::JsonData::AttributeProvider::*)(bool)>(&::Backtrace::Unity::Model::JsonData::AttributeProvider::GenerateAttributes)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f16d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"GenerateAttributes", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& Backtrace::Unity::Model::JsonData::AttributeProvider::__cordl_internal_get__attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributes;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& Backtrace::Unity::Model::JsonData::AttributeProvider::__cordl_internal_get__attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributes;
}
constexpr void Backtrace::Unity::Model::JsonData::AttributeProvider::__cordl_internal_set__attributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attributes = value;
}
constexpr ::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>*& Backtrace::Unity::Model::JsonData::AttributeProvider::__cordl_internal_get__dynamicAttributeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicAttributeProvider;
}
constexpr ::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>* const& Backtrace::Unity::Model::JsonData::AttributeProvider::__cordl_internal_get__dynamicAttributeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicAttributeProvider;
}
constexpr void Backtrace::Unity::Model::JsonData::AttributeProvider::__cordl_internal_set__dynamicAttributeProvider(::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dynamicAttributeProvider = value;
}
inline ::StringW Backtrace::Unity::Model::JsonData::AttributeProvider::get_ApplicationVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"get_ApplicationVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::JsonData::AttributeProvider::get_ApplicationSessionKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"get_ApplicationSessionKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::JsonData::AttributeProvider::get_ApplicationGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"get_ApplicationGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::JsonData::AttributeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::JsonData::AttributeProvider::_ctor(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>*  scopeAttributeProvider, ::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>*  dynamicAttributeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scopeAttributeProvider, dynamicAttributeProvider);
}
inline ::StringW Backtrace::Unity::Model::JsonData::AttributeProvider::get_Item(::StringW  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void Backtrace::Unity::Model::JsonData::AttributeProvider::set_Item(::StringW  index, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline int32_t Backtrace::Unity::Model::JsonData::AttributeProvider::Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::JsonData::AttributeProvider::AddDynamicAttributeProvider(::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*  attributeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"AddDynamicAttributeProvider", {}, {::i2c::type_of<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeProvider);
}
inline void Backtrace::Unity::Model::JsonData::AttributeProvider::AddScopedAttributeProvider(::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*  attributeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"AddScopedAttributeProvider", {}, {::i2c::type_of<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeProvider);
}
inline void Backtrace::Unity::Model::JsonData::AttributeProvider::AddAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  source, bool  includeDynamic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"AddAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, includeDynamic);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* Backtrace::Unity::Model::JsonData::AttributeProvider::GenerateAttributes(bool  includeDynamic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(),
                        {"GenerateAttributes", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>(this, ___internal_method, includeDynamic);
}
inline ::Backtrace::Unity::Model::JsonData::AttributeProvider* Backtrace::Unity::Model::JsonData::AttributeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::JsonData::AttributeProvider*>());
}
inline ::Backtrace::Unity::Model::JsonData::AttributeProvider* Backtrace::Unity::Model::JsonData::AttributeProvider::New_ctor(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>*  scopeAttributeProvider, ::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>*  dynamicAttributeProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(scopeAttributeProvider, dynamicAttributeProvider));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider::AttributeProvider()   {
}
